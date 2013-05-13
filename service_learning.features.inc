<?php
/**
 * @file
 * service_learning.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function service_learning_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function service_learning_node_info() {
  $items = array(
    'internship_opp' => array(
      'name' => t('Internship Opportunity'),
      'base' => 'node_content',
      'description' => t('An <em>internship opportunity</em> is   is a specific job made available to student interns by a community <em>partner organization</em>.'),
      'has_title' => '1',
      'title_label' => t('Inernship Title'),
      'help' => '',
    ),
    'partner_organization' => array(
      'name' => t('Partner Organization'),
      'base' => 'node_content',
      'description' => t('A <em>partner organization</em> is a site in the community wishing to offer internship opportunities for students enrolled in the University Service Learning program.'),
      'has_title' => '1',
      'title_label' => t('Partner Organization'),
      'help' => '',
    ),
  );
  return $items;
}
