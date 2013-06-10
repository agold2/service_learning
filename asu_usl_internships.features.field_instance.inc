<?php
/**
 * @file
 * asu_usl_internships.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function asu_usl_internships_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-internship_opp-field_internship_opp_approval_st'
  $field_instances['node-internship_opp-field_internship_opp_approval_st'] = array(
    'bundle' => 'internship_opp',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This field will probably be replaced by Workbench functionality in subsequent Sprint.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 18,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_internship_opp_approval_st',
    'label' => 'Approval Status',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-internship_opp-field_internship_opp_category'
  $field_instances['node-internship_opp-field_internship_opp_category'] = array(
    'bundle' => 'internship_opp',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_internship_opp_category',
    'label' => 'Category',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => 0,
      ),
      'type' => 'options_select',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-internship_opp-field_internship_opp_closed'
  $field_instances['node-internship_opp-field_internship_opp_closed'] = array(
    'bundle' => 'internship_opp',
    'default_value' => array(
      0 => array(
        'value' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => 'You may mark this internship opportunity "Closed" if it has reached its maximum capacity or is no longer accepting interns.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 16,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_internship_opp_closed',
    'label' => 'Closed to Interns',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-internship_opp-field_internship_opp_comm_impact'
  $field_instances['node-internship_opp-field_internship_opp_comm_impact'] = array(
    'bundle' => 'internship_opp',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_internship_opp_comm_impact',
    'label' => 'Community Impact',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-internship_opp-field_internship_opp_commu'
  $field_instances['node-internship_opp-field_internship_opp_commu'] = array(
    'bundle' => 'internship_opp',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_internship_opp_commu',
    'label' => 'Community Need',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-internship_opp-field_internship_opp_contacts'
  $field_instances['node-internship_opp-field_internship_opp_contacts'] = array(
    'bundle' => 'internship_opp',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please enter usernames of people that can be contacted about this internship opportunity.

The contact\'s email address and phone number will be displayed with the internship opportunity listing.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'links' => TRUE,
          'view_mode' => '',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_internship_opp_contacts',
    'label' => 'Contact(s)',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => 'Add another contact',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-internship_opp-field_internship_opp_days_hours'
  $field_instances['node-internship_opp-field_internship_opp_days_hours'] = array(
    'bundle' => 'internship_opp',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_internship_opp_days_hours',
    'label' => 'Available Days/Hours',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-internship_opp-field_internship_opp_duties'
  $field_instances['node-internship_opp-field_internship_opp_duties'] = array(
    'bundle' => 'internship_opp',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_internship_opp_duties',
    'label' => 'Duties',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-internship_opp-field_internship_opp_hours'
  $field_instances['node-internship_opp-field_internship_opp_hours'] = array(
    'bundle' => 'internship_opp',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please indicate all of the times that a <em>significant</em>number of hours may be performed.
',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_internship_opp_hours',
    'label' => 'Service Hours',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-internship_opp-field_internship_opp_legal'
  $field_instances['node-internship_opp-field_internship_opp_legal'] = array(
    'bundle' => 'internship_opp',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 20,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_internship_opp_legal',
    'label' => 'Internship_opp_legal',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'node-internship_opp-field_internship_opp_location'
  $field_instances['node-internship_opp-field_internship_opp_location'] = array(
    'bundle' => 'internship_opp',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'location_cck',
        'settings' => array(),
        'type' => 'location_default',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_internship_opp_location',
    'label' => 'Location(s)',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => 'Add another location',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'location_cck',
      'settings' => array(),
      'type' => 'location',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-internship_opp-field_internship_opp_notes'
  $field_instances['node-internship_opp-field_internship_opp_notes'] = array(
    'bundle' => 'internship_opp',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 19,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_internship_opp_notes',
    'label' => 'Notes',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-internship_opp-field_internship_opp_other_categ'
  $field_instances['node-internship_opp-field_internship_opp_other_categ'] = array(
    'bundle' => 'internship_opp',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'You may suggest another category if the options listed do not apply.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_internship_opp_other_categ',
    'label' => 'Other Category',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-internship_opp-field_internship_opp_partner_org'
  $field_instances['node-internship_opp-field_internship_opp_partner_org'] = array(
    'bundle' => 'internship_opp',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If your organization is not listed, please <a href="/node/add/partner-organization">create a new partner organization.</a>',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 1,
          'view_mode' => 'teaser',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_internship_opp_partner_org',
    'label' => 'Partner Organization',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-internship_opp-field_internship_opp_population'
  $field_instances['node-internship_opp-field_internship_opp_population'] = array(
    'bundle' => 'internship_opp',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_internship_opp_population',
    'label' => 'Population Served',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-internship_opp-field_internship_opp_renewal_sem'
  $field_instances['node-internship_opp-field_internship_opp_renewal_sem'] = array(
    'bundle' => 'internship_opp',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 17,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_internship_opp_renewal_sem',
    'label' => 'Renewal Semester',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-internship_opp-field_internship_opp_reqs_detail'
  $field_instances['node-internship_opp-field_internship_opp_reqs_detail'] = array(
    'bundle' => 'internship_opp',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<strong>Fingerprint/background clearance:</strong>
Provide as much detail as possible about each of the following: 
<ol><li>the type of clearance required (e.g. educator\'s fingerprint card, drug screening, etc.)</li>
<li>associated costs</li>
<li> how long processing will take</li>
<li>whether or not students may start some type of service while waiting for fingerprint or background clearance processing.</li>
</ol>
<strong>Training:</strong> provide details on the type of training and when it will occur.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_internship_opp_reqs_detail',
    'label' => 'Special Requirements Details ',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-internship_opp-field_internship_opp_semester'
  $field_instances['node-internship_opp-field_internship_opp_semester'] = array(
    'bundle' => 'internship_opp',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_internship_opp_semester',
    'label' => 'Semester',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-internship_opp-field_internship_opp_skills'
  $field_instances['node-internship_opp-field_internship_opp_skills'] = array(
    'bundle' => 'internship_opp',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_internship_opp_skills',
    'label' => 'Required/Desired Skills',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-internship_opp-field_internship_opp_special_req'
  $field_instances['node-internship_opp-field_internship_opp_special_req'] = array(
    'bundle' => 'internship_opp',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_internship_opp_special_req',
    'label' => 'Special Requirements',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-internship_selection-field_internship_selection_class'
  $field_instances['node-internship_selection-field_internship_selection_class'] = array(
    'bundle' => 'internship_selection',
    'default_value' => NULL,
    'default_value_function' => 'entityreference_prepopulate_field_default_value',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_internship_selection_class',
    'label' => 'Class Section',
    'required' => 1,
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'action' => 'disable',
          'action_on_edit' => 1,
          'fallback' => 'form_error',
          'og_context' => 0,
          'skip_perm' => 0,
          'status' => 1,
        ),
        'test_instance_behavior' => array(
          'status' => 0,
        ),
      ),
      'custom_add_another' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-internship_selection-field_internship_selection_date'
  $field_instances['node-internship_selection-field_internship_selection_date'] = array(
    'bundle' => 'internship_selection',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_internship_selection_date',
    'label' => 'Start & End Dates',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-internship_selection-field_internship_selection_desc'
  $field_instances['node-internship_selection-field_internship_selection_desc'] = array(
    'bundle' => 'internship_selection',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_internship_selection_desc',
    'label' => 'Description',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-internship_selection-field_internship_selection_goals'
  $field_instances['node-internship_selection-field_internship_selection_goals'] = array(
    'bundle' => 'internship_selection',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_internship_selection_goals',
    'label' => 'Goals',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-internship_selection-field_internship_selection_impac'
  $field_instances['node-internship_selection-field_internship_selection_impac'] = array(
    'bundle' => 'internship_selection',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_internship_selection_impac',
    'label' => 'Personal Impact',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-internship_selection-field_internship_selection_major'
  $field_instances['node-internship_selection-field_internship_selection_major'] = array(
    'bundle' => 'internship_selection',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_internship_selection_major',
    'label' => 'Major',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-internship_selection-field_internship_selection_opp'
  $field_instances['node-internship_selection-field_internship_selection_opp'] = array(
    'bundle' => 'internship_selection',
    'default_value' => NULL,
    'default_value_function' => 'entityreference_prepopulate_field_default_value',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_internship_selection_opp',
    'label' => 'Internship Opportunity',
    'required' => 1,
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'action' => 'disable',
          'action_on_edit' => 1,
          'fallback' => 'redirect',
          'og_context' => 0,
          'skip_perm' => 0,
          'status' => 1,
        ),
        'test_instance_behavior' => array(
          'status' => 0,
        ),
      ),
      'custom_add_another' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-internship_selection-field_internship_selection_super'
  $field_instances['node-internship_selection-field_internship_selection_super'] = array(
    'bundle' => 'internship_selection',
    'default_value' => NULL,
    'default_value_function' => 'entityreference_prepopulate_field_default_value',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_internship_selection_super',
    'label' => 'Supervisor',
    'required' => 1,
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'action' => 'disable',
          'action_on_edit' => 0,
          'fallback' => 'form_error',
          'og_context' => 0,
          'skip_perm' => 0,
          'status' => 1,
        ),
        'test_instance_behavior' => array(
          'status' => 0,
        ),
      ),
      'custom_add_another' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-orientation_session-field_orienatiion_session_direc'
  $field_instances['node-orientation_session-field_orienatiion_session_direc'] = array(
    'bundle' => 'orientation_session',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_orienatiion_session_direc',
    'label' => 'Directions & Parking',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 35,
    ),
  );

  // Exported field_instance: 'node-orientation_session-field_orienation_session_contact'
  $field_instances['node-orientation_session-field_orienation_session_contact'] = array(
    'bundle' => 'orientation_session',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_orienation_session_contact',
    'label' => 'Contact Information',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 36,
    ),
  );

  // Exported field_instance: 'node-orientation_session-field_orientation_session_attend'
  $field_instances['node-orientation_session-field_orientation_session_attend'] = array(
    'bundle' => 'orientation_session',
    'default_value' => array(
      0 => array(
        'registration_type' => 'orientation_session',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'registration',
        'settings' => array(),
        'type' => 'registration_form',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_orientation_session_attend',
    'label' => 'Registration Form',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'default_registration_settings' => array(
        'capacity' => 0,
        'reminder' => array(
          'reminder_settings' => array(
            'reminder_date' => '',
            'reminder_template' => 'asdf',
          ),
          'send_reminder' => 0,
        ),
        'scheduling' => array(
          'close' => '',
          'open' => '2013-05-14',
        ),
        'settings' => array(
          'from_address' => 'agold2@asu.edu',
          'multiple_registrations' => 0,
          'registration_entity_access_roles' => array(
            2 => 0,
            3 => 0,
            4 => 0,
            5 => 0,
            6 => 0,
            7 => 0,
            8 => 0,
          ),
        ),
        'status' => 1,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'registration',
      'settings' => array(),
      'type' => 'registration_select',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'node-orientation_session-field_orientation_session_date'
  $field_instances['node-orientation_session-field_orientation_session_date'] = array(
    'bundle' => 'orientation_session',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_orientation_session_date',
    'label' => 'Date',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 33,
    ),
  );

  // Exported field_instance: 'node-orientation_session-field_orientation_session_loc'
  $field_instances['node-orientation_session-field_orientation_session_loc'] = array(
    'bundle' => 'orientation_session',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'location_cck',
        'settings' => array(),
        'type' => 'location_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_orientation_session_loc',
    'label' => 'Location',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'location_cck',
      'settings' => array(),
      'type' => 'location',
      'weight' => 34,
    ),
  );

  // Exported field_instance: 'node-partner_organization-field_partner_org_contacts'
  $field_instances['node-partner_organization-field_partner_org_contacts'] = array(
    'bundle' => 'partner_organization',
    'default_value' => NULL,
    'default_value_function' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 1,
          'view_mode' => 'token',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_partner_org_contacts',
    'label' => 'Contacts',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'status' => 0,
        ),
        'test_instance_behavior' => array(
          'status' => 0,
        ),
      ),
      'custom_add_another' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete_tags',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-partner_organization-field_partner_org_mission'
  $field_instances['node-partner_organization-field_partner_org_mission'] = array(
    'bundle' => 'partner_organization',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_partner_org_mission',
    'label' => 'Mission',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-partner_organization-field_partner_org_website'
  $field_instances['node-partner_organization-field_partner_org_website'] = array(
    'bundle' => 'partner_organization',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_partner_org_website',
    'label' => 'Website',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => '_blank',
        'title' => '',
      ),
      'custom_add_another' => '',
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'none',
      'title_maxlength' => 128,
      'title_value' => 'Visit organization\'s website',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-service_goals-field_service_goals_approval_sta'
  $field_instances['node-service_goals-field_service_goals_approval_sta'] = array(
    'bundle' => 'service_goals',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_goals_approval_sta',
    'label' => 'Approval Status',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-service_goals-field_service_goals_goals'
  $field_instances['node-service_goals-field_service_goals_goals'] = array(
    'bundle' => 'service_goals',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_goals_goals',
    'label' => 'Goals',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-student_placement_agreement-field_partner_organization_appro'
  $field_instances['node-student_placement_agreement-field_partner_organization_appro'] = array(
    'bundle' => 'student_placement_agreement',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'By typing your name into this field you certify that you consent to the terms below, and that you are authorized by your facility or organization to do so.

<ol><li> DURATION</li><ol><li>
The duration, or term, of this Agreement shall be for the designated number of years and months as agreed upon 
below, not to exceed five (5) years, commencing on the Effective Date. This Agreement may be renewed by written 
agreement of the parties. The parties may revise or modify this Agreement only by a written amendment signed by 
both parties.
Number of Years: 5</li></ol>
<li>GENERAL TERMS</li>
<ol><li> The purpose of this Agreement is to establish a relationship between the University and the Facility to enable an 
educational experience for students at Facility’s site that may qualify for University academic credit as 
determined by University.</li>
<li> The University and the Facility will agree on a schedule for student participation at the Facility.</li>
<li> The student’s participation should complement the service and educational activities of the Facility. The student </li>
will be under the supervision of a Facility employee.
<li>Each student is expected to perform with high standards at all times and comply with all written policies and 
regulations of the appropriate department of the Facility.</li>
<li> Either the Facility or the University may require withdrawal or dismissal from participation at the Facility of 
any student whose performance record or conduct does not justify continuance.</li>
<li> Neither the University nor the Facility is obligated to provide for the student’s transportation to and from the 
Facility or for health insurance for the student.</li>
<li>A meeting or telephone conference between representatives of the University and the Facility will occur at least 
once each semester to evaluate the educational program and review this Agreement.</li>
<li> Statements of performance objectives for this educational experience will be the joint responsibility of 
University and Facility personnel.</li>
<li> Each student must adhere to the Facility’s established dress and performance standards.</li></ol>
<li> FACILITY’S OBLIGATIONS</li>
<ol><li> Facility agrees to appoint an Educational Coordinator who is responsible for the educational activities and 
supervision of University students participating under this Agreement.</li>
<li> The Facility agrees to submit to the University an evaluation of each student’s progress. The format for the 
evaluation is established by the University in consultation with the Facility.</li>
<li> The Facility is responsible for the acts and omissions of its employees and agents and must maintain adequate 
insurance (which may include a bona fide self-insurance program) to cover any liability arising from the acts 
and omissions of the Facility’s employees and agents. The Facility is not responsible for maintaining insurance 
to cover liability arising from the acts and omissions of the employees and agents of the University. University 
students are not deemed to be employees of Facility by virtue of this Agreement.</li>
<li> Nothing in this Agreement is intended to modify, impair, destroy, or otherwise affect any common law, or 
statutory right to indemnity, or contribution that the University may have against the Facility by reason of any 
act or omission of the Facility or the Facility’s employees and agents.</li></ol>
<li>UNIVERSITY’S OBLIGATIONS</li>
<ol><li> The University will provide an administrative framework, including designating a University faculty or other 
representatives to coordinate scheduling, provide course information and objectives, and assist in advising 
students.</li>
<li>The University will be responsible for developing and carrying out procedures for student selection and 
admission.</li>
<li> The University is responsible for the acts and omissions of its employees and agents and maintains insurance 
coverage through the State of Arizona’s Risk Management Division self-insurance program to cover liabilities 
arising from the acts and omissions of the University’s employees, students, and agents participating under this 
Agreement. The University is not responsible for maintaining insurance coverage for liability arising from the 
acts and omissions of the Facility’s employees and agents.</li></ol>
<li>STATE OF ARIZONA PROVISIONS</li>
<ol><li> Nondiscrimination. The parties agree to comply with all applicable state and federal laws, rules, regulations,
and executive orders governing equal employment opportunity, immigration, and nondiscrimination, including 
the Americans with Disabilities Act.</li>
<li> Conflict of Interest. ASU’s participation in this Agreement is subject to Section 38-511 of the Arizona Revised 
Statutes which provides that this Agreement may be cancelled if any person significantly involved in initiating, 
negotiating, securing, drafting or creating this Agreement on behalf of University is, at any time while this 
Agreement, or any extension thereof, is in effect, an employee or agent of the other party to this Agreement in 
any capacity or a consultant to any other party with respect to the subject matter of this Agreement.</li>
<li> Notice of Arbitration Statutes. Pursuant to Section 12-1518 of the Arizona Revised Statutes, the parties 
acknowledge and agree, subject to the Arizona Board of Regents Policy 3-809, that they will be required to 
make use of mandatory arbitration of any legal action that is filed in the Arizona superior court concerning a 
controversy arising out of this Agreement if required by Section 12-133 of the Arizona Revised Statutes.</li>
<li> Failure of Legislature to Appropriate. If University’s performance under this Agreement depends upon the 
appropriation of funds by the Arizona Legislature, and if the Legislature fails to appropriate the funds necessary 
for performance, then University may provide written notice of this to Facility and cancel this Agreement 
without further obligation of University. Appropriation is a legislative act and is beyond the control of 
University.</li>
<li> Student Educational Records. The University and Facility recognize that student educational records are 
protected by the federal Family Educational Rights and Privacy Act (FERPA) (20 U.S.C. § 1232g). Facility 
agrees to comply with FERPA and to not make any disclosures of student educational records to third parties 
without prior notice to and consent from the University or as otherwise provided by law.</li>
<li> Representations Regarding Relationship and Use of University Marks. Except as otherwise agreed in 
writing, Facility acknowledges that its relationship with University is limited to the student internship or 
placement program contemplated herein. Facility shall not make any representations stating or implying that the 
parties engage in broader transactions or that University is otherwise associated with Facility without first 
obtaining express written permission from University. In addition, Facility shall not use any trade name, 
trademark, service mark, logo, domain name, and any other distinctive brand feature owned or used by 
University without prior written authorization by University.</li></ol>
<li>MISCELLANEOUS</li>
<ol><li> Neither party shall have the right to assign this Agreement without the prior written consent of the other party.</li>
<li> This Agreement constitutes the entire agreement and understanding of the parties with respect to its subject 
matter. No prior or contemporaneous agreement or understanding will be effective. This Agreement shall be 
governed by the laws of Arizona, the courts of which state shall have jurisdiction over its subject matter.</li>
<li> The individual signing on behalf of Facility hereby represents and warrants that s/he is duly authorized to 
execute and deliver this Agreement on behalf of Facility and that this Agreement is binding upon Facility in 
accordance with its terms.</li>
<li> This Agreement may be executed in multiple counterparts, each of which shall be deemed an original, and all of 
which together shall constitute one and the same instrument.</li></ol></li></ol>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_partner_organization_appro',
    'label' => 'Partner Organization E-Signature',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 33,
    ),
  );

  // Exported field_instance: 'node-student_placement_agreement-field_partner_organization_name'
  $field_instances['node-student_placement_agreement-field_partner_organization_name'] = array(
    'bundle' => 'student_placement_agreement',
    'default_value' => NULL,
    'default_value_function' => 'entityreference_prepopulate_field_default_value',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_partner_organization_name',
    'label' => 'Partner Organization Name',
    'required' => 1,
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'action' => 'none',
          'action_on_edit' => 0,
          'fallback' => 'none',
          'og_context' => 0,
          'skip_perm' => 0,
          'status' => 1,
        ),
        'test_instance_behavior' => array(
          'status' => 0,
        ),
      ),
      'custom_add_another' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'node-student_placement_agreement-field_spa_expiration_date'
  $field_instances['node-student_placement_agreement-field_spa_expiration_date'] = array(
    'bundle' => 'student_placement_agreement',
    'deleted' => 0,
    'description' => 'The expiration date of the Student Placement Agreement. Should be five years from today\'s date.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_spa_expiration_date',
    'label' => 'Expiration Date',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'default_value' => 'strtotime',
      'default_value2' => 'same',
      'default_value_code' => '+5 years',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_text',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'node-time_card-field_time_card_date'
  $field_instances['node-time_card-field_time_card_date'] = array(
    'bundle' => 'time_card',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_time_card_date',
    'label' => 'Date',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '-1day',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-time_card-field_time_card_entry'
  $field_instances['node-time_card-field_time_card_entry'] = array(
    'bundle' => 'time_card',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Add',
          'delete' => 'Delete',
          'description' => TRUE,
          'edit' => 'Edit',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_time_card_entry',
    'label' => 'Entry',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => 'Add another entry',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-time_card-field_time_card_internship'
  $field_instances['node-time_card-field_time_card_internship'] = array(
    'bundle' => 'time_card',
    'default_value' => NULL,
    'default_value_function' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_time_card_internship',
    'label' => 'Internship',
    'required' => 1,
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'status' => 0,
        ),
        'test_instance_behavior' => array(
          'status' => 0,
        ),
      ),
      'custom_add_another' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('<strong>Fingerprint/background clearance:</strong>
Provide as much detail as possible about each of the following: 
<ol><li>the type of clearance required (e.g. educator\'s fingerprint card, drug screening, etc.)</li>
<li>associated costs</li>
<li> how long processing will take</li>
<li>whether or not students may start some type of service while waiting for fingerprint or background clearance processing.</li>
</ol>
<strong>Training:</strong> provide details on the type of training and when it will occur.');
  t('Approval Status');
  t('Available Days/Hours');
  t('By typing your name into this field you certify that you consent to the terms below, and that you are authorized by your facility or organization to do so.

<ol><li> DURATION</li><ol><li>
The duration, or term, of this Agreement shall be for the designated number of years and months as agreed upon 
below, not to exceed five (5) years, commencing on the Effective Date. This Agreement may be renewed by written 
agreement of the parties. The parties may revise or modify this Agreement only by a written amendment signed by 
both parties.
Number of Years: 5</li></ol>
<li>GENERAL TERMS</li>
<ol><li> The purpose of this Agreement is to establish a relationship between the University and the Facility to enable an 
educational experience for students at Facility’s site that may qualify for University academic credit as 
determined by University.</li>
<li> The University and the Facility will agree on a schedule for student participation at the Facility.</li>
<li> The student’s participation should complement the service and educational activities of the Facility. The student </li>
will be under the supervision of a Facility employee.
<li>Each student is expected to perform with high standards at all times and comply with all written policies and 
regulations of the appropriate department of the Facility.</li>
<li> Either the Facility or the University may require withdrawal or dismissal from participation at the Facility of 
any student whose performance record or conduct does not justify continuance.</li>
<li> Neither the University nor the Facility is obligated to provide for the student’s transportation to and from the 
Facility or for health insurance for the student.</li>
<li>A meeting or telephone conference between representatives of the University and the Facility will occur at least 
once each semester to evaluate the educational program and review this Agreement.</li>
<li> Statements of performance objectives for this educational experience will be the joint responsibility of 
University and Facility personnel.</li>
<li> Each student must adhere to the Facility’s established dress and performance standards.</li></ol>
<li> FACILITY’S OBLIGATIONS</li>
<ol><li> Facility agrees to appoint an Educational Coordinator who is responsible for the educational activities and 
supervision of University students participating under this Agreement.</li>
<li> The Facility agrees to submit to the University an evaluation of each student’s progress. The format for the 
evaluation is established by the University in consultation with the Facility.</li>
<li> The Facility is responsible for the acts and omissions of its employees and agents and must maintain adequate 
insurance (which may include a bona fide self-insurance program) to cover any liability arising from the acts 
and omissions of the Facility’s employees and agents. The Facility is not responsible for maintaining insurance 
to cover liability arising from the acts and omissions of the employees and agents of the University. University 
students are not deemed to be employees of Facility by virtue of this Agreement.</li>
<li> Nothing in this Agreement is intended to modify, impair, destroy, or otherwise affect any common law, or 
statutory right to indemnity, or contribution that the University may have against the Facility by reason of any 
act or omission of the Facility or the Facility’s employees and agents.</li></ol>
<li>UNIVERSITY’S OBLIGATIONS</li>
<ol><li> The University will provide an administrative framework, including designating a University faculty or other 
representatives to coordinate scheduling, provide course information and objectives, and assist in advising 
students.</li>
<li>The University will be responsible for developing and carrying out procedures for student selection and 
admission.</li>
<li> The University is responsible for the acts and omissions of its employees and agents and maintains insurance 
coverage through the State of Arizona’s Risk Management Division self-insurance program to cover liabilities 
arising from the acts and omissions of the University’s employees, students, and agents participating under this 
Agreement. The University is not responsible for maintaining insurance coverage for liability arising from the 
acts and omissions of the Facility’s employees and agents.</li></ol>
<li>STATE OF ARIZONA PROVISIONS</li>
<ol><li> Nondiscrimination. The parties agree to comply with all applicable state and federal laws, rules, regulations,
and executive orders governing equal employment opportunity, immigration, and nondiscrimination, including 
the Americans with Disabilities Act.</li>
<li> Conflict of Interest. ASU’s participation in this Agreement is subject to Section 38-511 of the Arizona Revised 
Statutes which provides that this Agreement may be cancelled if any person significantly involved in initiating, 
negotiating, securing, drafting or creating this Agreement on behalf of University is, at any time while this 
Agreement, or any extension thereof, is in effect, an employee or agent of the other party to this Agreement in 
any capacity or a consultant to any other party with respect to the subject matter of this Agreement.</li>
<li> Notice of Arbitration Statutes. Pursuant to Section 12-1518 of the Arizona Revised Statutes, the parties 
acknowledge and agree, subject to the Arizona Board of Regents Policy 3-809, that they will be required to 
make use of mandatory arbitration of any legal action that is filed in the Arizona superior court concerning a 
controversy arising out of this Agreement if required by Section 12-133 of the Arizona Revised Statutes.</li>
<li> Failure of Legislature to Appropriate. If University’s performance under this Agreement depends upon the 
appropriation of funds by the Arizona Legislature, and if the Legislature fails to appropriate the funds necessary 
for performance, then University may provide written notice of this to Facility and cancel this Agreement 
without further obligation of University. Appropriation is a legislative act and is beyond the control of 
University.</li>
<li> Student Educational Records. The University and Facility recognize that student educational records are 
protected by the federal Family Educational Rights and Privacy Act (FERPA) (20 U.S.C. § 1232g). Facility 
agrees to comply with FERPA and to not make any disclosures of student educational records to third parties 
without prior notice to and consent from the University or as otherwise provided by law.</li>
<li> Representations Regarding Relationship and Use of University Marks. Except as otherwise agreed in 
writing, Facility acknowledges that its relationship with University is limited to the student internship or 
placement program contemplated herein. Facility shall not make any representations stating or implying that the 
parties engage in broader transactions or that University is otherwise associated with Facility without first 
obtaining express written permission from University. In addition, Facility shall not use any trade name, 
trademark, service mark, logo, domain name, and any other distinctive brand feature owned or used by 
University without prior written authorization by University.</li></ol>
<li>MISCELLANEOUS</li>
<ol><li> Neither party shall have the right to assign this Agreement without the prior written consent of the other party.</li>
<li> This Agreement constitutes the entire agreement and understanding of the parties with respect to its subject 
matter. No prior or contemporaneous agreement or understanding will be effective. This Agreement shall be 
governed by the laws of Arizona, the courts of which state shall have jurisdiction over its subject matter.</li>
<li> The individual signing on behalf of Facility hereby represents and warrants that s/he is duly authorized to 
execute and deliver this Agreement on behalf of Facility and that this Agreement is binding upon Facility in 
accordance with its terms.</li>
<li> This Agreement may be executed in multiple counterparts, each of which shall be deemed an original, and all of 
which together shall constitute one and the same instrument.</li></ol></li></ol>');
  t('Category');
  t('Class Section');
  t('Closed to Interns');
  t('Community Impact');
  t('Community Need');
  t('Contact Information');
  t('Contact(s)');
  t('Contacts');
  t('Date');
  t('Description');
  t('Directions & Parking');
  t('Duties');
  t('Entry');
  t('Expiration Date');
  t('Goals');
  t('If your organization is not listed, please <a href="/node/add/partner-organization">create a new partner organization.</a>');
  t('Internship');
  t('Internship Opportunity');
  t('Internship_opp_legal');
  t('Location');
  t('Location(s)');
  t('Major');
  t('Mission');
  t('Notes');
  t('Other Category');
  t('Partner Organization');
  t('Partner Organization E-Signature');
  t('Partner Organization Name');
  t('Personal Impact');
  t('Please enter usernames of people that can be contacted about this internship opportunity.

The contact\'s email address and phone number will be displayed with the internship opportunity listing.');
  t('Please indicate all of the times that a <em>significant</em>number of hours may be performed.
');
  t('Population Served');
  t('Registration Form');
  t('Renewal Semester');
  t('Required/Desired Skills');
  t('Semester');
  t('Service Hours');
  t('Special Requirements');
  t('Special Requirements Details ');
  t('Start & End Dates');
  t('Supervisor');
  t('The expiration date of the Student Placement Agreement. Should be five years from today\'s date.');
  t('This field will probably be replaced by Workbench functionality in subsequent Sprint.');
  t('Website');
  t('You may mark this internship opportunity "Closed" if it has reached its maximum capacity or is no longer accepting interns.');
  t('You may suggest another category if the options listed do not apply.');

  return $field_instances;
}
