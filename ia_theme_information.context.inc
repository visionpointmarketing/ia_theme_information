<?php
/**
 * @file
 * ia_theme_information.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ia_theme_information_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'devel_blocks';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
    'theme' => array(
      'values' => array(
        'starterkit' => 'starterkit',
      ),
    ),
    'user' => array(
      'values' => array(
        'administrator' => 'administrator',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-test-title' => array(
          'module' => 'bean',
          'delta' => 'test-title',
          'region' => 'header_first',
          'weight' => '-10',
        ),
        'bean-header-second-region' => array(
          'module' => 'bean',
          'delta' => 'header-second-region',
          'region' => 'header_second',
          'weight' => '-10',
        ),
        'bean-header-third-region' => array(
          'module' => 'bean',
          'delta' => 'header-third-region',
          'region' => 'header_third',
          'weight' => '-10',
        ),
        'bean-content-header-region' => array(
          'module' => 'bean',
          'delta' => 'content-header-region',
          'region' => 'content_header',
          'weight' => '-10',
        ),
        'bean-navigation-sidebar-region' => array(
          'module' => 'bean',
          'delta' => 'navigation-sidebar-region',
          'region' => 'nav_sidebar',
          'weight' => '-10',
        ),
        'bean-featured-content-region' => array(
          'module' => 'bean',
          'delta' => 'featured-content-region',
          'region' => 'featured',
          'weight' => '-10',
        ),
        'bean-above-content-region' => array(
          'module' => 'bean',
          'delta' => 'above-content-region',
          'region' => 'above_content',
          'weight' => '-10',
        ),
        'bean-content-left-region' => array(
          'module' => 'bean',
          'delta' => 'content-left-region',
          'region' => 'content_left',
          'weight' => '-10',
        ),
        'bean-content-right-region' => array(
          'module' => 'bean',
          'delta' => 'content-right-region',
          'region' => 'content_right',
          'weight' => '-10',
        ),
        'bean-below-content-region' => array(
          'module' => 'bean',
          'delta' => 'below-content-region',
          'region' => 'below_content',
          'weight' => '-10',
        ),
        'bean-promo-sidebar-region' => array(
          'module' => 'bean',
          'delta' => 'promo-sidebar-region',
          'region' => 'promo_sidebar',
          'weight' => '-10',
        ),
        'bean-content-footer-region' => array(
          'module' => 'bean',
          'delta' => 'content-footer-region',
          'region' => 'content_footer',
          'weight' => '-10',
        ),
        'bean-footer-first-region' => array(
          'module' => 'bean',
          'delta' => 'footer-first-region',
          'region' => 'footer_first',
          'weight' => '-10',
        ),
        'bean-footer-second-region' => array(
          'module' => 'bean',
          'delta' => 'footer-second-region',
          'region' => 'footer_second',
          'weight' => '-10',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'developer',
    ),
  );
  $context->condition_mode = 1;
  $export['devel_blocks'] = $context;

  return $export;
}
