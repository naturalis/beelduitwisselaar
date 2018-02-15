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
  $handler->display->display_options['title'] = 'New images';
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
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reset';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« first';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ previous';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'next ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'last »';
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
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="gridright"><a href="/?q=grid-afbeeldingen">Grid</a>: <a href="/?q=grid-afbeeldingen"><img src="/sites/all/files/icon/grid.png" class="gridiconlarge" border="no" /></a><div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Relationship: Field collection item: Entity with the Afbeeldingen (field_afbeeldingen) */
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['id'] = 'field_afbeeldingen_node';
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['field'] = 'field_afbeeldingen_node';
  /* Field: Field collection item: URL */
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
  /* Field: Bulk operations: Field collection item */
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
      'label' => 'Remove selected images',
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 1,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Image(s) to validator / queue',
      'settings' => array(
        'url' => 'beelduitwisselaar/selectexpertise',
      ),
    ),
  );
  /* Field: Field collection item: Beeld */
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
  /* Field: Field collection item: Beeld */
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
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'field_afbeeldingen_node';
  $handler->display->display_options['fields']['created']['label'] = 'Date uploaded';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd M Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Field collection item: Datum van opname */
  $handler->display->display_options['fields']['field_datum']['id'] = 'field_datum';
  $handler->display->display_options['fields']['field_datum']['table'] = 'field_data_field_datum';
  $handler->display->display_options['fields']['field_datum']['field'] = 'field_datum';
  $handler->display->display_options['fields']['field_datum']['label'] = 'Date published';
  $handler->display->display_options['fields']['field_datum']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_datum']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Field: First name */
  $handler->display->display_options['fields']['field_voornaam']['id'] = 'field_voornaam';
  $handler->display->display_options['fields']['field_voornaam']['table'] = 'field_data_field_voornaam';
  $handler->display->display_options['fields']['field_voornaam']['field'] = 'field_voornaam';
  $handler->display->display_options['fields']['field_voornaam']['relationship'] = 'field_afbeeldingen_node';
  $handler->display->display_options['fields']['field_voornaam']['label'] = '';
  $handler->display->display_options['fields']['field_voornaam']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_voornaam']['element_label_colon'] = FALSE;
  /* Field: Field: family name */
  $handler->display->display_options['fields']['field_achternaam']['id'] = 'field_achternaam';
  $handler->display->display_options['fields']['field_achternaam']['table'] = 'field_data_field_achternaam';
  $handler->display->display_options['fields']['field_achternaam']['field'] = 'field_achternaam';
  $handler->display->display_options['fields']['field_achternaam']['relationship'] = 'field_afbeeldingen_node';
  $handler->display->display_options['fields']['field_achternaam']['label'] = 'Fotographer';
  $handler->display->display_options['fields']['field_achternaam']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_achternaam']['alter']['text'] = '<a href="/search/node/[field_achternaam] [field_voornaam]">[field_achternaam], [field_voornaam]</a>';
  $handler->display->display_options['fields']['field_achternaam']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Locatie */
  $handler->display->display_options['fields']['field_locatie']['id'] = 'field_locatie';
  $handler->display->display_options['fields']['field_locatie']['table'] = 'field_data_field_locatie';
  $handler->display->display_options['fields']['field_locatie']['field'] = 'field_locatie';
  /* Field: Field collection item: Soortnaam en opmerkingen */
  $handler->display->display_options['fields']['field_opmerkingen']['id'] = 'field_opmerkingen';
  $handler->display->display_options['fields']['field_opmerkingen']['table'] = 'field_data_field_opmerkingen';
  $handler->display->display_options['fields']['field_opmerkingen']['field'] = 'field_opmerkingen';
  $handler->display->display_options['fields']['field_opmerkingen']['label'] = 'Comment photographer';
  /* Field: Field collection item: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'views_entity_field_collection_item';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = 'Edit';
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
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Filter results:';
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
  $handler->display->display_options['title'] = 'New images';
  $handler->display->display_options['path'] = 'afbeeldingen';
  $translatables['afbeeldingen'] = array(
    t('Master'),
    t('New images'),
    t('more'),
    t('Filter'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('<div class="gridright"><a href="/?q=grid-afbeeldingen">Grid</a>: <a href="/?q=grid-afbeeldingen"><img src="/sites/all/files/icon/grid.png" class="gridiconlarge" border="no" /></a><div>'),
    t('field_afbeeldingen'),
    t('[url_1]/edit'),
    t('- Choose an operation -'),
    t('Remove selected images'),
    t('Image(s) to validator / queue'),
    t('Image'),
    t('<a href="[url_1]">[field_newimage]</a>'),
    t('Date uploaded'),
    t('Date published'),
    t('Photographer'),
    t('<a href="/search/node/[field_achternaam] [field_voornaam]">[field_achternaam], [field_voornaam]</a>'),
    t('Location'),
    t('Comment photographer'),
    t('Edit'),
    t('<a href="[url]/edit"><img src="/sites/all/files/icon/edit.png" class="gridicon" border="no" /></a>'),
    t('Filter results:'),
    t('Page'),
  );
  $export['afbeeldingen'] = $view;

  $view = new view();
  $view->name = 'afbeeldingen_afgekeurd';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'Images denied';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Denied images';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reset';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« first';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ previous';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'next ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'last »';
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
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="gridright"><a href="/?q=grid-afbeeldingen-afgekeurd">Grid</a>: <a href="/?q=grid-afbeeldingen-afgekeurd"><img src="/sites/all/files/icon/grid.png" class="gridiconlarge" border="no" /></a><div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Relationship: Field collection item: Entity with the Afbeeldingen (field_afbeeldingen) */
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['id'] = 'field_afbeeldingen_node';
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['field'] = 'field_afbeeldingen_node';
  /* Field: Bulk operations: Field collection item */
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
      'label' => 'Remove selected images',
    ),
    'action::system_send_email_action' => array(
      'selected' => 1,
      'postpone_processing' => 1,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Send mail',
    ),
  );
  /* Field: Field collection item: Beeld */
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
  /* Field: Field collection item: Beeld */
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
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['lightbox2']['id'] = 'lightbox2';
  $handler->display->display_options['fields']['lightbox2']['table'] = 'lightbox2';
  $handler->display->display_options['fields']['lightbox2']['field'] = 'lightbox2';
  $handler->display->display_options['fields']['lightbox2']['label'] = 'Image';
  /* Field: Field collection item: Datum van opname */
  $handler->display->display_options['fields']['field_datum']['id'] = 'field_datum';
  $handler->display->display_options['fields']['field_datum']['table'] = 'field_data_field_datum';
  $handler->display->display_options['fields']['field_datum']['field'] = 'field_datum';
  $handler->display->display_options['fields']['field_datum']['label'] = 'Date';
  $handler->display->display_options['fields']['field_datum']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Field: First name */
  $handler->display->display_options['fields']['field_voornaam']['id'] = 'field_voornaam';
  $handler->display->display_options['fields']['field_voornaam']['table'] = 'field_data_field_voornaam';
  $handler->display->display_options['fields']['field_voornaam']['field'] = 'field_voornaam';
  $handler->display->display_options['fields']['field_voornaam']['relationship'] = 'field_afbeeldingen_node';
  $handler->display->display_options['fields']['field_voornaam']['label'] = '';
  $handler->display->display_options['fields']['field_voornaam']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_voornaam']['element_label_colon'] = FALSE;
  /* Field: Field: family name */
  $handler->display->display_options['fields']['field_achternaam']['id'] = 'field_achternaam';
  $handler->display->display_options['fields']['field_achternaam']['table'] = 'field_data_field_achternaam';
  $handler->display->display_options['fields']['field_achternaam']['field'] = 'field_achternaam';
  $handler->display->display_options['fields']['field_achternaam']['relationship'] = 'field_afbeeldingen_node';
  $handler->display->display_options['fields']['field_achternaam']['label'] = '';
  $handler->display->display_options['fields']['field_achternaam']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_achternaam']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Photographer';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_achternaam], [field_voornaam]';
  /* Field: Field collection item: Soort/taxon */
  $handler->display->display_options['fields']['field_soort_taxon']['id'] = 'field_soort_taxon';
  $handler->display->display_options['fields']['field_soort_taxon']['table'] = 'field_data_field_soort_taxon';
  $handler->display->display_options['fields']['field_soort_taxon']['field'] = 'field_soort_taxon';
  /* Field: Field collection item: Validator */
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
    3 => '3',
  );
  $handler->display->display_options['filters']['field_status_value']['group'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'afbeeldingen-afgekeurd';
  $translatables['afbeeldingen_afgekeurd'] = array(
    t('Master'),
    t('Denied images'),
    t('more'),
    t('Search'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('<div class="gridright"><a href="/?q=grid-afbeeldingen-afgekeurd">Grid</a>: <a href="/?q=grid-afbeeldingen-afgekeurd"><img src="/sites/all/files/icon/grid.png" class="gridiconlarge" border="no" /></a><div>'),
    t('field_afbeeldingen'),
    t('- Choose an operation -'),
    t('Remove selected images'),
    t('Send mail'),
    t('Image'),
    t('Date'),
    t('Photographer'),
    t('[field_achternaam], [field_voornaam]'),
    t('Species/taxon'),
    t('Expert'),
    t('Status'),
    t('Page'),
  );
  $export['afbeeldingen_afgekeurd'] = $view;

  $view = new view();
  $view->name = 'afbeeldingen_afgekeurd_all';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'Images denied all';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Images denied (all)';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reset';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« first';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ previous';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'next ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'last »';
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
  /* Field: Field collection item: Beeld */
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
      'label' => 'Remove selected images',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Send to expert (selection in next screen)',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'field_afbeeldingen::field_beeldexpert' => 'field_afbeeldingen::field_beeldexpert',
        ),
      ),
    ),
  );
  /* Field: Field collection item: Validator */
  $handler->display->display_options['fields']['field_beeldexpert']['id'] = 'field_beeldexpert';
  $handler->display->display_options['fields']['field_beeldexpert']['table'] = 'field_data_field_beeldexpert';
  $handler->display->display_options['fields']['field_beeldexpert']['field'] = 'field_beeldexpert';
  $handler->display->display_options['fields']['field_beeldexpert']['label'] = 'Expert';
  $handler->display->display_options['fields']['field_beeldexpert']['settings'] = array(
    'link' => 0,
  );
  /* Field: Field collection item: Opmerking validator */
  $handler->display->display_options['fields']['field_beeldevaluatie']['id'] = 'field_beeldevaluatie';
  $handler->display->display_options['fields']['field_beeldevaluatie']['table'] = 'field_data_field_beeldevaluatie';
  $handler->display->display_options['fields']['field_beeldevaluatie']['field'] = 'field_beeldevaluatie';
  $handler->display->display_options['fields']['field_beeldevaluatie']['label'] = 'Evaluation';
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
    t('Images denied (all)'),
    t('more'),
    t('Search'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Date of publication'),
    t('Location'),
    t('Species/taxon'),
    t('Image'),
    t('- Choose an operation -'),
    t('Remove selected images'),
    t('Send to expert (selection in next screen)'),
    t('Expert'),
    t('Evaluation'),
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
  $handler->display->display_options['title'] = 'Images connected';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reset';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« first';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ previous';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'next ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'last »';
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
  /* Field: Field collection item: Beeld */
  $handler->display->display_options['fields']['field_newimage']['id'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage']['table'] = 'field_data_field_newimage';
  $handler->display->display_options['fields']['field_newimage']['field'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_newimage']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Field collection item: Datum van opname */
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
  /* Field: Field collection item: Locatie */
  $handler->display->display_options['fields']['field_locatie']['id'] = 'field_locatie';
  $handler->display->display_options['fields']['field_locatie']['table'] = 'field_data_field_locatie';
  $handler->display->display_options['fields']['field_locatie']['field'] = 'field_locatie';
  /* Field: Field collection item: Soortnaam en opmerkingen */
  $handler->display->display_options['fields']['field_opmerkingen']['id'] = 'field_opmerkingen';
  $handler->display->display_options['fields']['field_opmerkingen']['table'] = 'field_data_field_opmerkingen';
  $handler->display->display_options['fields']['field_opmerkingen']['field'] = 'field_opmerkingen';
  $handler->display->display_options['fields']['field_opmerkingen']['label'] = 'Comment photographer';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_afbeeldingen_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'All';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $translatables['afbeeldingen_bij_node'] = array(
    t('Master'),
    t('Images connected'),
    t('more'),
    t('Search'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('field_afbeeldingen'),
    t('Image'),
    t('Date of publication'),
    t('Location'),
    t('Comment photographer'),
    t('Alle'),
    t('Block'),
  );
  $export['afbeeldingen_bij_node'] = $view;

  $view = new view();
  $view->name = 'afbeeldingen_geevalueerd';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'Images evaluated';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Validated images';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    5 => '5',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reset';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« first';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ previous';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'next ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'last »';
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
  $handler->display->display_options['empty']['area']['content'] = 'There are no images that have been processed yet.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Field collection item: Entity with the Afbeeldingen (field_afbeeldingen) */
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['id'] = 'field_afbeeldingen_node';
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['field'] = 'field_afbeeldingen_node';
  /* Field: Field collection item: Field collection item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['item_id']['separator'] = '';
  /* Field: Field collection item: URL */
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
  /* Field: Field collection item: Beeld */
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
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'field_afbeeldingen_node';
  $handler->display->display_options['fields']['created']['label'] = 'Date uploaded';
  $handler->display->display_options['fields']['created']['date_format'] = 'superkort';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Field collection item: Locatie */
  $handler->display->display_options['fields']['field_locatie']['id'] = 'field_locatie';
  $handler->display->display_options['fields']['field_locatie']['table'] = 'field_data_field_locatie';
  $handler->display->display_options['fields']['field_locatie']['field'] = 'field_locatie';
  /* Field: Field collection item: Soort/taxon */
  $handler->display->display_options['fields']['field_soort_taxon']['id'] = 'field_soort_taxon';
  $handler->display->display_options['fields']['field_soort_taxon']['table'] = 'field_data_field_soort_taxon';
  $handler->display->display_options['fields']['field_soort_taxon']['field'] = 'field_soort_taxon';
  /* Contextual filter: Field collection item: Validator (field_beeldexpert) */
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['id'] = 'field_beeldexpert_target_id';
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['table'] = 'field_data_field_beeldexpert';
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['field'] = 'field_beeldexpert_target_id';
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['exception']['title'] = 'All';
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
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Filter results:';
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
    t('Validated images'),
    t('more'),
    t('Search'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('There are no images that have been processed yet.'),
    t('field_afbeeldingen'),
    t('Field collection item ID'),
    t('.'),
    t('[url]/edit'),
    t('Image'),
    t('<a href="/beelddetail/[item_id]">[field_newimage]</a>'),
    t('Date uploaded'),
    t('Location'),
    t('Species/taxon'),
    t('All'),
    t('Filter results:'),
    t('Page'),
  );
  $export['afbeeldingen_geevalueerd'] = $view;

  $view = new view();
  $view->name = 'afbeeldingen_geevalueerd_all';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'Images evaluated all';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Validated images';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reset';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« first';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ previous';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'next ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'last »';
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
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="gridright"><a href="/?q=grid-afbeeldingen-geevalueerd-all">Grid</a>: <a href="/?q=grid-afbeeldingen-geevalueerd-all"><img src="/sites/all/files/icon/grid.png" class="gridiconlarge" border="no" /></a><div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Relationship: Field collection item: Entity with the Afbeeldingen (field_afbeeldingen) */
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['id'] = 'field_afbeeldingen_node';
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['field'] = 'field_afbeeldingen_node';
  /* Field: Field collection item: URL */
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
  /* Field: Bulk operations: Field collection item */
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
      'label' => 'Send mail',
    ),
  );
  /* Field: Field collection item: Beeld */
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
  /* Field: Field collection item: Datum insturen */
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
  /* Field: Field: First name */
  $handler->display->display_options['fields']['field_voornaam']['id'] = 'field_voornaam';
  $handler->display->display_options['fields']['field_voornaam']['table'] = 'field_data_field_voornaam';
  $handler->display->display_options['fields']['field_voornaam']['field'] = 'field_voornaam';
  $handler->display->display_options['fields']['field_voornaam']['relationship'] = 'field_afbeeldingen_node';
  $handler->display->display_options['fields']['field_voornaam']['label'] = '';
  $handler->display->display_options['fields']['field_voornaam']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_voornaam']['element_label_colon'] = FALSE;
  /* Field: Field: family name */
  $handler->display->display_options['fields']['field_achternaam']['id'] = 'field_achternaam';
  $handler->display->display_options['fields']['field_achternaam']['table'] = 'field_data_field_achternaam';
  $handler->display->display_options['fields']['field_achternaam']['field'] = 'field_achternaam';
  $handler->display->display_options['fields']['field_achternaam']['relationship'] = 'field_afbeeldingen_node';
  $handler->display->display_options['fields']['field_achternaam']['label'] = 'Photographer';
  $handler->display->display_options['fields']['field_achternaam']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_achternaam']['alter']['text'] = '[field_achternaam], [field_voornaam]';
  $handler->display->display_options['fields']['field_achternaam']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Validator */
  $handler->display->display_options['fields']['field_beeldexpert']['id'] = 'field_beeldexpert';
  $handler->display->display_options['fields']['field_beeldexpert']['table'] = 'field_data_field_beeldexpert';
  $handler->display->display_options['fields']['field_beeldexpert']['field'] = 'field_beeldexpert';
  $handler->display->display_options['fields']['field_beeldexpert']['settings'] = array(
    'link' => 0,
  );
  /* Field: Field collection item: Soort/taxon */
  $handler->display->display_options['fields']['field_soort_taxon']['id'] = 'field_soort_taxon';
  $handler->display->display_options['fields']['field_soort_taxon']['table'] = 'field_data_field_soort_taxon';
  $handler->display->display_options['fields']['field_soort_taxon']['field'] = 'field_soort_taxon';
  /* Field: Field collection item: Opmerking validator */
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
  $handler->display->display_options['filters']['combine_1']['expose']['label'] = 'Filter results:';
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
    t('Validated images'),
    t('more'),
    t('Filter'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('<div class="gridright"><a href="/?q=grid-afbeeldingen-geevalueerd-all">Gridoverzicht</a>: <a href="/?q=grid-afbeeldingen-geevalueerd-all"><img src="/sites/all/files/icon/grid.png" class="gridiconlarge" border="no" /></a><div>'),
    t('field_afbeeldingen'),
    t('[url]/edit'),
    t('- Choose an operation -'),
    t('Send email'),
    t('Image'),
    t('<a href="[url]">[field_newimage_1]</a>'),
    t('Date uploaded'),
    t('Photographer'),
    t('[field_achternaam], [field_voornaam]'),
    t('Validator'),
    t('Species/taxon'),
    t('Comment validator'),
    t('Filter results:'),
    t('Page'),
  );
  $export['afbeeldingen_geevalueerd_all'] = $view;

  $view = new view();
  $view->name = 'afbeeldingen_gevalideerd_wall';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'afbeeldingen_gevalideerd_wall';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Validated images';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reset';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« first';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ previous';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'next ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'last »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'url_1' => 'url_1',
    'views_bulk_operations' => 'views_bulk_operations',
    'field_newimage' => 'field_newimage',
    'created' => 'created',
    'field_voornaam' => 'field_voornaam',
    'field_achternaam' => 'field_achternaam',
    'field_beeldexpert' => 'field_beeldexpert',
    'field_newimage_1' => 'field_newimage_1',
    'field_soort_taxon' => 'field_soort_taxon',
    'field_beeldevaluatie' => 'field_beeldevaluatie',
    'url' => 'url',
    'field_status' => 'field_status',
  );
  $handler->display->display_options['style_options']['default'] = 'created';
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
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
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
    'field_beeldexpert' => array(
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
    'field_soort_taxon' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_beeldevaluatie' => array(
      'sortable' => 1,
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
    'field_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="gridright"><a href="/?q=grid-afbeeldingen-geevalueerd-all">Grid</a>: <a href="/?q=grid-afbeeldingen-geevalueerd-all"><img src="/sites/all/files/icon/grid.png" class="gridiconlarge" border="no" /></a><div>';
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
  /* Field: Field collection item: URL */
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
  /* Field: Bulk operations: Field collection item */
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
      'label' => 'Remove selected images',
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 1,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Images to validator / queue',
      'settings' => array(
        'url' => 'beelduitwisselaar/selectexpertise',
      ),
    ),
  );
  /* Field: Field collection item: Beeld */
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
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'field_afbeeldingen_node';
  $handler->display->display_options['fields']['created']['label'] = 'Date uploaded';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd M Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Field: First name */
  $handler->display->display_options['fields']['field_voornaam']['id'] = 'field_voornaam';
  $handler->display->display_options['fields']['field_voornaam']['table'] = 'field_data_field_voornaam';
  $handler->display->display_options['fields']['field_voornaam']['field'] = 'field_voornaam';
  $handler->display->display_options['fields']['field_voornaam']['relationship'] = 'field_afbeeldingen_node';
  $handler->display->display_options['fields']['field_voornaam']['label'] = '';
  $handler->display->display_options['fields']['field_voornaam']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_voornaam']['element_label_colon'] = FALSE;
  /* Field: Field: family name */
  $handler->display->display_options['fields']['field_achternaam']['id'] = 'field_achternaam';
  $handler->display->display_options['fields']['field_achternaam']['table'] = 'field_data_field_achternaam';
  $handler->display->display_options['fields']['field_achternaam']['field'] = 'field_achternaam';
  $handler->display->display_options['fields']['field_achternaam']['relationship'] = 'field_afbeeldingen_node';
  $handler->display->display_options['fields']['field_achternaam']['label'] = 'Photographer';
  $handler->display->display_options['fields']['field_achternaam']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_achternaam']['alter']['text'] = '<a href="/search/node/[field_achternaam] [field_voornaam]">[field_achternaam], [field_voornaam]</a>';
  /* Field: Field: First name */
  $handler->display->display_options['fields']['field_voornaam_1']['id'] = 'field_voornaam_1';
  $handler->display->display_options['fields']['field_voornaam_1']['table'] = 'field_data_field_voornaam';
  $handler->display->display_options['fields']['field_voornaam_1']['field'] = 'field_voornaam';
  $handler->display->display_options['fields']['field_voornaam_1']['relationship'] = 'field_beeldexpert_target_id';
  $handler->display->display_options['fields']['field_voornaam_1']['exclude'] = TRUE;
  /* Field: Field: family name */
  $handler->display->display_options['fields']['field_achternaam_1']['id'] = 'field_achternaam_1';
  $handler->display->display_options['fields']['field_achternaam_1']['table'] = 'field_data_field_achternaam';
  $handler->display->display_options['fields']['field_achternaam_1']['field'] = 'field_achternaam';
  $handler->display->display_options['fields']['field_achternaam_1']['relationship'] = 'field_beeldexpert_target_id';
  $handler->display->display_options['fields']['field_achternaam_1']['label'] = 'Validator';
  $handler->display->display_options['fields']['field_achternaam_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_achternaam_1']['alter']['text'] = '<a href="/search/node/[field_achternaam_1] [field_voornaam_1]">[field_achternaam_1], [field_voornaam_1]</a>';
  /* Field: Field collection item: Validator */
  $handler->display->display_options['fields']['field_beeldexpert']['id'] = 'field_beeldexpert';
  $handler->display->display_options['fields']['field_beeldexpert']['table'] = 'field_data_field_beeldexpert';
  $handler->display->display_options['fields']['field_beeldexpert']['field'] = 'field_beeldexpert';
  $handler->display->display_options['fields']['field_beeldexpert']['label'] = 'Expert';
  $handler->display->display_options['fields']['field_beeldexpert']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_beeldexpert']['settings'] = array(
    'link' => 0,
  );
  /* Field: Field collection item: Beeld */
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
  /* Field: Field collection item: Soort/taxon */
  $handler->display->display_options['fields']['field_soort_taxon']['id'] = 'field_soort_taxon';
  $handler->display->display_options['fields']['field_soort_taxon']['table'] = 'field_data_field_soort_taxon';
  $handler->display->display_options['fields']['field_soort_taxon']['field'] = 'field_soort_taxon';
  /* Field: Field collection item: Opmerking validator */
  $handler->display->display_options['fields']['field_beeldevaluatie']['id'] = 'field_beeldevaluatie';
  $handler->display->display_options['fields']['field_beeldevaluatie']['table'] = 'field_data_field_beeldevaluatie';
  $handler->display->display_options['fields']['field_beeldevaluatie']['field'] = 'field_beeldevaluatie';
  /* Field: Field collection item: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'views_entity_field_collection_item';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = 'Edit';
  $handler->display->display_options['fields']['url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['url']['alter']['text'] = '<a href="[url]/edit"><img src="/sites/all/files/icon/edit.png" class="gridicon" border="no" /></a>';
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Field collection item: status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['label'] = '';
  $handler->display->display_options['fields']['field_status']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_status']['alter']['text'] = '<img class="status" width="24px" src="/sites/all/modules/beelduitwisselaar/img/[field_status-value].png" title="[field_status]" />';
  $handler->display->display_options['fields']['field_status']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Name */
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
    2 => '2',
    3 => '3',
  );
  $handler->display->display_options['filters']['field_status_value']['group'] = 1;
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Filter results:';
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
    'field_beeldexpert' => 'field_beeldexpert',
    'field_soort_taxon' => 'field_soort_taxon',
    'field_beeldevaluatie' => 'field_beeldevaluatie',
    'name' => 'name',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'afbeeldingen-geevalueerd-all';
  $translatables['afbeeldingen_gevalideerd_wall'] = array(
    t('Master'),
    t('Validated images'),
    t('more'),
    t('Filter'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('<div class="gridright"><a href="/?q=grid-afbeeldingen-geevalueerd-all">Gridoverzicht</a>: <a href="/?q=grid-afbeeldingen-geevalueerd-all"><img src="/sites/all/files/icon/grid.png" class="gridiconlarge" border="no" /></a><div>'),
    t('field_afbeeldingen'),
    t('Gebruiker entity referenced from field_beeldexpert'),
    t('term from field_groep'),
    t('[url_1]/edit'),
    t('- Choose an operation -'),
    t('Remove selected images'),
    t('Image to validator / queue'),
    t('Image'),
    t('<a href="[url_1]">[field_newimage]</a>'),
    t('Date uploaded'),
    t('Photographer'),
    t('<a href="/search/node/[field_achternaam] [field_voornaam]">[field_achternaam], [field_voornaam]</a>'),
    t('First name'),
    t('Validator'),
    t('<a href="/search/node/[field_achternaam_1] [field_voornaam_1]">[field_achternaam_1], [field_voornaam_1]</a>'),
    t('Expert'),
    t('Species/taxon'),
    t('Comment validator'),
    t('Edit'),
    t('<a href="[url]/edit"><img src="/sites/all/files/icon/edit.png" class="gridicon" border="no" /></a>'),
    t('<img class="status" width="24px" src="/sites/all/modules/beelduitwisselaar/img/[field_status-value].png" title="[field_status]" />'),
    t('Filter resultaten:'),
    t('Page'),
  );
  $export['afbeeldingen_gevalideerd_wall'] = $view;

  $view = new view();
  $view->name = 'afbeeldingen_goedgekeurd';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'Images approved';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Approved images';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reset';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« first';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ previous';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'next ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'last »';
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
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="gridright"><a href="/?q=grid-afbeeldingen-goedgekeurd">Grid</a>: <a href="/?q=grid-afbeeldingen-goedgekeurd"><img src="/sites/all/files/icon/grid.png" class="gridiconlarge" border="no" /></a><div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Relationship: Field collection item: Entity with the Afbeeldingen (field_afbeeldingen) */
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['id'] = 'field_afbeeldingen_node';
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['field'] = 'field_afbeeldingen_node';
  /* Field: Bulk operations: Field collection item */
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
      'label' => 'Publish Image(s)',
    ),
    'action::system_send_email_action' => array(
      'selected' => 1,
      'postpone_processing' => 1,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Send mail',
    ),
  );
  /* Field: Field collection item: Beeld */
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
  /* Field: Field collection item: Beeld */
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
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['lightbox2']['id'] = 'lightbox2';
  $handler->display->display_options['fields']['lightbox2']['table'] = 'lightbox2';
  $handler->display->display_options['fields']['lightbox2']['field'] = 'lightbox2';
  $handler->display->display_options['fields']['lightbox2']['label'] = 'Image';
  /* Field: Field collection item: Datum van opname */
  $handler->display->display_options['fields']['field_datum']['id'] = 'field_datum';
  $handler->display->display_options['fields']['field_datum']['table'] = 'field_data_field_datum';
  $handler->display->display_options['fields']['field_datum']['field'] = 'field_datum';
  $handler->display->display_options['fields']['field_datum']['label'] = 'Date';
  $handler->display->display_options['fields']['field_datum']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Field: First name */
  $handler->display->display_options['fields']['field_voornaam']['id'] = 'field_voornaam';
  $handler->display->display_options['fields']['field_voornaam']['table'] = 'field_data_field_voornaam';
  $handler->display->display_options['fields']['field_voornaam']['field'] = 'field_voornaam';
  $handler->display->display_options['fields']['field_voornaam']['relationship'] = 'field_afbeeldingen_node';
  $handler->display->display_options['fields']['field_voornaam']['label'] = '';
  $handler->display->display_options['fields']['field_voornaam']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_voornaam']['element_label_colon'] = FALSE;
  /* Field: Field: family name */
  $handler->display->display_options['fields']['field_achternaam']['id'] = 'field_achternaam';
  $handler->display->display_options['fields']['field_achternaam']['table'] = 'field_data_field_achternaam';
  $handler->display->display_options['fields']['field_achternaam']['field'] = 'field_achternaam';
  $handler->display->display_options['fields']['field_achternaam']['relationship'] = 'field_afbeeldingen_node';
  $handler->display->display_options['fields']['field_achternaam']['label'] = '';
  $handler->display->display_options['fields']['field_achternaam']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_achternaam']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Photographer';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_achternaam], [field_voornaam]';
  /* Field: Field collection item: Soort/taxon */
  $handler->display->display_options['fields']['field_soort_taxon']['id'] = 'field_soort_taxon';
  $handler->display->display_options['fields']['field_soort_taxon']['table'] = 'field_data_field_soort_taxon';
  $handler->display->display_options['fields']['field_soort_taxon']['field'] = 'field_soort_taxon';
  /* Field: Field collection item: Validator */
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
  );
  $handler->display->display_options['filters']['field_status_value']['group'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'afbeeldingen-goedgekeurd';
  $translatables['afbeeldingen_goedgekeurd'] = array(
    t('Master'),
    t('Approved images'),
    t('more'),
    t('Search'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('<div class="gridright"><a href="/?q=grid-afbeeldingen-goedgekeurd">Gridoverzicht</a>: <a href="/?q=grid-afbeeldingen-goedgekeurd"><img src="/sites/all/files/icon/grid.png" class="gridiconlarge" border="no" /></a><div>'),
    t('field_afbeeldingen'),
    t('- Choose an operation -'),
    t('Image(s) publish'),
    t('Send mail'),
    t('Image'),
    t('Date'),
    t('Photographer'),
    t('[field_achternaam], [field_voornaam]'),
    t('Species/taxon'),
    t('Expert'),
    t('Status'),
    t('Page'),
  );
  $export['afbeeldingen_goedgekeurd'] = $view;

  $view = new view();
  $view->name = 'afbeeldingen_goedgekeurd_all';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'Images approved all';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Images approved (all)';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reset';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« first';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ previous';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'next ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'last »';
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
  /* Field: Field collection item: Beeld */
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
      'label' => 'Complete',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'field_afbeeldingen::field_status' => 'field_afbeeldingen::field_status',
        ),
      ),
    ),
  );
  /* Field: Field collection item: Validator */
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
    t('Images approved (all)'),
    t('more'),
    t('Search'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Date of publication'),
    t('Location'),
    t('Species/taxon'),
    t('Image'),
    t('- Choose an operation -'),
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
  $view->human_name = 'Images per photographer';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Validated images';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reset';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« first';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ previous';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'next ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'last »';
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
  /* Field: Field collection item: Beeld */
  $handler->display->display_options['fields']['field_newimage']['id'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage']['table'] = 'field_data_field_newimage';
  $handler->display->display_options['fields']['field_newimage']['field'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_newimage']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Field collection item: Datum van opname */
  $handler->display->display_options['fields']['field_datum']['id'] = 'field_datum';
  $handler->display->display_options['fields']['field_datum']['table'] = 'field_data_field_datum';
  $handler->display->display_options['fields']['field_datum']['field'] = 'field_datum';
  $handler->display->display_options['fields']['field_datum']['label'] = 'Date';
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
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'field_afbeeldingen_node';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'All';
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
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['exception']['title'] = 'All';
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['block_description'] = 'Validated images (userpage)';
  $translatables['afbeeldingen_per_auteur'] = array(
    t('Master'),
    t('Validated images'),
    t('more'),
    t('Search'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('field_afbeeldingen'),
    t('Beeld'),
    t('Date'),
    t('Location'),
    t('Soort/taxon'),
    t('Alle'),
    t('Page'),
    t('Block'),
    t('Validated images (userpage)'),
  );
  $export['afbeeldingen_per_auteur'] = $view;

  $view = new view();
  $view->name = 'afbeeldingen_per_expert';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'Images per expert';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'New images';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    5 => '5',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reset';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« first';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ previous';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'next ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'last »';
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
  $handler->display->display_options['empty']['area']['content'] = 'There are no images ready for validation.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Field collection item: Entity with the Afbeeldingen (field_afbeeldingen) */
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['id'] = 'field_afbeeldingen_node';
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['field'] = 'field_afbeeldingen_node';
  /* Field: Field collection item: URL */
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
  /* Field: Field collection item: Beeld */
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
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'field_afbeeldingen_node';
  $handler->display->display_options['fields']['created']['label'] = 'Date uploaded';
  $handler->display->display_options['fields']['created']['date_format'] = 'superkort';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Field collection item: Datum van opname */
  $handler->display->display_options['fields']['field_datum']['id'] = 'field_datum';
  $handler->display->display_options['fields']['field_datum']['table'] = 'field_data_field_datum';
  $handler->display->display_options['fields']['field_datum']['field'] = 'field_datum';
  $handler->display->display_options['fields']['field_datum']['label'] = 'Date uploaded';
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
  /* Field: Field collection item: Soortnaam en opmerkingen */
  $handler->display->display_options['fields']['field_opmerkingen']['id'] = 'field_opmerkingen';
  $handler->display->display_options['fields']['field_opmerkingen']['table'] = 'field_data_field_opmerkingen';
  $handler->display->display_options['fields']['field_opmerkingen']['field'] = 'field_opmerkingen';
  $handler->display->display_options['fields']['field_opmerkingen']['label'] = 'Comment photographer';
  /* Contextual filter: Field collection item: Validator (field_beeldexpert) */
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['id'] = 'field_beeldexpert_target_id';
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['table'] = 'field_data_field_beeldexpert';
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['field'] = 'field_beeldexpert_target_id';
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['exception']['title'] = 'All';
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
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Filter results: ';
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
  /* Field: Field collection item: URL */
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
  /* Field: Field collection item: Beeld */
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
  /* Field: Field collection item: Datum van opname */
  $handler->display->display_options['fields']['field_datum']['id'] = 'field_datum';
  $handler->display->display_options['fields']['field_datum']['table'] = 'field_data_field_datum';
  $handler->display->display_options['fields']['field_datum']['field'] = 'field_datum';
  $handler->display->display_options['fields']['field_datum']['label'] = 'Date';
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
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field collection item: Validator (field_beeldexpert) */
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['id'] = 'field_beeldexpert_target_id';
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['table'] = 'field_data_field_beeldexpert';
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['field'] = 'field_beeldexpert_target_id';
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['exception']['title'] = 'All';
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['block_description'] = 'Nieuwe beeld per expert (userpage)';
  $translatables['afbeeldingen_per_expert'] = array(
    t('Master'),
    t('New images'),
    t('more'),
    t('Search'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('There are no images ready for validation.'),
    t('field_afbeeldingen'),
    t('[url]/edit'),
    t('Beeld'),
    t('<a href="[url]">[field_newimage]</a>'),
    t('Date uploaded'),
    t('Date published'),
    t('Location'),
    t('Comment photographer'),
    t('All'),
    t('Filter results: '),
    t('Page'),
    t('Block'),
    t('Datum'),
    t('New image per expert (userpage)'),
  );
  $export['afbeeldingen_per_expert'] = $view;

  $view = new view();
  $view->name = 'afbeeldingen_per_expert_all';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'Images per expert all';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Images processed by validator';
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'more...';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reset';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« first';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ previous';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'next ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'last »';
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
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="gridright"><a href="/?q=grid-afbeeldingen-expert-all">Grid</a>: <a href="/?q=grid-afbeeldingen-expert-all"><img src="/sites/all/files/icon/grid.png" class="gridiconlarge" border="no" /></a><div>';
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
  /* Relationship: Content: Taxonomy terms on node */
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
  /* Field: Field collection item: URL */
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
  /* Field: Bulk operations: Field collection item */
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
      'label' => 'Remove selected images',
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 1,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Images to validator / queue',
      'settings' => array(
        'url' => 'beelduitwisselaar/selectexpertise',
      ),
    ),
  );
  /* Field: Field collection item: Beeld */
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
  /* Field: Field collection item: Datum insturen */
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
  /* Field: Field: First name */
  $handler->display->display_options['fields']['field_voornaam']['id'] = 'field_voornaam';
  $handler->display->display_options['fields']['field_voornaam']['table'] = 'field_data_field_voornaam';
  $handler->display->display_options['fields']['field_voornaam']['field'] = 'field_voornaam';
  $handler->display->display_options['fields']['field_voornaam']['relationship'] = 'field_afbeeldingen_node';
  $handler->display->display_options['fields']['field_voornaam']['label'] = '';
  $handler->display->display_options['fields']['field_voornaam']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_voornaam']['element_label_colon'] = FALSE;
  /* Field: Field: family name */
  $handler->display->display_options['fields']['field_achternaam']['id'] = 'field_achternaam';
  $handler->display->display_options['fields']['field_achternaam']['table'] = 'field_data_field_achternaam';
  $handler->display->display_options['fields']['field_achternaam']['field'] = 'field_achternaam';
  $handler->display->display_options['fields']['field_achternaam']['relationship'] = 'field_afbeeldingen_node';
  $handler->display->display_options['fields']['field_achternaam']['label'] = 'Photographer';
  $handler->display->display_options['fields']['field_achternaam']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_achternaam']['alter']['text'] = '<a href="/search/node/[field_achternaam] [field_voornaam]">[field_achternaam], [field_voornaam]</a>';
  $handler->display->display_options['fields']['field_achternaam']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_achternaam']['settings'] = array(
    'trim_length' => '1',
  );
  /* Field: Field: First name */
  $handler->display->display_options['fields']['field_voornaam_1']['id'] = 'field_voornaam_1';
  $handler->display->display_options['fields']['field_voornaam_1']['table'] = 'field_data_field_voornaam';
  $handler->display->display_options['fields']['field_voornaam_1']['field'] = 'field_voornaam';
  $handler->display->display_options['fields']['field_voornaam_1']['relationship'] = 'field_beeldexpert_target_id';
  $handler->display->display_options['fields']['field_voornaam_1']['exclude'] = TRUE;
  /* Field: Field: family name */
  $handler->display->display_options['fields']['field_achternaam_1']['id'] = 'field_achternaam_1';
  $handler->display->display_options['fields']['field_achternaam_1']['table'] = 'field_data_field_achternaam';
  $handler->display->display_options['fields']['field_achternaam_1']['field'] = 'field_achternaam';
  $handler->display->display_options['fields']['field_achternaam_1']['relationship'] = 'field_beeldexpert_target_id';
  $handler->display->display_options['fields']['field_achternaam_1']['label'] = 'Validator';
  $handler->display->display_options['fields']['field_achternaam_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_achternaam_1']['alter']['text'] = '<a href="/search/node/[field_achternaam_1] [field_voornaam_1]">[field_achternaam_1], [field_voornaam_1]</a>';
  /* Field: Field collection item: Soortgroep */
  $handler->display->display_options['fields']['field_groep']['id'] = 'field_groep';
  $handler->display->display_options['fields']['field_groep']['table'] = 'field_data_field_groep';
  $handler->display->display_options['fields']['field_groep']['field'] = 'field_groep';
  $handler->display->display_options['fields']['field_groep']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_groep']['alter']['text'] = '<a href="/search/node/[field_groep]">[field_groep]</a>';
  $handler->display->display_options['fields']['field_groep']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field collection item: Soortnaam en opmerkingen */
  $handler->display->display_options['fields']['field_opmerkingen']['id'] = 'field_opmerkingen';
  $handler->display->display_options['fields']['field_opmerkingen']['table'] = 'field_data_field_opmerkingen';
  $handler->display->display_options['fields']['field_opmerkingen']['field'] = 'field_opmerkingen';
  $handler->display->display_options['fields']['field_opmerkingen']['label'] = 'Comment photographer';
  /* Field: Taxonomy term: Name */
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
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Filter results:';
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
    t('Images processed by validator'),
    t('more...'),
    t('Filter'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('<div class="gridright"><a href="/?q=grid-afbeeldingen-expert-all">Gridoverzicht</a>: <a href="/?q=grid-afbeeldingen-expert-all"><img src="/sites/all/files/icon/grid.png" class="gridiconlarge" border="no" /></a><div>'),
    t('field_afbeeldingen'),
    t('User entity referenced from field_beeldexpert'),
    t('term from field_groep'),
    t('termgroep'),
    t('[url]/edit'),
    t('- Choose an operation -'),
    t('Remove selected images'),
    t('Image(s) to validator / queue'),
    t('Image'),
    t('<a href="[url]">[field_newimage]</a>'),
    t('Date uploaded'),
    t('Photographer'),
    t('<a href="/search/node/[field_achternaam] [field_voornaam]">[field_achternaam], [field_voornaam]</a>'),
    t('First name'),
    t('Validator'),
    t('<a href="/search/node/[field_achternaam_1] [field_voornaam_1]">[field_achternaam_1], [field_voornaam_1]</a>'),
    t('Species group'),
    t('<a href="/search/node/[field_groep]">[field_groep]</a>'),
    t('Comment photographer'),
    t('Expert'),
    t('beeldexpert (field_beeldexpert)'),
    t('Filter results:'),
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
  $view->human_name = 'images per user';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Images being processed';
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
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reset';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« first';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ previous';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'next ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'last »';
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
  $handler->display->display_options['empty']['area']['content'] = 'No images uploaded by you are being processed.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Field collection item: Entity with the Afbeeldingen (field_afbeeldingen) */
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['id'] = 'field_afbeeldingen_node';
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['field'] = 'field_afbeeldingen_node';
  /* Field: Field collection item: Field collection item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['item_id']['separator'] = '';
  /* Field: Field collection item: Beeld */
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
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'field_afbeeldingen_node';
  $handler->display->display_options['fields']['created']['label'] = 'Date uploaded';
  $handler->display->display_options['fields']['created']['date_format'] = 'superkort';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Field collection item: Locatie */
  $handler->display->display_options['fields']['field_locatie']['id'] = 'field_locatie';
  $handler->display->display_options['fields']['field_locatie']['table'] = 'field_data_field_locatie';
  $handler->display->display_options['fields']['field_locatie']['field'] = 'field_locatie';
  /* Field: Field collection item: Soortnaam en opmerkingen */
  $handler->display->display_options['fields']['field_opmerkingen']['id'] = 'field_opmerkingen';
  $handler->display->display_options['fields']['field_opmerkingen']['table'] = 'field_data_field_opmerkingen';
  $handler->display->display_options['fields']['field_opmerkingen']['field'] = 'field_opmerkingen';
  $handler->display->display_options['fields']['field_opmerkingen']['label'] = 'Comment photographer';
  /* Field: Field collection item: status */
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
  $handler->display->display_options['arguments']['field_fotograaf_target_id']['exception']['title'] = 'All';
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
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Filter results: ';
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
    t('Images being processed'),
    t('more'),
    t('Search'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('No images uploaded by you are being processed.'),
    t('field_afbeeldingen'),
    t('Field collection item ID'),
    t('.'),
    t('Image'),
    t('Date uploaded'),
    t('Location'),
    t('Comment photographer'),
    t('Status'),
    t('<img class="status" width="24px" src="/sites/all/modules/beelduitwisselaar/img/[field_status-value].png" title="[field_status]"/>'),
    t('All'),
    t('Filter results: '),
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
  $handler->display->display_options['title'] = 'Approved images';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reset';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« first';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ previous';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'next ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'last »';
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
  /* Field: Field collection item: Datum insturen */
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
  /* Field: Field collection item: Locatie */
  $handler->display->display_options['fields']['field_locatie']['id'] = 'field_locatie';
  $handler->display->display_options['fields']['field_locatie']['table'] = 'field_data_field_locatie';
  $handler->display->display_options['fields']['field_locatie']['field'] = 'field_locatie';
  /* Field: Field collection item: Soort/taxon */
  $handler->display->display_options['fields']['field_soort_taxon']['id'] = 'field_soort_taxon';
  $handler->display->display_options['fields']['field_soort_taxon']['table'] = 'field_data_field_soort_taxon';
  $handler->display->display_options['fields']['field_soort_taxon']['field'] = 'field_soort_taxon';
  /* Field: Field collection item: Beeld */
  $handler->display->display_options['fields']['field_newimage']['id'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage']['table'] = 'field_data_field_newimage';
  $handler->display->display_options['fields']['field_newimage']['field'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_newimage']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Field collection item: Beeld */
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
  $handler->display->display_options['arguments']['field_fotograaf_target_id']['exception']['title'] = 'All';
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
    t('Approved images'),
    t('more'),
    t('Search'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Date uploaded'),
    t('Location'),
    t('Species/taxon'),
    t('Image'),
    t('All'),
    t('Page'),
  );
  $export['afbeeldingen_per_user_compleet_'] = $view;

  $view = new view();
  $view->name = 'afbeeldingen_verwerkt_all';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'Images processed all';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Images processed (all)';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reset';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« first';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ previous';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'next ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'last »';
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
  /* Field: Field collection item: Beeld */
  $handler->display->display_options['fields']['field_newimage']['id'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage']['table'] = 'field_data_field_newimage';
  $handler->display->display_options['fields']['field_newimage']['field'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_newimage']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Field collection item: Validator */
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
    t('Images processed (all)'),
    t('more'),
    t('Search'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Date of publication'),
    t('Location'),
    t('Species/taxon'),
    t('Image'),
    t('Expert'),
    t('Page'),
  );
  $export['afbeeldingen_verwerkt_all'] = $view;

  $view = new view();
  $view->name = 'afbeeldingen_wacht_all';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'Images queued all';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Images queued (all)';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reset';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« first';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ previous';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'next ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'last »';
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
  /* Field: Field collection item: Beeld */
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
      'label' => 'Remove selected images',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Image to expert (selection in next screen)',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'field_afbeeldingen::field_beeldexpert' => 'field_afbeeldingen::field_beeldexpert',
        ),
      ),
    ),
  );
  /* Field: Field collection item: Validator */
  $handler->display->display_options['fields']['field_beeldexpert']['id'] = 'field_beeldexpert';
  $handler->display->display_options['fields']['field_beeldexpert']['table'] = 'field_data_field_beeldexpert';
  $handler->display->display_options['fields']['field_beeldexpert']['field'] = 'field_beeldexpert';
  $handler->display->display_options['fields']['field_beeldexpert']['label'] = 'Expert';
  $handler->display->display_options['fields']['field_beeldexpert']['settings'] = array(
    'link' => 0,
  );
  /* Field: Field collection item: Opmerking validator */
  $handler->display->display_options['fields']['field_beeldevaluatie']['id'] = 'field_beeldevaluatie';
  $handler->display->display_options['fields']['field_beeldevaluatie']['table'] = 'field_data_field_beeldevaluatie';
  $handler->display->display_options['fields']['field_beeldevaluatie']['field'] = 'field_beeldevaluatie';
  $handler->display->display_options['fields']['field_beeldevaluatie']['label'] = 'Evaluate';
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
    t('Images queued (all)'),
    t('more'),
    t('Search'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Date uploaded'),
    t('Location'),
    t('Soort/taxon'),
    t('Image'),
    t('- Choose an operation -'),
    t('Remove selected images'),
    t('To expert (selection in next screen)'),
    t('Expert'),
    t('Evaluate'),
    t('Page'),
  );
  $export['afbeeldingen_wacht_all'] = $view;

  $view = new view();
  $view->name = 'afbeeldingen_wachtrij';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'Images queue';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Images in queue';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reset';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« first';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ previous';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'next ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'last »';
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
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="gridright"><a href="/?q=grid-afbeeldingen-wachtrij">Grid</a>: <a href="/?q=grid-afbeeldingen-wachtrij"><img src="/sites/all/files/icon/grid.png" class="gridiconlarge" border="no" /></a><div>';
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
  /* Field: Field collection item: URL */
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
  /* Field: Bulk operations: Field collection item */
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
      'label' => 'Remove selected images',
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 1,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Image(s) to validator',
      'settings' => array(
        'url' => 'beelduitwisselaar/selectexpertise',
      ),
    ),
  );
  /* Field: Field collection item: Beeld */
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
  /* Field: Field collection item: Datum insturen */
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
  /* Field: Field: First name */
  $handler->display->display_options['fields']['field_voornaam']['id'] = 'field_voornaam';
  $handler->display->display_options['fields']['field_voornaam']['table'] = 'field_data_field_voornaam';
  $handler->display->display_options['fields']['field_voornaam']['field'] = 'field_voornaam';
  $handler->display->display_options['fields']['field_voornaam']['relationship'] = 'field_afbeeldingen_node';
  $handler->display->display_options['fields']['field_voornaam']['label'] = '';
  $handler->display->display_options['fields']['field_voornaam']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_voornaam']['element_label_colon'] = FALSE;
  /* Field: Field: family name */
  $handler->display->display_options['fields']['field_achternaam']['id'] = 'field_achternaam';
  $handler->display->display_options['fields']['field_achternaam']['table'] = 'field_data_field_achternaam';
  $handler->display->display_options['fields']['field_achternaam']['field'] = 'field_achternaam';
  $handler->display->display_options['fields']['field_achternaam']['relationship'] = 'field_afbeeldingen_node';
  $handler->display->display_options['fields']['field_achternaam']['label'] = '';
  $handler->display->display_options['fields']['field_achternaam']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_achternaam']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Photographer';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/search/node/[field_achternaam] [field_voornaam]">[field_achternaam], [field_voornaam]</a>';
  /* Field: Field: First name */
  $handler->display->display_options['fields']['field_voornaam_1']['id'] = 'field_voornaam_1';
  $handler->display->display_options['fields']['field_voornaam_1']['table'] = 'field_data_field_voornaam';
  $handler->display->display_options['fields']['field_voornaam_1']['field'] = 'field_voornaam';
  $handler->display->display_options['fields']['field_voornaam_1']['relationship'] = 'field_beeldexpert_target_id';
  $handler->display->display_options['fields']['field_voornaam_1']['exclude'] = TRUE;
  /* Field: Field: family name */
  $handler->display->display_options['fields']['field_achternaam_1']['id'] = 'field_achternaam_1';
  $handler->display->display_options['fields']['field_achternaam_1']['table'] = 'field_data_field_achternaam';
  $handler->display->display_options['fields']['field_achternaam_1']['field'] = 'field_achternaam';
  $handler->display->display_options['fields']['field_achternaam_1']['relationship'] = 'field_beeldexpert_target_id';
  $handler->display->display_options['fields']['field_achternaam_1']['label'] = 'Validator';
  $handler->display->display_options['fields']['field_achternaam_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_achternaam_1']['alter']['text'] = '<a href="/search/node/[field_achternaam_1] [field_voornaam_1]">[field_achternaam_1], [field_voornaam_1]</a>';
  /* Field: Field collection item: Soortgroep */
  $handler->display->display_options['fields']['field_groep']['id'] = 'field_groep';
  $handler->display->display_options['fields']['field_groep']['table'] = 'field_data_field_groep';
  $handler->display->display_options['fields']['field_groep']['field'] = 'field_groep';
  $handler->display->display_options['fields']['field_groep']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_groep']['alter']['text'] = '<a href="/search/node/[field_groep]">[field_groep]</a>';
  $handler->display->display_options['fields']['field_groep']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field collection item: Opmerking validator */
  $handler->display->display_options['fields']['field_beeldevaluatie']['id'] = 'field_beeldevaluatie';
  $handler->display->display_options['fields']['field_beeldevaluatie']['table'] = 'field_data_field_beeldevaluatie';
  $handler->display->display_options['fields']['field_beeldevaluatie']['field'] = 'field_beeldevaluatie';
  /* Field: Taxonomy term: Name */
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
  /* Sort criterion: Content: Updated date */
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
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Filter results:';
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
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('<div class="gridright"><a href="/?q=grid-afbeeldingen-wachtrij">Gridoverzicht</a>: <a href="/?q=grid-afbeeldingen-wachtrij"><img src="/sites/all/files/icon/grid.png" class="gridiconlarge" border="no" /></a><div>'),
    t('field_afbeeldingen'),
    t('Gebruiker entity referenced from field_beeldexpert'),
    t('term from field_groep'),
    t('[url]/edit'),
    t('- Choose an operation -'),
    t('Remove selected images'),
    t('Images to validator'),
    t('Image'),
    t('<a href="[url]">[field_newimage_1]</a>'),
    t('Date uploaded'),
    t('Photographer'),
    t('<a href="/search/node/[field_achternaam] [field_voornaam]">[field_achternaam], [field_voornaam]</a>'),
    t('First name'),
    t('Validator'),
    t('<a href="/search/node/[field_achternaam_1] [field_voornaam_1]">[field_achternaam_1], [field_voornaam_1]</a>'),
    t('Species'),
    t('<a href="/search/node/[field_groep]">[field_groep]</a>'),
    t('Comment validator'),
    t('Filter results:'),
    t('Page'),
  );
  $export['afbeeldingen_wachtrij'] = $view;

  $view = new view();
  $view->name = 'beelddetail';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'beelddetail';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Image details';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reset';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« first';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ previous';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'next ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'last »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Field collection item: Entity with the Afbeeldingen (field_afbeeldingen) */
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['id'] = 'field_afbeeldingen_node';
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['field'] = 'field_afbeeldingen_node';
  /* Field: Field collection item: Field collection item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['item_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['item_id']['separator'] = '';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'field_afbeeldingen_node';
  $handler->display->display_options['fields']['created']['label'] = 'Date uploaded';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'superkort';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Field collection item: Datum van opname */
  $handler->display->display_options['fields']['field_datum']['id'] = 'field_datum';
  $handler->display->display_options['fields']['field_datum']['table'] = 'field_data_field_datum';
  $handler->display->display_options['fields']['field_datum']['field'] = 'field_datum';
  $handler->display->display_options['fields']['field_datum']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_datum']['settings'] = array(
    'format_type' => 'superkort',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Field collection item: Fotograaf */
  $handler->display->display_options['fields']['field_fotograaf']['id'] = 'field_fotograaf';
  $handler->display->display_options['fields']['field_fotograaf']['table'] = 'field_data_field_fotograaf';
  $handler->display->display_options['fields']['field_fotograaf']['field'] = 'field_fotograaf';
  $handler->display->display_options['fields']['field_fotograaf']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fotograaf']['settings'] = array(
    'link' => 0,
  );
  /* Field: Field collection item: Licentie */
  $handler->display->display_options['fields']['field_license']['id'] = 'field_license';
  $handler->display->display_options['fields']['field_license']['table'] = 'field_data_field_license';
  $handler->display->display_options['fields']['field_license']['field'] = 'field_license';
  $handler->display->display_options['fields']['field_license']['label'] = '';
  $handler->display->display_options['fields']['field_license']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_license']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_license']['alter']['text'] = '<a href="/licentie">[field_license]</a>';
  $handler->display->display_options['fields']['field_license']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_license']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field collection item: Locatie */
  $handler->display->display_options['fields']['field_locatie']['id'] = 'field_locatie';
  $handler->display->display_options['fields']['field_locatie']['table'] = 'field_data_field_locatie';
  $handler->display->display_options['fields']['field_locatie']['field'] = 'field_locatie';
  $handler->display->display_options['fields']['field_locatie']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Land */
  $handler->display->display_options['fields']['field_opnameland']['id'] = 'field_opnameland';
  $handler->display->display_options['fields']['field_opnameland']['table'] = 'field_data_field_opnameland';
  $handler->display->display_options['fields']['field_opnameland']['field'] = 'field_opnameland';
  $handler->display->display_options['fields']['field_opnameland']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Soortnaam en opmerkingen */
  $handler->display->display_options['fields']['field_opmerkingen']['id'] = 'field_opmerkingen';
  $handler->display->display_options['fields']['field_opmerkingen']['table'] = 'field_data_field_opmerkingen';
  $handler->display->display_options['fields']['field_opmerkingen']['field'] = 'field_opmerkingen';
  $handler->display->display_options['fields']['field_opmerkingen']['label'] = 'Comment photographer';
  $handler->display->display_options['fields']['field_opmerkingen']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_opmerkingen']['type'] = 'text_plain';
  /* Field: Field collection item: Opmerking validator */
  $handler->display->display_options['fields']['field_beeldevaluatie']['id'] = 'field_beeldevaluatie';
  $handler->display->display_options['fields']['field_beeldevaluatie']['table'] = 'field_data_field_beeldevaluatie';
  $handler->display->display_options['fields']['field_beeldevaluatie']['field'] = 'field_beeldevaluatie';
  $handler->display->display_options['fields']['field_beeldevaluatie']['element_label_colon'] = FALSE;
  /* Field: Field collection item: nlsr */
  $handler->display->display_options['fields']['field_nlsr']['id'] = 'field_nlsr';
  $handler->display->display_options['fields']['field_nlsr']['table'] = 'field_data_field_nlsr';
  $handler->display->display_options['fields']['field_nlsr']['field'] = 'field_nlsr';
  $handler->display->display_options['fields']['field_nlsr']['label'] = 'species register';
  $handler->display->display_options['fields']['field_nlsr']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nlsr']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_nlsr']['alter']['text'] = 'http://www.nederlandsesoorten.nl/nsr/concept/[field_nlsr-value]';
  $handler->display->display_options['fields']['field_nlsr']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nlsr']['hide_empty'] = TRUE;
  /* Field: Field collection item: Soort/taxon */
  $handler->display->display_options['fields']['field_soort_taxon']['id'] = 'field_soort_taxon';
  $handler->display->display_options['fields']['field_soort_taxon']['table'] = 'field_data_field_soort_taxon';
  $handler->display->display_options['fields']['field_soort_taxon']['field'] = 'field_soort_taxon';
  $handler->display->display_options['fields']['field_soort_taxon']['alter']['text'] = '<a href="[field_nlsr]" target="_blank" >[field_soort_taxon]</a>';
  $handler->display->display_options['fields']['field_soort_taxon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_soort_taxon']['empty'] = '<i>Nog niet op naam gebracht</i>';
  /* Contextual filter: Field collection item: Field collection item ID */
  $handler->display->display_options['arguments']['item_id']['id'] = 'item_id';
  $handler->display->display_options['arguments']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['arguments']['item_id']['field'] = 'item_id';
  $handler->display->display_options['arguments']['item_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['item_id']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['item_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['item_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['item_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['item_id']['summary_options']['items_per_page'] = '25';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'beelddetail/%';
  $translatables['beelddetail'] = array(
    t('Master'),
    t('Image details'),
    t('more'),
    t('Search'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('field_afbeeldingen'),
    t('Field collection item ID'),
    t('.'),
    t('Date uploaded'),
    t('Date published'),
    t('Photographer'),
    t('<a href="/licentie">[field_license]</a>'),
    t('Location'),
    t('Country'),
    t('Comment photographer'),
    t('Comment validator'),
    t('Dutch Caribbean Species register'),
    t('http://www.dutchcarribeanspecies.org/nsr/concept/[field_nlsr-value]'),
    t('Soort/taxon'),
    t('<a href="[field_nlsr]" target="_blank" >[field_soort_taxon]</a>'),
    t('<i>No name yet</i>'),
    t('Alle'),
    t('Page'),
  );
  $export['beelddetail'] = $view;

  $view = new view();
  $view->name = 'clone_of_grid_afbeeldingen_goedgekeurd';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'grid-Images approved';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Approved images';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reset';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '70';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« first';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ previous';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'next ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'last »';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '7';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="gridright"><a href="/?q=afbeeldingen-goedgekeurd">Table</a>: <a href="/?q=afbeeldingen-goedgekeurd"><img src="/sites/all/files/icon/details.png" class="gridiconlarge" border="no" /></a><div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Relationship: Field collection item: Entity with the Afbeeldingen (field_afbeeldingen) */
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['id'] = 'field_afbeeldingen_node';
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['field'] = 'field_afbeeldingen_node';
  /* Field: Field collection item: Beeld */
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
  /* Field: Field collection item: Beeld */
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
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['lightbox2']['id'] = 'lightbox2';
  $handler->display->display_options['fields']['lightbox2']['table'] = 'lightbox2';
  $handler->display->display_options['fields']['lightbox2']['field'] = 'lightbox2';
  $handler->display->display_options['fields']['lightbox2']['label'] = '';
  $handler->display->display_options['fields']['lightbox2']['element_label_colon'] = FALSE;
  /* Field: Bulk operations: Field collection item */
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
      'label' => 'Send mail',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Change expert / Add to queue',
      'settings' => array(
        'show_all_tokens' => 0,
        'display_values' => array(
          'field_afbeeldingen::field_beeldexpert' => 'field_afbeeldingen::field_beeldexpert',
          'field_afbeeldingen::field_status' => 'field_afbeeldingen::field_status',
        ),
      ),
    ),
  );
  /* Field: Field collection item: status */
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
    t('Search'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('<div class="gridright"><a href="/?q=afbeeldingen-goedgekeurd">Table</a>: <a href="/?q=afbeeldingen-goedgekeurd"><img src="/sites/all/files/icon/details.png" class="gridiconlarge" border="no" /></a><div>'),
    t('field_afbeeldingen'),
    t('- Choose an operation -'),
    t('Send mail'),
    t('Change expert / Add to queue'),
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
  $handler->display->display_options['title'] = 'List of photographers';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reset';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '90';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« first';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ previous';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'next ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'last »';
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
  /* Field: Bulk operations: User */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_user';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = 'E-mail';
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
  /* Field: Field: First name */
  $handler->display->display_options['fields']['field_voornaam']['id'] = 'field_voornaam';
  $handler->display->display_options['fields']['field_voornaam']['table'] = 'field_data_field_voornaam';
  $handler->display->display_options['fields']['field_voornaam']['field'] = 'field_voornaam';
  $handler->display->display_options['fields']['field_voornaam']['label'] = '';
  $handler->display->display_options['fields']['field_voornaam']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_voornaam']['element_label_colon'] = FALSE;
  /* Field: Field: family name */
  $handler->display->display_options['fields']['field_achternaam']['id'] = 'field_achternaam';
  $handler->display->display_options['fields']['field_achternaam']['table'] = 'field_data_field_achternaam';
  $handler->display->display_options['fields']['field_achternaam']['field'] = 'field_achternaam';
  $handler->display->display_options['fields']['field_achternaam']['label'] = '';
  $handler->display->display_options['fields']['field_achternaam']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_achternaam']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Photographer';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_achternaam], [field_voornaam]';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  /* Field: User: Link */
  $handler->display->display_options['fields']['view_user']['id'] = 'view_user';
  $handler->display->display_options['fields']['view_user']['table'] = 'users';
  $handler->display->display_options['fields']['view_user']['field'] = 'view_user';
  $handler->display->display_options['fields']['view_user']['label'] = 'Details';
  /* Sort criterion: Field: family name (field_achternaam) */
  $handler->display->display_options['sorts']['field_achternaam_value']['id'] = 'field_achternaam_value';
  $handler->display->display_options['sorts']['field_achternaam_value']['table'] = 'field_data_field_achternaam';
  $handler->display->display_options['sorts']['field_achternaam_value']['field'] = 'field_achternaam_value';
  /* Sort criterion: Field: First name (field_voornaam) */
  $handler->display->display_options['sorts']['field_voornaam_value']['id'] = 'field_voornaam_value';
  $handler->display->display_options['sorts']['field_voornaam_value']['table'] = 'field_data_field_voornaam';
  $handler->display->display_options['sorts']['field_voornaam_value']['field'] = 'field_voornaam_value';
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
  $handler->display->display_options['path'] = 'email-fotograaf';
  $translatables['email_fotograaf'] = array(
    t('Master'),
    t('List photographers'),
    t('more'),
    t('Search'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('E-mailadres'),
    t('- Choose an operation -'),
    t('Photographer'),
    t('[field_achternaam], [field_voornaam]'),
    t('E-mail'),
    t('Details'),
    t('Page'),
  );
  $export['email_fotograaf'] = $view;

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
  $handler->display->display_options['title'] = 'User list';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reset';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '90';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« first';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ previous';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'next ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'last »';
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
  /* Field: Bulk operations: User */
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
      'label' => 'Send email',
      'settings' => array(
        'url' => 'beelduitwisselaar/kiesmail',
      ),
    ),
  );
  /* Field: Field: First name */
  $handler->display->display_options['fields']['field_voornaam']['id'] = 'field_voornaam';
  $handler->display->display_options['fields']['field_voornaam']['table'] = 'field_data_field_voornaam';
  $handler->display->display_options['fields']['field_voornaam']['field'] = 'field_voornaam';
  $handler->display->display_options['fields']['field_voornaam']['label'] = '';
  $handler->display->display_options['fields']['field_voornaam']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_voornaam']['element_label_colon'] = FALSE;
  /* Field: Field: family name */
  $handler->display->display_options['fields']['field_achternaam']['id'] = 'field_achternaam';
  $handler->display->display_options['fields']['field_achternaam']['table'] = 'field_data_field_achternaam';
  $handler->display->display_options['fields']['field_achternaam']['field'] = 'field_achternaam';
  $handler->display->display_options['fields']['field_achternaam']['label'] = '';
  $handler->display->display_options['fields']['field_achternaam']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_achternaam']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_achternaam], [field_voornaam]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: User: Name */
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
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['mail']['alter']['text'] = '<a href="/beelduitwisselaar/sendmail/[uid]/3">[mail]</a>';
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  /* Field: Gebruiker: Specialisatie */
  $handler->display->display_options['fields']['field_specialisatie']['id'] = 'field_specialisatie';
  $handler->display->display_options['fields']['field_specialisatie']['table'] = 'field_data_field_specialisatie';
  $handler->display->display_options['fields']['field_specialisatie']['field'] = 'field_specialisatie';
  $handler->display->display_options['fields']['field_specialisatie']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_specialisatie']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_specialisatie']['delta_offset'] = '0';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Images being processed';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$sql = "select count(*) as aantal from field_data_field_status s, field_data_field_beeldexpert e where s.entity_id = e.entity_id and s.field_status_value = 1 and e.field_beeldexpert_target_id = " . $row->uid;
echo db_query( $sql )->fetchField();

 ?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '4';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Sort criterion: Field: family name (field_achternaam) */
  $handler->display->display_options['sorts']['field_achternaam_value']['id'] = 'field_achternaam_value';
  $handler->display->display_options['sorts']['field_achternaam_value']['table'] = 'field_data_field_achternaam';
  $handler->display->display_options['sorts']['field_achternaam_value']['field'] = 'field_achternaam_value';
  /* Sort criterion: Field: First name (field_voornaam) */
  $handler->display->display_options['sorts']['field_voornaam_value']['id'] = 'field_voornaam_value';
  $handler->display->display_options['sorts']['field_voornaam_value']['table'] = 'field_data_field_voornaam';
  $handler->display->display_options['sorts']['field_voornaam_value']['field'] = 'field_voornaam_value';
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
  $handler->display->display_options['title'] = 'List validators';
  $handler->display->display_options['path'] = 'email-expert';
  $translatables['expert_lijst'] = array(
    t('Master'),
    t('User lijst'),
    t('more'),
    t('Search'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('E-mail'),
    t('- Choose an operation -'),
    t('Verstuur email'),
    t('[field_achternaam], [field_voornaam]'),
    t('Uid'),
    t('Validator'),
    t('<a href="/user/[uid]">[field_achternaam], [field_voornaam]</a>'),
    t('<a href="/beelduitwisselaar/sendmail/[uid]/3">[mail]</a>'),
    t('Specialisation'),
    t('Images being processed'),
    t('Page'),
    t('List validators'),
  );
  $export['expert_lijst'] = $view;

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
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reset';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« first';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ previous';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'next ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'last »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
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
    t('Search'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Entity Reference'),
  );
  $export['expert_selectie'] = $view;

  $view = new view();
  $view->name = 'expertises';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Expertises';
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
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reset';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['php_output'] = '<h2>Queue</h2>
<a href="<?php echo ("/beelduitwisselaar/wachtrij?nids=" . arg(2) ); ?>">Add image to queue</a><br /><br />
<h2>Species</h2>

';
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = 'return  "/beelduitwisselaar/selectexpert?nids=" . arg(2) . "&tid=" . $row->tid;';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '<div class="selecteerexpertise"><a href="[php]">[name]</a></div>';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'groep' => 'groep',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'expertises';

  /* Display: Blok */
  $handler = $view->new_display('block', 'Blok', 'block_1');
  $translatables['expertises'] = array(
    t('Master'),
    t('more'),
    t('Search'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('.'),
    t('<div class="selecteerexpertise"><a href="[php]">[name]</a></div>'),
    t('Page'),
    t('Blok'),
  );
  $export['expertises'] = $view;

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
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reset';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« first';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ previous';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'next ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'last »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Field: family name */
  $handler->display->display_options['fields']['field_achternaam']['id'] = 'field_achternaam';
  $handler->display->display_options['fields']['field_achternaam']['table'] = 'field_data_field_achternaam';
  $handler->display->display_options['fields']['field_achternaam']['field'] = 'field_achternaam';
  $handler->display->display_options['fields']['field_achternaam']['label'] = '';
  $handler->display->display_options['fields']['field_achternaam']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_achternaam']['element_label_colon'] = FALSE;
  /* Field: Field: First name */
  $handler->display->display_options['fields']['field_voornaam']['id'] = 'field_voornaam';
  $handler->display->display_options['fields']['field_voornaam']['table'] = 'field_data_field_voornaam';
  $handler->display->display_options['fields']['field_voornaam']['field'] = 'field_voornaam';
  $handler->display->display_options['fields']['field_voornaam']['label'] = '';
  $handler->display->display_options['fields']['field_voornaam']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_voornaam']['alter']['text'] = '[field_achternaam], [field_voornaam]';
  $handler->display->display_options['fields']['field_voornaam']['element_label_colon'] = FALSE;
  /* Field: Gebruiker: Specialisatie */
  $handler->display->display_options['fields']['field_specialisatie']['id'] = 'field_specialisatie';
  $handler->display->display_options['fields']['field_specialisatie']['table'] = 'field_data_field_specialisatie';
  $handler->display->display_options['fields']['field_specialisatie']['field'] = 'field_specialisatie';
  $handler->display->display_options['fields']['field_specialisatie']['label'] = '';
  $handler->display->display_options['fields']['field_specialisatie']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_specialisatie']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_specialisatie']['delta_offset'] = '0';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Sort criterion: Field: family name (field_achternaam) */
  $handler->display->display_options['sorts']['field_achternaam_value']['id'] = 'field_achternaam_value';
  $handler->display->display_options['sorts']['field_achternaam_value']['table'] = 'field_data_field_achternaam';
  $handler->display->display_options['sorts']['field_achternaam_value']['field'] = 'field_achternaam_value';
  /* Sort criterion: Gebruiker: Specialisatie (field_specialisatie) */
  $handler->display->display_options['sorts']['field_specialisatie_tid']['id'] = 'field_specialisatie_tid';
  $handler->display->display_options['sorts']['field_specialisatie_tid']['table'] = 'field_data_field_specialisatie';
  $handler->display->display_options['sorts']['field_specialisatie_tid']['field'] = 'field_specialisatie_tid';
  $handler->display->display_options['sorts']['field_specialisatie_tid']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_specialisatie_tid']['expose']['label'] = 'Specialisation (field_specialisatie)';
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
    t('Search'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('[field_achternaam], [field_voornaam]'),
    t('Specialisation (field_specialisatie)'),
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
  $handler->display->display_options['title'] = 'New images';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reset';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '70';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« first';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ previous';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'next ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'last »';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '7';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="gridright"><a href="/?q=afbeeldingen">Table</a>: <a href="/?q=afbeeldingen"><img src="/sites/all/files/icon/details.png" class="gridiconlarge" border="no" /></a><div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Relationship: Field collection item: Entity with the Afbeeldingen (field_afbeeldingen) */
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['id'] = 'field_afbeeldingen_node';
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['field'] = 'field_afbeeldingen_node';
  /* Field: Field collection item: Beeld */
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
  /* Field: Bulk operations: Field collection item */
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
      'label' => 'Send email',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Remove selected images',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'To expert (selection in next screen)',
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
    t('New Images'),
    t('more'),
    t('Search'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('<div class="gridright"><a href="/?q=afbeeldingen">Tabeloverzicht</a>: <a href="/?q=afbeeldingen"><img src="/sites/all/files/icon/details.png" class="gridiconlarge" border="no" /></a><div>'),
    t('field_afbeeldingen'),
    t('- Choose an operation -'),
    t('Send email'),
    t('Remove selected images'),
    t('Add to expert (selection in next screen)'),
    t('Page'),
  );
  $export['grid_afbeeldingen'] = $view;

  $view = new view();
  $view->name = 'grid_afbeeldingen_afgekeurd';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'grid-Images denied';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Denied images';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reset';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '70';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« first';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ previous';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'next ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'last »';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '7';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="gridright"><a href="/?q=afbeeldingen-afgekeurd">Table</a>: <a href="/?q=afbeeldingen-afgekeurd"><img src="/sites/all/files/icon/details.png" class="gridiconlarge" border="no" /></a><div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Relationship: Field collection item: Entity with the Afbeeldingen (field_afbeeldingen) */
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['id'] = 'field_afbeeldingen_node';
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['field'] = 'field_afbeeldingen_node';
  /* Field: Field collection item: Beeld */
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
  /* Field: Field collection item: Beeld */
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
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['lightbox2']['id'] = 'lightbox2';
  $handler->display->display_options['fields']['lightbox2']['table'] = 'lightbox2';
  $handler->display->display_options['fields']['lightbox2']['field'] = 'lightbox2';
  $handler->display->display_options['fields']['lightbox2']['label'] = '';
  $handler->display->display_options['fields']['lightbox2']['element_label_colon'] = FALSE;
  /* Field: Bulk operations: Field collection item */
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
      'label' => 'Send mail',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Change expert / Add to queue',
      'settings' => array(
        'show_all_tokens' => 0,
        'display_values' => array(
          'field_afbeeldingen::field_beeldexpert' => 'field_afbeeldingen::field_beeldexpert',
          'field_afbeeldingen::field_status' => 'field_afbeeldingen::field_status',
        ),
      ),
    ),
  );
  /* Field: Field collection item: status */
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
    t('Search'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('<div class="gridright"><a href="/?q=afbeeldingen-afgekeurd">Tabeloverzicht</a>: <a href="/?q=afbeeldingen-afgekeurd"><img src="/sites/all/files/icon/details.png" class="gridiconlarge" border="no" /></a><div>'),
    t('field_afbeeldingen'),
    t('- Choose an operation -'),
    t('Send mail'),
    t('Change expert / Add to queue'),
    t('Page'),
  );
  $export['grid_afbeeldingen_afgekeurd'] = $view;

  $view = new view();
  $view->name = 'grid_afbeeldingen_geevalueerd_all';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'grid-Images processed all';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Validated images';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reset';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '70';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« first';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ previous';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'next ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'last »';
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
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="gridright"><a href="/?q=afbeeldingen-geevalueerd-all">Table</a>: <a href="/?q=afbeeldingen-geevalueerd-all"><img src="/sites/all/files/icon/details.png" class="gridiconlarge" border="no" /></a><div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Relationship: Field collection item: Entity with the Afbeeldingen (field_afbeeldingen) */
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['id'] = 'field_afbeeldingen_node';
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['field'] = 'field_afbeeldingen_node';
  /* Field: Field collection item: URL */
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
  /* Field: Field collection item: Beeld */
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
  /* Field: Bulk operations: Field collection item */
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
      'label' => 'Image(s) to validator / queue',
      'settings' => array(
        'url' => 'beelduitwisselaar/selectexpertise',
      ),
    ),
  );
  /* Field: Field collection item: status */
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
    t('Validated images'),
    t('more'),
    t('Search'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('<div class="gridright"><a href="/?q=afbeeldingen-geevalueerd-all">Tabeloverzicht</a>: <a href="/?q=afbeeldingen-geevalueerd-all"><img src="/sites/all/files/icon/details.png" class="gridiconlarge" border="no" /></a><div>'),
    t('field_afbeeldingen'),
    t('[url]/edit'),
    t('<a href="[url]">[field_newimage_1]</a>'),
    t('- Choose an operation -'),
    t('Image(s) to validator / queue'),
    t('Page'),
  );
  $export['grid_afbeeldingen_geevalueerd_all'] = $view;

  $view = new view();
  $view->name = 'grid_afbeeldingen_per_expert';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'grid-Images per expert';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'New images';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reset';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '70';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« first';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ previous';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'next ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'last »';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '7';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="gridright" style="margin-top:-20px;"><a href="/?q=afbeeldingen-expert">Table</a>: <a href="/?q=afbeeldingen-expert"><img src="/sites/all/files/icon/details.png" class="gridiconlarge" border="no" /></a><div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Relationship: Field collection item: Entity with the Afbeeldingen (field_afbeeldingen) */
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['id'] = 'field_afbeeldingen_node';
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['field'] = 'field_afbeeldingen_node';
  /* Field: Field collection item: Beeld */
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
  /* Field: Field collection item: Beeld */
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
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['lightbox2']['id'] = 'lightbox2';
  $handler->display->display_options['fields']['lightbox2']['table'] = 'lightbox2';
  $handler->display->display_options['fields']['lightbox2']['field'] = 'lightbox2';
  $handler->display->display_options['fields']['lightbox2']['label'] = '';
  $handler->display->display_options['fields']['lightbox2']['element_label_colon'] = FALSE;
  /* Field: Field collection item: URL */
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
  $handler->display->display_options['arguments']['field_beeldexpert_target_id']['exception']['title'] = 'All';
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
    t('New Images'),
    t('more'),
    t('Search'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
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
  $handler->display->display_options['title'] = 'Images per expert';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reset';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '70';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« first';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ previous';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'next ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'last »';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '7';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="gridright"><a href="/?q=afbeeldingen-expert-all">Table</a>: <a href="/?q=afbeeldingen-expert-all"><img src="/sites/all/files/icon/details.png" class="gridiconlarge" border="no" /></a><div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Field: Field collection item: Beeld */
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
  /* Field: Bulk operations: Field collection item */
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
      'label' => 'Remove selected images',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Image to expert (selection in next screen)',
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
    t('Search'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('<div class="gridright"><a href="/?q=afbeeldingen-expert-all">Tabeloverzicht</a>: <a href="/?q=afbeeldingen-expert-all"><img src="/sites/all/files/icon/details.png" class="gridiconlarge" border="no" /></a><div>'),
    t('- Choose an operation -'),
    t('Verwijder geselecteerde beelden'),
    t('Toekennen aan andere expert (selectie in next scherm)'),
    t('Page'),
  );
  $export['grid_afbeeldingen_per_expert_all'] = $view;

  $view = new view();
  $view->name = 'grid_afbeeldingen_verwerkt_all';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'grid-Images processed all';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Published images';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reset';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '70';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« first';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ previous';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'next ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'last »';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '7';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="gridright" style="margin-top: -20px;"><a href="/?q=afbeeldingen-verwerkt-all">Table</a>: <a href="/?q=afbeeldingen-verwerkt-all"><img src="/sites/all/files/icon/details.png" class="gridiconlarge" border="no" /></a><div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Relationship: Field collection item: Entity with the Afbeeldingen (field_afbeeldingen) */
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['id'] = 'field_afbeeldingen_node';
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['field'] = 'field_afbeeldingen_node';
  /* Field: Field collection item: Beeld */
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
  /* Field: Field collection item: Beeld */
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
  /* Field: Broken/missing handler */
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
    t('Search'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
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
  $view->human_name = 'grid-Images queued';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Images in queue';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reset';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '70';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« first';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ previous';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'next ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'last »';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '7';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="gridright"><a href="/?q=afbeeldingen-wachtrij">Table</a>: <a href="/?q=afbeeldingen-wachtrij"><img src="/sites/all/files/icon/details.png" class="gridiconlarge" border="no" /></a><div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Relationship: Field collection item: Entity with the Afbeeldingen (field_afbeeldingen) */
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['id'] = 'field_afbeeldingen_node';
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_afbeeldingen_node']['field'] = 'field_afbeeldingen_node';
  /* Field: Field collection item: URL */
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
  /* Field: Field collection item: Beeld */
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
  /* Field: Bulk operations: Field collection item */
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
      'label' => 'Image(s) to validator',
      'settings' => array(
        'url' => 'beelduitwisselaar/selectexpertise',
      ),
    ),
  );
  /* Field: Field collection item: status */
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
    t('Search'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('<div class="gridright"><a href="/?q=afbeeldingen-wachtrij">Tabeloverzicht</a>: <a href="/?q=afbeeldingen-wachtrij"><img src="/sites/all/files/icon/details.png" class="gridiconlarge" border="no" /></a><div>'),
    t('field_afbeeldingen'),
    t('[url]/edit'),
    t('<a href="[url]">[field_newimage_1]</a>'),
    t('- Choose an operation -'),
    t('Beeld(en) toekennen aan validator'),
    t('Page'),
  );
  $export['grid_afbeeldingen_wachtrij'] = $view;

  $view = new view();
  $view->name = 'lijst';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'list';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'list';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reset';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« first';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ previous';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'next ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'last »';
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
  /* Field: Field collection item: Field collection item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  /* Field: Field collection item: Beeld */
  $handler->display->display_options['fields']['field_newimage']['id'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage']['table'] = 'field_data_field_newimage';
  $handler->display->display_options['fields']['field_newimage']['field'] = 'field_newimage';
  $handler->display->display_options['fields']['field_newimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_newimage']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Field collection item: status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  /* Sort criterion: Field collection item Revisions: Field collection item ID */
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
    t('Search'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Field collection item ID'),
    t('.'),
    t(','),
    t('Beeld'),
    t('status'),
    t('Page'),
  );
  $export['lijst'] = $view;

  $view = new view();
  $view->name = 'mail_templates';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Mail templates';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Mail templates';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reset';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = 'Edit the mail templates. 
You can use the next fields that will be filled by the system automatically:
<ul><li>%%beeldnaam%% - Naam of the image</li>
<li>%%bestandsnamen%% - filenames of the images</li>
<li>%%expertnaam%% - name of the validator</li>
<li>%%expert_link%% - link to the overview of new images for the validator (the validator needs to login)</li>
<li>%%nsr_link%% - link to the species register</li></ul><br />';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = '[title]';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'mail' => 'mail',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'mail-templates';
  $translatables['mail_templates'] = array(
    t('Master'),
    t('Mailsjablonen'),
    t('more'),
    t('Search'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Edit the mail templates. 
You can use the next fields that will be filled by the system automatically:
<ul><li>%%beeldnaam%% - Naam of the image</li>
<li>%%bestandsnamen%% - filenames of the images</li>
<li>%%expertnaam%% - name of the validator</li>
<li>%%expert_link%% - link to the overview of new images for the validator (the validator needs to login)</li>
<li>%%nsr_link%% - link to the species register</li></ul><br />'),
    t('[title]'),
    t('Page'),
  );
  $export['mail_templates'] = $view;

  $view = new view();
  $view->name = 'mails';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'watchdog';
  $view->human_name = 'Sent mails';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Sent mails';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reset';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« first';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ previous';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'next ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'last »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'wid' => 'wid',
    'message' => 'message',
    'timestamp' => 'timestamp',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'wid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'message' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'timestamp' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Time is time of the webserver. This may differ from localtime.';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* Field: Watchdog: Timestamp */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'watchdog';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['date_format'] = 'superkort';
  $handler->display->display_options['fields']['timestamp']['second_date_format'] = 'long';
  /* Field: Watchdog: Message */
  $handler->display->display_options['fields']['message']['id'] = 'message';
  $handler->display->display_options['fields']['message']['table'] = 'watchdog';
  $handler->display->display_options['fields']['message']['field'] = 'message';
  $handler->display->display_options['fields']['message']['watchdog_message_format'] = 1;
  $handler->display->display_options['fields']['message']['watchdog_message_link'] = 1;
  /* Sort criterion: Watchdog: Timestamp */
  $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['table'] = 'watchdog';
  $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
  /* Filter criterion: Watchdog: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'watchdog';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'beelduitwisselaar' => 'beelduitwisselaar',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'mails';
  $translatables['mails'] = array(
    t('Master'),
    t('Verstuurde mails'),
    t('more'),
    t('Search'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Time is time of the webserver. This may differ from localtime.'),
    t('Timestamp'),
    t('Message'),
    t('Page'),
  );
  $export['mails'] = $view;

  $view = new view();
  $view->name = 'massdelete';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'massdelete';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'massdelete';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'item_id' => 'item_id',
    'views_bulk_operations' => 'views_bulk_operations',
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
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  /* Relationship: Field collection item: Beeld (field_newimage:fid) */
  $handler->display->display_options['relationships']['field_newimage_fid']['id'] = 'field_newimage_fid';
  $handler->display->display_options['relationships']['field_newimage_fid']['table'] = 'field_data_field_newimage';
  $handler->display->display_options['relationships']['field_newimage_fid']['field'] = 'field_newimage_fid';
  /* Field: Bulk operations: Field collection item */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_field_collection_item';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
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
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Field collection item: Fotograaf */
  $handler->display->display_options['fields']['field_fotograaf']['id'] = 'field_fotograaf';
  $handler->display->display_options['fields']['field_fotograaf']['table'] = 'field_data_field_fotograaf';
  $handler->display->display_options['fields']['field_fotograaf']['field'] = 'field_fotograaf';
  $handler->display->display_options['fields']['field_fotograaf']['settings'] = array(
    'link' => 0,
  );
  /* Field: Field collection item: Soort/taxon */
  $handler->display->display_options['fields']['field_soort_taxon']['id'] = 'field_soort_taxon';
  $handler->display->display_options['fields']['field_soort_taxon']['table'] = 'field_data_field_soort_taxon';
  $handler->display->display_options['fields']['field_soort_taxon']['field'] = 'field_soort_taxon';
  /* Field: Field collection item: Soortnaam en opmerkingen */
  $handler->display->display_options['fields']['field_opmerkingen']['id'] = 'field_opmerkingen';
  $handler->display->display_options['fields']['field_opmerkingen']['table'] = 'field_data_field_opmerkingen';
  $handler->display->display_options['fields']['field_opmerkingen']['field'] = 'field_opmerkingen';
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
  /* Field: File: Name */
  $handler->display->display_options['fields']['filename']['id'] = 'filename';
  $handler->display->display_options['fields']['filename']['table'] = 'file_managed';
  $handler->display->display_options['fields']['filename']['field'] = 'filename';
  $handler->display->display_options['fields']['filename']['relationship'] = 'field_newimage_fid';
  $handler->display->display_options['fields']['filename']['label'] = 'Name';
  /* Filter criterion: Field collection item: Fotograaf (field_fotograaf) */
  $handler->display->display_options['filters']['field_fotograaf_target_id']['id'] = 'field_fotograaf_target_id';
  $handler->display->display_options['filters']['field_fotograaf_target_id']['table'] = 'field_data_field_fotograaf';
  $handler->display->display_options['filters']['field_fotograaf_target_id']['field'] = 'field_fotograaf_target_id';
  $handler->display->display_options['filters']['field_fotograaf_target_id']['value']['value'] = '1523';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'massdelete';
  $translatables['massdelete'] = array(
    t('Master'),
    t('massdelete'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Displaying @start - @end of @total'),
    t('image from field_newimage'),
    t('Field collection item'),
    t('- Choose an operation -'),
    t('Fotograaf'),
    t('Soort/taxon'),
    t('Soortnaam en opmerkingen'),
    t('Datum van opname'),
    t('Location'),
    t('Naam'),
    t('Page'),
  );
  $export['massdelete'] = $view;

  $view = new view();
  $view->name = 'search_results';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_collectionindex';
  $view->human_name = 'search results';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Search results';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reset';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« first';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ previous';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'next ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'last »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_newimage_file_name' => 'field_newimage_file_name',
    'item_id' => 'item_id',
    'field_newimage_file' => 'field_newimage_file',
    'field_created' => 'field_created',
    'field_fotograaf' => 'field_fotograaf',
    'field_fotograaf_field_voornaam' => 'field_fotograaf_field_voornaam',
    'field_fotograaf_field_achternaam' => 'field_fotograaf_field_achternaam',
    'field_beeldexpert_uid' => 'field_beeldexpert_uid',
    'field_beeldexpert_field_voornaam' => 'field_beeldexpert_field_voornaam',
    'field_beeldexpert_field_achternaam' => 'field_beeldexpert_field_achternaam',
    'field_opmerkingen' => 'field_opmerkingen',
    'field_groep' => 'field_groep',
    'field_status' => 'field_status',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_newimage_file_name' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'item_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_newimage_file' => array(
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
    'field_fotograaf' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_fotograaf_field_voornaam' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_fotograaf_field_achternaam' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_beeldexpert_uid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_beeldexpert_field_voornaam' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_beeldexpert_field_achternaam' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_opmerkingen' => array(
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
    'field_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = 'Results: @start - @end of @total<br />&nbsp;<br />';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No images found.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Field: Bulk operations: Field collection item */
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
      'skip_permission_check' => 0,
      'override_label' => 1,
      'label' => 'Remove selected images',
      'settings' => array(
        'log' => 0,
      ),
    ),
  );
  /* Field: Beeld » The image file.: File name (indexed) */
  $handler->display->display_options['fields']['field_newimage_file_name']['id'] = 'field_newimage_file_name';
  $handler->display->display_options['fields']['field_newimage_file_name']['table'] = 'search_api_index_collectionindex';
  $handler->display->display_options['fields']['field_newimage_file_name']['field'] = 'field_newimage_file_name';
  $handler->display->display_options['fields']['field_newimage_file_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_newimage_file_name']['link_to_entity'] = 0;
  /* Field: Indexed Field collection item: Field collection item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'search_api_index_collectionindex';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['item_id']['separator'] = '';
  $handler->display->display_options['fields']['item_id']['link_to_entity'] = 0;
  /* Field: Beeld: The image file. (indexed) */
  $handler->display->display_options['fields']['field_newimage_file']['id'] = 'field_newimage_file';
  $handler->display->display_options['fields']['field_newimage_file']['table'] = 'search_api_index_collectionindex';
  $handler->display->display_options['fields']['field_newimage_file']['field'] = 'field_newimage_file';
  $handler->display->display_options['fields']['field_newimage_file']['label'] = 'Image';
  $handler->display->display_options['fields']['field_newimage_file']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_newimage_file']['alter']['text'] = '<a href="/field-collection/field-afbeeldingen/[item_id]/edit"><img width="100px" src="/sites/default/files/[field_newimage_file_name]" style="max-width:100px;max-height:100px;" /></a>';
  $handler->display->display_options['fields']['field_newimage_file']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_newimage_file']['display'] = 'id';
  $handler->display->display_options['fields']['field_newimage_file']['bypass_access'] = 0;
  /* Field: Indexed Field collection item: Datum insturen */
  $handler->display->display_options['fields']['field_created']['id'] = 'field_created';
  $handler->display->display_options['fields']['field_created']['table'] = 'search_api_index_collectionindex';
  $handler->display->display_options['fields']['field_created']['field'] = 'field_created';
  $handler->display->display_options['fields']['field_created']['settings'] = array(
    'format_type' => 'superkort',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Indexed Field collection item: Fotograaf */
  $handler->display->display_options['fields']['field_fotograaf']['id'] = 'field_fotograaf';
  $handler->display->display_options['fields']['field_fotograaf']['table'] = 'search_api_index_collectionindex';
  $handler->display->display_options['fields']['field_fotograaf']['field'] = 'field_fotograaf';
  $handler->display->display_options['fields']['field_fotograaf']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_fotograaf']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_fotograaf']['display'] = 'id';
  $handler->display->display_options['fields']['field_fotograaf']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_fotograaf']['bypass_access'] = 0;
  /* Field: Fotograaf: First name (indexed) */
  $handler->display->display_options['fields']['field_fotograaf_field_voornaam']['id'] = 'field_fotograaf_field_voornaam';
  $handler->display->display_options['fields']['field_fotograaf_field_voornaam']['table'] = 'search_api_index_collectionindex';
  $handler->display->display_options['fields']['field_fotograaf_field_voornaam']['field'] = 'field_fotograaf_field_voornaam';
  $handler->display->display_options['fields']['field_fotograaf_field_voornaam']['exclude'] = TRUE;
  /* Field: Fotograaf: family name (indexed) */
  $handler->display->display_options['fields']['field_fotograaf_field_achternaam']['id'] = 'field_fotograaf_field_achternaam';
  $handler->display->display_options['fields']['field_fotograaf_field_achternaam']['table'] = 'search_api_index_collectionindex';
  $handler->display->display_options['fields']['field_fotograaf_field_achternaam']['field'] = 'field_fotograaf_field_achternaam';
  $handler->display->display_options['fields']['field_fotograaf_field_achternaam']['label'] = 'Photographer';
  $handler->display->display_options['fields']['field_fotograaf_field_achternaam']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_fotograaf_field_achternaam']['alter']['text'] = '<a href="/search/node/[field_fotograaf_field_achternaam] [field_fotograaf_field_voornaam]">[field_fotograaf_field_achternaam], [field_fotograaf_field_voornaam]</a>';
  /* Field: Validator: User ID (indexed) */
  $handler->display->display_options['fields']['field_beeldexpert_uid']['id'] = 'field_beeldexpert_uid';
  $handler->display->display_options['fields']['field_beeldexpert_uid']['table'] = 'search_api_index_collectionindex';
  $handler->display->display_options['fields']['field_beeldexpert_uid']['field'] = 'field_beeldexpert_uid';
  $handler->display->display_options['fields']['field_beeldexpert_uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_beeldexpert_uid']['separator'] = '';
  $handler->display->display_options['fields']['field_beeldexpert_uid']['link_to_entity'] = 0;
  /* Field: Validator: First name (indexed) */
  $handler->display->display_options['fields']['field_beeldexpert_field_voornaam']['id'] = 'field_beeldexpert_field_voornaam';
  $handler->display->display_options['fields']['field_beeldexpert_field_voornaam']['table'] = 'search_api_index_collectionindex';
  $handler->display->display_options['fields']['field_beeldexpert_field_voornaam']['field'] = 'field_beeldexpert_field_voornaam';
  $handler->display->display_options['fields']['field_beeldexpert_field_voornaam']['exclude'] = TRUE;
  /* Field: Validator: family name (indexed) */
  $handler->display->display_options['fields']['field_beeldexpert_field_achternaam']['id'] = 'field_beeldexpert_field_achternaam';
  $handler->display->display_options['fields']['field_beeldexpert_field_achternaam']['table'] = 'search_api_index_collectionindex';
  $handler->display->display_options['fields']['field_beeldexpert_field_achternaam']['field'] = 'field_beeldexpert_field_achternaam';
  $handler->display->display_options['fields']['field_beeldexpert_field_achternaam']['label'] = 'Validator';
  $handler->display->display_options['fields']['field_beeldexpert_field_achternaam']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_beeldexpert_field_achternaam']['alter']['text'] = '<a href="/search/node/[field_beeldexpert_field_achternaam] [field_beeldexpert_field_voornaam]">[field_beeldexpert_field_achternaam], [field_beeldexpert_field_voornaam]</a>';
  /* Field: Indexed Field collection item: Soortnaam en opmerkingen */
  $handler->display->display_options['fields']['field_opmerkingen']['id'] = 'field_opmerkingen';
  $handler->display->display_options['fields']['field_opmerkingen']['table'] = 'search_api_index_collectionindex';
  $handler->display->display_options['fields']['field_opmerkingen']['field'] = 'field_opmerkingen';
  $handler->display->display_options['fields']['field_opmerkingen']['label'] = 'Comment photographer';
  /* Field: Indexed Field collection item: Soortgroep */
  $handler->display->display_options['fields']['field_groep']['id'] = 'field_groep';
  $handler->display->display_options['fields']['field_groep']['table'] = 'search_api_index_collectionindex';
  $handler->display->display_options['fields']['field_groep']['field'] = 'field_groep';
  $handler->display->display_options['fields']['field_groep']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_groep']['alter']['text'] = '<a href="/search/node/[field_groep]">[field_groep]</a>';
  $handler->display->display_options['fields']['field_groep']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_groep']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_groep']['bypass_access'] = 0;
  /* Field: Indexed Field collection item: status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'search_api_index_collectionindex';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['label'] = 'Status';
  $handler->display->display_options['fields']['field_status']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_status']['alter']['text'] = '<img class="status" width="24px" src="/sites/all/modules/beelduitwisselaar/img/[field_status-value].png" title="[field_status]"/>';
  /* Sort criterion: Search: Relevance */
  $handler->display->display_options['sorts']['search_api_relevance']['id'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['table'] = 'search_api_index_collectionindex';
  $handler->display->display_options['sorts']['search_api_relevance']['field'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['order'] = 'DESC';
  /* Contextual filter: Search: Fulltext search */
  $handler->display->display_options['arguments']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['table'] = 'search_api_index_collectionindex';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['exception']['title'] = 'All';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['search_api_views_fulltext']['validate']['fail'] = 'empty';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['search_api_views_fulltext']['not'] = 0;
  $handler->display->display_options['arguments']['search_api_views_fulltext']['fields'] = array(
    'field_beeldevaluatie' => 'field_beeldevaluatie',
    'field_beeldexpert:field_achternaam' => 'field_beeldexpert:field_achternaam',
    'field_beeldexpert:field_contact' => 'field_beeldexpert:field_contact',
    'field_beeldexpert:field_voornaam' => 'field_beeldexpert:field_voornaam',
    'field_beeldexpert:name' => 'field_beeldexpert:name',
    'field_fotograaf:field_achternaam' => 'field_fotograaf:field_achternaam',
    'field_fotograaf:field_email' => 'field_fotograaf:field_email',
    'field_fotograaf:field_voornaam' => 'field_fotograaf:field_voornaam',
    'field_fotograaf:name' => 'field_fotograaf:name',
    'field_groep:name' => 'field_groep:name',
    'field_locatie' => 'field_locatie',
    'field_newimage:file:name' => 'field_newimage:file:name',
    'field_opmerkingen' => 'field_opmerkingen',
    'field_soort_taxon' => 'field_soort_taxon',
    'field_textsoortenregister' => 'field_textsoortenregister',
    'search_api_aggregation_1' => 'search_api_aggregation_1',
    'search_api_aggregation_2' => 'search_api_aggregation_2',
  );
  /* Filter criterion: Indexed Field collection item: status */
  $handler->display->display_options['filters']['field_status']['id'] = 'field_status';
  $handler->display->display_options['filters']['field_status']['table'] = 'search_api_index_collectionindex';
  $handler->display->display_options['filters']['field_status']['field'] = 'field_status';
  $handler->display->display_options['filters']['field_status']['operator'] = '<>';
  $handler->display->display_options['filters']['field_status']['value'] = array(
    5 => '5',
    6 => '6',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'search/node/%';
  $translatables['search_results'] = array(
    t('Master'),
    t('Search results'),
    t('more'),
    t('Search'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Results: @start - @end of @total<br />&nbsp;<br />'),
    t('No images found.'),
    t('- Choose an operation -'),
    t('Remove selected images'),
    t('File name (indexed)'),
    t('Field collection item ID'),
    t('.'),
    t('Beeld'),
    t('<a href="/field-collection/field-afbeeldingen/[item_id]/edit"><img width="100px" src="/sites/default/files/[field_newimage_file_name]" style="max-width:100px;max-height:100px;" /></a>'),
    t('Date uploaded'),
    t('Photographer'),
    t('First name (indexed)'),
    t('<a href="/search/node/[field_fotograaf_field_achternaam] [field_fotograaf_field_voornaam]">[field_fotograaf_field_achternaam], [field_fotograaf_field_voornaam]</a>'),
    t('User ID (indexed)'),
    t('Validator'),
    t('<a href="/search/node/[field_beeldexpert_field_achternaam] [field_beeldexpert_field_voornaam]">[field_beeldexpert_field_achternaam], [field_beeldexpert_field_voornaam]</a>'),
    t('Comment photographer'),
    t('Soortgroep'),
    t('<a href="/search/node/[field_groep]">[field_groep]</a>'),
    t('Status'),
    t('<img class="status" width="24px" src="/sites/all/modules/beelduitwisselaar/img/[field_status-value].png" title="[field_status]"/>'),
    t('All'),
    t('Page'),
  );
  $export['search_results'] = $view;

  $view = new view();
  $view->name = 'search_results_main_index';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_localindex';
  $view->human_name = 'Search results main index';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Search results main index';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reset';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« first';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ previous';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'next ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'last »';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_localindex';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Afbeeldingen » Fotograaf: family name (indexed) */
  $handler->display->display_options['fields']['field_afbeeldingen_field_fotograaf_field_achternaam']['id'] = 'field_afbeeldingen_field_fotograaf_field_achternaam';
  $handler->display->display_options['fields']['field_afbeeldingen_field_fotograaf_field_achternaam']['table'] = 'search_api_index_localindex';
  $handler->display->display_options['fields']['field_afbeeldingen_field_fotograaf_field_achternaam']['field'] = 'field_afbeeldingen_field_fotograaf_field_achternaam';
  /* Field: Afbeeldingen » Fotograaf: First name (indexed) */
  $handler->display->display_options['fields']['field_afbeeldingen_field_fotograaf_field_voornaam']['id'] = 'field_afbeeldingen_field_fotograaf_field_voornaam';
  $handler->display->display_options['fields']['field_afbeeldingen_field_fotograaf_field_voornaam']['table'] = 'search_api_index_localindex';
  $handler->display->display_options['fields']['field_afbeeldingen_field_fotograaf_field_voornaam']['field'] = 'field_afbeeldingen_field_fotograaf_field_voornaam';
  /* Field: Afbeeldingen » Validator: family name (indexed) */
  $handler->display->display_options['fields']['field_afbeeldingen_field_beeldexpert_field_achternaam']['id'] = 'field_afbeeldingen_field_beeldexpert_field_achternaam';
  $handler->display->display_options['fields']['field_afbeeldingen_field_beeldexpert_field_achternaam']['table'] = 'search_api_index_localindex';
  $handler->display->display_options['fields']['field_afbeeldingen_field_beeldexpert_field_achternaam']['field'] = 'field_afbeeldingen_field_beeldexpert_field_achternaam';
  /* Field: Afbeeldingen » Validator: First name (indexed) */
  $handler->display->display_options['fields']['field_afbeeldingen_field_beeldexpert_field_voornaam']['id'] = 'field_afbeeldingen_field_beeldexpert_field_voornaam';
  $handler->display->display_options['fields']['field_afbeeldingen_field_beeldexpert_field_voornaam']['table'] = 'search_api_index_localindex';
  $handler->display->display_options['fields']['field_afbeeldingen_field_beeldexpert_field_voornaam']['field'] = 'field_afbeeldingen_field_beeldexpert_field_voornaam';
  /* Field: Indexed Node: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'search_api_index_localindex';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = 'Image';
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Contextual filter: Search: Fulltext search */
  $handler->display->display_options['arguments']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['table'] = 'search_api_index_localindex';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['search_api_views_fulltext']['not'] = 0;
  $handler->display->display_options['arguments']['search_api_views_fulltext']['fields'] = array(
    'field_achternaam' => 'field_achternaam',
    'field_afbeeldingen:field_beeldevaluatie' => 'field_afbeeldingen:field_beeldevaluatie',
    'field_afbeeldingen:field_beeldexpert:field_achternaam' => 'field_afbeeldingen:field_beeldexpert:field_achternaam',
    'field_afbeeldingen:field_beeldexpert:field_contact' => 'field_afbeeldingen:field_beeldexpert:field_contact',
    'field_afbeeldingen:field_beeldexpert:field_voornaam' => 'field_afbeeldingen:field_beeldexpert:field_voornaam',
    'field_afbeeldingen:field_beeldexpert:name' => 'field_afbeeldingen:field_beeldexpert:name',
    'field_afbeeldingen:field_fotograaf:field_achternaam' => 'field_afbeeldingen:field_fotograaf:field_achternaam',
    'field_afbeeldingen:field_fotograaf:field_contact' => 'field_afbeeldingen:field_fotograaf:field_contact',
    'field_afbeeldingen:field_fotograaf:field_voornaam' => 'field_afbeeldingen:field_fotograaf:field_voornaam',
    'field_afbeeldingen:field_fotograaf:name' => 'field_afbeeldingen:field_fotograaf:name',
    'field_afbeeldingen:field_locatie' => 'field_afbeeldingen:field_locatie',
    'field_afbeeldingen:field_nlsr' => 'field_afbeeldingen:field_nlsr',
    'field_afbeeldingen:field_opmerkingen' => 'field_afbeeldingen:field_opmerkingen',
    'field_afbeeldingen:field_opnameland' => 'field_afbeeldingen:field_opnameland',
    'field_afbeeldingen:field_soort_taxon' => 'field_afbeeldingen:field_soort_taxon',
    'field_afbeeldingen:field_textsoortenregister' => 'field_afbeeldingen:field_textsoortenregister',
    'field_contact' => 'field_contact',
    'field_email' => 'field_email',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'search/index/%';
  $translatables['search_results_main_index'] = array(
    t('Master'),
    t('Search results main index'),
    t('more'),
    t('Search'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Node ID'),
    t('.'),
    t(','),
    t('family name (indexed)'),
    t('First name (indexed)'),
    t('Image'),
    t('Alle'),
    t('Page'),
  );
  $export['search_results_main_index'] = $view;

  $view = new view();
  $view->name = 'selectmail';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'selectmail';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Choose mail to edit';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reset';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = '$myurl = explode("/", request_uri());
return urldecode($myurl[3]);
';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'beelduitwisselaar/sendmail/[php]/[nid]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'mail' => 'mail',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['selectmail'] = array(
    t('Master'),
    t('Choose mail to edit'),
    t('more'),
    t('Search'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Block'),
  );
  $export['selectmail'] = $view;

  $view = new view();
  $view->name = 'verwijzing_naar_beelduitwisselaar_record';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'image exchange record';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'image exchange record';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reset';
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
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
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
  $translatables['verwijzing_naar_beelduitwisselaar_record'] = array(
    t('Master'),
    t('Image exchange record'),
    t('more'),
    t('Search'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('All'),
    t('Block'),
  );
  $export['verwijzing_naar_beelduitwisselaar_record'] = $view;

  return $export;
}
