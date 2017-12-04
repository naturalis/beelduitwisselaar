<?php
/**
 * @file
 * beeldfeature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function beeldfeature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'afbeeldingen';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'afbeeldingen';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Afbeeldingen';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_achternaam' => 'field_achternaam',
    'field_datum' => 'field_datum',
    'field_locatie' => 'field_locatie',
    'field_soort_taxon' => 'field_soort_taxon',
    'field_newimage' => 'field_newimage',
    'name' => 'name',
    'views_bulk_operations' => 'views_bulk_operations',
    'field_status' => 'field_status',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_achternaam' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_datum' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_locatie' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_soort_taxon' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_newimage' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Field collection item: Datum van opname */
  $handler->display->display_options['fields']['field_datum']['id'] = 'field_datum';
  $handler->display->display_options['fields']['field_datum']['table'] = 'field_data_field_datum';
  $handler->display->display_options['fields']['field_datum']['field'] = 'field_datum';
  $handler->display->display_options['fields']['field_datum']['label'] = 'Datum opname';
  $handler->display->display_options['fields']['field_datum']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Field collection item: Locatie */
  $handler->display->display_options['fields']['field_locatie']['id'] = 'field_locatie';
  $handler->display->display_options['fields']['field_locatie']['table'] = 'field_data_field_locatie';
  $handler->display->display_options['fields']['field_locatie']['field'] = 'field_locatie';
  /* Field: Field collection item: Soort/taxon */
  $handler->display->display_options['fields']['field_soort_taxon']['id'] = 'field_soort_taxon';
  $handler->display->display_options['fields']['field_soort_taxon']['table'] = 'field_data_field_soort_taxon';
  $handler->display->display_options['fields']['field_soort_taxon']['field'] = 'field_soort_taxon';
  /* Field: Field collection item: Afbeelding */
  $handler->display->display_options['fields']['field_newimage']['id'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage']['table'] = 'field_data_field_newimage';
  $handler->display->display_options['fields']['field_newimage']['field'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_newimage']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Bulk operations: Field collection item */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::beelduitwisselaar_general_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::beelduitwisselaar_mail_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Stuur email',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Verwijder geselecteerde beelden',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Toekennen aan expert (selectie in volgende scherm)',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'field_afbeeldingen::field_beeldexpert' => 'field_afbeeldingen::field_beeldexpert',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Field collection item: beeldexpert */
  $handler->display->display_options['fields']['field_beeldexpert']['id'] = 'field_beeldexpert';
  $handler->display->display_options['fields']['field_beeldexpert']['table'] = 'field_data_field_beeldexpert';
  $handler->display->display_options['fields']['field_beeldexpert']['field'] = 'field_beeldexpert';
  $handler->display->display_options['fields']['field_beeldexpert']['label'] = 'Expert';
  $handler->display->display_options['fields']['field_beeldexpert']['settings'] = array(
    'link' => 0,
  );
  /* Filter criterion: Field collection item: status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['filters']['field_status_value']['group'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'afbeeldingen';
  $export['afbeeldingen'] = $view;

  $view = new view();
  $view->name = 'afbeeldingen_afgekeurd_all';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'Afbeeldingen afgekeurd all';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Afbeeldingen afgekeurd (alles)';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_achternaam' => 'field_achternaam',
    'field_datum' => 'field_datum',
    'field_locatie' => 'field_locatie',
    'field_soort_taxon' => 'field_soort_taxon',
    'field_newimage' => 'field_newimage',
    'name' => 'name',
    'views_bulk_operations' => 'views_bulk_operations',
    'field_status' => 'field_status',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_achternaam' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_datum' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_locatie' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_soort_taxon' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_newimage' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Field collection item: Datum van opname */
  $handler->display->display_options['fields']['field_datum']['id'] = 'field_datum';
  $handler->display->display_options['fields']['field_datum']['table'] = 'field_data_field_datum';
  $handler->display->display_options['fields']['field_datum']['field'] = 'field_datum';
  $handler->display->display_options['fields']['field_datum']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Field collection item: Locatie */
  $handler->display->display_options['fields']['field_locatie']['id'] = 'field_locatie';
  $handler->display->display_options['fields']['field_locatie']['table'] = 'field_data_field_locatie';
  $handler->display->display_options['fields']['field_locatie']['field'] = 'field_locatie';
  /* Field: Field collection item: Soort/taxon */
  $handler->display->display_options['fields']['field_soort_taxon']['id'] = 'field_soort_taxon';
  $handler->display->display_options['fields']['field_soort_taxon']['table'] = 'field_data_field_soort_taxon';
  $handler->display->display_options['fields']['field_soort_taxon']['field'] = 'field_soort_taxon';
  /* Field: Field collection item: Afbeelding */
  $handler->display->display_options['fields']['field_newimage']['id'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage']['table'] = 'field_data_field_newimage';
  $handler->display->display_options['fields']['field_newimage']['field'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_newimage']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Bulk operations: Field collection item */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::beelduitwisselaar_general_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Verwijder geselecteerde beelden',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Toekennen aan expert (selectie in volgende scherm)',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'field_afbeeldingen::field_beeldexpert' => 'field_afbeeldingen::field_beeldexpert',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Field collection item: beeldexpert */
  $handler->display->display_options['fields']['field_beeldexpert']['id'] = 'field_beeldexpert';
  $handler->display->display_options['fields']['field_beeldexpert']['table'] = 'field_data_field_beeldexpert';
  $handler->display->display_options['fields']['field_beeldexpert']['field'] = 'field_beeldexpert';
  $handler->display->display_options['fields']['field_beeldexpert']['label'] = 'Expert';
  $handler->display->display_options['fields']['field_beeldexpert']['settings'] = array(
    'link' => 0,
  );
  /* Field: Field collection item: beeldevaluatie */
  $handler->display->display_options['fields']['field_beeldevaluatie']['id'] = 'field_beeldevaluatie';
  $handler->display->display_options['fields']['field_beeldevaluatie']['table'] = 'field_data_field_beeldevaluatie';
  $handler->display->display_options['fields']['field_beeldevaluatie']['field'] = 'field_beeldevaluatie';
  $handler->display->display_options['fields']['field_beeldevaluatie']['label'] = 'Evaluatie';
  /* Filter criterion: Field collection item: status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['value'] = array(
    3 => '3',
  );
  $handler->display->display_options['filters']['field_status_value']['group'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'afbeeldingen-afgekeurd-all';
  $export['afbeeldingen_afgekeurd_all'] = $view;

  $view = new view();
  $view->name = 'afbeeldingen_bij_node';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'afbeeldingen bij node';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Afbeeldingen bij node';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_achternaam' => 'field_achternaam',
    'field_datum' => 'field_datum',
    'field_locatie' => 'field_locatie',
    'field_soort_taxon' => 'field_soort_taxon',
    'field_newimage' => 'field_newimage',
    'name' => 'name',
    'views_bulk_operations' => 'views_bulk_operations',
    'field_status' => 'field_status',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_achternaam' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_datum' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_locatie' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_soort_taxon' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_newimage' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Field collection item: Entity with the Afbeeldingen (field_afbeeldingen) */
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['id'] = 'field_afbeeldingen_node';
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['field'] = 'field_afbeeldingen_node';
  /* Field: Field collection item: Datum van opname */
  $handler->display->display_options['fields']['field_datum']['id'] = 'field_datum';
  $handler->display->display_options['fields']['field_datum']['table'] = 'field_data_field_datum';
  $handler->display->display_options['fields']['field_datum']['field'] = 'field_datum';
  $handler->display->display_options['fields']['field_datum']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Field collection item: Locatie */
  $handler->display->display_options['fields']['field_locatie']['id'] = 'field_locatie';
  $handler->display->display_options['fields']['field_locatie']['table'] = 'field_data_field_locatie';
  $handler->display->display_options['fields']['field_locatie']['field'] = 'field_locatie';
  /* Field: Field collection item: Soort/taxon */
  $handler->display->display_options['fields']['field_soort_taxon']['id'] = 'field_soort_taxon';
  $handler->display->display_options['fields']['field_soort_taxon']['table'] = 'field_data_field_soort_taxon';
  $handler->display->display_options['fields']['field_soort_taxon']['field'] = 'field_soort_taxon';
  /* Field: Field collection item: Afbeelding */
  $handler->display->display_options['fields']['field_newimage']['id'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage']['table'] = 'field_data_field_newimage';
  $handler->display->display_options['fields']['field_newimage']['field'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_newimage']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_afbeeldingen_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $export['afbeeldingen_bij_node'] = $view;

  $view = new view();
  $view->name = 'afbeeldingen_geevalueerd';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'Afbeeldingen geevalueerd';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Afbeeldingen geevalueerd';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_achternaam' => 'field_achternaam',
    'field_datum' => 'field_datum',
    'field_locatie' => 'field_locatie',
    'field_soort_taxon' => 'field_soort_taxon',
    'field_newimage' => 'field_newimage',
    'name' => 'name',
    'views_bulk_operations' => 'views_bulk_operations',
    'field_status' => 'field_status',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_achternaam' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_datum' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_locatie' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_soort_taxon' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_newimage' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Field collection item: Datum van opname */
  $handler->display->display_options['fields']['field_datum']['id'] = 'field_datum';
  $handler->display->display_options['fields']['field_datum']['table'] = 'field_data_field_datum';
  $handler->display->display_options['fields']['field_datum']['field'] = 'field_datum';
  $handler->display->display_options['fields']['field_datum']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Field collection item: Locatie */
  $handler->display->display_options['fields']['field_locatie']['id'] = 'field_locatie';
  $handler->display->display_options['fields']['field_locatie']['table'] = 'field_data_field_locatie';
  $handler->display->display_options['fields']['field_locatie']['field'] = 'field_locatie';
  /* Field: Field collection item: Soort/taxon */
  $handler->display->display_options['fields']['field_soort_taxon']['id'] = 'field_soort_taxon';
  $handler->display->display_options['fields']['field_soort_taxon']['table'] = 'field_data_field_soort_taxon';
  $handler->display->display_options['fields']['field_soort_taxon']['field'] = 'field_soort_taxon';
  /* Field: Field collection item: Afbeelding */
  $handler->display->display_options['fields']['field_newimage']['id'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage']['table'] = 'field_data_field_newimage';
  $handler->display->display_options['fields']['field_newimage']['field'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_newimage']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Bulk operations: Field collection item */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::beelduitwisselaar_general_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Verwijder geselecteerde beelden',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Toekennen aan expert (selectie in volgende scherm)',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'field_afbeeldingen::field_beeldexpert' => 'field_afbeeldingen::field_beeldexpert',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Field collection item: status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  /* Contextual filter: Field collection item: beeldexpert (field_beeldexpert) */
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['id'] = 'field_beeldexpert_target_id';
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['table'] = 'field_data_field_beeldexpert';
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['field'] = 'field_beeldexpert_target_id';
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Field collection item: status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['value'] = array(
    2 => '2',
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['filters']['field_status_value']['group'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'afbeeldingen-geevalueerd';
  $export['afbeeldingen_geevalueerd'] = $view;

  $view = new view();
  $view->name = 'afbeeldingen_geevalueerd_all';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'Afbeeldingen geevalueerd all';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Afbeeldingen geevalueerd (alles)';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_datum' => 'field_datum',
    'field_locatie' => 'field_locatie',
    'field_soort_taxon' => 'field_soort_taxon',
    'field_newimage' => 'field_newimage',
    'views_bulk_operations' => 'views_bulk_operations',
    'field_beeldexpert' => 'field_beeldexpert',
    'field_status' => 'field_status',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_datum' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_locatie' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_soort_taxon' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_newimage' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_beeldexpert' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Field collection item: Datum van opname */
  $handler->display->display_options['fields']['field_datum']['id'] = 'field_datum';
  $handler->display->display_options['fields']['field_datum']['table'] = 'field_data_field_datum';
  $handler->display->display_options['fields']['field_datum']['field'] = 'field_datum';
  $handler->display->display_options['fields']['field_datum']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Field collection item: Locatie */
  $handler->display->display_options['fields']['field_locatie']['id'] = 'field_locatie';
  $handler->display->display_options['fields']['field_locatie']['table'] = 'field_data_field_locatie';
  $handler->display->display_options['fields']['field_locatie']['field'] = 'field_locatie';
  /* Field: Field collection item: Soort/taxon */
  $handler->display->display_options['fields']['field_soort_taxon']['id'] = 'field_soort_taxon';
  $handler->display->display_options['fields']['field_soort_taxon']['table'] = 'field_data_field_soort_taxon';
  $handler->display->display_options['fields']['field_soort_taxon']['field'] = 'field_soort_taxon';
  /* Field: Field collection item: Afbeelding */
  $handler->display->display_options['fields']['field_newimage']['id'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage']['table'] = 'field_data_field_newimage';
  $handler->display->display_options['fields']['field_newimage']['field'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_newimage']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Bulk operations: Field collection item */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::beelduitwisselaar_general_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Verwijder geselecteerde beelden',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Verander expert / Plaats in wachtrij',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'field_afbeeldingen::field_beeldexpert' => 'field_afbeeldingen::field_beeldexpert',
          'field_afbeeldingen::field_status' => 'field_afbeeldingen::field_status',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::system_send_email_action' => array(
      'selected' => 1,
      'postpone_processing' => 1,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Verstuur mail',
    ),
  );
  /* Field: Field collection item: beeldexpert */
  $handler->display->display_options['fields']['field_beeldexpert']['id'] = 'field_beeldexpert';
  $handler->display->display_options['fields']['field_beeldexpert']['table'] = 'field_data_field_beeldexpert';
  $handler->display->display_options['fields']['field_beeldexpert']['field'] = 'field_beeldexpert';
  $handler->display->display_options['fields']['field_beeldexpert']['label'] = 'Expert';
  $handler->display->display_options['fields']['field_beeldexpert']['settings'] = array(
    'link' => 0,
  );
  /* Field: Field collection item: status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['label'] = 'Status';
  /* Filter criterion: Field collection item: status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['value'] = array(
    2 => '2',
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['filters']['field_status_value']['group'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'afbeeldingen-geevalueerd-all';
  $export['afbeeldingen_geevalueerd_all'] = $view;

  $view = new view();
  $view->name = 'afbeeldingen_goedgekeurd_all';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'Afbeeldingen goedgekeurd all';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Afbeeldingen goedgekeurd (alles)';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_achternaam' => 'field_achternaam',
    'field_datum' => 'field_datum',
    'field_locatie' => 'field_locatie',
    'field_soort_taxon' => 'field_soort_taxon',
    'field_newimage' => 'field_newimage',
    'name' => 'name',
    'views_bulk_operations' => 'views_bulk_operations',
    'field_status' => 'field_status',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_achternaam' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_datum' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_locatie' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_soort_taxon' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_newimage' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Field collection item: Datum van opname */
  $handler->display->display_options['fields']['field_datum']['id'] = 'field_datum';
  $handler->display->display_options['fields']['field_datum']['table'] = 'field_data_field_datum';
  $handler->display->display_options['fields']['field_datum']['field'] = 'field_datum';
  $handler->display->display_options['fields']['field_datum']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Field collection item: Locatie */
  $handler->display->display_options['fields']['field_locatie']['id'] = 'field_locatie';
  $handler->display->display_options['fields']['field_locatie']['table'] = 'field_data_field_locatie';
  $handler->display->display_options['fields']['field_locatie']['field'] = 'field_locatie';
  /* Field: Field collection item: Soort/taxon */
  $handler->display->display_options['fields']['field_soort_taxon']['id'] = 'field_soort_taxon';
  $handler->display->display_options['fields']['field_soort_taxon']['table'] = 'field_data_field_soort_taxon';
  $handler->display->display_options['fields']['field_soort_taxon']['field'] = 'field_soort_taxon';
  /* Field: Field collection item: Afbeelding */
  $handler->display->display_options['fields']['field_newimage']['id'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage']['table'] = 'field_data_field_newimage';
  $handler->display->display_options['fields']['field_newimage']['field'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_newimage']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Bulk operations: Field collection item */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::beelduitwisselaar_general_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Verwijder geselecteerde beelden',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Afronden',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'field_afbeeldingen::field_status' => 'field_afbeeldingen::field_status',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Field collection item: beeldexpert */
  $handler->display->display_options['fields']['field_beeldexpert']['id'] = 'field_beeldexpert';
  $handler->display->display_options['fields']['field_beeldexpert']['table'] = 'field_data_field_beeldexpert';
  $handler->display->display_options['fields']['field_beeldexpert']['field'] = 'field_beeldexpert';
  $handler->display->display_options['fields']['field_beeldexpert']['label'] = 'Expert';
  $handler->display->display_options['fields']['field_beeldexpert']['settings'] = array(
    'link' => 0,
  );
  /* Filter criterion: Field collection item: status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['value'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_status_value']['group'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'afbeeldingen-goedgekeurd-all';
  $export['afbeeldingen_goedgekeurd_all'] = $view;

  $view = new view();
  $view->name = 'afbeeldingen_per_auteur';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'Afbeeldingen per auteur';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Afbeeldingen per auteur';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_achternaam' => 'field_achternaam',
    'field_datum' => 'field_datum',
    'field_locatie' => 'field_locatie',
    'field_soort_taxon' => 'field_soort_taxon',
    'field_newimage' => 'field_newimage',
    'name' => 'name',
    'views_bulk_operations' => 'views_bulk_operations',
    'field_status' => 'field_status',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_achternaam' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_datum' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_locatie' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_soort_taxon' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_newimage' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Field collection item: Entity with the Afbeeldingen (field_afbeeldingen) */
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['id'] = 'field_afbeeldingen_node';
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['field'] = 'field_afbeeldingen_node';
  /* Field: Field collection item: Datum van opname */
  $handler->display->display_options['fields']['field_datum']['id'] = 'field_datum';
  $handler->display->display_options['fields']['field_datum']['table'] = 'field_data_field_datum';
  $handler->display->display_options['fields']['field_datum']['field'] = 'field_datum';
  $handler->display->display_options['fields']['field_datum']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Field collection item: Locatie */
  $handler->display->display_options['fields']['field_locatie']['id'] = 'field_locatie';
  $handler->display->display_options['fields']['field_locatie']['table'] = 'field_data_field_locatie';
  $handler->display->display_options['fields']['field_locatie']['field'] = 'field_locatie';
  /* Field: Field collection item: Soort/taxon */
  $handler->display->display_options['fields']['field_soort_taxon']['id'] = 'field_soort_taxon';
  $handler->display->display_options['fields']['field_soort_taxon']['table'] = 'field_data_field_soort_taxon';
  $handler->display->display_options['fields']['field_soort_taxon']['field'] = 'field_soort_taxon';
  /* Field: Field collection item: Afbeelding */
  $handler->display->display_options['fields']['field_newimage']['id'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage']['table'] = 'field_data_field_newimage';
  $handler->display->display_options['fields']['field_newimage']['field'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_newimage']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Field collection item: status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'field_afbeeldingen_node';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Field collection item: status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['value'] = array(
    0 => '0',
    1 => '1',
    2 => '2',
    3 => '3',
    4 => '4',
    5 => '5',
    6 => '6',
  );
  $handler->display->display_options['filters']['field_status_value']['group'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'afbeeldingen-auteur';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field collection item: beeldexpert (field_beeldexpert) */
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['id'] = 'field_beeldexpert_target_id';
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['table'] = 'field_data_field_beeldexpert';
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['field'] = 'field_beeldexpert_target_id';
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['block_description'] = 'Afbeeldingen per expert (userpage)';
  $export['afbeeldingen_per_auteur'] = $view;

  $view = new view();
  $view->name = 'afbeeldingen_per_expert';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'Afbeeldingen per expert';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Afbeeldingen per expert';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_achternaam' => 'field_achternaam',
    'field_datum' => 'field_datum',
    'field_locatie' => 'field_locatie',
    'field_soort_taxon' => 'field_soort_taxon',
    'field_newimage' => 'field_newimage',
    'name' => 'name',
    'views_bulk_operations' => 'views_bulk_operations',
    'field_status' => 'field_status',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_achternaam' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_datum' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_locatie' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_soort_taxon' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_newimage' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Field collection item: Datum van opname */
  $handler->display->display_options['fields']['field_datum']['id'] = 'field_datum';
  $handler->display->display_options['fields']['field_datum']['table'] = 'field_data_field_datum';
  $handler->display->display_options['fields']['field_datum']['field'] = 'field_datum';
  $handler->display->display_options['fields']['field_datum']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Field collection item: Locatie */
  $handler->display->display_options['fields']['field_locatie']['id'] = 'field_locatie';
  $handler->display->display_options['fields']['field_locatie']['table'] = 'field_data_field_locatie';
  $handler->display->display_options['fields']['field_locatie']['field'] = 'field_locatie';
  /* Field: Field collection item: Soort/taxon */
  $handler->display->display_options['fields']['field_soort_taxon']['id'] = 'field_soort_taxon';
  $handler->display->display_options['fields']['field_soort_taxon']['table'] = 'field_data_field_soort_taxon';
  $handler->display->display_options['fields']['field_soort_taxon']['field'] = 'field_soort_taxon';
  /* Field: Field collection item: Afbeelding */
  $handler->display->display_options['fields']['field_newimage']['id'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage']['table'] = 'field_data_field_newimage';
  $handler->display->display_options['fields']['field_newimage']['field'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_newimage']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Bulk operations: Field collection item */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::beelduitwisselaar_general_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::beelduitwisselaar_mail_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Verwijder geselecteerde beelden',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Toekennen aan andere expert (selectie in volgende scherm)',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'field_afbeeldingen::field_beeldexpert' => 'field_afbeeldingen::field_beeldexpert',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Field collection item: status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  /* Contextual filter: Field collection item: beeldexpert (field_beeldexpert) */
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['id'] = 'field_beeldexpert_target_id';
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['table'] = 'field_data_field_beeldexpert';
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['field'] = 'field_beeldexpert_target_id';
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Field collection item: status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['value'] = array(
    0 => '0',
    1 => '1',
    2 => '2',
    3 => '3',
    4 => '4',
    5 => '5',
    6 => '6',
  );
  $handler->display->display_options['filters']['field_status_value']['group'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'afbeeldingen-expert';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field collection item: beeldexpert (field_beeldexpert) */
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['id'] = 'field_beeldexpert_target_id';
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['table'] = 'field_data_field_beeldexpert';
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['field'] = 'field_beeldexpert_target_id';
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['block_description'] = 'Afbeeldingen per expert (userpage)';
  $export['afbeeldingen_per_expert'] = $view;

  $view = new view();
  $view->name = 'afbeeldingen_per_expert_all';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'Afbeeldingen per expert all';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Afbeeldingen per expert (alles)';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_datum' => 'field_datum',
    'field_locatie' => 'field_locatie',
    'field_soort_taxon' => 'field_soort_taxon',
    'field_newimage' => 'field_newimage',
    'views_bulk_operations' => 'views_bulk_operations',
    'field_beeldexpert' => 'field_beeldexpert',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_datum' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_locatie' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_soort_taxon' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_newimage' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_beeldexpert' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Field collection item: Datum van opname */
  $handler->display->display_options['fields']['field_datum']['id'] = 'field_datum';
  $handler->display->display_options['fields']['field_datum']['table'] = 'field_data_field_datum';
  $handler->display->display_options['fields']['field_datum']['field'] = 'field_datum';
  $handler->display->display_options['fields']['field_datum']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Field collection item: Locatie */
  $handler->display->display_options['fields']['field_locatie']['id'] = 'field_locatie';
  $handler->display->display_options['fields']['field_locatie']['table'] = 'field_data_field_locatie';
  $handler->display->display_options['fields']['field_locatie']['field'] = 'field_locatie';
  /* Field: Field collection item: Soort/taxon */
  $handler->display->display_options['fields']['field_soort_taxon']['id'] = 'field_soort_taxon';
  $handler->display->display_options['fields']['field_soort_taxon']['table'] = 'field_data_field_soort_taxon';
  $handler->display->display_options['fields']['field_soort_taxon']['field'] = 'field_soort_taxon';
  /* Field: Field collection item: Afbeelding */
  $handler->display->display_options['fields']['field_newimage']['id'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage']['table'] = 'field_data_field_newimage';
  $handler->display->display_options['fields']['field_newimage']['field'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_newimage']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Bulk operations: Field collection item */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::beelduitwisselaar_general_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::beelduitwisselaar_mail_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Verwijder geselecteerde beelden',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Toekennen aan andere expert (selectie in volgende scherm)',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'field_afbeeldingen::field_beeldexpert' => 'field_afbeeldingen::field_beeldexpert',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Field collection item: beeldexpert */
  $handler->display->display_options['fields']['field_beeldexpert']['id'] = 'field_beeldexpert';
  $handler->display->display_options['fields']['field_beeldexpert']['table'] = 'field_data_field_beeldexpert';
  $handler->display->display_options['fields']['field_beeldexpert']['field'] = 'field_beeldexpert';
  $handler->display->display_options['fields']['field_beeldexpert']['label'] = 'Expert';
  $handler->display->display_options['fields']['field_beeldexpert']['settings'] = array(
    'link' => 1,
  );
  /* Filter criterion: Field collection item: status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_status_value']['group'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'afbeeldingen-expert-all';
  $export['afbeeldingen_per_expert_all'] = $view;

  $view = new view();
  $view->name = 'afbeeldingen_per_user';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'afbeeldingen per user';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Afbeeldingen';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_achternaam' => 'field_achternaam',
    'field_datum' => 'field_datum',
    'field_locatie' => 'field_locatie',
    'field_soort_taxon' => 'field_soort_taxon',
    'field_newimage' => 'field_newimage',
    'name' => 'name',
    'views_bulk_operations' => 'views_bulk_operations',
    'field_status' => 'field_status',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_achternaam' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_datum' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_locatie' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_soort_taxon' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_newimage' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Field collection item: Entity with the Afbeeldingen (field_afbeeldingen) */
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['id'] = 'field_afbeeldingen_node';
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['field'] = 'field_afbeeldingen_node';
  /* Field: Field collection item: Datum van opname */
  $handler->display->display_options['fields']['field_datum']['id'] = 'field_datum';
  $handler->display->display_options['fields']['field_datum']['table'] = 'field_data_field_datum';
  $handler->display->display_options['fields']['field_datum']['field'] = 'field_datum';
  $handler->display->display_options['fields']['field_datum']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Field collection item: Locatie */
  $handler->display->display_options['fields']['field_locatie']['id'] = 'field_locatie';
  $handler->display->display_options['fields']['field_locatie']['table'] = 'field_data_field_locatie';
  $handler->display->display_options['fields']['field_locatie']['field'] = 'field_locatie';
  /* Field: Field collection item: Soort/taxon */
  $handler->display->display_options['fields']['field_soort_taxon']['id'] = 'field_soort_taxon';
  $handler->display->display_options['fields']['field_soort_taxon']['table'] = 'field_data_field_soort_taxon';
  $handler->display->display_options['fields']['field_soort_taxon']['field'] = 'field_soort_taxon';
  /* Field: Field collection item: Afbeelding */
  $handler->display->display_options['fields']['field_newimage']['id'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage']['table'] = 'field_data_field_newimage';
  $handler->display->display_options['fields']['field_newimage']['field'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_newimage']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Field collection item: status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['label'] = 'Status';
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'field_afbeeldingen_node';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Field collection item: status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['value'] = array(
    0 => '0',
    1 => '1',
    2 => '2',
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['filters']['field_status_value']['group'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'afbeeldingen-user';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $export['afbeeldingen_per_user'] = $view;

  $view = new view();
  $view->name = 'afbeeldingen_per_user_compleet_';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'afbeeldingen per user (compleet)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Goedgekeurde afbeeldingen';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_achternaam' => 'field_achternaam',
    'field_datum' => 'field_datum',
    'field_locatie' => 'field_locatie',
    'field_soort_taxon' => 'field_soort_taxon',
    'field_newimage' => 'field_newimage',
    'name' => 'name',
    'views_bulk_operations' => 'views_bulk_operations',
    'field_status' => 'field_status',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_achternaam' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_datum' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_locatie' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_soort_taxon' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_newimage' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Field collection item: Entity with the Afbeeldingen (field_afbeeldingen) */
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['id'] = 'field_afbeeldingen_node';
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['field'] = 'field_afbeeldingen_node';
  /* Field: Field collection item: Datum van opname */
  $handler->display->display_options['fields']['field_datum']['id'] = 'field_datum';
  $handler->display->display_options['fields']['field_datum']['table'] = 'field_data_field_datum';
  $handler->display->display_options['fields']['field_datum']['field'] = 'field_datum';
  $handler->display->display_options['fields']['field_datum']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Field collection item: Locatie */
  $handler->display->display_options['fields']['field_locatie']['id'] = 'field_locatie';
  $handler->display->display_options['fields']['field_locatie']['table'] = 'field_data_field_locatie';
  $handler->display->display_options['fields']['field_locatie']['field'] = 'field_locatie';
  /* Field: Field collection item: Soort/taxon */
  $handler->display->display_options['fields']['field_soort_taxon']['id'] = 'field_soort_taxon';
  $handler->display->display_options['fields']['field_soort_taxon']['table'] = 'field_data_field_soort_taxon';
  $handler->display->display_options['fields']['field_soort_taxon']['field'] = 'field_soort_taxon';
  /* Field: Field collection item: Afbeelding */
  $handler->display->display_options['fields']['field_newimage']['id'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage']['table'] = 'field_data_field_newimage';
  $handler->display->display_options['fields']['field_newimage']['field'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_newimage']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'field_afbeeldingen_node';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Field collection item: status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['value'] = array(
    2 => '2',
    5 => '5',
  );
  $handler->display->display_options['filters']['field_status_value']['group'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'afbeeldingen-user-compleet';
  $export['afbeeldingen_per_user_compleet_'] = $view;

  $view = new view();
  $view->name = 'afbeeldingen_verwerkt_all';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'Afbeeldingen verwerkt all';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Afbeeldingen verwerkt (alles)';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_achternaam' => 'field_achternaam',
    'field_datum' => 'field_datum',
    'field_locatie' => 'field_locatie',
    'field_soort_taxon' => 'field_soort_taxon',
    'field_newimage' => 'field_newimage',
    'name' => 'name',
    'views_bulk_operations' => 'views_bulk_operations',
    'field_status' => 'field_status',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_achternaam' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_datum' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_locatie' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_soort_taxon' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_newimage' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Field collection item: Datum van opname */
  $handler->display->display_options['fields']['field_datum']['id'] = 'field_datum';
  $handler->display->display_options['fields']['field_datum']['table'] = 'field_data_field_datum';
  $handler->display->display_options['fields']['field_datum']['field'] = 'field_datum';
  $handler->display->display_options['fields']['field_datum']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Field collection item: Locatie */
  $handler->display->display_options['fields']['field_locatie']['id'] = 'field_locatie';
  $handler->display->display_options['fields']['field_locatie']['table'] = 'field_data_field_locatie';
  $handler->display->display_options['fields']['field_locatie']['field'] = 'field_locatie';
  /* Field: Field collection item: Soort/taxon */
  $handler->display->display_options['fields']['field_soort_taxon']['id'] = 'field_soort_taxon';
  $handler->display->display_options['fields']['field_soort_taxon']['table'] = 'field_data_field_soort_taxon';
  $handler->display->display_options['fields']['field_soort_taxon']['field'] = 'field_soort_taxon';
  /* Field: Field collection item: Afbeelding */
  $handler->display->display_options['fields']['field_newimage']['id'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage']['table'] = 'field_data_field_newimage';
  $handler->display->display_options['fields']['field_newimage']['field'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_newimage']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Field collection item: beeldexpert */
  $handler->display->display_options['fields']['field_beeldexpert']['id'] = 'field_beeldexpert';
  $handler->display->display_options['fields']['field_beeldexpert']['table'] = 'field_data_field_beeldexpert';
  $handler->display->display_options['fields']['field_beeldexpert']['field'] = 'field_beeldexpert';
  $handler->display->display_options['fields']['field_beeldexpert']['label'] = 'Expert';
  $handler->display->display_options['fields']['field_beeldexpert']['settings'] = array(
    'link' => 0,
  );
  /* Filter criterion: Field collection item: status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['value'] = array(
    5 => '5',
    6 => '6',
  );
  $handler->display->display_options['filters']['field_status_value']['group'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'afbeeldingen-verwerkt-all';
  $export['afbeeldingen_verwerkt_all'] = $view;

  $view = new view();
  $view->name = 'afbeeldingen_wacht_all';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'Afbeeldingen wacht all';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Afbeeldingen in de wacht (alles)';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_achternaam' => 'field_achternaam',
    'field_datum' => 'field_datum',
    'field_locatie' => 'field_locatie',
    'field_soort_taxon' => 'field_soort_taxon',
    'field_newimage' => 'field_newimage',
    'name' => 'name',
    'views_bulk_operations' => 'views_bulk_operations',
    'field_status' => 'field_status',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_achternaam' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_datum' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_locatie' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_soort_taxon' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_newimage' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Field collection item: Datum van opname */
  $handler->display->display_options['fields']['field_datum']['id'] = 'field_datum';
  $handler->display->display_options['fields']['field_datum']['table'] = 'field_data_field_datum';
  $handler->display->display_options['fields']['field_datum']['field'] = 'field_datum';
  $handler->display->display_options['fields']['field_datum']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Field collection item: Locatie */
  $handler->display->display_options['fields']['field_locatie']['id'] = 'field_locatie';
  $handler->display->display_options['fields']['field_locatie']['table'] = 'field_data_field_locatie';
  $handler->display->display_options['fields']['field_locatie']['field'] = 'field_locatie';
  /* Field: Field collection item: Soort/taxon */
  $handler->display->display_options['fields']['field_soort_taxon']['id'] = 'field_soort_taxon';
  $handler->display->display_options['fields']['field_soort_taxon']['table'] = 'field_data_field_soort_taxon';
  $handler->display->display_options['fields']['field_soort_taxon']['field'] = 'field_soort_taxon';
  /* Field: Field collection item: Afbeelding */
  $handler->display->display_options['fields']['field_newimage']['id'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage']['table'] = 'field_data_field_newimage';
  $handler->display->display_options['fields']['field_newimage']['field'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_newimage']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Bulk operations: Field collection item */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::beelduitwisselaar_general_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Verwijder geselecteerde beelden',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Toekennen aan expert (selectie in volgende scherm)',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'field_afbeeldingen::field_beeldexpert' => 'field_afbeeldingen::field_beeldexpert',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Field collection item: beeldexpert */
  $handler->display->display_options['fields']['field_beeldexpert']['id'] = 'field_beeldexpert';
  $handler->display->display_options['fields']['field_beeldexpert']['table'] = 'field_data_field_beeldexpert';
  $handler->display->display_options['fields']['field_beeldexpert']['field'] = 'field_beeldexpert';
  $handler->display->display_options['fields']['field_beeldexpert']['label'] = 'Expert';
  $handler->display->display_options['fields']['field_beeldexpert']['settings'] = array(
    'link' => 0,
  );
  /* Field: Field collection item: beeldevaluatie */
  $handler->display->display_options['fields']['field_beeldevaluatie']['id'] = 'field_beeldevaluatie';
  $handler->display->display_options['fields']['field_beeldevaluatie']['table'] = 'field_data_field_beeldevaluatie';
  $handler->display->display_options['fields']['field_beeldevaluatie']['field'] = 'field_beeldevaluatie';
  $handler->display->display_options['fields']['field_beeldevaluatie']['label'] = 'Evaluatie';
  /* Filter criterion: Field collection item: status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['value'] = array(
    4 => '4',
  );
  $handler->display->display_options['filters']['field_status_value']['group'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'afbeeldingen-wacht-all';
  $export['afbeeldingen_wacht_all'] = $view;

  $view = new view();
  $view->name = 'expert_lijst';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Expert lijst';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'User lijst';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: User: Link */
  $handler->display->display_options['fields']['view_user']['id'] = 'view_user';
  $handler->display->display_options['fields']['view_user']['table'] = 'users';
  $handler->display->display_options['fields']['view_user']['field'] = 'view_user';
  $handler->display->display_options['fields']['view_user']['label'] = 'Details';
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    5 => '5',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Expert lijst';
  $handler->display->display_options['path'] = 'beelduitwisselaar-expert';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    4 => '4',
  );
  $handler->display->display_options['path'] = 'beelduitwisselaar-user';
  $export['expert_lijst'] = $view;

  $view = new view();
  $view->name = 'verwijzing_naar_beelduitwisselaar_record';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Verwijzing naar beelduitwisselaar record';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Verwijzing naar beelduitwisselaar record';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'beelduitwisselaar' => 'beelduitwisselaar',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['verwijzing_naar_beelduitwisselaar_record'] = $view;

  return $export;
}
