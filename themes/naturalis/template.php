<?php

/**
 * Implements template_preprocess_html().
 *
 */
//function naturalis_theme_preprocess_html(&$variables) {
//  // Add conditional CSS for IE. To use uncomment below and add IE css file
//  drupal_add_css(path_to_theme() . '/css/ie.css', array('weight' => CSS_THEME, 'browsers' => array('!IE' => FALSE), 'preprocess' => FALSE));
//
//  // Need legacy support for IE downgrade to Foundation 2 or use JS file below
//  // drupal_add_js('http://ie7-js.googlecode.com/svn/version/2.1(beta4)/IE7.js', 'external');
//}

/**
 * Implements template_preprocess_page
 *
 */
function naturalis_theme_preprocess_page(&$variables) {

  // MENU BAR

  // Add "HOME" icon before titel
  $icon = " <i class='icon-home'></i>";
  $variables['linked_site_name'] = l($icon.$variables['site_name'], '<front>', array(
        'html'  => TRUE,
        'attributes' => array(
          'rel'   => 'home',
          'title' =>  strip_tags($variables['site_name']) . ' ' . t('Home'),
        ),
      ));
	  
  // Show search button
  if ($variables['show_search'] = theme_get_setting('naturalis_theme_show_search')) {
    // Do something with the crubmle path
  };

  // BOTTOM BAR

  if ($variables['show_crumble'] = theme_get_setting('naturalis_theme_bottom_bar_crumble')) {
    // Do something with the crubmle path
  };
  if ($variables['show_copyright'] = theme_get_setting('naturalis_theme_bottom_bar_copyright')) {
    // Do something with the crubmle path
  };
  if ($variables['show_service_menu'] = theme_get_setting('naturalis_theme_bottom_bar_service_menu')) {
    // Do something with the crubmle path
  };
  if ($variables['show_links'] = theme_get_setting('naturalis_theme_bottom_bar_links')) {
    // Do something with the crubmle path
  };

  $variables['bottom_bar_top']    = $variables['show_crumble']   || $variables['show_links'];
  $variables['bottom_bar_bottom'] = $variables['show_copyright'] || $variables['show_service_menu'];

  // BOTTOM-BAR SERVICE MENU
  $menu = menu_navigation_links('menu-naturalis-service-menu');
  $variables['service_menu'] = theme('links__menu-naturalis-service-menue', array('links' => $menu));

  // BOTTOM-BAR SERVICE MENU
  $menu = menu_navigation_links('menu-naturalis-externe-links');
  $variables['external_links_menu'] = theme('links__menu-naturalis-externe-links', array('links' => $menu));

  // BREADCRUMBS
  if ( $variables['is_front'] == TRUE ) {
    $variables['breadcrumb'] = '<ul class="breadcrumbs"><li><a href="/">Home</a></li></ul>';
  }


  // NATURALIS HEADER
  
  // -- HEADER FOR EVERY PAGE
  $variables['header_everywhere'] = theme_get_setting('naturalis_headereverywhere');
  $variables['header_everywhere_logo'] = theme_get_setting('naturalis_headereverywhere_logo');
  $variables['header_everywhere_logolink'] = theme_get_setting('naturalis_headereverywhere_logolink');
  $variables['header_everywhere_title'] = theme_get_setting('naturalis_headereverywhere_title');
  $variables['header_everywhere_subtitle'] = theme_get_setting('naturalis_headereverywhere_subtitle');

  // -- USE BACKGROUND IMAGE
  $variables['header_use_image'] = theme_get_setting('naturalis_theme_use_background_image');

  // -- BACKGROUND IMAGE
  $variables['header_image'] = theme_get_setting('naturalis_theme_background_image');
  
  // -- BACKGROUND IMAGE TITLE
  $variables['header_image_title'] = theme_get_setting('naturalis_theme_background_image_title');
  
  // -- BACKGROUND COLOR
  $variables['header_background'] = 'background-' . theme_get_setting('naturalis_theme_background_color');

  // -- NATURALIS LOGO
  $color = theme_get_setting('naturalis_theme_logo_color');
  $variables['naturalis_logo'] = "/".drupal_get_path('theme', 'naturalis_theme') . "/images/naturalis/logo-large-$color.png";

  // -- SEARCH BUTTON
  $variables['naturalis_searchbutton'] = "/".drupal_get_path('theme', 'naturalis_theme') . "/images/search.svg";
  
  // -- LOGO BACKGROUND COLOR
  $variables['logo_background'] = 'background-' . theme_get_setting('naturalis_theme_logo_background_color');

  // LANGUAGE CHOICE
  $menu = menu_navigation_links('menu-naturalis-language-menu');
  $variables['language_menu'] = theme('links__menu-naturalis-language-menu', array('links' => $menu, 'attributes' => array('class' => array('right'), 'id' => 'language-menu')));
}


/**  ZURB-style form elements
 *   -  ['#inline'] = TRUE
 *        forces form elements to render the label before the element
 *        using ZURB grid classes
 *
 *   -  ['#nowrapper'] = TRUE
 *        Tries to prevent Drupal from wrapping divs inside the form-element
 */

/**
 * Implements theme_form_element
 *
 */
function naturalis_theme_form_element($variables) {
  $element = &$variables['element'];
  $show_wrapper = TRUE;

  if ( isset($element['#nowrapper'])){
    if ( $element['#nowrapper'] == TRUE){
      $show_wrapper = FALSE;
    }
  };

  // fake a form-attribute to display horizontal display of label and textfield
  if ( isset($element['#inline'])){
    if ( $element['#inline'] == TRUE){
      $element['#title_display'] = 'inline';
    }
  };

  // This function is invoked as theme wrapper, but the rendered form element
  // may not necessarily have been processed by form_builder().
  $element += array(
    '#title_display' => 'before',
  );

  // Add element #id for #type 'item'.
  if (isset($element['#markup']) && !empty($element['#id'])) {
    $attributes['id'] = $element['#id'];
  }
  // Add element's #type and #name as class to aid with JS/CSS selectors.
  $attributes['class'] = array('form-item');
  if (!empty($element['#type'])) {
    $attributes['class'][] = 'form-type-' . strtr($element['#type'], '_', '-');
  }
  if (!empty($element['#name'])) {
    $attributes['class'][] = 'form-item-' . strtr($element['#name'], array(' ' => '-', '_' => '-', '[' => '-', ']' => ''));
  }

  // Add a class for disabled elements to facilitate cross-browser styling.
  if (!empty($element['#attributes']['disabled'])) {
    $attributes['class'][] = 'form-disabled';
  }
  $output = $show_wrapper ?  '<div' . drupal_attributes($attributes) . '>' . "\n" : '';

  // If #title is not set, we don't display any label or required marker.
  if (!isset($element['#title'])) {
    $element['#title_display'] = 'none';
  }
  $prefix = isset($element['#field_prefix']) ? '<span class="field-prefix">' . $element['#field_prefix'] . '</span> ' : '';
  $suffix = isset($element['#field_suffix']) ? ' <span class="field-suffix">' . $element['#field_suffix'] . '</span>' : '';

  switch ($element['#title_display']) {
    case 'inline':
      $output .= "<div class='row'>\n" ;
      $output .= "\t<div class='large-4 large-offset-1 small-5 columns'> " . theme('form_element_label', $variables). "</div>\n";
      $output .= "\t<div class='small-7 columns end'> " .  $prefix . $element['#children'] . $suffix . "</div>\n";
      $output .= "</div>\n";
      break;
    case 'before':
    case 'invisible':
      $output .= ' ' . theme('form_element_label', $variables);
      $output .= ' ' . $prefix . $element['#children'] . $suffix . "\n";
      break;

    case 'after':
      $output .= ' ' . $prefix . $element['#children'] . $suffix;
      $output .= ' ' . theme('form_element_label', $variables) . "\n";
      break;

    case 'none':
    case 'attribute':
      // Output no label and no required marker, only the children.
      $output .= ' ' . $prefix . $element['#children'] . $suffix . "\n";
      break;
  }

  if (!empty($element['#description'])) {
    $output .= '<div class="description">' . $element['#description'] . "</div>\n";
  }

  $output .= $show_wrapper ? "</div>\n" : "";

  return $output;
}

function naturalis_theme_form_element_label($variables) {
  $element = $variables['element'];
  // This is also used in the installer, pre-database setup.
  $t = get_t();

  // If title and required marker are both empty, output no label.
  if ((!isset($element['#title']) || $element['#title'] === '') && empty($element['#required'])) {
    return '';
  }

  // If the element is required, a required marker is appended to the label.
  $required = !empty($element['#required']) ? theme('form_required_marker', array('element' => $element)) : '';

  $title = filter_xss_admin($element['#title']);

  $attributes = array();
  // Style the label as class option to display inline with the element.
  if ($element['#title_display'] == 'after') {
    $attributes['class'] = 'option';
  }
  // Show label only to screen readers to avoid disruption in visual flows.
  elseif ($element['#title_display'] == 'invisible') {
    $attributes['class'] = 'element-invisible';
  } elseif ( $element["#title_display"] == "inline" ){
    $attributes['class'] = 'inline';
  }

  if (!empty($element['#id'])) {
    $attributes['for'] = $element['#id'];
  }

 // The leading whitespace helps visually separate fields from inline labels.
  return ' <label' . drupal_attributes($attributes) . '>' . $t('!title !required', array('!title' => $title, '!required' => $required)) . "</label>\n";
}

/**
 *
 * OVERRIDING ZURB FOUNDATION TO REMOVE DROPDOWN FROM TOP-BAR
 *
 */

/**
 * Implements theme_links() targeting the main menu specifically.
 * Formats links for Top Bar http://foundation.zurb.com/docs/components/top-bar.html
 */
function naturalis_theme_links__topbar_main_menu($variables) {

  // We need to fetch the links ourselves because we need the entire tree.
  $links = menu_tree_output(menu_tree_all_data(variable_get('menu_main_links_source', 'main-menu')));
  $output = _naturalis_theme_links($links);
  $variables['attributes']['class'][] = 'left';

  //return '<ul' . drupal_attributes($variables['attributes']) . '>' . $output . '</ul>';
  return "<ul class='top-bar-level-1'>$output</ul>";
}

/**
 * Helper function to output a Drupal menu as a Foundation Top Bar.
 *
 * @param array
 *   An array of menu links.
 *
 * @return string
 *   A rendered list of links, with no <ul> or <ol> wrapper.
 *
 * @see zurb_foundation_links__system_main_menu()
 * @see zurb_foundation_links__system_secondary_menu()
 */
function _naturalis_theme_links($links) {
  $output = '';

  foreach (element_children($links) as $key) {
    $output .= _naturalis_theme_render_link($links[$key]);
  }

  return $output;
}

/**
 * Helper function to recursively render sub-menus.
 *
 * @param array
 *   An array of menu links.
 *
 * @return string
 *   A rendered list of links, with no <ul> or <ol> wrapper.
 *
 * @see _zurb_foundation_links()
 */
function _naturalis_theme_render_link($link, $level=1) {
  $output = '';

  // This is a duplicate link that won't get the dropdown class and will only
  // show up in small-screen.
  $small_link = $link;

  // if (!empty($link['#below'])) {
  //   $link['#attributes']['class'][] = 'has-dropdown';
  // }

  // Render top level and make sure we have an actual link.
  if (!empty($link['#href'])) {
    $rendered_link = NULL;

    // Foundation offers some of the same functionality as Special Menu Items;
    // ie: Dividers and Labels in the top bar. So let's make sure that we
    // render them the Foundation way.
    if (module_exists('special_menu_items')) {
      if ($link['#href'] === '<nolink>') {
        $rendered_link = '<label>' . $link['#title'] . '</label>';
      }
      else if ($link['#href'] === '<separator>') {
        $link['#attributes']['class'][] = 'divider';
        $rendered_link = '';
      }
    }

    if (!isset($rendered_link)) {
      $rendered_link = theme('zurb_foundation_menu_link', array('link' => $link));
    }


    // Test for localization options and apply them if they exist.
    if (isset($link['#localized_options']['attributes']) && is_array($link['#localized_options']['attributes'])) {
      $link['#attributes'] = array_merge_recursive($link['#attributes'], $link['#localized_options']['attributes']);
    }
    $output .= '<li' . drupal_attributes($link['#attributes']) . '>' . $rendered_link;

    if (!empty($link['#below'])) {
      // Add repeated link under the dropdown for small-screen.
      $small_link['#attributes']['class'][] = 'show-for-small';
      $sub_menu = '<li' . drupal_attributes($small_link['#attributes']) . '>' . l($link['#title'], $link['#href'], $link['#localized_options']);

      // Build sub nav recursively.
      foreach ($link['#below'] as $sub_link) {
        if (!empty($sub_link['#href'])) {
          $sub_menu .= _naturalis_theme_render_link($sub_link, $level+1);
        }
      }

      $output .= "<ul class='top-bar-level-2'>$sub_menu</ul>";
    }

    $output .=  '</li>';
  }

  return $output;
}
