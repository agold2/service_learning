<?php
/**
 * @file
 * asu_usl_internships.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function asu_usl_internships_default_rules_configuration() {
  $items = array();
  $items['rules_alert_moderator_of_new_spa'] = entity_import('rules_config', '{ "rules_alert_moderator_of_new_spa" : {
      "LABEL" : "Alert moderator of new SPA",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "workbench_moderation", "rules" ],
      "ON" : [ "workbench_moderation_after_moderation_transition" ],
      "IF" : [
        { "contents_current_state" : {
            "node" : [ "node" ],
            "moderation_state" : "awaiting_spa_moderator_approval"
          }
        },
        { "contents_previous_state" : { "node" : [ "node" ], "moderation_state" : "unsubmitted_spa" } }
      ],
      "DO" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "9" : "9" } },
            "subject" : "New Student Placement Agreement Awaiting Approval",
            "message" : "A partner organization representative has submitted a new Student Placement Agreement, and it is awaiting moderator approval. Please review the submitted agreement \\u003Ca href=\\u0022[node:edit-url]\\u0022\\u003Ehere\\u003C\\/a\\u003E, and change the revision status to \\u0022SPA Approved\\u0022 if it is deemed appropriate to do so.\\r\\n\\r\\nNote: This is an automatically generated e-mail from a mailbox that is not monitored. Please do not reply to this e-mail. If you have questions, please contact a Service Learning site administrator."
          }
        }
      ]
    }
  }');
  $items['rules_set_sign_spa_message'] = entity_import('rules_config', '{ "rules_set_sign_spa_message" : {
      "LABEL" : "Set \\u0022Sign SPA\\u0022 Message",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_insert" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "partner_organization" : "partner_organization" } }
          }
        }
      ],
      "DO" : [
        { "drupal_message" : { "message" : "Note: You must sign the Student Placement Agreement in order to offer internship opportunities to students. Please \\u003Ca href=\\u0022\\/node\\/add\\/student-placement-agreement?field_partner_organization_name=[node:nid]\\u0022\\u003Eclick here\\u003C\\/a\\u003E to do so." } }
      ]
    }
  }');
  return $items;
}
