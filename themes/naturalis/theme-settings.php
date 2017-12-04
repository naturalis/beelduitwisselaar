<?php
/**
 * Implements hook_form_FORM_ID_alter().
 *
 * @param $form
 *   The form.
 * @param $form_state
 *   The form state.
 */
function naturalis_theme_form_system_theme_settings_alter(&$form, &$form_state) {

      /*
     * Naturalis Header section.
     */
	 

    $form['zurb_foundation']['naturalis_header'] = array(
      '#type' => 'fieldset',
      '#title' => t('Naturalis Header'),
      '#description' => t('Styling for a Naturalis header'),
    );

	$form['zurb_foundation']['naturalis_header']['naturalis_headereverywhere'] = array(
	  '#type' => 'checkbox', 
	  '#title' => t('Display the header on top of the page everywhere'),
	  '#default_value' => theme_get_setting('naturalis_headereverywhere'),
      '#description' => t('Sets the header on all pages.'),
	);
	$form['zurb_foundation']['naturalis_header']['naturalis_headereverywhere_logo'] = array(
	  '#type' => 'textfield', 
	  '#title' => t('Logo for the header on top of the page everywhere'),
	  '#default_value' => theme_get_setting('naturalis_headereverywhere_logo'),
	);
	$form['zurb_foundation']['naturalis_header']['naturalis_headereverywhere_logolink'] = array(
	  '#type' => 'textfield', 
	  '#title' => t('URL target for the logo on the header on top of the page everywhere'),
	  '#default_value' => theme_get_setting('naturalis_headereverywhere_logolink'),
	);
	$form['zurb_foundation']['naturalis_header']['naturalis_headereverywhere_title'] = array(
	  '#type' => 'textfield', 
	  '#title' => t('Title for the header on top of the page everywhere'),
	  '#default_value' => theme_get_setting('naturalis_headereverywhere_title'),
	);
	$form['zurb_foundation']['naturalis_header']['naturalis_headereverywhere_subtitle'] = array(
	  '#type' => 'textfield', 
	  '#title' => t('Subtitle for the header on top of the page everywhere'),
	  '#default_value' => theme_get_setting('naturalis_headereverywhere_subtitle'),
	);

	
	$form['zurb_foundation']['naturalis_header']['naturalis_theme_show_search'] = array(
	  '#type' => 'checkbox', 
	  '#title' => t('Display search button in menu bar'),
	  '#default_value' => theme_get_setting('naturalis_theme_show_search'),
	);
	$form['zurb_foundation']['naturalis_header']['naturalis_theme_use_background_image'] = array(
	  '#type' => 'checkbox', 
	  '#title' => t('Use background header image'),
	  '#default_value' => theme_get_setting('naturalis_theme_use_background_image'),
	);
	$form['zurb_foundation']['naturalis_header']['naturalis_theme_background_image'] = array(
	  '#type' => 'textfield', 
	  '#title' => t('URL or path to background header image (1180x160)'),
	  '#default_value' => theme_get_setting('naturalis_theme_background_image'),
	  '#size' => 60, 
	  '#maxlength' => 256, 
	  '#required' => FALSE,
	);
	$form['zurb_foundation']['naturalis_header']['naturalis_theme_background_image_title'] = array(
	  '#type' => 'textfield', 
	  '#title' => t('Title for the background header image displayed on mouse hover'),
	  '#default_value' => theme_get_setting('naturalis_theme_background_image_title'),
	  '#size' => 60, 
	  '#maxlength' => 256, 
	  '#required' => FALSE,
	);
	
    $form['zurb_foundation']['naturalis_header']['naturalis_theme_background_color'] = array(
      '#type' => 'select',
      '#title' => t('Background color for the header'),
      '#description' => t('Sets the background of the right part of the header.'),
      '#options' => array(
        'yellow' => t('yellow'),
        'orange' => t('orange'),
        'red' => t('red'),
        'blue' => t('blue'),
        'green' => t('green'),
        'purple' => t('purple'),
        'brown' => t('brown'),
        'gray' => t('gray'),
        'black' => t('black'),
        'white' => t('white'),
      ),
      '#default_value' => theme_get_setting('naturalis_theme_background_color'),
    );

    $form['zurb_foundation']['naturalis_header']['naturalis_theme_logo_background_color'] = array(
      '#type' => 'select',
      '#title' => t('Naturalis logo background color'),
      '#description' => t('Sets the color of the background of the Naturalis logo'),
      '#options' => array(
        'yellow' => t('yellow'),
        'orange' => t('orange'),
        'red' => t('red'),
        'blue' => t('blue'),
        'green' => t('green'),
        'purple' => t('purple'),
        'brown' => t('brown'),
        'gray' => t('gray'),
        'black' => t('black'),
        'white' => t('white'),
        'ghost' => t('ghost'),
      ),
      '#default_value' => theme_get_setting('naturalis_theme_logo_background_color'),
    );

    $form['zurb_foundation']['naturalis_header']['naturalis_theme_logo_color'] = array(
      '#type' => 'select',
      '#title' => t('Color for the Naturalis logo'),
      '#description' => t('Sets the color of the Naturalis logo'),
      '#options' => array(
        'blue' => t('blue'),
        'green' => t('green (illegal)'),
        'red' => t('red'),
        'white' => t('white'),
        'black' => t('black'),
      ),
      '#default_value' => theme_get_setting('naturalis_theme_logo_color'),
    );
	
      /*
     * Naturalis Bottom Bar.
     */
    $form['zurb_foundation']['bottombar'] = array(
      '#type' => 'fieldset',
      '#title' => t('Naturalis Bottom Bar'),
      '#description' => t('The Naturalis Bottom Bar provides room for a crumblepath and for some menu-items.'),
    );

    $form['zurb_foundation']['bottombar']['naturalis_theme_bottom_bar_crumble'] = array(
      '#type' => 'checkbox',
      '#title' => t('Enable crumble path'),
      '#description' => t('If enabled, a crumble path will be displayed in the bottom bar.'),
      '#default_value' => theme_get_setting('naturalis_theme_bottom_bar_crumble'),
    );

    $form['zurb_foundation']['bottombar']['naturalis_theme_bottom_bar_links'] = array(
      '#type' => 'checkbox',
      '#title' => t('Enable Links-menu'),
      '#description' => t('If enabled, links to external will be shown.'),
      '#default_value' => theme_get_setting('naturalis_theme_bottom_bar_links'),
    );

    $form['zurb_foundation']['bottombar']['naturalis_theme_bottom_bar_copyright'] = array(
      '#type' => 'checkbox',
      '#title' => t('Enable Copyright Statement'),
      '#description' => t('If enabled, a copyright statement will be displayed in the bottom bar.'),
      '#default_value' => theme_get_setting('naturalis_theme_bottom_bar_copyright'),
    );

    $form['zurb_foundation']['bottombar']['naturalis_theme_bottom_bar_service_menu'] = array(
      '#type' => 'checkbox',
      '#title' => t('Enable Service Menu'),
      '#description' => t('If enabled, the footer menu will be displayed in the bottom bar.'),
      '#default_value' => theme_get_setting('naturalis_theme_bottom_bar_service_menu'),
    );

	
	
}
