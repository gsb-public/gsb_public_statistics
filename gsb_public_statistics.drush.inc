<?php

/**
 * @file
 * Drush commands for GSB Public Statistics
 */

/**
 * Implements hook_drush_command().
 */
function gsb_public_statistics_drush_command() {

  return array(

    // Define the 'gps-stats' command.
    'gps-stats' => array(
      'description' => 'Perform gsb_public_statistics.',
      'bootstrap' => DRUSH_BOOTSTRAP_DRUPAL_FULL,
      'aliases' => array('gps'),
      'examples' => array('drush gps'),
    ),

  );

}

function drush_gsb_public_statistics_gps_stats() {
  gsb_public_statistics_send_status_mail();
}
