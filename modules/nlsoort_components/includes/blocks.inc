<?php
/**
 * @file
 * This file contains all block processing for the nl soort theme.
 */

/**
 * Function for fetching and processing the main menu into usable data.
 */
function nlsoort_components_block_mainmenu() {
  $tree = menu_tree_all_data('main-menu');

  // Process the menu for output.
  return _nlsoort_components_process_menu($tree);
}

/**
 * Function to fetch and render the side menu.
 *
 * @return string
 *   Returns a either rendered html or FALSE.
 */
function nlsoort_components_block_sidemenu() {
  $menu_tree = menu_tree('main-menu');
  $active_trail = menu_get_active_trail();

  // Check if we have an active menu link id.
  if (!empty($active_trail[1]['mlid'])) {
    $active_trail_mlid = $active_trail[1]['mlid'];

    // Check if the menu item is set.
    if (array_key_exists($active_trail_mlid, $menu_tree)) {

      // Check if the menu is not empty.
      if (!empty($menu_tree[$active_trail_mlid]['#below'])) {

        // Alter the theme wrapper and render.
        $menu = $menu_tree[$active_trail_mlid]['#below'];
        $menu['#theme_wrappers'] = array('menu_tree__main_menu_2');
        return drupal_render($menu);
      }
    }
  }

  return '';
}

/**
 * Function to fetch the header content for rendering.
 */
function nlsoort_components_block_header() {

  // Initialize array for output.
  $block_data = array();

  // Query random dia.
  $random_dia = db_select('node', 'n')
    ->fields('n', array('nid'))
    ->condition('type', 'dia', '=')
    ->orderRandom();

  // Order random to allow for different header images.
  $node_id = $random_dia->execute()->fetchField();

  // Check if we have a node id.
  if (!empty($node_id)) {

    // Load the node.
    $node = node_load($node_id);

    // Load the images.
    $images = field_get_items('node', $node, 'field_shared_image');

    // Check if we have any images.
    if (!empty($images)) {

      // Loop through items.
      foreach ($images as $image) {

        // Get field output.
        $output = field_view_value('node', $node, 'field_shared_image', $image, array(
          'type'     => 'image',
          'settings' => array(
            'image_style' => '2880x1000',
          ),
        ));

        // Add the rendered image to the output array.
        $block_data['images'][] = drupal_render($output);
      }
    }

    // Load the vernacular name.
    $field_data = field_get_items('node', $node, 'field_nom_vernaculum');
    $vernacular_name = field_view_value('node', $node, 'field_nom_vernaculum', $field_data[0]);

    // Load the photographer.
    $field_data = field_get_items('node', $node, 'field_shared_photographer');
    $photographer = field_view_value('node', $node, 'field_shared_photographer', $field_data[0]);

    // Add node title to block data.
    $block_data['scientific_name'] = $node->title;
    $block_data['vernacular_name'] = drupal_render($vernacular_name);

    if (count($images) > 1) {
      $foto_label = "Foto's";
    } else {
      $foto_label = "Foto";
    }

    if ($photographer) {
        $block_data['photographer'] = t($foto_label . ': !author', array('!author' => drupal_render($photographer)));
    }
    $block_data['path_to_assets'] = nlsoort_components_path_to_assets();
  }

  // Return data for theming.
  return $block_data;
}

/**
 * Callback method for the footer block.
 * @return string
 */
function nlsoort_components_block_footer() {
  $links = $columns = array();

  // Loop through the columns.
  for ($i = 0; $i < NLSOORT_COMPONENTS_FOOTER_COLUMNS; $i++) {

    // Get the amount of links generated.
    $count = variable_get('footer_links_' . $i . '_count', 1);

    // Fetch each link and add to the column list.
    for ($link_count = 0; $link_count < $count; $link_count++) {

      $link_data = variable_get('footer_links_' . $i . '_link_' . $link_count, array());
      $columns[$i][] = '<a target="_blank" rel="external" href="' . url($link_data['nlsoort_components_links']['path']) . '">' . $link_data['nlsoort_components_links']['title'] . '</a>';
    }
  }

  // Add columns to links.
  $links['columns'] = $columns;

  // Foreach sitemap link check if it was changed if so save it.
  for ($i = 0; $i < NLSOORT_COMPONENTS_FOOTER_SITEMAP_LINKS; $i++) {
    $link_data = variable_get('footer_links_sitemap_' . $i . '_link', array());
    $links['sitemap'][] = '<a href="' . url($link_data['nlsoort_components_links']['path']) . '">' . $link_data['nlsoort_components_links']['title'] . '</a>';
  }

  // Fetch the colofon link.
  $link_data = variable_get('footer_links_colofon', array());
  $links['colofon'][] = '<a class="blue" href="' . url($link_data['nlsoort_components_links']['path']) . '">' . $link_data['nlsoort_components_links']['title'] . '</a>';

  // Add path to assets.
  $links['path_to_assets'] = nlsoort_components_path_to_assets();

  // Render the footer.
  return theme('nlsoort_components_footer', $links);
}
