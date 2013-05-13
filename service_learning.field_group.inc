<?php
/**
 * @file
 * service_learning.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function service_learning_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_internship_opp_details|node|internship_opp|form';
  $field_group->group_name = 'group_internship_opp_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'internship_opp';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Internship Details',
    'weight' => '2',
    'children' => array(
      0 => 'field_internship_opp_duties',
      1 => 'field_internship_opp_commu',
      2 => 'field_internship_opp_population',
      3 => 'field_internship_opp_comm_impact',
      4 => 'field_internship_opp_skills',
      5 => 'field_internship_opp_special_req',
      6 => 'field_internship_opp_reqs_detail',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_internship_opp_details|node|internship_opp|form'] = $field_group;

  return $export;
}
