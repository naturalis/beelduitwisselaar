<?php
/**
 * @file
 * beeldfeature.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function beeldfeature_field_group_info() {
  $export = array();

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
      2 => 'field_land',
      3 => 'field_voornaam',
      4 => 'field_woonplaats',
      5 => 'field_email',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-gegevens field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_gegevens|node|beelduitwisselaar|form'] = $field_group;

  return $export;
}
