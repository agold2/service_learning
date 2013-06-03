<?php
/**
 * @file
 * asu_usl_internships.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function asu_usl_internships_ctools_plugin_api() {
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
function asu_usl_internships_node_info() {
  $items = array(
    'internship_opp' => array(
      'name' => t('Internship Opportunity'),
      'base' => 'node_content',
      'description' => t('A <em>internship opportunity</em> is a job made available to students enrolled in the University Service Learning program by a community <em>partner organization</em>.'),
      'has_title' => '1',
      'title_label' => t('Inernship Title'),
      'help' => t('Share your organization\'s internship opportunity below. 

In order for students to be placed as interns the internship opportunity requires:
<ul>
<li>at least one supervisor who has attended an <a href="orientation-session">orientation session</a></li>
<li>Student Placement Agreement for your partner organization (valid for 5 years)</li>
</ul>

'),
    ),
    'internship_selection' => array(
      'name' => t('Internship Selection'),
      'base' => 'node_content',
      'description' => t('The <em>internship selection</em> form is submitted by an intern student after consulting with a <em>partner organization</em> about filling a specific <em>internship opportunity</em>.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'orientation_session' => array(
      'name' => t('Orientation Session'),
      'base' => 'node_content',
      'description' => t('An <em>orientation session</em> is a training session for intern supervisors.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'partner_organization' => array(
      'name' => t('Partner Organization'),
      'base' => 'node_content',
      'description' => t('A <em>partner organization</em> offers internship opportunities to students enrolled in the University Service Learning program.'),
      'has_title' => '1',
      'title_label' => t('Partner Organization'),
      'help' => '',
    ),
    'service_goals' => array(
      'name' => t('Service Goals'),
      'base' => 'node_content',
      'description' => t('<em>Service goals</em> are submitted by an intern student and provide details about what will be accomplished during an internship.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'time_card' => array(
      'name' => t('Time Card'),
      'base' => 'node_content',
      'description' => t('A <em>time card</em> is submitted by an intern to report time worked on an <em>internship opportunity</em>.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('Submit a separate time card for each shift you have worked.'),
    ),
  );
  return $items;
}
