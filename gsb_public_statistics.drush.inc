/**
 * Implements hook_drush_command().
 */
function gsb_public_statistics_drush_command() {

  return array(

    // Define the 'gps-stats' command.
    'gps-stats' => array(
      'description' => 'Perform gsb_public_statistics.',
      'bootstrap' => DRUSH_BOOTSTRAP_DRUPAL_DATABASE,
      'aliases' => array('gps'),
      'examples' => array('drush gps'),
    ),

  };

}

function drush_gsb_public_statistics_gps_stats($v = ACQUIA_PURGE_SEVLEVEL_INFO) {
  gsb_public_statistics_send_status_mail();
}
