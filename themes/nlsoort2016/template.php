<?php
/**
 * @file
 * This file contains all template related functionality.
 */

/**
 * Implements hook_preprocess_html().
 */
function nlsoort2016_preprocess_html(&$vars) {

  // Append external css for ionicons.
  drupal_add_css('//code.ionicframework.com/ionicons/2.0.1/css/ionicons.min.css', array(
    'type'  => 'external',
    'group' => CSS_DEFAULT,
  ));
}

/**
 * Implements theme_preprocess_block().
 */
function nlsoort2016_preprocess_block(&$vars) {

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
      }
      else {
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
 */
function nlsoort2016_preprocess_page(&$variables) {

  // Merge tabs into content area.
  if (!empty($variables['tabs'])) {
    $variables['page']['content']['system_main'] = array_merge(array('tabs' => $variables['tabs']), $variables['page']['content']['system_main']);
  }

  // Merge field_news_caption and field_news_photographer so they can be outputted on one line
  if (!empty($variables['node'])) {
    $node = $variables['node'];
    $photographer = "";
    $prefix = " / ";
    // dsm($variables['page']['content']['system_main']['nodes'][$node->nid]);
    if (!empty($variables['page']['content']['system_main']['nodes'][$node->nid]['field_news_photographer'])) {
	    $photographer = "Foto: " . $variables['page']['content']['system_main']['nodes'][$node->nid]['field_news_photographer'][0]['#markup'];
    }
    if (!array_key_exists("field_news_caption", $variables['page']['content']['system_main']['nodes'][$node->nid])) {
	    $variables['page']['content']['system_main']['nodes'][$node->nid]['field_news_caption'][0] = array('#markup' => "");
	    $prefix = "";
    }
    $variables['page']['content']['system_main']['nodes'][$node->nid]['field_news_caption'][0]['#markup'] .= $prefix . $photographer;
  }
}

/**
 * Implements theme_form_FORM_ID_alter().
 */
/*
function nlsoort2016_form_search_block_form_alter(&$form, &$form_state, $form_id) {
  // Unset the title
  unset($form['search_block_form']['#attributes']['title']);

  // Check if we're on te frontpage.
  if (!drupal_is_front_page()) {
    $form['search_block_form']['#prefix'] = '<div class="input">';
    $form['search_block_form']['#suffix'] = '</div>';

    // Add class for search button.
    $form['actions']['submit']['#attributes']['class'] = array('moreSearchOptions');
  }
  else {

    // Add placeholder text.
    $form['search_block_form']['#attributes']['placeholder'] = t('Snel zoeken op soort/taxon...');

    // Add autofocus to search form
    // $form['search_block_form']['#attributes']['autofocus'] = t('autofocus');

    // Add class for search button.
    $form['actions']['submit']['#attributes']['class'] = array('searchButton');
  }

  // Remove theme callback.
  unset($form['#theme']);

  // Add button text.
  $form['actions']['submit']['#value'] = t('Meer zoekopties');

  $form['#action'] = 'http://www.nederlandsesoorten.nl/linnaeus_ng/rewrite.php';
  $form['#method'] = 'get';


}
*/

/**
 * Preprocess variables for region.tpl.php
 *
 * Prepares the values passed to the theme_region function to be passed into a
 * pluggable template engine. Uses the region name to generate a template file
 * suggestions. If none are found, the default region.tpl.php is used.
 *
 * @see drupal_region_class()
 * @see region.tpl.php
 */
function nlsoort2016_preprocess_region(&$variables) {

  // Only process the regions for pages after the front page.
  if (isset($variables['is_front']) && !$variables['is_front']) {

    // Switch on region.
    switch ($variables['region']) {

      case 'left_sidebar':
        $variables['classes_array'] = array('region-left-sidebar');
        break;

      case 'content':
        // This is the default class for all pages except the overview.
        //$variables['classes_array'] = array('whitebox');

        // Fetch the menu item for checks.
        $menu_item = menu_get_item();

        // Check if we're on the news overview page.
        if (!empty($menu_item['path']) && $menu_item['path'] == 'nieuws' && $menu_item['page_callback'] == 'views_page') {
          $variables['classes_array'] = array('newsContainer');
        }
        break;
    }
  }
}

/**
 * Implements theme_block_view_alter().
 */
function nlsoort2016_block_view_alter(&$data, $block) {

  // Alter the theme wrapper to make the old admin menu usable in the new theme.
  if ($block->delta == 'menu-editor-menu') {

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

/**
 * Custom theme wrapper for the editor menu.
 *
 * @param array $variables
 *   An array containing the menu.
 *
 * @return string
 *  Returns the full html.
 */
function nlsoort2016_menu_tree__editor_menu(&$variables) {
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
function nlsoort2016_menu_tree__main_menu_2(&$variables) {
  return '<ul class="sideMenu">' . $variables['tree'] . '</ul>';
}
