<?php
/**
 * @file
 * ia_theme_information.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function ia_theme_information_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'ia_theme_information';
  $bean_type->label = 'IA Theme Information';
  $bean_type->options = '';
  $bean_type->description = 'These blocks provide information about IA regions as well as sample content that can live in these regions';
  $export['ia_theme_information'] = $bean_type;

  return $export;
}
