<?php
/**
 * @file
 * asu_usl_internships.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function asu_usl_internships_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_approval|node|partner_organization|form';
  $field_group->group_name = 'group_approval';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'partner_organization';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Approval',
    'weight' => '6',
    'children' => array(
      0 => 'field_facility_approval',
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
  $export['group_approval|node|partner_organization|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_internship_opp_availabilit|node|internship_opp|form';
  $field_group->group_name = 'group_internship_opp_availabilit';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'internship_opp';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Internship Availability',
    'weight' => '5',
    'children' => array(
      0 => 'field_internship_opp_semester',
      1 => 'field_internship_opp_hours',
      2 => 'field_internship_opp_days_hours',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_internship_opp_availabilit|node|internship_opp|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_internship_opp_categories|node|internship_opp|form';
  $field_group->group_name = 'group_internship_opp_categories';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'internship_opp';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Internship Categories',
    'weight' => '7',
    'children' => array(
      0 => 'field_internship_opp_category',
      1 => 'field_internship_opp_other_categ',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_internship_opp_categories|node|internship_opp|form'] = $field_group;

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
    'weight' => '4',
    'children' => array(
      0 => 'field_internship_opp_comm_impact',
      1 => 'field_internship_opp_commu',
      2 => 'field_internship_opp_duties',
      3 => 'field_internship_opp_population',
      4 => 'field_internship_opp_reqs_detail',
      5 => 'field_internship_opp_skills',
      6 => 'field_internship_opp_special_req',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
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
