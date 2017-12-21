<?php
/**
 * @file
 * beeldfeature.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function beeldfeature_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gegevens|node|beelduitwisselaar|form';
  $field_group->group_name = 'group_gegevens';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'beelduitwisselaar';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Uw gegevens',
    'weight' => '1',
    'children' => array(
      0 => 'field_achternaam',
      1 => 'field_contact',
      2 => 'field_email',
      3 => 'field_land',
      4 => 'field_voornaam',
      5 => 'field_woonplaats',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Uw gegevens',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-gegevens field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups[''] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Uw gegevens');

  return $field_groups;
}
