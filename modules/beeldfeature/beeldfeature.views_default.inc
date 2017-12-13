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
  $handler->display->display_options['title'] = 'Nieuwe beelden';
  $handler->display->display_options['css_class'] = 'table';
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
    'url_1' => 'url_1',
    'views_bulk_operations' => 'views_bulk_operations',
    'field_newimage' => 'field_newimage',
    'field_newimage_1' => 'field_newimage_1',
    'created' => 'created',
    'field_datum' => 'field_datum',
    'field_voornaam' => 'field_voornaam',
    'field_achternaam' => 'field_achternaam',
    'field_locatie' => 'field_locatie',
    'field_opmerkingen' => 'field_opmerkingen',
    'url' => 'url',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'url_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'views_bulk_operations' => array(
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
    'field_newimage_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_datum' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_voornaam' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_achternaam' => array(
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
    'field_opmerkingen' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'url' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Kop: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="gridright"><a href="/?q=grid-afbeeldingen">Gridoverzicht</a>: <a href="/?q=grid-afbeeldingen"><img src="/sites/all/files/icon/grid.png" class="gridiconlarge" border="no" /></a><div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Relationship: Field collection item: Entity with the Afbeeldingen (field_afbeeldingen) */
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['id'] = 'field_afbeeldingen_node';
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['field'] = 'field_afbeeldingen_node';
  /* Veld: Field collection item: URL */
  $handler->display->display_options['fields']['url_1']['id'] = 'url_1';
  $handler->display->display_options['fields']['url_1']['table'] = 'views_entity_field_collection_item';
  $handler->display->display_options['fields']['url_1']['field'] = 'url';
  $handler->display->display_options['fields']['url_1']['label'] = '';
  $handler->display->display_options['fields']['url_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['url_1']['alter']['text'] = '[url_1]/edit';
  $handler->display->display_options['fields']['url_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url_1']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url_1']['link_to_entity'] = 0;
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
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Verwijder geselecteerde beelden',
    ),
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
  /* Veld: Field collection item: Beeld */
  $handler->display->display_options['fields']['field_newimage']['id'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage']['table'] = 'field_data_field_newimage';
  $handler->display->display_options['fields']['field_newimage']['field'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_newimage']['alter']['text'] = '<a href="[url_1]">[field_newimage]</a>';
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
  /* Veld: Inhoud: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'field_afbeeldingen_node';
  $handler->display->display_options['fields']['created']['label'] = 'Datum insturen';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd M Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Veld: Field collection item: Datum van opname */
  $handler->display->display_options['fields']['field_datum']['id'] = 'field_datum';
  $handler->display->display_options['fields']['field_datum']['table'] = 'field_data_field_datum';
  $handler->display->display_options['fields']['field_datum']['field'] = 'field_datum';
  $handler->display->display_options['fields']['field_datum']['label'] = 'Datum opname';
  $handler->display->display_options['fields']['field_datum']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['field_achternaam']['label'] = 'Fotograaf';
  $handler->display->display_options['fields']['field_achternaam']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_achternaam']['alter']['text'] = '<a href="/search/node/[field_achternaam] [field_voornaam]">[field_achternaam], [field_voornaam]</a>';
  $handler->display->display_options['fields']['field_achternaam']['element_label_colon'] = FALSE;
  /* Veld: Field collection item: Locatie */
  $handler->display->display_options['fields']['field_locatie']['id'] = 'field_locatie';
  $handler->display->display_options['fields']['field_locatie']['table'] = 'field_data_field_locatie';
  $handler->display->display_options['fields']['field_locatie']['field'] = 'field_locatie';
  /* Veld: Field collection item: Soortnaam en opmerkingen */
  $handler->display->display_options['fields']['field_opmerkingen']['id'] = 'field_opmerkingen';
  $handler->display->display_options['fields']['field_opmerkingen']['table'] = 'field_data_field_opmerkingen';
  $handler->display->display_options['fields']['field_opmerkingen']['field'] = 'field_opmerkingen';
  $handler->display->display_options['fields']['field_opmerkingen']['label'] = 'Opmerking fotograaf';
  /* Veld: Field collection item: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'views_entity_field_collection_item';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = 'Bewerken';
  $handler->display->display_options['fields']['url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['url']['alter']['text'] = '<a href="[url]/edit"><img src="/sites/all/files/icon/edit.png" class="gridicon" border="no" /></a>';
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Sort criterion: Field collection item: Datum insturen (field_created) */
  $handler->display->display_options['sorts']['field_created_value']['id'] = 'field_created_value';
  $handler->display->display_options['sorts']['field_created_value']['table'] = 'field_data_field_created';
  $handler->display->display_options['sorts']['field_created_value']['field'] = 'field_created_value';
  $handler->display->display_options['sorts']['field_created_value']['order'] = 'DESC';
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
    'field_voornaam' => 'field_voornaam',
    'field_achternaam' => 'field_achternaam',
    'field_locatie' => 'field_locatie',
    'field_opmerkingen' => 'field_opmerkingen',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Nieuwe beelden';
  $handler->display->display_options['path'] = 'afbeeldingen';
  $translatables['afbeeldingen'] = array(
    t('Master'),
    t('Nieuwe beelden'),
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
    t('<div class="gridright"><a href="/?q=grid-afbeeldingen">Gridoverzicht</a>: <a href="/?q=grid-afbeeldingen"><img src="/sites/all/files/icon/grid.png" class="gridiconlarge" border="no" /></a><div>'),
    t('field_afbeeldingen'),
    t('[url_1]/edit'),
    t('- Selecteer een actie -'),
    t('Verwijder geselecteerde beelden'),
    t('Beeld(en) toekennen aan validator / wachtrij'),
    t('Beeld'),
    t('<a href="[url_1]">[field_newimage]</a>'),
    t('Datum insturen'),
    t('Datum opname'),
    t('Fotograaf'),
    t('<a href="/search/node/[field_achternaam] [field_voornaam]">[field_achternaam], [field_voornaam]</a>'),
    t('Locatie'),
    t('Opmerking fotograaf'),
    t('Bewerken'),
    t('<a href="[url]/edit"><img src="/sites/all/files/icon/edit.png" class="gridicon" border="no" /></a>'),
    t('Filter resultaten:'),
    t('Page'),
  );
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
  /* Veld: Field collection item: Datum van opname */
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
  /* Veld: Field collection item: Locatie */
  $handler->display->display_options['fields']['field_locatie']['id'] = 'field_locatie';
  $handler->display->display_options['fields']['field_locatie']['table'] = 'field_data_field_locatie';
  $handler->display->display_options['fields']['field_locatie']['field'] = 'field_locatie';
  /* Veld: Field collection item: Soort/taxon */
  $handler->display->display_options['fields']['field_soort_taxon']['id'] = 'field_soort_taxon';
  $handler->display->display_options['fields']['field_soort_taxon']['table'] = 'field_data_field_soort_taxon';
  $handler->display->display_options['fields']['field_soort_taxon']['field'] = 'field_soort_taxon';
  /* Veld: Field collection item: Beeld */
  $handler->display->display_options['fields']['field_newimage']['id'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage']['table'] = 'field_data_field_newimage';
  $handler->display->display_options['fields']['field_newimage']['field'] = 'field_newimage';
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
      'label' => 'Toekennen aan expert (selectie in volgende scherm)',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'field_afbeeldingen::field_beeldexpert' => 'field_afbeeldingen::field_beeldexpert',
        ),
      ),
    ),
  );
  /* Veld: Field collection item: Validator */
  $handler->display->display_options['fields']['field_beeldexpert']['id'] = 'field_beeldexpert';
  $handler->display->display_options['fields']['field_beeldexpert']['table'] = 'field_data_field_beeldexpert';
  $handler->display->display_options['fields']['field_beeldexpert']['field'] = 'field_beeldexpert';
  $handler->display->display_options['fields']['field_beeldexpert']['label'] = 'Expert';
  $handler->display->display_options['fields']['field_beeldexpert']['settings'] = array(
    'link' => 0,
  );
  /* Veld: Field collection item: Opmerking validator */
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
  $translatables['afbeeldingen_afgekeurd_all'] = array(
    t('Master'),
    t('Afbeeldingen afgekeurd (alles)'),
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
    t('Datum van opname'),
    t('Locatie'),
    t('Soort/taxon'),
    t('Beeld'),
    t('- Selecteer een actie -'),
    t('Verwijder geselecteerde beelden'),
    t('Toekennen aan expert (selectie in volgende scherm)'),
    t('Expert'),
    t('Evaluatie'),
    t('Page'),
  );
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
  $handler->display->display_options['title'] = 'Beelden bij deze inzending';
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
  /* Veld: Field collection item: Beeld */
  $handler->display->display_options['fields']['field_newimage']['id'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage']['table'] = 'field_data_field_newimage';
  $handler->display->display_options['fields']['field_newimage']['field'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_newimage']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Veld: Field collection item: Datum van opname */
  $handler->display->display_options['fields']['field_datum']['id'] = 'field_datum';
  $handler->display->display_options['fields']['field_datum']['table'] = 'field_data_field_datum';
  $handler->display->display_options['fields']['field_datum']['field'] = 'field_datum';
  $handler->display->display_options['fields']['field_datum']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Veld: Field collection item: Locatie */
  $handler->display->display_options['fields']['field_locatie']['id'] = 'field_locatie';
  $handler->display->display_options['fields']['field_locatie']['table'] = 'field_data_field_locatie';
  $handler->display->display_options['fields']['field_locatie']['field'] = 'field_locatie';
  /* Veld: Field collection item: Soortnaam en opmerkingen */
  $handler->display->display_options['fields']['field_opmerkingen']['id'] = 'field_opmerkingen';
  $handler->display->display_options['fields']['field_opmerkingen']['table'] = 'field_data_field_opmerkingen';
  $handler->display->display_options['fields']['field_opmerkingen']['field'] = 'field_opmerkingen';
  $handler->display->display_options['fields']['field_opmerkingen']['label'] = 'Opmerking fotograaf';
  /* Contextual filter: Inhoud: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_afbeeldingen_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $translatables['afbeeldingen_bij_node'] = array(
    t('Master'),
    t('Beelden bij deze inzending'),
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
    t('field_afbeeldingen'),
    t('Beeld'),
    t('Datum van opname'),
    t('Locatie'),
    t('Opmerking fotograaf'),
    t('Alle'),
    t('Block'),
  );
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
  $handler->display->display_options['title'] = 'Gevalideerde beelden';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    5 => '5',
  );
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
    'url' => 'url',
    'field_newimage' => 'field_newimage',
    'field_created' => 'field_created',
    'field_locatie' => 'field_locatie',
    'field_soort_taxon' => 'field_soort_taxon',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'url' => array(
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
    'field_created' => array(
      'sortable' => 1,
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
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Er zijn nog geen beelden die het validatieproces hebben doorlopen.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Field collection item: Entity with the Afbeeldingen (field_afbeeldingen) */
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['id'] = 'field_afbeeldingen_node';
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['field'] = 'field_afbeeldingen_node';
  /* Veld: Field collection item: Field collection item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['item_id']['separator'] = '';
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
  $handler->display->display_options['fields']['field_newimage']['id'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage']['table'] = 'field_data_field_newimage';
  $handler->display->display_options['fields']['field_newimage']['field'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_newimage']['alter']['text'] = '<a href="/beelddetail/[item_id]">[field_newimage]</a>';
  $handler->display->display_options['fields']['field_newimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_newimage']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Veld: Inhoud: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'field_afbeeldingen_node';
  $handler->display->display_options['fields']['created']['label'] = 'Datum insturen';
  $handler->display->display_options['fields']['created']['date_format'] = 'superkort';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Veld: Field collection item: Locatie */
  $handler->display->display_options['fields']['field_locatie']['id'] = 'field_locatie';
  $handler->display->display_options['fields']['field_locatie']['table'] = 'field_data_field_locatie';
  $handler->display->display_options['fields']['field_locatie']['field'] = 'field_locatie';
  /* Veld: Field collection item: Soort/taxon */
  $handler->display->display_options['fields']['field_soort_taxon']['id'] = 'field_soort_taxon';
  $handler->display->display_options['fields']['field_soort_taxon']['table'] = 'field_data_field_soort_taxon';
  $handler->display->display_options['fields']['field_soort_taxon']['field'] = 'field_soort_taxon';
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
    2 => '2',
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
    'field_datum' => 'field_datum',
    'field_locatie' => 'field_locatie',
    'field_soort_taxon' => 'field_soort_taxon',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'afbeeldingen-geevalueerd';
  $translatables['afbeeldingen_geevalueerd'] = array(
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
    t('Er zijn nog geen beelden die het validatieproces hebben doorlopen.'),
    t('field_afbeeldingen'),
    t('Field collection item ID'),
    t('.'),
    t('[url]/edit'),
    t('Beeld'),
    t('<a href="/beelddetail/[item_id]">[field_newimage]</a>'),
    t('Datum insturen'),
    t('Locatie'),
    t('Soort/taxon'),
    t('Alle'),
    t('Filter resultaten:'),
    t('Page'),
  );
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
  $handler->display->display_options['title'] = 'Gevalideerde beelden';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
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
    'field_beeldexpert' => 'field_beeldexpert',
    'field_soort_taxon' => 'field_soort_taxon',
    'field_beeldevaluatie' => 'field_beeldevaluatie',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
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
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_voornaam' => array(
      'sortable' => 0,
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
    'field_beeldexpert' => array(
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
  $handler->display->display_options['header']['area']['content'] = '<div class="gridright"><a href="/?q=grid-afbeeldingen-geevalueerd-all">Gridoverzicht</a>: <a href="/?q=grid-afbeeldingen-geevalueerd-all"><img src="/sites/all/files/icon/grid.png" class="gridiconlarge" border="no" /></a><div>';
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
  $handler->display->display_options['fields']['field_achternaam']['label'] = 'Fotograaf';
  $handler->display->display_options['fields']['field_achternaam']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_achternaam']['alter']['text'] = '[field_achternaam], [field_voornaam]';
  $handler->display->display_options['fields']['field_achternaam']['element_label_colon'] = FALSE;
  /* Veld: Field collection item: Validator */
  $handler->display->display_options['fields']['field_beeldexpert']['id'] = 'field_beeldexpert';
  $handler->display->display_options['fields']['field_beeldexpert']['table'] = 'field_data_field_beeldexpert';
  $handler->display->display_options['fields']['field_beeldexpert']['field'] = 'field_beeldexpert';
  $handler->display->display_options['fields']['field_beeldexpert']['settings'] = array(
    'link' => 0,
  );
  /* Veld: Field collection item: Soort/taxon */
  $handler->display->display_options['fields']['field_soort_taxon']['id'] = 'field_soort_taxon';
  $handler->display->display_options['fields']['field_soort_taxon']['table'] = 'field_data_field_soort_taxon';
  $handler->display->display_options['fields']['field_soort_taxon']['field'] = 'field_soort_taxon';
  /* Veld: Field collection item: Opmerking validator */
  $handler->display->display_options['fields']['field_beeldevaluatie']['id'] = 'field_beeldevaluatie';
  $handler->display->display_options['fields']['field_beeldevaluatie']['table'] = 'field_data_field_beeldevaluatie';
  $handler->display->display_options['fields']['field_beeldevaluatie']['field'] = 'field_beeldevaluatie';
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine_1']['id'] = 'combine_1';
  $handler->display->display_options['filters']['combine_1']['table'] = 'views';
  $handler->display->display_options['filters']['combine_1']['field'] = 'combine';
  $handler->display->display_options['filters']['combine_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine_1']['group'] = 1;
  $handler->display->display_options['filters']['combine_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine_1']['expose']['operator_id'] = 'combine_1_op';
  $handler->display->display_options['filters']['combine_1']['expose']['label'] = 'Filter resultaten:';
  $handler->display->display_options['filters']['combine_1']['expose']['operator'] = 'combine_1_op';
  $handler->display->display_options['filters']['combine_1']['expose']['identifier'] = 'combine_1';
  $handler->display->display_options['filters']['combine_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['combine_1']['fields'] = array(
    'field_voornaam' => 'field_voornaam',
    'field_achternaam' => 'field_achternaam',
    'field_beeldexpert' => 'field_beeldexpert',
    'field_beeldevaluatie' => 'field_beeldevaluatie',
  );
  /* Filter criterion: Field collection item: nlsr (field_nlsr) */
  $handler->display->display_options['filters']['field_nlsr_value']['id'] = 'field_nlsr_value';
  $handler->display->display_options['filters']['field_nlsr_value']['table'] = 'field_data_field_nlsr';
  $handler->display->display_options['filters']['field_nlsr_value']['field'] = 'field_nlsr_value';
  $handler->display->display_options['filters']['field_nlsr_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_nlsr_value']['group'] = 1;
  /* Filter criterion: Field collection item: status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_status_value']['value'] = array(
    2 => '2',
    3 => '3',
    4 => '4',
    5 => '5',
    6 => '6',
  );
  $handler->display->display_options['filters']['field_status_value']['group'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'afbeeldingen-geevalueerd-allx';
  $translatables['afbeeldingen_geevalueerd_all'] = array(
    t('Master'),
    t('Gevalideerde beelden'),
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
    t('<div class="gridright"><a href="/?q=grid-afbeeldingen-geevalueerd-all">Gridoverzicht</a>: <a href="/?q=grid-afbeeldingen-geevalueerd-all"><img src="/sites/all/files/icon/grid.png" class="gridiconlarge" border="no" /></a><div>'),
    t('field_afbeeldingen'),
    t('[url]/edit'),
    t('- Selecteer een actie -'),
    t('Verstuur mail'),
    t('Beeld'),
    t('<a href="[url]">[field_newimage_1]</a>'),
    t('Datum insturen'),
    t('Fotograaf'),
    t('[field_achternaam], [field_voornaam]'),
    t('Validator'),
    t('Soort/taxon'),
    t('Opmerking validator'),
    t('Filter resultaten:'),
    t('Page'),
  );
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
  /* Veld: Field collection item: Datum van opname */
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
  /* Veld: Field collection item: Locatie */
  $handler->display->display_options['fields']['field_locatie']['id'] = 'field_locatie';
  $handler->display->display_options['fields']['field_locatie']['table'] = 'field_data_field_locatie';
  $handler->display->display_options['fields']['field_locatie']['field'] = 'field_locatie';
  /* Veld: Field collection item: Soort/taxon */
  $handler->display->display_options['fields']['field_soort_taxon']['id'] = 'field_soort_taxon';
  $handler->display->display_options['fields']['field_soort_taxon']['table'] = 'field_data_field_soort_taxon';
  $handler->display->display_options['fields']['field_soort_taxon']['field'] = 'field_soort_taxon';
  /* Veld: Field collection item: Beeld */
  $handler->display->display_options['fields']['field_newimage']['id'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage']['table'] = 'field_data_field_newimage';
  $handler->display->display_options['fields']['field_newimage']['field'] = 'field_newimage';
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
  );
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
  $handler->display->display_options['path'] = 'afbeeldingen-goedgekeurd-all';
  $translatables['afbeeldingen_goedgekeurd_all'] = array(
    t('Master'),
    t('Afbeeldingen goedgekeurd (alles)'),
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
    t('Datum van opname'),
    t('Locatie'),
    t('Soort/taxon'),
    t('Beeld'),
    t('- Selecteer een actie -'),
    t('Verwijder geselecteerde beelden'),
    t('Afronden'),
    t('Expert'),
    t('status'),
    t('Page'),
  );
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
  $handler->display->display_options['title'] = 'Gevalideerde beelden';
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
  /* Veld: Field collection item: Beeld */
  $handler->display->display_options['fields']['field_newimage']['id'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage']['table'] = 'field_data_field_newimage';
  $handler->display->display_options['fields']['field_newimage']['field'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_newimage']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
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
  /* Veld: Field collection item: Locatie */
  $handler->display->display_options['fields']['field_locatie']['id'] = 'field_locatie';
  $handler->display->display_options['fields']['field_locatie']['table'] = 'field_data_field_locatie';
  $handler->display->display_options['fields']['field_locatie']['field'] = 'field_locatie';
  /* Veld: Field collection item: Soort/taxon */
  $handler->display->display_options['fields']['field_soort_taxon']['id'] = 'field_soort_taxon';
  $handler->display->display_options['fields']['field_soort_taxon']['table'] = 'field_data_field_soort_taxon';
  $handler->display->display_options['fields']['field_soort_taxon']['field'] = 'field_soort_taxon';
  /* Contextual filter: Inhoud: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'field_afbeeldingen_node';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Alle';
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
  /* Filter criterion: Field collection item: nlsr (field_nlsr) */
  $handler->display->display_options['filters']['field_nlsr_value']['id'] = 'field_nlsr_value';
  $handler->display->display_options['filters']['field_nlsr_value']['table'] = 'field_data_field_nlsr';
  $handler->display->display_options['filters']['field_nlsr_value']['field'] = 'field_nlsr_value';
  $handler->display->display_options['filters']['field_nlsr_value']['operator'] = 'not empty';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'afbeeldingen-auteur';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field collection item: Validator (field_beeldexpert) */
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['id'] = 'field_beeldexpert_target_id';
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['table'] = 'field_data_field_beeldexpert';
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['field'] = 'field_beeldexpert_target_id';
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['block_description'] = 'Gevalideerde beelden (userpage)';
  $translatables['afbeeldingen_per_auteur'] = array(
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
    t('field_afbeeldingen'),
    t('Beeld'),
    t('Datum'),
    t('Locatie'),
    t('Soort/taxon'),
    t('Alle'),
    t('Page'),
    t('Block'),
    t('Gevalideerde beelden (userpage)'),
  );
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
  $handler->display->display_options['title'] = 'Nieuwe beelden';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    5 => '5',
  );
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
    'url' => 'url',
    'created' => 'created',
    'field_newimage' => 'field_newimage',
    'field_datum' => 'field_datum',
    'field_locatie' => 'field_locatie',
    'field_soort_taxon' => 'field_soort_taxon',
    'field_opmerkingen' => 'field_opmerkingen',
  );
  $handler->display->display_options['style_options']['default'] = 'created';
  $handler->display->display_options['style_options']['info'] = array(
    'url' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
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
    'field_datum' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
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
    'field_opmerkingen' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Er zijn momenteel geen beelden ter validatie beschikbaar.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
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
  $handler->display->display_options['fields']['field_newimage']['id'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage']['table'] = 'field_data_field_newimage';
  $handler->display->display_options['fields']['field_newimage']['field'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_newimage']['alter']['text'] = '<a href="[url]">[field_newimage]</a>';
  $handler->display->display_options['fields']['field_newimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_newimage']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Veld: Inhoud: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'field_afbeeldingen_node';
  $handler->display->display_options['fields']['created']['label'] = 'Datum insturen';
  $handler->display->display_options['fields']['created']['date_format'] = 'superkort';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Veld: Field collection item: Datum van opname */
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
  /* Veld: Field collection item: Locatie */
  $handler->display->display_options['fields']['field_locatie']['id'] = 'field_locatie';
  $handler->display->display_options['fields']['field_locatie']['table'] = 'field_data_field_locatie';
  $handler->display->display_options['fields']['field_locatie']['field'] = 'field_locatie';
  /* Veld: Field collection item: Soortnaam en opmerkingen */
  $handler->display->display_options['fields']['field_opmerkingen']['id'] = 'field_opmerkingen';
  $handler->display->display_options['fields']['field_opmerkingen']['table'] = 'field_data_field_opmerkingen';
  $handler->display->display_options['fields']['field_opmerkingen']['field'] = 'field_opmerkingen';
  $handler->display->display_options['fields']['field_opmerkingen']['label'] = 'Opmerking fotograaf';
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
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'OR',
  );
  /* Filter criterion: Field collection item: status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_status_value']['group'] = 1;
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Filter resultaten: ';
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
    'field_newimage' => 'field_newimage',
    'field_datum' => 'field_datum',
    'field_locatie' => 'field_locatie',
    'field_opmerkingen' => 'field_opmerkingen',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'afbeeldingen-expert';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  $handler->display->display_options['fields']['field_newimage']['id'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage']['table'] = 'field_data_field_newimage';
  $handler->display->display_options['fields']['field_newimage']['field'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_newimage']['alter']['text'] = '<a href="[url]">[field_newimage]</a>';
  $handler->display->display_options['fields']['field_newimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_newimage']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
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
  /* Veld: Field collection item: Locatie */
  $handler->display->display_options['fields']['field_locatie']['id'] = 'field_locatie';
  $handler->display->display_options['fields']['field_locatie']['table'] = 'field_data_field_locatie';
  $handler->display->display_options['fields']['field_locatie']['field'] = 'field_locatie';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field collection item: Validator (field_beeldexpert) */
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['id'] = 'field_beeldexpert_target_id';
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['table'] = 'field_data_field_beeldexpert';
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['field'] = 'field_beeldexpert_target_id';
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['block_description'] = 'Nieuwe beeld per expert (userpage)';
  $translatables['afbeeldingen_per_expert'] = array(
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
    t('Er zijn momenteel geen beelden ter validatie beschikbaar.'),
    t('field_afbeeldingen'),
    t('[url]/edit'),
    t('Beeld'),
    t('<a href="[url]">[field_newimage]</a>'),
    t('Datum insturen'),
    t('Datum opname'),
    t('Locatie'),
    t('Opmerking fotograaf'),
    t('Alle'),
    t('Filter resultaten: '),
    t('Page'),
    t('Block'),
    t('Datum'),
    t('Nieuwe beeld per expert (userpage)'),
  );
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
  $handler->display->display_options['title'] = 'Beelden bij validator';
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'meer...';
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
    'field_newimage' => 'field_newimage',
    'field_created' => 'field_created',
    'field_voornaam' => 'field_voornaam',
    'field_achternaam' => 'field_achternaam',
    'field_voornaam_1' => 'field_voornaam_1',
    'field_achternaam_1' => 'field_achternaam_1',
    'field_groep' => 'field_groep',
    'field_opmerkingen' => 'field_opmerkingen',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
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
    'field_newimage' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_voornaam' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_achternaam' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
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
    'field_opmerkingen' => array(
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
  $handler->display->display_options['header']['area']['content'] = '<div class="gridright"><a href="/?q=grid-afbeeldingen-expert-all">Gridoverzicht</a>: <a href="/?q=grid-afbeeldingen-expert-all"><img src="/sites/all/files/icon/grid.png" class="gridiconlarge" border="no" /></a><div>';
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
  /* Relationship: Inhoud: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['relationship'] = 'field_afbeeldingen_node';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'termgroep';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'groep' => 'groep',
    'licentie' => 0,
    'tags' => 0,
  );
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
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Verwijder geselecteerde beelden',
    ),
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
  /* Veld: Field collection item: Beeld */
  $handler->display->display_options['fields']['field_newimage']['id'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage']['table'] = 'field_data_field_newimage';
  $handler->display->display_options['fields']['field_newimage']['field'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_newimage']['alter']['text'] = '<a href="[url]">[field_newimage]</a>';
  $handler->display->display_options['fields']['field_newimage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_newimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_newimage']['settings'] = array(
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
  $handler->display->display_options['fields']['field_achternaam']['label'] = 'Fotograaf';
  $handler->display->display_options['fields']['field_achternaam']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_achternaam']['alter']['text'] = '<a href="/search/node/[field_achternaam] [field_voornaam]">[field_achternaam], [field_voornaam]</a>';
  $handler->display->display_options['fields']['field_achternaam']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_achternaam']['settings'] = array(
    'trim_length' => '1',
  );
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
  /* Veld: Field collection item: Soortnaam en opmerkingen */
  $handler->display->display_options['fields']['field_opmerkingen']['id'] = 'field_opmerkingen';
  $handler->display->display_options['fields']['field_opmerkingen']['table'] = 'field_data_field_opmerkingen';
  $handler->display->display_options['fields']['field_opmerkingen']['field'] = 'field_opmerkingen';
  $handler->display->display_options['fields']['field_opmerkingen']['label'] = 'Opmerking fotograaf';
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
    1 => '1',
  );
  $handler->display->display_options['filters']['field_status_value']['group'] = 1;
  /* Filter criterion: Field collection item: Validator (field_beeldexpert) */
  $handler->display->display_options['filters']['field_beeldexpert_target_id']['id'] = 'field_beeldexpert_target_id';
  $handler->display->display_options['filters']['field_beeldexpert_target_id']['table'] = 'field_data_field_beeldexpert';
  $handler->display->display_options['filters']['field_beeldexpert_target_id']['field'] = 'field_beeldexpert_target_id';
  $handler->display->display_options['filters']['field_beeldexpert_target_id']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_beeldexpert_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_beeldexpert_target_id']['expose']['operator_id'] = 'field_beeldexpert_target_id_op';
  $handler->display->display_options['filters']['field_beeldexpert_target_id']['expose']['label'] = 'Expert';
  $handler->display->display_options['filters']['field_beeldexpert_target_id']['expose']['operator'] = 'field_beeldexpert_target_id_op';
  $handler->display->display_options['filters']['field_beeldexpert_target_id']['expose']['identifier'] = 'field_beeldexpert_target_id';
  $handler->display->display_options['filters']['field_beeldexpert_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_beeldexpert_target_id']['group_info']['label'] = 'beeldexpert (field_beeldexpert)';
  $handler->display->display_options['filters']['field_beeldexpert_target_id']['group_info']['identifier'] = 'field_beeldexpert_target_id';
  $handler->display->display_options['filters']['field_beeldexpert_target_id']['group_info']['group_items'] = array(
    1 => array(
      'title' => '',
      'operator' => '=',
      'value' => array(
        'value' => '',
        'min' => '',
        'max' => '',
      ),
    ),
    2 => array(
      'title' => '',
      'operator' => '=',
      'value' => array(
        'value' => '',
        'min' => '',
        'max' => '',
      ),
    ),
    3 => array(
      'title' => '',
      'operator' => '=',
      'value' => array(
        'value' => '',
        'min' => '',
        'max' => '',
      ),
    ),
  );
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
  $handler->display->display_options['filters']['combine']['group_info']['label'] = 'Combine fields filter';
  $handler->display->display_options['filters']['combine']['group_info']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['combine']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'field_voornaam' => 'field_voornaam',
    'field_achternaam' => 'field_achternaam',
    'field_voornaam_1' => 'field_voornaam_1',
    'field_achternaam_1' => 'field_achternaam_1',
    'field_opmerkingen' => 'field_opmerkingen',
    'name' => 'name',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'afbeeldingen-expert-all';
  $translatables['afbeeldingen_per_expert_all'] = array(
    t('Master'),
    t('Beelden bij validator'),
    t('meer...'),
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
    t('<div class="gridright"><a href="/?q=grid-afbeeldingen-expert-all">Gridoverzicht</a>: <a href="/?q=grid-afbeeldingen-expert-all"><img src="/sites/all/files/icon/grid.png" class="gridiconlarge" border="no" /></a><div>'),
    t('field_afbeeldingen'),
    t('Gebruiker entity referenced from field_beeldexpert'),
    t('term from field_groep'),
    t('termgroep'),
    t('[url]/edit'),
    t('- Selecteer een actie -'),
    t('Verwijder geselecteerde beelden'),
    t('Beeld(en) toekennen aan validator / wachtrij'),
    t('Beeld'),
    t('<a href="[url]">[field_newimage]</a>'),
    t('Datum insturen'),
    t('Fotograaf'),
    t('<a href="/search/node/[field_achternaam] [field_voornaam]">[field_achternaam], [field_voornaam]</a>'),
    t('Voornaam'),
    t('Validator'),
    t('<a href="/search/node/[field_achternaam_1] [field_voornaam_1]">[field_achternaam_1], [field_voornaam_1]</a>'),
    t('Soortgroep'),
    t('<a href="/search/node/[field_groep]">[field_groep]</a>'),
    t('Opmerking fotograaf'),
    t('Expert'),
    t('beeldexpert (field_beeldexpert)'),
    t('Filter resultaten:'),
    t('Combine fields filter'),
    t('Page'),
    t('more'),
  );
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
  $handler->display->display_options['title'] = 'Beelden in behandeling';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    2 => '2',
    4 => '4',
    5 => '5',
  );
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
    'item_id' => 'item_id',
    'field_newimage' => 'field_newimage',
    'created' => 'created',
    'field_locatie' => 'field_locatie',
    'field_opmerkingen' => 'field_opmerkingen',
    'field_status' => 'field_status',
  );
  $handler->display->display_options['style_options']['default'] = 'created';
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
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
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
    'field_opmerkingen' => array(
      'sortable' => 0,
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
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Op dit moment zijn er geen door u ingestuurde beelden in behandeling.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Field collection item: Entity with the Afbeeldingen (field_afbeeldingen) */
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['id'] = 'field_afbeeldingen_node';
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['field'] = 'field_afbeeldingen_node';
  /* Veld: Field collection item: Field collection item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['item_id']['separator'] = '';
  /* Veld: Field collection item: Beeld */
  $handler->display->display_options['fields']['field_newimage']['id'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage']['table'] = 'field_data_field_newimage';
  $handler->display->display_options['fields']['field_newimage']['field'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_newimage']['alter']['path'] = 'beelddetail/[item_id]';
  $handler->display->display_options['fields']['field_newimage']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_newimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_newimage']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Veld: Inhoud: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'field_afbeeldingen_node';
  $handler->display->display_options['fields']['created']['label'] = 'Datum insturen';
  $handler->display->display_options['fields']['created']['date_format'] = 'superkort';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Veld: Field collection item: Locatie */
  $handler->display->display_options['fields']['field_locatie']['id'] = 'field_locatie';
  $handler->display->display_options['fields']['field_locatie']['table'] = 'field_data_field_locatie';
  $handler->display->display_options['fields']['field_locatie']['field'] = 'field_locatie';
  /* Veld: Field collection item: Soortnaam en opmerkingen */
  $handler->display->display_options['fields']['field_opmerkingen']['id'] = 'field_opmerkingen';
  $handler->display->display_options['fields']['field_opmerkingen']['table'] = 'field_data_field_opmerkingen';
  $handler->display->display_options['fields']['field_opmerkingen']['field'] = 'field_opmerkingen';
  $handler->display->display_options['fields']['field_opmerkingen']['label'] = 'Opmerking fotograaf';
  /* Veld: Field collection item: status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['label'] = 'Status';
  $handler->display->display_options['fields']['field_status']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_status']['alter']['text'] = '<img class="status" width="24px" src="/sites/all/modules/beelduitwisselaar/img/[field_status-value].png" title="[field_status]"/>';
  /* Contextual filter: Field collection item: Fotograaf (field_fotograaf) */
  $handler->display->display_options['arguments']['field_fotograaf_target_id']['id'] = 'field_fotograaf_target_id';
  $handler->display->display_options['arguments']['field_fotograaf_target_id']['table'] = 'field_data_field_fotograaf';
  $handler->display->display_options['arguments']['field_fotograaf_target_id']['field'] = 'field_fotograaf_target_id';
  $handler->display->display_options['arguments']['field_fotograaf_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_fotograaf_target_id']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_fotograaf_target_id']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['field_fotograaf_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_fotograaf_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_fotograaf_target_id']['summary_options']['items_per_page'] = '25';
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
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Filter resultaten: ';
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
    'field_datum' => 'field_datum',
    'field_locatie' => 'field_locatie',
    'field_opmerkingen' => 'field_opmerkingen',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'afbeeldingen-user';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $translatables['afbeeldingen_per_user'] = array(
    t('Master'),
    t('Beelden in behandeling'),
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
    t('Op dit moment zijn er geen door u ingestuurde beelden in behandeling.'),
    t('field_afbeeldingen'),
    t('Field collection item ID'),
    t('.'),
    t('Beeld'),
    t('Datum insturen'),
    t('Locatie'),
    t('Opmerking fotograaf'),
    t('Status'),
    t('<img class="status" width="24px" src="/sites/all/modules/beelduitwisselaar/img/[field_status-value].png" title="[field_status]"/>'),
    t('Alle'),
    t('Filter resultaten: '),
    t('Page'),
    t('Block'),
  );
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
  /* Veld: Field collection item: Locatie */
  $handler->display->display_options['fields']['field_locatie']['id'] = 'field_locatie';
  $handler->display->display_options['fields']['field_locatie']['table'] = 'field_data_field_locatie';
  $handler->display->display_options['fields']['field_locatie']['field'] = 'field_locatie';
  /* Veld: Field collection item: Soort/taxon */
  $handler->display->display_options['fields']['field_soort_taxon']['id'] = 'field_soort_taxon';
  $handler->display->display_options['fields']['field_soort_taxon']['table'] = 'field_data_field_soort_taxon';
  $handler->display->display_options['fields']['field_soort_taxon']['field'] = 'field_soort_taxon';
  /* Veld: Field collection item: Beeld */
  $handler->display->display_options['fields']['field_newimage']['id'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage']['table'] = 'field_data_field_newimage';
  $handler->display->display_options['fields']['field_newimage']['field'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_newimage']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Veld: Field collection item: Beeld */
  $handler->display->display_options['fields']['field_newimage_1']['id'] = 'field_newimage_1';
  $handler->display->display_options['fields']['field_newimage_1']['table'] = 'field_data_field_newimage';
  $handler->display->display_options['fields']['field_newimage_1']['field'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_newimage_1']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Contextual filter: Field collection item: Fotograaf (field_fotograaf) */
  $handler->display->display_options['arguments']['field_fotograaf_target_id']['id'] = 'field_fotograaf_target_id';
  $handler->display->display_options['arguments']['field_fotograaf_target_id']['table'] = 'field_data_field_fotograaf';
  $handler->display->display_options['arguments']['field_fotograaf_target_id']['field'] = 'field_fotograaf_target_id';
  $handler->display->display_options['arguments']['field_fotograaf_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_fotograaf_target_id']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_fotograaf_target_id']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['field_fotograaf_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_fotograaf_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_fotograaf_target_id']['summary_options']['items_per_page'] = '25';
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
  $translatables['afbeeldingen_per_user_compleet_'] = array(
    t('Master'),
    t('Goedgekeurde afbeeldingen'),
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
    t('Datum insturen'),
    t('Locatie'),
    t('Soort/taxon'),
    t('Beeld'),
    t('Alle'),
    t('Page'),
  );
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
  /* Veld: Field collection item: Datum van opname */
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
  /* Veld: Field collection item: Locatie */
  $handler->display->display_options['fields']['field_locatie']['id'] = 'field_locatie';
  $handler->display->display_options['fields']['field_locatie']['table'] = 'field_data_field_locatie';
  $handler->display->display_options['fields']['field_locatie']['field'] = 'field_locatie';
  /* Veld: Field collection item: Soort/taxon */
  $handler->display->display_options['fields']['field_soort_taxon']['id'] = 'field_soort_taxon';
  $handler->display->display_options['fields']['field_soort_taxon']['table'] = 'field_data_field_soort_taxon';
  $handler->display->display_options['fields']['field_soort_taxon']['field'] = 'field_soort_taxon';
  /* Veld: Field collection item: Beeld */
  $handler->display->display_options['fields']['field_newimage']['id'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage']['table'] = 'field_data_field_newimage';
  $handler->display->display_options['fields']['field_newimage']['field'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_newimage']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Veld: Field collection item: Validator */
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
  );
  $handler->display->display_options['filters']['field_status_value']['group'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'afbeeldingen-verwerkt-all';
  $translatables['afbeeldingen_verwerkt_all'] = array(
    t('Master'),
    t('Afbeeldingen verwerkt (alles)'),
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
    t('Datum van opname'),
    t('Locatie'),
    t('Soort/taxon'),
    t('Beeld'),
    t('Expert'),
    t('Page'),
  );
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
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Zoek';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Opnieuw instellen';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« eerste';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'volgende ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'laatste »';
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
  /* Veld: Field collection item: Datum van opname */
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
  /* Veld: Field collection item: Locatie */
  $handler->display->display_options['fields']['field_locatie']['id'] = 'field_locatie';
  $handler->display->display_options['fields']['field_locatie']['table'] = 'field_data_field_locatie';
  $handler->display->display_options['fields']['field_locatie']['field'] = 'field_locatie';
  /* Veld: Field collection item: Soort/taxon */
  $handler->display->display_options['fields']['field_soort_taxon']['id'] = 'field_soort_taxon';
  $handler->display->display_options['fields']['field_soort_taxon']['table'] = 'field_data_field_soort_taxon';
  $handler->display->display_options['fields']['field_soort_taxon']['field'] = 'field_soort_taxon';
  /* Veld: Field collection item: Beeld */
  $handler->display->display_options['fields']['field_newimage']['id'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage']['table'] = 'field_data_field_newimage';
  $handler->display->display_options['fields']['field_newimage']['field'] = 'field_newimage';
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
      'label' => 'Toekennen aan expert (selectie in volgende scherm)',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'field_afbeeldingen::field_beeldexpert' => 'field_afbeeldingen::field_beeldexpert',
        ),
      ),
    ),
  );
  /* Veld: Field collection item: Validator */
  $handler->display->display_options['fields']['field_beeldexpert']['id'] = 'field_beeldexpert';
  $handler->display->display_options['fields']['field_beeldexpert']['table'] = 'field_data_field_beeldexpert';
  $handler->display->display_options['fields']['field_beeldexpert']['field'] = 'field_beeldexpert';
  $handler->display->display_options['fields']['field_beeldexpert']['label'] = 'Expert';
  $handler->display->display_options['fields']['field_beeldexpert']['settings'] = array(
    'link' => 0,
  );
  /* Veld: Field collection item: Opmerking validator */
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
  $translatables['afbeeldingen_wacht_all'] = array(
    t('Master'),
    t('Afbeeldingen in de wacht (alles)'),
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
    t('Datum van opname'),
    t('Locatie'),
    t('Soort/taxon'),
    t('Beeld'),
    t('- Selecteer een actie -'),
    t('Verwijder geselecteerde beelden'),
    t('Toekennen aan expert (selectie in volgende scherm)'),
    t('Expert'),
    t('Evaluatie'),
    t('Page'),
  );
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
    'views_bulk_operations' => 'views_bulk_operations',
    'field_voornaam' => 'field_voornaam',
    'field_achternaam' => 'field_achternaam',
    'nothing' => 'nothing',
    'name' => 'name',
    'mail' => 'mail',
    'field_specialisatie' => 'field_specialisatie',
  );
  $handler->display->display_options['style_options']['default'] = 'field_achternaam';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_voornaam' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_achternaam' => array(
      'sortable' => 0,
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
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'mail' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_specialisatie' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Veld: Bulk operations: Gebruiker */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_user';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = 'E-mail';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 1,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Verstuur email',
      'settings' => array(
        'url' => 'beelduitwisselaar/kiesmail',
      ),
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
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_achternaam], [field_voornaam]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Veld: Gebruiker: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Veld: Gebruiker: Naam */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Validator';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '<a href="/user/[uid]">[field_achternaam], [field_voornaam]</a>';
  $handler->display->display_options['fields']['name']['alter']['max_length'] = '50';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Veld: Gebruiker: E-mailadres */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['mail']['alter']['text'] = '<a href="/beelduitwisselaar/sendmail/[uid]/3">[mail]</a>';
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  /* Veld: Gebruiker: Specialisatie */
  $handler->display->display_options['fields']['field_specialisatie']['id'] = 'field_specialisatie';
  $handler->display->display_options['fields']['field_specialisatie']['table'] = 'field_data_field_specialisatie';
  $handler->display->display_options['fields']['field_specialisatie']['field'] = 'field_specialisatie';
  $handler->display->display_options['fields']['field_specialisatie']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_specialisatie']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_specialisatie']['delta_offset'] = '0';
  /* Veld: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Beelden in behandeling';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$sql = "select count(*) as aantal from field_data_field_status s, field_data_field_beeldexpert e where s.entity_id = e.entity_id and s.field_status_value = 1 and e.field_beeldexpert_target_id = " . $row->uid;
echo db_query( $sql )->fetchField();

 ?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '4';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
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
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Lijst validatoren';
  $handler->display->display_options['path'] = 'email-expert';
  $translatables['expert_lijst'] = array(
    t('Master'),
    t('User lijst'),
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
    t('E-mail'),
    t('- Selecteer een actie -'),
    t('Verstuur email'),
    t('[field_achternaam], [field_voornaam]'),
    t('Uid'),
    t('Validator'),
    t('<a href="/user/[uid]">[field_achternaam], [field_voornaam]</a>'),
    t('E-mailadres'),
    t('<a href="/beelduitwisselaar/sendmail/[uid]/3">[mail]</a>'),
    t('Specialisatie'),
    t('Beelden in behandeling'),
    t('Page'),
    t('Lijst validatoren'),
  );
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
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Zoek';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Opnieuw instellen';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Veld: Inhoud: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Inhoud: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Inhoud: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Inhoud: Gepubliceerd */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Inhoud: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'beelduitwisselaar' => 'beelduitwisselaar',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['verwijzing_naar_beelduitwisselaar_record'] = array(
    t('Master'),
    t('Verwijzing naar beelduitwisselaar record'),
    t('more'),
    t('Zoek'),
    t('Opnieuw instellen'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Alle'),
    t('Block'),
  );
  $export['verwijzing_naar_beelduitwisselaar_record'] = $view;

  return $export;
}
