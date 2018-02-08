<?php
/**
 * @file
 * This file contains all template related functionality.
 */

/**
 * Implements hook_preprocess_html().
 * @param $vars
 */
function caribspec2018_preprocess_html(&$vars)
{

    // Append external css for ionicons.
    drupal_add_css(theme_get_setting('iconic_icons'), array(
        'type' => 'external',
        'group' => CSS_DEFAULT,
    ));
    if (isset($vars) && !empty($vars['user'])) {
        foreach ($vars['user']->roles as $role) {
            $vars['classes_array'][] = 'role-' . drupal_html_class($role);
        }
    }
}

/**
 * Implements theme_preprocess_block().
 * @param $vars
 * @throws Exception
 */
function caribspec2018_preprocess_block(&$vars)
{

    // In the header region visually hide block titles.
    //if ($variables['block']->region == 'header') {
    //    $variables['title_attributes_array']['class'][] = 'element-invisible';
    //}
    // Add the path to the assets folder for each block.
    $vars['path_to_assets'] = nlsoort_components_path_to_assets();

    // Switch on block id.
    switch ($vars['block_html_id']) {

        // The main menu block.
        case 'block-nlsoort-components-nlsoort-components-main-menu':

            // Add the body class from the new theme.
            $vars['classes_array'][] = 'menuHolder';
            break;

        case 'block-nlsoort-components-nlsoort-components-header':
            $vars['classes_array'][] = 'header';
            break;

        case 'block-search-form':
            $vars['classes_array'][] = 'searchBlock';
            break;

        case 'block-nlsoort-components-nlsoort-components-picture':
            $vars['classes_array'][] = 'sendInPhoto';

            // Fetch the fid from the image.
            $image_id = variable_get('nlsoort_components_picture_image');

            // Check if an image was set.
            if (!empty($image_id)) {

                // Load the image.
                $image = file_load($image_id);
                $vars['image'] = theme('image', array('path' => $image->uri));
            } else {
                $vars['image'] = theme('image', array('path' => $vars['path_to_assets'] . '/img/soortzoekers.jpg'));
            }

            // Get the link to the path.
            $link = variable_get('nlsoort_components_picture_link');
            $vars['link'] = l(t('Gebruik onze soortzoekers'), $link, array('attributes' => array('class' => array('more'))));
            break;

        case 'block-nlsoort-components-nlsoort-components-footer':
            $vars['classes_array'][] = 'footerContainer';
            break;

        case 'block-nlsoort-components-nlsoort-components-submenu':
        case 'block-views-news-jaargangen':
        case 'block-menu-menu-editor-menu':
            $vars['classes_array'][] = 'addon';
            break;

        default:
            break;
    }
}

/**
 * Implements theme_preprocess_page().
 * @param $vars
 */
function caribspec2018_preprocess_page(&$vars)
{

    if (isset($vars['user'])) {
        foreach ($vars['user']->roles as $key => $role) {
            $vars['class'][] = 'role-' . drupal_html_class($role);
        }
    }
    // Merge tabs into content area.
    if (!empty($vars['tabs'])) {
        $vars['page']['content']['system_main'] = array_merge(array('tabs' => $vars['tabs']), $vars['page']['content']['system_main']);
    }
    $vars['logo'] = theme_get_setting('naturalis_logo');
    $vars['search_url'] = theme_get_setting('linnaeus_search');

    // Merge field_news_caption and field_news_photographer so they can be outputted on one line
    if (!empty($vars['node'])) {
        $node = $vars['node'];
        $photographer = '';
        $prefix = ' / ';
        if (!empty($vars['page']['content']['system_main']['nodes'][$node->nid]['field_news_photographer'])) {
            $photographer = t("Foto: ") . $vars['page']['content']['system_main']['nodes'][$node->nid]['field_news_photographer'][0]['#markup'];
        }
        if (!array_key_exists("field_news_caption", $vars['page']['content']['system_main']['nodes'][$node->nid])) {
            $vars['page']['content']['system_main']['nodes'][$node->nid]['field_news_caption'][0] = array('#markup' => "");
            $prefix = '';
        }
        $vars['page']['content']['system_main']['nodes'][$node->nid]['field_news_caption'][0]['#markup'] .= $prefix . $photographer;
    }
}

/**
 * Preprocess variables for region.tpl.php
 *
 * Prepares the values passed to the theme_region function to be passed into a
 * pluggable template engine. Uses the region name to generate a template file
 * suggestions. If none are found, the default region.tpl.php is used.
 *
 * @see drupal_region_class()
 * @see region.tpl.php
 * @param $vars
 */
function caribspec2018_preprocess_region(&$vars)
{

    // Only process the regions for pages after the front page.
    if (isset($vars['is_front']) && !$vars['is_front']) {

        // Switch on region.
        switch ($vars['region']) {

            case 'left_sidebar':
                $vars['classes_array'] = array('region-left-sidebar');
                break;

            case 'content':
                // This is the default class for all pages except the overview.
                //$variables['classes_array'] = array('whitebox');

                // Fetch the menu item for checks.
                $menu_item = menu_get_item();

                // Check if we're on the news overview page.
                if (!empty($menu_item['path']) && $menu_item['path'] === 'nieuws' && $menu_item['page_callback'] === 'views_page') {
                    $vars['classes_array'] = array('newsContainer');
                }
                break;
        }
    }
}

/**
 * Implements theme_block_view_alter().
 * @param $data
 * @param $block
 */
function caribspec2018_block_view_alter(&$data, $block)
{

    // Alter the theme wrapper to make the old admin menu usable in the new theme.
    if ($block->delta === 'menu-editor-menu') {

        // Fetch first key.
        $key = key($data['content']);
        if (is_numeric($key) && !empty($data['content'][$key]['#below'])) {
            $menu = $data['content'][$key]['#below'];
            $menu['#contextual_links'] = $data['content']['#contextual_links'];
            $menu['#sorted'] = TRUE;
            $data['content'] = $menu;
            $data['content']['#theme_wrappers'] = array('menu_tree__editor_menu');
        }
    }
}

function caribspec2018_form_alter(&$form, &$form_state, $form_id)
{
    if ($form_id === 'beelduitwisselaar_node_form') {

        // Disable it, if already enabled.
        $javascript = &drupal_static('drupal_add_js', array());
        unset($javascript['misc/tabledrag.js']);

        // Prevent it from being enabled later.
        $tabledrag_added = &drupal_static('drupal_add_tabledrag');
        $tabledrag_added = TRUE;
    }
}

/**
 * Custom theme wrapper for the editor menu.
 *
 * @param array $variables
 *   An array containing the menu.
 *
 * @return string
 *  Returns the full html.
 */
function caribspec2018_menu_tree__editor_menu(&$variables)
{
    return '<ul class="sideMenu">' . $variables['tree'] . '</ul>';
}

/**
 * Custom theme wrapper for the side menu.
 *
 * @param array $variables
 *   An array containing the menu.
 *
 * @return string
 *  Returns the full html.
 */
function caribspec2018_menu_tree__main_menu_2(&$variables)
{
    return '<ul class="sideMenu">' . $variables['tree'] . '</ul>';
}

/**
 * Override or insert variables into the node template.
 *
 * @param array $variables
 */
function caribspec2018_preprocess_node(&$variables)
{
    if ($variables['view_mode'] === 'full' && node_is_page($variables['node'])) {
        $variables['classes_array'][] = 'node-full';
    }

    $variables['submitted'] = t('@date', array('@date' => date("j F Y", $variables['created']))) . " - " . $variables['name'];

}


/**
 * Implements theme_menu_tree().
 * @param $variables
 * @return string
 */
function caribspec2018_menu_tree($variables)
{
    return '<ul class="menu clearfix">' . $variables['tree'] . '</ul>';
}

/**
 * Implements theme_field__field_type().
 * @param $variables
 * @return string
 */
function caribspec2018_field__taxonomy_term_reference($variables)
{
    $output = '';

    // Render the label, if it's not hidden.
    if (!$variables['label_hidden']) {
        $output .= '<h3 class="field-label">' . $variables['label'] . ': </h3>';
    }

    // Render the items.
    $output .= ($variables['element']['#label_display'] === 'inline') ? '<ul class="links inline">' : '<ul class="links">';
    foreach ($variables['items'] as $delta => $item) {
        $output .= '<li class="taxonomy-term-reference-' . $delta . '"' . $variables['item_attributes'][$delta] . '>' . drupal_render($item) . '</li>';
    }
    $output .= '</ul>';

    // Render the top-level DIV.
    $output = '<div class="' . $variables['classes'] . (!in_array('clearfix', $variables['classes_array']) ? ' clearfix' : '') . '"' . $variables['attributes'] . '>' . $output . '</div>';

    return $output;
}

/**
 * Remove the possibility to sort for field_afbeeldingen only
 * @param $variables
 * @return string
 */
function caribspec2018_image_widget($variables)
{

    $element = $variables['element'];

    /** @var string $output */
    $output = '';
    $output .= '<div class="image-widget form-managed-file clearfix">';

    if (isset($element['preview'])) {
        $output .= '<div class="image-preview test">';
        $output .= "  <a href='" . file_create_url($element['#file']->uri) . "' class='colorbox' rel=''>";
        $output .= drupal_render($element['preview']);
        $output .= "  </a>";
        $output .= '</div>';
    }

    $output .= '<div class="image-widget-data">';
    if ($element['fid']['#value'] != 0) {
        $element['filename']['#markup'] .= ' <span class="file-size">(' . format_size($element['#file']->filesize) . ')</span> ';
    }
    $output .= drupal_render_children($element);
    $output .= '</div>';
    $output .= '</div>';

    return $output;
}

/**
 * Implements theme_field_multiple_value_form()
 *
 * Remove the possibility to sort for field_afbeeldingen only
 * @param $variables
 * @return string
 * @throws Exception
 */
function caribspec2018_field_multiple_value_form($variables)
{
    $element = $variables['element'];

    $output = '';

    if ($element['#cardinality'] > 1 || $element['#cardinality'] == FIELD_CARDINALITY_UNLIMITED) {

        $table_id = drupal_html_id($element['#field_name'] . '_values');
        $order_class = $element['#field_name'] . '-delta-order';
        $required = !empty($element['#required']) ? theme('form_required_marker', $variables) : '';


        if ($element['#field_name'] === 'field_afbeeldingen') {

            $header = array(
                array(
                    'data' => '<label>' . t('!title !required', array('!title' => $element['#title'], '!required' => $required)) . '</label>',
                    'class' => array('field-label'),
                )
            );

        } else {

            $header = [[
                            'data' => '<label>' . t('!title !required', ['!title' => $element['#title'], '!required' => $required]) . "</label>",
                            'colspan' => 2,
                            'class' => ['field-label'],
                        ], t('Order'), ];
        }

        $rows = array();

        // Sort items according to '_weight' (needed when the form comes back after
        // preview or failed validation)
        $items = array();
        foreach (element_children($element) as $key) {
            if ($key === 'add_more') {
                $add_more_button = &$element[$key];
            } else {
                $items[] = &$element[$key];
            }
        }
        usort($items, '_field_sort_items_value_helper');

        // Add the items as table rows.
        foreach ($items as $key => $item) {
            $item['_weight']['#attributes']['class'] = array($order_class);
            $delta_element = drupal_render($item['_weight']);

            $cells = array();


            $cells[0] = array(
                'data' => '',
                'class' => array('field-multiple-drag'),
            );

            $cells[1] = drupal_render($item);

            $cells[2] = array(
                'data' => $delta_element,
                'class' => array('delta-order'),
            );

            // OVERRIDING THEMED OUTPUT OF FIELD TO PREVENT SORTING FUNCTIONALITY (weight)
            if ($element['#field_name'] === "field_afbeeldingen") {
                unset($cells[2]);
                unset($cells[0]);
            }

            $rows[] = array(
                'data' => $cells,
            );
        }

        $output = '<div class="form-item">';
        $output .= theme('table', array('header' => $header, 'rows' => $rows, 'attributes' => array('id' => $table_id, 'class' => array('field-multiple-table'))));
        $output .= $element['#description'] ? '<div class="description">' . $element['#description'] . '</div>' : '';
        $output .= '<div class="clearfix">' . drupal_render($add_more_button) . '</div>';
        $output .= '</div>';


        drupal_add_tabledrag($table_id, 'order', 'sibling', $order_class);
    } else {
        foreach (element_children($element) as $key) {
            $output .= drupal_render($element[$key]);
        }
    }


    return $output;
}

function beelduitwisselaar_counts()
{
    $counts = array();
    $counts['new'] = db_query('select count(*) from {field_data_field_status} where field_status_value = 0')->fetchField();
    $counts['queued'] = db_query('select count(*) from {field_data_field_status} where field_status_value = 1')->fetchField();
    $counts['validated'] = db_query('select count(*) from {field_data_field_status} where (field_status_value = 2) OR (field_status_value = 3)')->fetchField();
    $counts['waiting'] = db_query('select count(*) from {field_data_field_status} where (field_status_value = 4)')->fetchField();

    return $counts;
}

function beelduitwisselaar_validator_counts()
{
    global $user;

    $counts = array();
    $counts['queued'] = db_query('select count(*) from {field_data_field_beeldexpert} b, {field_data_field_status} s where b.entity_id = s.entity_id AND  b.field_beeldexpert_target_id = ' . $user->uid . " AND s.field_status_value = 1")->fetchField();
    $counts['validated'] = db_query('select count(*) from {field_data_field_beeldexpert} b, {field_data_field_status} s where b.entity_id = s.entity_id AND  b.field_beeldexpert_target_id = ' . $user->uid . " AND (s.field_status_value = 2) OR (s.field_status_value = 3)")->fetchField();

    return $counts;
}

