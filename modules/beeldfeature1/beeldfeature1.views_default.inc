<?php
/**
 * @file
 * beeldfeature1.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function beeldfeature1_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'afbeeldingen_afgekeurd';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'Afbeeldingen afgekeurd';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Afgekeurde beelden';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Zoek';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Opnieuw instellen';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« eerste';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'volgende ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'laatste »';
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
  /* Kop: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="gridright"><a href="/?q=grid-afbeeldingen-afgekeurd">Gridoverzicht</a>: <a href="/?q=grid-afbeeldingen-afgekeurd"><img src="/sites/all/files/icon/grid.png" class="gridiconlarge" border="no" /></a><div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Relationship: Field collection item: Entity with the Afbeeldingen (field_afbeeldingen) */
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['id'] = 'field_afbeeldingen_node';
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['field'] = 'field_afbeeldingen_node';
  /* Veld: Bulk operations: Field collection item */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_field_collection_item';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Verwijder geselecteerde beelden',
    ),
    'action::system_send_email_action' => array(
      'selected' => 1,
      'postpone_processing' => 1,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Verstuur mail',
    ),
  );
  /* Veld: Field collection item: Beeld */
  $handler->display->display_options['fields']['field_newimage']['id'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage']['table'] = 'field_data_field_newimage';
  $handler->display->display_options['fields']['field_newimage']['field'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage']['label'] = '';
  $handler->display->display_options['fields']['field_newimage']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_newimage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_newimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_newimage']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Veld: Field collection item: Beeld */
  $handler->display->display_options['fields']['field_newimage_1']['id'] = 'field_newimage_1';
  $handler->display->display_options['fields']['field_newimage_1']['table'] = 'field_data_field_newimage';
  $handler->display->display_options['fields']['field_newimage_1']['field'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage_1']['label'] = '';
  $handler->display->display_options['fields']['field_newimage_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_newimage_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_newimage_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_newimage_1']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Veld: Broken/missing handler */
  $handler->display->display_options['fields']['lightbox2']['id'] = 'lightbox2';
  $handler->display->display_options['fields']['lightbox2']['table'] = 'lightbox2';
  $handler->display->display_options['fields']['lightbox2']['field'] = 'lightbox2';
  $handler->display->display_options['fields']['lightbox2']['label'] = 'Beeld';
  /* Veld: Field collection item: Datum van opname */
  $handler->display->display_options['fields']['field_datum']['id'] = 'field_datum';
  $handler->display->display_options['fields']['field_datum']['table'] = 'field_data_field_datum';
  $handler->display->display_options['fields']['field_datum']['field'] = 'field_datum';
  $handler->display->display_options['fields']['field_datum']['label'] = 'Datum';
  $handler->display->display_options['fields']['field_datum']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Veld: Veld: Voornaam */
  $handler->display->display_options['fields']['field_voornaam']['id'] = 'field_voornaam';
  $handler->display->display_options['fields']['field_voornaam']['table'] = 'field_data_field_voornaam';
  $handler->display->display_options['fields']['field_voornaam']['field'] = 'field_voornaam';
  $handler->display->display_options['fields']['field_voornaam']['relationship'] = 'field_afbeeldingen_node';
  $handler->display->display_options['fields']['field_voornaam']['label'] = '';
  $handler->display->display_options['fields']['field_voornaam']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_voornaam']['element_label_colon'] = FALSE;
  /* Veld: Veld: Achternaam */
  $handler->display->display_options['fields']['field_achternaam']['id'] = 'field_achternaam';
  $handler->display->display_options['fields']['field_achternaam']['table'] = 'field_data_field_achternaam';
  $handler->display->display_options['fields']['field_achternaam']['field'] = 'field_achternaam';
  $handler->display->display_options['fields']['field_achternaam']['relationship'] = 'field_afbeeldingen_node';
  $handler->display->display_options['fields']['field_achternaam']['label'] = '';
  $handler->display->display_options['fields']['field_achternaam']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_achternaam']['element_label_colon'] = FALSE;
  /* Veld: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Fotograaf';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_achternaam], [field_voornaam]';
  /* Veld: Field collection item: Soort/taxon */
  $handler->display->display_options['fields']['field_soort_taxon']['id'] = 'field_soort_taxon';
  $handler->display->display_options['fields']['field_soort_taxon']['table'] = 'field_data_field_soort_taxon';
  $handler->display->display_options['fields']['field_soort_taxon']['field'] = 'field_soort_taxon';
  /* Veld: Field collection item: Validator */
  $handler->display->display_options['fields']['field_beeldexpert']['id'] = 'field_beeldexpert';
  $handler->display->display_options['fields']['field_beeldexpert']['table'] = 'field_data_field_beeldexpert';
  $handler->display->display_options['fields']['field_beeldexpert']['field'] = 'field_beeldexpert';
  $handler->display->display_options['fields']['field_beeldexpert']['label'] = 'Expert';
  $handler->display->display_options['fields']['field_beeldexpert']['settings'] = array(
    'link' => 0,
  );
  /* Veld: Field collection item: status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['label'] = 'Status';
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
  $handler->display->display_options['path'] = 'afbeeldingen-afgekeurd';
  $translatables['afbeeldingen_afgekeurd'] = array(
    t('Master'),
    t('Afgekeurde beelden'),
    t('more'),
    t('Zoek'),
    t('Opnieuw instellen'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« eerste'),
    t('‹ vorige'),
    t('volgende ›'),
    t('laatste »'),
    t('<div class="gridright"><a href="/?q=grid-afbeeldingen-afgekeurd">Gridoverzicht</a>: <a href="/?q=grid-afbeeldingen-afgekeurd"><img src="/sites/all/files/icon/grid.png" class="gridiconlarge" border="no" /></a><div>'),
    t('field_afbeeldingen'),
    t('- Selecteer een actie -'),
    t('Verwijder geselecteerde beelden'),
    t('Verstuur mail'),
    t('Verander expert / Plaats in wachtrij'),
    t('Beeld'),
    t('Datum'),
    t('Fotograaf'),
    t('[field_achternaam], [field_voornaam]'),
    t('Soort/taxon'),
    t('Expert'),
    t('Status'),
    t('Page'),
  );
  $export['afbeeldingen_afgekeurd'] = $view;

  $view = new view();
  $view->name = 'afbeeldingen_goedgekeurd';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'Afbeeldingen goedgekeurd';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Goedgekeurde beelden';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Zoek';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Opnieuw instellen';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« eerste';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'volgende ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'laatste »';
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
  /* Kop: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="gridright"><a href="/?q=grid-afbeeldingen-goedgekeurd">Gridoverzicht</a>: <a href="/?q=grid-afbeeldingen-goedgekeurd"><img src="/sites/all/files/icon/grid.png" class="gridiconlarge" border="no" /></a><div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Relationship: Field collection item: Entity with the Afbeeldingen (field_afbeeldingen) */
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['id'] = 'field_afbeeldingen_node';
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['field'] = 'field_afbeeldingen_node';
  /* Veld: Bulk operations: Field collection item */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_field_collection_item';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::beelduitwisselaar_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Beeld(en) publiceren',
    ),
    'action::system_send_email_action' => array(
      'selected' => 1,
      'postpone_processing' => 1,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Verstuur mail',
    ),
  );
  /* Veld: Field collection item: Beeld */
  $handler->display->display_options['fields']['field_newimage']['id'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage']['table'] = 'field_data_field_newimage';
  $handler->display->display_options['fields']['field_newimage']['field'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage']['label'] = '';
  $handler->display->display_options['fields']['field_newimage']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_newimage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_newimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_newimage']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Veld: Field collection item: Beeld */
  $handler->display->display_options['fields']['field_newimage_1']['id'] = 'field_newimage_1';
  $handler->display->display_options['fields']['field_newimage_1']['table'] = 'field_data_field_newimage';
  $handler->display->display_options['fields']['field_newimage_1']['field'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage_1']['label'] = '';
  $handler->display->display_options['fields']['field_newimage_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_newimage_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_newimage_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_newimage_1']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Veld: Broken/missing handler */
  $handler->display->display_options['fields']['lightbox2']['id'] = 'lightbox2';
  $handler->display->display_options['fields']['lightbox2']['table'] = 'lightbox2';
  $handler->display->display_options['fields']['lightbox2']['field'] = 'lightbox2';
  $handler->display->display_options['fields']['lightbox2']['label'] = 'Beeld';
  /* Veld: Field collection item: Datum van opname */
  $handler->display->display_options['fields']['field_datum']['id'] = 'field_datum';
  $handler->display->display_options['fields']['field_datum']['table'] = 'field_data_field_datum';
  $handler->display->display_options['fields']['field_datum']['field'] = 'field_datum';
  $handler->display->display_options['fields']['field_datum']['label'] = 'Datum';
  $handler->display->display_options['fields']['field_datum']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Veld: Veld: Voornaam */
  $handler->display->display_options['fields']['field_voornaam']['id'] = 'field_voornaam';
  $handler->display->display_options['fields']['field_voornaam']['table'] = 'field_data_field_voornaam';
  $handler->display->display_options['fields']['field_voornaam']['field'] = 'field_voornaam';
  $handler->display->display_options['fields']['field_voornaam']['relationship'] = 'field_afbeeldingen_node';
  $handler->display->display_options['fields']['field_voornaam']['label'] = '';
  $handler->display->display_options['fields']['field_voornaam']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_voornaam']['element_label_colon'] = FALSE;
  /* Veld: Veld: Achternaam */
  $handler->display->display_options['fields']['field_achternaam']['id'] = 'field_achternaam';
  $handler->display->display_options['fields']['field_achternaam']['table'] = 'field_data_field_achternaam';
  $handler->display->display_options['fields']['field_achternaam']['field'] = 'field_achternaam';
  $handler->display->display_options['fields']['field_achternaam']['relationship'] = 'field_afbeeldingen_node';
  $handler->display->display_options['fields']['field_achternaam']['label'] = '';
  $handler->display->display_options['fields']['field_achternaam']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_achternaam']['element_label_colon'] = FALSE;
  /* Veld: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Fotograaf';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_achternaam], [field_voornaam]';
  /* Veld: Field collection item: Soort/taxon */
  $handler->display->display_options['fields']['field_soort_taxon']['id'] = 'field_soort_taxon';
  $handler->display->display_options['fields']['field_soort_taxon']['table'] = 'field_data_field_soort_taxon';
  $handler->display->display_options['fields']['field_soort_taxon']['field'] = 'field_soort_taxon';
  /* Veld: Field collection item: Validator */
  $handler->display->display_options['fields']['field_beeldexpert']['id'] = 'field_beeldexpert';
  $handler->display->display_options['fields']['field_beeldexpert']['table'] = 'field_data_field_beeldexpert';
  $handler->display->display_options['fields']['field_beeldexpert']['field'] = 'field_beeldexpert';
  $handler->display->display_options['fields']['field_beeldexpert']['label'] = 'Expert';
  $handler->display->display_options['fields']['field_beeldexpert']['settings'] = array(
    'link' => 0,
  );
  /* Veld: Field collection item: status */
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
  );
  $handler->display->display_options['filters']['field_status_value']['group'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'afbeeldingen-goedgekeurd';
  $translatables['afbeeldingen_goedgekeurd'] = array(
    t('Master'),
    t('Goedgekeurde beelden'),
    t('more'),
    t('Zoek'),
    t('Opnieuw instellen'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« eerste'),
    t('‹ vorige'),
    t('volgende ›'),
    t('laatste »'),
    t('<div class="gridright"><a href="/?q=grid-afbeeldingen-goedgekeurd">Gridoverzicht</a>: <a href="/?q=grid-afbeeldingen-goedgekeurd"><img src="/sites/all/files/icon/grid.png" class="gridiconlarge" border="no" /></a><div>'),
    t('field_afbeeldingen'),
    t('- Selecteer een actie -'),
    t('Beeld(en) publiceren'),
    t('Verwijder geselecteerde beelden'),
    t('Verstuur mail'),
    t('Publiceren'),
    t('Beeld'),
    t('Datum'),
    t('Fotograaf'),
    t('[field_achternaam], [field_voornaam]'),
    t('Soort/taxon'),
    t('Expert'),
    t('Status'),
    t('Page'),
  );
  $export['afbeeldingen_goedgekeurd'] = $view;

  $view = new view();
  $view->name = 'afbeeldingen_wachtrij';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'Afbeeldingen wachtrij';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Beelden in wachtrij';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Opnieuw instellen';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« eerste';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'volgende ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'laatste »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'url' => 'url',
    'views_bulk_operations' => 'views_bulk_operations',
    'field_newimage_1' => 'field_newimage_1',
    'field_created' => 'field_created',
    'field_voornaam' => 'field_voornaam',
    'field_achternaam' => 'field_achternaam',
    'nothing' => 'nothing',
    'field_voornaam_1' => 'field_voornaam_1',
    'field_achternaam_1' => 'field_achternaam_1',
    'field_groep' => 'field_groep',
    'field_beeldevaluatie' => 'field_beeldevaluatie',
  );
  $handler->display->display_options['style_options']['default'] = 'field_created';
  $handler->display->display_options['style_options']['info'] = array(
    'url' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_newimage_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_created' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_voornaam' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_achternaam' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_voornaam_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_achternaam_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_groep' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_beeldevaluatie' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Kop: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="gridright"><a href="/?q=grid-afbeeldingen-wachtrij">Gridoverzicht</a>: <a href="/?q=grid-afbeeldingen-wachtrij"><img src="/sites/all/files/icon/grid.png" class="gridiconlarge" border="no" /></a><div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Relationship: Field collection item: Entity with the Afbeeldingen (field_afbeeldingen) */
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['id'] = 'field_afbeeldingen_node';
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['field'] = 'field_afbeeldingen_node';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_beeldexpert_target_id']['id'] = 'field_beeldexpert_target_id';
  $handler->display->display_options['relationships']['field_beeldexpert_target_id']['table'] = 'field_data_field_beeldexpert';
  $handler->display->display_options['relationships']['field_beeldexpert_target_id']['field'] = 'field_beeldexpert_target_id';
  /* Relationship: Field collection item: Soortgroep (field_groep) */
  $handler->display->display_options['relationships']['field_groep_tid']['id'] = 'field_groep_tid';
  $handler->display->display_options['relationships']['field_groep_tid']['table'] = 'field_data_field_groep';
  $handler->display->display_options['relationships']['field_groep_tid']['field'] = 'field_groep_tid';
  /* Veld: Field collection item: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'views_entity_field_collection_item';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['url']['alter']['text'] = '[url]/edit';
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Veld: Bulk operations: Field collection item */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_field_collection_item';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Verwijder geselecteerde beelden',
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 1,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Beeld(en) toekennen aan validator',
      'settings' => array(
        'url' => 'beelduitwisselaar/selectexpertise',
      ),
    ),
  );
  /* Veld: Field collection item: Beeld */
  $handler->display->display_options['fields']['field_newimage_1']['id'] = 'field_newimage_1';
  $handler->display->display_options['fields']['field_newimage_1']['table'] = 'field_data_field_newimage';
  $handler->display->display_options['fields']['field_newimage_1']['field'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_newimage_1']['alter']['text'] = '<a href="[url]">[field_newimage_1]</a>';
  $handler->display->display_options['fields']['field_newimage_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_newimage_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_newimage_1']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Veld: Field collection item: Datum insturen */
  $handler->display->display_options['fields']['field_created']['id'] = 'field_created';
  $handler->display->display_options['fields']['field_created']['table'] = 'field_data_field_created';
  $handler->display->display_options['fields']['field_created']['field'] = 'field_created';
  $handler->display->display_options['fields']['field_created']['settings'] = array(
    'format_type' => 'superkort',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Veld: Veld: Voornaam */
  $handler->display->display_options['fields']['field_voornaam']['id'] = 'field_voornaam';
  $handler->display->display_options['fields']['field_voornaam']['table'] = 'field_data_field_voornaam';
  $handler->display->display_options['fields']['field_voornaam']['field'] = 'field_voornaam';
  $handler->display->display_options['fields']['field_voornaam']['relationship'] = 'field_afbeeldingen_node';
  $handler->display->display_options['fields']['field_voornaam']['label'] = '';
  $handler->display->display_options['fields']['field_voornaam']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_voornaam']['element_label_colon'] = FALSE;
  /* Veld: Veld: Achternaam */
  $handler->display->display_options['fields']['field_achternaam']['id'] = 'field_achternaam';
  $handler->display->display_options['fields']['field_achternaam']['table'] = 'field_data_field_achternaam';
  $handler->display->display_options['fields']['field_achternaam']['field'] = 'field_achternaam';
  $handler->display->display_options['fields']['field_achternaam']['relationship'] = 'field_afbeeldingen_node';
  $handler->display->display_options['fields']['field_achternaam']['label'] = '';
  $handler->display->display_options['fields']['field_achternaam']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_achternaam']['element_label_colon'] = FALSE;
  /* Veld: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Fotograaf';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/search/node/[field_achternaam] [field_voornaam]">[field_achternaam], [field_voornaam]</a>';
  /* Veld: Veld: Voornaam */
  $handler->display->display_options['fields']['field_voornaam_1']['id'] = 'field_voornaam_1';
  $handler->display->display_options['fields']['field_voornaam_1']['table'] = 'field_data_field_voornaam';
  $handler->display->display_options['fields']['field_voornaam_1']['field'] = 'field_voornaam';
  $handler->display->display_options['fields']['field_voornaam_1']['relationship'] = 'field_beeldexpert_target_id';
  $handler->display->display_options['fields']['field_voornaam_1']['exclude'] = TRUE;
  /* Veld: Veld: Achternaam */
  $handler->display->display_options['fields']['field_achternaam_1']['id'] = 'field_achternaam_1';
  $handler->display->display_options['fields']['field_achternaam_1']['table'] = 'field_data_field_achternaam';
  $handler->display->display_options['fields']['field_achternaam_1']['field'] = 'field_achternaam';
  $handler->display->display_options['fields']['field_achternaam_1']['relationship'] = 'field_beeldexpert_target_id';
  $handler->display->display_options['fields']['field_achternaam_1']['label'] = 'Validator';
  $handler->display->display_options['fields']['field_achternaam_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_achternaam_1']['alter']['text'] = '<a href="/search/node/[field_achternaam_1] [field_voornaam_1]">[field_achternaam_1], [field_voornaam_1]</a>';
  /* Veld: Field collection item: Soortgroep */
  $handler->display->display_options['fields']['field_groep']['id'] = 'field_groep';
  $handler->display->display_options['fields']['field_groep']['table'] = 'field_data_field_groep';
  $handler->display->display_options['fields']['field_groep']['field'] = 'field_groep';
  $handler->display->display_options['fields']['field_groep']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_groep']['alter']['text'] = '<a href="/search/node/[field_groep]">[field_groep]</a>';
  $handler->display->display_options['fields']['field_groep']['type'] = 'taxonomy_term_reference_plain';
  /* Veld: Field collection item: Opmerking validator */
  $handler->display->display_options['fields']['field_beeldevaluatie']['id'] = 'field_beeldevaluatie';
  $handler->display->display_options['fields']['field_beeldevaluatie']['table'] = 'field_data_field_beeldevaluatie';
  $handler->display->display_options['fields']['field_beeldevaluatie']['field'] = 'field_beeldevaluatie';
  /* Veld: Taxonomieterm: Naam */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_groep_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Sort criterion: Field collection item: Datum insturen (field_created) */
  $handler->display->display_options['sorts']['field_created_value']['id'] = 'field_created_value';
  $handler->display->display_options['sorts']['field_created_value']['table'] = 'field_data_field_created';
  $handler->display->display_options['sorts']['field_created_value']['field'] = 'field_created_value';
  $handler->display->display_options['sorts']['field_created_value']['order'] = 'DESC';
  /* Sort criterion: Inhoud: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['relationship'] = 'field_afbeeldingen_node';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Filter criterion: Field collection item: status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['value'] = array(
    4 => '4',
  );
  $handler->display->display_options['filters']['field_status_value']['group'] = 1;
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Filter resultaten:';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'field_newimage_1' => 'field_newimage_1',
    'field_voornaam' => 'field_voornaam',
    'field_achternaam' => 'field_achternaam',
    'field_voornaam_1' => 'field_voornaam_1',
    'field_achternaam_1' => 'field_achternaam_1',
    'field_groep' => 'field_groep',
    'field_beeldevaluatie' => 'field_beeldevaluatie',
    'name' => 'name',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'afbeeldingen-wachtrij';
  $translatables['afbeeldingen_wachtrij'] = array(
    t('Master'),
    t('Beelden in wachtrij'),
    t('more'),
    t('Filter'),
    t('Opnieuw instellen'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« eerste'),
    t('‹ vorige'),
    t('volgende ›'),
    t('laatste »'),
    t('<div class="gridright"><a href="/?q=grid-afbeeldingen-wachtrij">Gridoverzicht</a>: <a href="/?q=grid-afbeeldingen-wachtrij"><img src="/sites/all/files/icon/grid.png" class="gridiconlarge" border="no" /></a><div>'),
    t('field_afbeeldingen'),
    t('Gebruiker entity referenced from field_beeldexpert'),
    t('term from field_groep'),
    t('[url]/edit'),
    t('- Selecteer een actie -'),
    t('Verwijder geselecteerde beelden'),
    t('Beeld(en) toekennen aan validator'),
    t('Beeld'),
    t('<a href="[url]">[field_newimage_1]</a>'),
    t('Datum insturen'),
    t('Fotograaf'),
    t('<a href="/search/node/[field_achternaam] [field_voornaam]">[field_achternaam], [field_voornaam]</a>'),
    t('Voornaam'),
    t('Validator'),
    t('<a href="/search/node/[field_achternaam_1] [field_voornaam_1]">[field_achternaam_1], [field_voornaam_1]</a>'),
    t('Soortgroep'),
    t('<a href="/search/node/[field_groep]">[field_groep]</a>'),
    t('Opmerking validator'),
    t('Filter resultaten:'),
    t('Page'),
  );
  $export['afbeeldingen_wachtrij'] = $view;

  $view = new view();
  $view->name = 'clone_of_grid_afbeeldingen_goedgekeurd';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'grid-Afbeeldingen goedgekeurd';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Goedgekeurde beelden';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Zoek';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Opnieuw instellen';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '70';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« eerste';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'volgende ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'laatste »';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '7';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Kop: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="gridright"><a href="/?q=afbeeldingen-goedgekeurd">Tabeloverzicht</a>: <a href="/?q=afbeeldingen-goedgekeurd"><img src="/sites/all/files/icon/details.png" class="gridiconlarge" border="no" /></a><div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Relationship: Field collection item: Entity with the Afbeeldingen (field_afbeeldingen) */
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['id'] = 'field_afbeeldingen_node';
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['field'] = 'field_afbeeldingen_node';
  /* Veld: Field collection item: Beeld */
  $handler->display->display_options['fields']['field_newimage']['id'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage']['table'] = 'field_data_field_newimage';
  $handler->display->display_options['fields']['field_newimage']['field'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage']['label'] = '';
  $handler->display->display_options['fields']['field_newimage']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_newimage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_newimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_newimage']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Veld: Field collection item: Beeld */
  $handler->display->display_options['fields']['field_newimage_1']['id'] = 'field_newimage_1';
  $handler->display->display_options['fields']['field_newimage_1']['table'] = 'field_data_field_newimage';
  $handler->display->display_options['fields']['field_newimage_1']['field'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage_1']['label'] = '';
  $handler->display->display_options['fields']['field_newimage_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_newimage_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_newimage_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_newimage_1']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Veld: Broken/missing handler */
  $handler->display->display_options['fields']['lightbox2']['id'] = 'lightbox2';
  $handler->display->display_options['fields']['lightbox2']['table'] = 'lightbox2';
  $handler->display->display_options['fields']['lightbox2']['field'] = 'lightbox2';
  $handler->display->display_options['fields']['lightbox2']['label'] = '';
  $handler->display->display_options['fields']['lightbox2']['element_label_colon'] = FALSE;
  /* Veld: Bulk operations: Field collection item */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_field_collection_item';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::system_send_email_action' => array(
      'selected' => 1,
      'postpone_processing' => 1,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Verstuur mail',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Verander expert / Plaats in wachtrij',
      'settings' => array(
        'show_all_tokens' => 0,
        'display_values' => array(
          'field_afbeeldingen::field_beeldexpert' => 'field_afbeeldingen::field_beeldexpert',
          'field_afbeeldingen::field_status' => 'field_afbeeldingen::field_status',
        ),
      ),
    ),
  );
  /* Veld: Field collection item: status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['label'] = '';
  $handler->display->display_options['fields']['field_status']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_status']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['path'] = 'grid-afbeeldingen-goedgekeurd';
  $translatables['clone_of_grid_afbeeldingen_goedgekeurd'] = array(
    t('Master'),
    t('Goedgekeurde beelden'),
    t('more'),
    t('Zoek'),
    t('Opnieuw instellen'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« eerste'),
    t('‹ vorige'),
    t('volgende ›'),
    t('laatste »'),
    t('<div class="gridright"><a href="/?q=afbeeldingen-goedgekeurd">Tabeloverzicht</a>: <a href="/?q=afbeeldingen-goedgekeurd"><img src="/sites/all/files/icon/details.png" class="gridiconlarge" border="no" /></a><div>'),
    t('field_afbeeldingen'),
    t('- Selecteer een actie -'),
    t('Verwijder geselecteerde beelden'),
    t('Verstuur mail'),
    t('Verander expert / Plaats in wachtrij'),
    t('Page'),
  );
  $export['clone_of_grid_afbeeldingen_goedgekeurd'] = $view;

  $view = new view();
  $view->name = 'email_fotograaf';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Email fotograaf';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Lijst fotografen';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Zoek';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Opnieuw instellen';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '90';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« eerste';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'volgende ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'laatste »';
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
  /* Veld: Bulk operations: Gebruiker */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_user';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = 'E-mailadres';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::system_send_email_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Veld: Veld: Voornaam */
  $handler->display->display_options['fields']['field_voornaam']['id'] = 'field_voornaam';
  $handler->display->display_options['fields']['field_voornaam']['table'] = 'field_data_field_voornaam';
  $handler->display->display_options['fields']['field_voornaam']['field'] = 'field_voornaam';
  $handler->display->display_options['fields']['field_voornaam']['label'] = '';
  $handler->display->display_options['fields']['field_voornaam']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_voornaam']['element_label_colon'] = FALSE;
  /* Veld: Veld: Achternaam */
  $handler->display->display_options['fields']['field_achternaam']['id'] = 'field_achternaam';
  $handler->display->display_options['fields']['field_achternaam']['table'] = 'field_data_field_achternaam';
  $handler->display->display_options['fields']['field_achternaam']['field'] = 'field_achternaam';
  $handler->display->display_options['fields']['field_achternaam']['label'] = '';
  $handler->display->display_options['fields']['field_achternaam']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_achternaam']['element_label_colon'] = FALSE;
  /* Veld: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Fotograaf';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_achternaam], [field_voornaam]';
  /* Veld: Gebruiker: E-mailadres */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  /* Veld: Gebruiker: Link */
  $handler->display->display_options['fields']['view_user']['id'] = 'view_user';
  $handler->display->display_options['fields']['view_user']['table'] = 'users';
  $handler->display->display_options['fields']['view_user']['field'] = 'view_user';
  $handler->display->display_options['fields']['view_user']['label'] = 'Details';
  /* Sort criterion: Veld: Achternaam (field_achternaam) */
  $handler->display->display_options['sorts']['field_achternaam_value']['id'] = 'field_achternaam_value';
  $handler->display->display_options['sorts']['field_achternaam_value']['table'] = 'field_data_field_achternaam';
  $handler->display->display_options['sorts']['field_achternaam_value']['field'] = 'field_achternaam_value';
  /* Sort criterion: Veld: Voornaam (field_voornaam) */
  $handler->display->display_options['sorts']['field_voornaam_value']['id'] = 'field_voornaam_value';
  $handler->display->display_options['sorts']['field_voornaam_value']['table'] = 'field_data_field_voornaam';
  $handler->display->display_options['sorts']['field_voornaam_value']['field'] = 'field_voornaam_value';
  /* Sort criterion: Gebruiker: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Gebruiker: Actief */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Gebruiker: Rollen */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    5 => '5',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Gebruiker: Actief */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Gebruiker: Rollen */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    4 => '4',
  );
  $handler->display->display_options['path'] = 'email-fotograaf';
  $translatables['email_fotograaf'] = array(
    t('Master'),
    t('Lijst fotografen'),
    t('more'),
    t('Zoek'),
    t('Opnieuw instellen'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« eerste'),
    t('‹ vorige'),
    t('volgende ›'),
    t('laatste »'),
    t('E-mailadres'),
    t('- Selecteer een actie -'),
    t('Fotograaf'),
    t('[field_achternaam], [field_voornaam]'),
    t('Details'),
    t('Page'),
  );
  $export['email_fotograaf'] = $view;

  $view = new view();
  $view->name = 'expert_selectie';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'beeldexpert';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Zoek';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Opnieuw instellen';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« eerste';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'volgende ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'laatste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Veld: Gebruiker: Naam */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Sort criterion: Gebruiker: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Gebruiker: Actief */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Gebruiker: Rollen */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    5 => '5',
  );

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['expert_selectie'] = array(
    t('Master'),
    t('more'),
    t('Zoek'),
    t('Opnieuw instellen'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« eerste'),
    t('‹ vorige'),
    t('volgende ›'),
    t('laatste »'),
    t('Entity Reference'),
  );
  $export['expert_selectie'] = $view;

  $view = new view();
  $view->name = 'expertusers';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'expertusers';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Zoek';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Opnieuw instellen';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« eerste';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'volgende ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'laatste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Veld: Veld: Achternaam */
  $handler->display->display_options['fields']['field_achternaam']['id'] = 'field_achternaam';
  $handler->display->display_options['fields']['field_achternaam']['table'] = 'field_data_field_achternaam';
  $handler->display->display_options['fields']['field_achternaam']['field'] = 'field_achternaam';
  $handler->display->display_options['fields']['field_achternaam']['label'] = '';
  $handler->display->display_options['fields']['field_achternaam']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_achternaam']['element_label_colon'] = FALSE;
  /* Veld: Veld: Voornaam */
  $handler->display->display_options['fields']['field_voornaam']['id'] = 'field_voornaam';
  $handler->display->display_options['fields']['field_voornaam']['table'] = 'field_data_field_voornaam';
  $handler->display->display_options['fields']['field_voornaam']['field'] = 'field_voornaam';
  $handler->display->display_options['fields']['field_voornaam']['label'] = '';
  $handler->display->display_options['fields']['field_voornaam']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_voornaam']['alter']['text'] = '[field_achternaam], [field_voornaam]';
  $handler->display->display_options['fields']['field_voornaam']['element_label_colon'] = FALSE;
  /* Veld: Gebruiker: Specialisatie */
  $handler->display->display_options['fields']['field_specialisatie']['id'] = 'field_specialisatie';
  $handler->display->display_options['fields']['field_specialisatie']['table'] = 'field_data_field_specialisatie';
  $handler->display->display_options['fields']['field_specialisatie']['field'] = 'field_specialisatie';
  $handler->display->display_options['fields']['field_specialisatie']['label'] = '';
  $handler->display->display_options['fields']['field_specialisatie']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_specialisatie']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_specialisatie']['delta_offset'] = '0';
  /* Veld: Gebruiker: Naam */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Sort criterion: Veld: Achternaam (field_achternaam) */
  $handler->display->display_options['sorts']['field_achternaam_value']['id'] = 'field_achternaam_value';
  $handler->display->display_options['sorts']['field_achternaam_value']['table'] = 'field_data_field_achternaam';
  $handler->display->display_options['sorts']['field_achternaam_value']['field'] = 'field_achternaam_value';
  /* Sort criterion: Gebruiker: Specialisatie (field_specialisatie) */
  $handler->display->display_options['sorts']['field_specialisatie_tid']['id'] = 'field_specialisatie_tid';
  $handler->display->display_options['sorts']['field_specialisatie_tid']['table'] = 'field_data_field_specialisatie';
  $handler->display->display_options['sorts']['field_specialisatie_tid']['field'] = 'field_specialisatie_tid';
  $handler->display->display_options['sorts']['field_specialisatie_tid']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_specialisatie_tid']['expose']['label'] = 'Specialisatie (field_specialisatie)';
  /* Filter criterion: Gebruiker: Actief */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Gebruiker: Rollen */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    5 => '5',
  );

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'name' => 'name',
    'field_specialisatie' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['expertusers'] = array(
    t('Master'),
    t('more'),
    t('Zoek'),
    t('Opnieuw instellen'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« eerste'),
    t('‹ vorige'),
    t('volgende ›'),
    t('laatste »'),
    t('[field_achternaam], [field_voornaam]'),
    t('Specialisatie (field_specialisatie)'),
    t('Entity Reference'),
  );
  $export['expertusers'] = $view;

  $view = new view();
  $view->name = 'grid_afbeeldingen';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'grid-afbeeldingen';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Nieuwe beelden';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Zoek';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Opnieuw instellen';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '70';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« eerste';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'volgende ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'laatste »';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '7';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Kop: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="gridright"><a href="/?q=afbeeldingen">Tabeloverzicht</a>: <a href="/?q=afbeeldingen"><img src="/sites/all/files/icon/details.png" class="gridiconlarge" border="no" /></a><div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Relationship: Field collection item: Entity with the Afbeeldingen (field_afbeeldingen) */
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['id'] = 'field_afbeeldingen_node';
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['field'] = 'field_afbeeldingen_node';
  /* Veld: Field collection item: Beeld */
  $handler->display->display_options['fields']['field_newimage']['id'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage']['table'] = 'field_data_field_newimage';
  $handler->display->display_options['fields']['field_newimage']['field'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage']['label'] = '';
  $handler->display->display_options['fields']['field_newimage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_newimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_newimage']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Veld: Bulk operations: Field collection item */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_field_collection_item';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
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
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Toekennen aan expert (selectie in volgende scherm)',
      'settings' => array(
        'show_all_tokens' => 0,
        'display_values' => array(
          'field_afbeeldingen::field_beeldexpert' => 'field_afbeeldingen::field_beeldexpert',
        ),
      ),
    ),
  );
  /* Sort criterion: Field collection item: Datum van opname (field_datum) */
  $handler->display->display_options['sorts']['field_datum_value']['id'] = 'field_datum_value';
  $handler->display->display_options['sorts']['field_datum_value']['table'] = 'field_data_field_datum';
  $handler->display->display_options['sorts']['field_datum_value']['field'] = 'field_datum_value';
  $handler->display->display_options['sorts']['field_datum_value']['order'] = 'DESC';
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
  $handler->display->display_options['path'] = 'grid-afbeeldingen';
  $translatables['grid_afbeeldingen'] = array(
    t('Master'),
    t('Nieuwe beelden'),
    t('more'),
    t('Zoek'),
    t('Opnieuw instellen'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« eerste'),
    t('‹ vorige'),
    t('volgende ›'),
    t('laatste »'),
    t('<div class="gridright"><a href="/?q=afbeeldingen">Tabeloverzicht</a>: <a href="/?q=afbeeldingen"><img src="/sites/all/files/icon/details.png" class="gridiconlarge" border="no" /></a><div>'),
    t('field_afbeeldingen'),
    t('- Selecteer een actie -'),
    t('Stuur email'),
    t('Verwijder geselecteerde beelden'),
    t('Toekennen aan expert (selectie in volgende scherm)'),
    t('Page'),
  );
  $export['grid_afbeeldingen'] = $view;

  $view = new view();
  $view->name = 'grid_afbeeldingen_afgekeurd';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'grid-Afbeeldingen afgekeurd';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Afgekeurde beelden';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Zoek';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Opnieuw instellen';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '70';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« eerste';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'volgende ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'laatste »';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '7';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Kop: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="gridright"><a href="/?q=afbeeldingen-afgekeurd">Tabeloverzicht</a>: <a href="/?q=afbeeldingen-afgekeurd"><img src="/sites/all/files/icon/details.png" class="gridiconlarge" border="no" /></a><div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Relationship: Field collection item: Entity with the Afbeeldingen (field_afbeeldingen) */
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['id'] = 'field_afbeeldingen_node';
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['field'] = 'field_afbeeldingen_node';
  /* Veld: Field collection item: Beeld */
  $handler->display->display_options['fields']['field_newimage']['id'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage']['table'] = 'field_data_field_newimage';
  $handler->display->display_options['fields']['field_newimage']['field'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage']['label'] = '';
  $handler->display->display_options['fields']['field_newimage']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_newimage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_newimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_newimage']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Veld: Field collection item: Beeld */
  $handler->display->display_options['fields']['field_newimage_1']['id'] = 'field_newimage_1';
  $handler->display->display_options['fields']['field_newimage_1']['table'] = 'field_data_field_newimage';
  $handler->display->display_options['fields']['field_newimage_1']['field'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage_1']['label'] = '';
  $handler->display->display_options['fields']['field_newimage_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_newimage_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_newimage_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_newimage_1']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Veld: Broken/missing handler */
  $handler->display->display_options['fields']['lightbox2']['id'] = 'lightbox2';
  $handler->display->display_options['fields']['lightbox2']['table'] = 'lightbox2';
  $handler->display->display_options['fields']['lightbox2']['field'] = 'lightbox2';
  $handler->display->display_options['fields']['lightbox2']['label'] = '';
  $handler->display->display_options['fields']['lightbox2']['element_label_colon'] = FALSE;
  /* Veld: Bulk operations: Field collection item */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_field_collection_item';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::system_send_email_action' => array(
      'selected' => 1,
      'postpone_processing' => 1,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Verstuur mail',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Verander expert / Plaats in wachtrij',
      'settings' => array(
        'show_all_tokens' => 0,
        'display_values' => array(
          'field_afbeeldingen::field_beeldexpert' => 'field_afbeeldingen::field_beeldexpert',
          'field_afbeeldingen::field_status' => 'field_afbeeldingen::field_status',
        ),
      ),
    ),
  );
  /* Veld: Field collection item: status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['label'] = '';
  $handler->display->display_options['fields']['field_status']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_status']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['path'] = 'grid-afbeeldingen-afgekeurd';
  $translatables['grid_afbeeldingen_afgekeurd'] = array(
    t('Master'),
    t('Afgekeurde beelden'),
    t('more'),
    t('Zoek'),
    t('Opnieuw instellen'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« eerste'),
    t('‹ vorige'),
    t('volgende ›'),
    t('laatste »'),
    t('<div class="gridright"><a href="/?q=afbeeldingen-afgekeurd">Tabeloverzicht</a>: <a href="/?q=afbeeldingen-afgekeurd"><img src="/sites/all/files/icon/details.png" class="gridiconlarge" border="no" /></a><div>'),
    t('field_afbeeldingen'),
    t('- Selecteer een actie -'),
    t('Verwijder geselecteerde beelden'),
    t('Verstuur mail'),
    t('Verander expert / Plaats in wachtrij'),
    t('Page'),
  );
  $export['grid_afbeeldingen_afgekeurd'] = $view;

  $view = new view();
  $view->name = 'grid_afbeeldingen_geevalueerd_all';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'grid-Afbeeldingen geevalueerd all';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Gevalideerde beelden';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Zoek';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Opnieuw instellen';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '70';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« eerste';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'volgende ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'laatste »';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_status',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = '7';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Kop: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="gridright"><a href="/?q=afbeeldingen-geevalueerd-all">Tabeloverzicht</a>: <a href="/?q=afbeeldingen-geevalueerd-all"><img src="/sites/all/files/icon/details.png" class="gridiconlarge" border="no" /></a><div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Relationship: Field collection item: Entity with the Afbeeldingen (field_afbeeldingen) */
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['id'] = 'field_afbeeldingen_node';
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['field'] = 'field_afbeeldingen_node';
  /* Veld: Field collection item: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'views_entity_field_collection_item';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['url']['alter']['text'] = '[url]/edit';
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Veld: Field collection item: Beeld */
  $handler->display->display_options['fields']['field_newimage_1']['id'] = 'field_newimage_1';
  $handler->display->display_options['fields']['field_newimage_1']['table'] = 'field_data_field_newimage';
  $handler->display->display_options['fields']['field_newimage_1']['field'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage_1']['label'] = '';
  $handler->display->display_options['fields']['field_newimage_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_newimage_1']['alter']['text'] = '<a href="[url]">[field_newimage_1]</a>';
  $handler->display->display_options['fields']['field_newimage_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_newimage_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_newimage_1']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Veld: Bulk operations: Field collection item */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_field_collection_item';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 1,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Beeld(en) toekennen aan validator / wachtrij',
      'settings' => array(
        'url' => 'beelduitwisselaar/selectexpertise',
      ),
    ),
  );
  /* Veld: Field collection item: status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['label'] = '';
  $handler->display->display_options['fields']['field_status']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_status']['element_label_colon'] = FALSE;
  /* Filter criterion: Field collection item: status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['value'] = array(
    2 => '2',
    3 => '3',
  );
  $handler->display->display_options['filters']['field_status_value']['group'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'grid-afbeeldingen-geevalueerd-all';
  $translatables['grid_afbeeldingen_geevalueerd_all'] = array(
    t('Master'),
    t('Gevalideerde beelden'),
    t('more'),
    t('Zoek'),
    t('Opnieuw instellen'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« eerste'),
    t('‹ vorige'),
    t('volgende ›'),
    t('laatste »'),
    t('<div class="gridright"><a href="/?q=afbeeldingen-geevalueerd-all">Tabeloverzicht</a>: <a href="/?q=afbeeldingen-geevalueerd-all"><img src="/sites/all/files/icon/details.png" class="gridiconlarge" border="no" /></a><div>'),
    t('field_afbeeldingen'),
    t('[url]/edit'),
    t('<a href="[url]">[field_newimage_1]</a>'),
    t('- Selecteer een actie -'),
    t('Beeld(en) toekennen aan validator / wachtrij'),
    t('Page'),
  );
  $export['grid_afbeeldingen_geevalueerd_all'] = $view;

  $view = new view();
  $view->name = 'grid_afbeeldingen_per_expert';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'grid-Afbeeldingen per expert';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Nieuwe beelden';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Zoek';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Opnieuw instellen';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '70';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« eerste';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'volgende ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'laatste »';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '7';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Kop: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="gridright" style="margin-top:-20px;"><a href="/?q=afbeeldingen-expert">Tabel overzicht</a>: <a href="/?q=afbeeldingen-expert"><img src="/sites/all/files/icon/details.png" class="gridiconlarge" border="no" /></a><div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Relationship: Field collection item: Entity with the Afbeeldingen (field_afbeeldingen) */
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['id'] = 'field_afbeeldingen_node';
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['field'] = 'field_afbeeldingen_node';
  /* Veld: Field collection item: Beeld */
  $handler->display->display_options['fields']['field_newimage']['id'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage']['table'] = 'field_data_field_newimage';
  $handler->display->display_options['fields']['field_newimage']['field'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage']['label'] = '';
  $handler->display->display_options['fields']['field_newimage']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_newimage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_newimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_newimage']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Veld: Field collection item: Beeld */
  $handler->display->display_options['fields']['field_newimage_1']['id'] = 'field_newimage_1';
  $handler->display->display_options['fields']['field_newimage_1']['table'] = 'field_data_field_newimage';
  $handler->display->display_options['fields']['field_newimage_1']['field'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage_1']['label'] = '';
  $handler->display->display_options['fields']['field_newimage_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_newimage_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_newimage_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_newimage_1']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Veld: Broken/missing handler */
  $handler->display->display_options['fields']['lightbox2']['id'] = 'lightbox2';
  $handler->display->display_options['fields']['lightbox2']['table'] = 'lightbox2';
  $handler->display->display_options['fields']['lightbox2']['field'] = 'lightbox2';
  $handler->display->display_options['fields']['lightbox2']['label'] = '';
  $handler->display->display_options['fields']['lightbox2']['element_label_colon'] = FALSE;
  /* Veld: Field collection item: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'views_entity_field_collection_item';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['url']['alter']['text'] = '<a href="[url]/edit"><img src="/sites/all/files/icon/edit.png" class="gridicon" border="no" /></a>';
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Contextual filter: Field collection item: Validator (field_beeldexpert) */
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['id'] = 'field_beeldexpert_target_id';
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['table'] = 'field_data_field_beeldexpert';
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['field'] = 'field_beeldexpert_target_id';
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['summary_options']['items_per_page'] = '25';
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
  $handler->display->display_options['path'] = 'grid-afbeeldingen-expert';
  $translatables['grid_afbeeldingen_per_expert'] = array(
    t('Master'),
    t('Nieuwe beelden'),
    t('more'),
    t('Zoek'),
    t('Opnieuw instellen'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« eerste'),
    t('‹ vorige'),
    t('volgende ›'),
    t('laatste »'),
    t('<div class="gridright" style="margin-top:-20px;"><a href="/?q=afbeeldingen-expert">Tabel overzicht</a>: <a href="/?q=afbeeldingen-expert"><img src="/sites/all/files/icon/details.png" class="gridiconlarge" border="no" /></a><div>'),
    t('field_afbeeldingen'),
    t('<a href="[url]/edit"><img src="/sites/all/files/icon/edit.png" class="gridicon" border="no" /></a>'),
    t('Alle'),
    t('Page'),
  );
  $export['grid_afbeeldingen_per_expert'] = $view;

  $view = new view();
  $view->name = 'grid_afbeeldingen_per_expert_all';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'grid-afbeeldingen per expert all';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Beelden per expert';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Zoek';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Opnieuw instellen';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '70';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« eerste';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'volgende ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'laatste »';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '7';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Kop: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="gridright"><a href="/?q=afbeeldingen-expert-all">Tabeloverzicht</a>: <a href="/?q=afbeeldingen-expert-all"><img src="/sites/all/files/icon/details.png" class="gridiconlarge" border="no" /></a><div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Veld: Field collection item: Beeld */
  $handler->display->display_options['fields']['field_newimage']['id'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage']['table'] = 'field_data_field_newimage';
  $handler->display->display_options['fields']['field_newimage']['field'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage']['label'] = '';
  $handler->display->display_options['fields']['field_newimage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_newimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_newimage']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Veld: Bulk operations: Field collection item */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_field_collection_item';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Verwijder geselecteerde beelden',
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
  $handler->display->display_options['path'] = 'grid-afbeeldingen-expert-all';
  $translatables['grid_afbeeldingen_per_expert_all'] = array(
    t('Master'),
    t('Beelden per expert'),
    t('more'),
    t('Zoek'),
    t('Opnieuw instellen'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« eerste'),
    t('‹ vorige'),
    t('volgende ›'),
    t('laatste »'),
    t('<div class="gridright"><a href="/?q=afbeeldingen-expert-all">Tabeloverzicht</a>: <a href="/?q=afbeeldingen-expert-all"><img src="/sites/all/files/icon/details.png" class="gridiconlarge" border="no" /></a><div>'),
    t('- Selecteer een actie -'),
    t('Verwijder geselecteerde beelden'),
    t('Toekennen aan andere expert (selectie in volgende scherm)'),
    t('Page'),
  );
  $export['grid_afbeeldingen_per_expert_all'] = $view;

  $view = new view();
  $view->name = 'grid_afbeeldingen_verwerkt_all';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'grid-Afbeeldingen verwerkt all';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Gepubliceerde beelden';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Zoek';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Opnieuw instellen';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '70';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« eerste';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'volgende ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'laatste »';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '7';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Kop: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="gridright" style="margin-top: -20px;"><a href="/?q=afbeeldingen-verwerkt-all">Tabeloverzicht</a>: <a href="/?q=afbeeldingen-verwerkt-all"><img src="/sites/all/files/icon/details.png" class="gridiconlarge" border="no" /></a><div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Relationship: Field collection item: Entity with the Afbeeldingen (field_afbeeldingen) */
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['id'] = 'field_afbeeldingen_node';
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['field'] = 'field_afbeeldingen_node';
  /* Veld: Field collection item: Beeld */
  $handler->display->display_options['fields']['field_newimage']['id'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage']['table'] = 'field_data_field_newimage';
  $handler->display->display_options['fields']['field_newimage']['field'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage']['label'] = '';
  $handler->display->display_options['fields']['field_newimage']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_newimage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_newimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_newimage']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Veld: Field collection item: Beeld */
  $handler->display->display_options['fields']['field_newimage_1']['id'] = 'field_newimage_1';
  $handler->display->display_options['fields']['field_newimage_1']['table'] = 'field_data_field_newimage';
  $handler->display->display_options['fields']['field_newimage_1']['field'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage_1']['label'] = '';
  $handler->display->display_options['fields']['field_newimage_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_newimage_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_newimage_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_newimage_1']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Veld: Broken/missing handler */
  $handler->display->display_options['fields']['lightbox2']['id'] = 'lightbox2';
  $handler->display->display_options['fields']['lightbox2']['table'] = 'lightbox2';
  $handler->display->display_options['fields']['lightbox2']['field'] = 'lightbox2';
  $handler->display->display_options['fields']['lightbox2']['label'] = '';
  $handler->display->display_options['fields']['lightbox2']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['path'] = 'grid-afbeeldingen-verwerkt-all';
  $translatables['grid_afbeeldingen_verwerkt_all'] = array(
    t('Master'),
    t('Gepubliceerde beelden'),
    t('more'),
    t('Zoek'),
    t('Opnieuw instellen'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« eerste'),
    t('‹ vorige'),
    t('volgende ›'),
    t('laatste »'),
    t('<div class="gridright" style="margin-top: -20px;"><a href="/?q=afbeeldingen-verwerkt-all">Tabeloverzicht</a>: <a href="/?q=afbeeldingen-verwerkt-all"><img src="/sites/all/files/icon/details.png" class="gridiconlarge" border="no" /></a><div>'),
    t('field_afbeeldingen'),
    t('Page'),
  );
  $export['grid_afbeeldingen_verwerkt_all'] = $view;

  $view = new view();
  $view->name = 'grid_afbeeldingen_wachtrij';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'grid-Afbeeldingen wachtrij';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Beelden in wachtrij';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Zoek';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Opnieuw instellen';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '70';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« eerste';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'volgende ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'laatste »';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '7';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Kop: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="gridright"><a href="/?q=afbeeldingen-wachtrij">Tabeloverzicht</a>: <a href="/?q=afbeeldingen-wachtrij"><img src="/sites/all/files/icon/details.png" class="gridiconlarge" border="no" /></a><div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Relationship: Field collection item: Entity with the Afbeeldingen (field_afbeeldingen) */
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['id'] = 'field_afbeeldingen_node';
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['field'] = 'field_afbeeldingen_node';
  /* Veld: Field collection item: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'views_entity_field_collection_item';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['url']['alter']['text'] = '[url]/edit';
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Veld: Field collection item: Beeld */
  $handler->display->display_options['fields']['field_newimage_1']['id'] = 'field_newimage_1';
  $handler->display->display_options['fields']['field_newimage_1']['table'] = 'field_data_field_newimage';
  $handler->display->display_options['fields']['field_newimage_1']['field'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage_1']['label'] = '';
  $handler->display->display_options['fields']['field_newimage_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_newimage_1']['alter']['text'] = '<a href="[url]">[field_newimage_1]</a>';
  $handler->display->display_options['fields']['field_newimage_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_newimage_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_newimage_1']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Veld: Bulk operations: Field collection item */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_field_collection_item';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 1,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Beeld(en) toekennen aan validator',
      'settings' => array(
        'url' => 'beelduitwisselaar/selectexpertise',
      ),
    ),
  );
  /* Veld: Field collection item: status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['label'] = '';
  $handler->display->display_options['fields']['field_status']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_status']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['path'] = 'grid-afbeeldingen-wachtrij';
  $translatables['grid_afbeeldingen_wachtrij'] = array(
    t('Master'),
    t('Beelden in wachtrij'),
    t('more'),
    t('Zoek'),
    t('Opnieuw instellen'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« eerste'),
    t('‹ vorige'),
    t('volgende ›'),
    t('laatste »'),
    t('<div class="gridright"><a href="/?q=afbeeldingen-wachtrij">Tabeloverzicht</a>: <a href="/?q=afbeeldingen-wachtrij"><img src="/sites/all/files/icon/details.png" class="gridiconlarge" border="no" /></a><div>'),
    t('field_afbeeldingen'),
    t('[url]/edit'),
    t('<a href="[url]">[field_newimage_1]</a>'),
    t('- Selecteer een actie -'),
    t('Beeld(en) toekennen aan validator'),
    t('Page'),
  );
  $export['grid_afbeeldingen_wachtrij'] = $view;

  $view = new view();
  $view->name = 'lijst';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'lijst';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'lijst';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Zoek';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Opnieuw instellen';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« eerste';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'volgende ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'laatste »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'item_id' => 'item_id',
    'field_newimage' => 'field_newimage',
    'field_status' => 'field_status',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'item_id' => array(
      'sortable' => 0,
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
    'field_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Veld: Field collection item: Field collection item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  /* Veld: Field collection item: Beeld */
  $handler->display->display_options['fields']['field_newimage']['id'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage']['table'] = 'field_data_field_newimage';
  $handler->display->display_options['fields']['field_newimage']['field'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_newimage']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Veld: Field collection item: status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  /* Sort criterion: Field collection item Revisies: Field collection item ID */
  $handler->display->display_options['sorts']['item_id']['id'] = 'item_id';
  $handler->display->display_options['sorts']['item_id']['table'] = 'field_collection_item_revision';
  $handler->display->display_options['sorts']['item_id']['field'] = 'item_id';
  $handler->display->display_options['sorts']['item_id']['order'] = 'DESC';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'lijst';
  $translatables['lijst'] = array(
    t('Master'),
    t('lijst'),
    t('more'),
    t('Zoek'),
    t('Opnieuw instellen'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« eerste'),
    t('‹ vorige'),
    t('volgende ›'),
    t('laatste »'),
    t('Field collection item ID'),
    t('.'),
    t(','),
    t('Beeld'),
    t('status'),
    t('Page'),
  );
  $export['lijst'] = $view;

  return $export;
}
