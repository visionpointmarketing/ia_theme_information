<?php
/**
 * @file
 * ia_theme_information.features.uuid_bean.inc
 */

/**
 * Implements hook_uuid_features_default_beans().
 */
function ia_theme_information_uuid_features_default_beans() {
  $beans = array();

  $beans[] = array(
    'label' => 'Content Header Region',
    'description' => NULL,
    'title' => 'Content Header',
    'type' => 'ia_theme_information',
    'data' => array(
      'view_mode' => 'default',
    ),
    'delta' => 'content-header-region',
    'view_mode' => 'default',
    'created' => 1416587184,
    'log' => '',
    'uid' => 1,
    'default_revision' => 1,
    'revisions' => array(),
    'vuuid' => 'd3e0297f-293f-46f3-b15f-552b7734fc4c',
    'uuid' => '233bc13f-4031-49f3-894a-07bd4446ab7f',
    'field_region_description' => array(
      'und' => array(
        0 => array(
          'value' => 'The content header region provides a full-width area above all other content on the page, but below the header. This region may contain a large billboard image(s), breadcrumbs, page title, emergency alerts, or any other elements that would provide a large visual or navigational choice to the user.',
          'format' => 'filtered_html',
          'safe_value' => '<p>The content header region provides a full-width area above all other content on the page, but below the header. This region may contain a large billboard image(s), breadcrumbs, page title, emergency alerts, or any other elements that would provide a large visual or navigational choice to the user.</p>
',
        ),
      ),
    ),
    'field_technical_information' => array(
      'und' => array(
        0 => array(
          'value' => 'Breadcrumbs are created through the crumbs module. Page title moved from content region dynamically via a view (typically called "page_content_alternate_locations" or similar). Other dynamic elements such as the billboard and alerts added through views.',
          'format' => 'filtered_html',
          'safe_value' => '<p>Breadcrumbs are created through the crumbs module. Page title moved from content region dynamically via a view (typically called "page_content_alternate_locations" or similar). Other dynamic elements such as the billboard and alerts added through views.</p>
',
        ),
      ),
    ),
    'field_content_examples' => array(
      'und' => array(
        0 => array(
          'value' => 'Billboard image',
          'format' => NULL,
          'safe_value' => 'Billboard image',
        ),
        1 => array(
          'value' => 'Dynamic Content slider',
          'format' => NULL,
          'safe_value' => 'Dynamic Content slider',
        ),
        2 => array(
          'value' => 'Breadcrumb',
          'format' => NULL,
          'safe_value' => 'Breadcrumb',
        ),
        3 => array(
          'value' => 'Page Title',
          'format' => NULL,
          'safe_value' => 'Page Title',
        ),
      ),
    ),
  );
  $beans[] = array(
    'label' => 'Content Left Region',
    'description' => NULL,
    'title' => 'Content Left',
    'type' => 'ia_theme_information',
    'data' => array(
      'view_mode' => 'default',
    ),
    'delta' => 'content-left-region',
    'view_mode' => 'default',
    'created' => 1416587384,
    'log' => '',
    'uid' => 1,
    'default_revision' => 1,
    'revisions' => array(),
    'vuuid' => 'a247c71b-478e-4f09-a04e-2592048c6959',
    'uuid' => '4ac64fc2-7031-4391-aa53-250000cc639a',
    'field_region_description' => array(
      'und' => array(
        0 => array(
          'value' => 'The content left region is used in conjunction with the content right region to compare two sections of similar content side-by-side.',
          'format' => 'filtered_html',
          'safe_value' => '<p>The content left region is used in conjunction with the content right region to compare two sections of similar content side-by-side.</p>
',
        ),
      ),
    ),
    'field_technical_information' => array(
      'und' => array(
        0 => array(
          'value' => 'Content may be entered via static or dynamic blocks or on a node-level by utilizing the "page alternate locations" view to distribute content.',
          'format' => 'filtered_html',
          'safe_value' => '<p>Content may be entered via static or dynamic blocks or on a node-level by utilizing the "page alternate locations" view to distribute content.</p>
',
        ),
      ),
    ),
    'field_content_examples' => array(
      'und' => array(
        0 => array(
          'value' => 'example',
          'format' => NULL,
          'safe_value' => 'example',
        ),
      ),
    ),
  );
  $beans[] = array(
    'label' => 'Below Content Region',
    'description' => NULL,
    'title' => 'Below Content',
    'type' => 'ia_theme_information',
    'data' => array(
      'view_mode' => 'default',
    ),
    'delta' => 'below-content-region',
    'view_mode' => 'default',
    'created' => 1416596510,
    'log' => '',
    'uid' => 1,
    'default_revision' => 1,
    'revisions' => array(),
    'vuuid' => '1464f518-ec40-426f-b916-29e628178184',
    'uuid' => '4d7f46cc-88fa-41ee-b2c8-8f768aa4326a',
    'field_region_description' => array(
      'und' => array(
        0 => array(
          'value' => 'The below content region is used to insert boilerplate content or promos shown just below the content but within the same column width.',
          'format' => 'filtered_html',
          'safe_value' => '<p>The below content region is used to insert boilerplate content or promos shown just below the content but within the same column width.</p>
',
        ),
      ),
    ),
    'field_technical_information' => array(
      'und' => array(
        0 => array(
          'value' => 'n/a',
          'format' => 'filtered_html',
          'safe_value' => '<p>n/a</p>
',
        ),
      ),
    ),
    'field_content_examples' => array(
      'und' => array(
        0 => array(
          'value' => 'copyright information',
          'format' => NULL,
          'safe_value' => 'copyright information',
        ),
        1 => array(
          'value' => 'slideshow',
          'format' => NULL,
          'safe_value' => 'slideshow',
        ),
        2 => array(
          'value' => 'dynamic table',
          'format' => NULL,
          'safe_value' => 'dynamic table',
        ),
      ),
    ),
  );
  $beans[] = array(
    'label' => 'Navigation Sidebar Region',
    'description' => NULL,
    'title' => 'Navigation Sidebar',
    'type' => 'ia_theme_information',
    'data' => array(
      'view_mode' => 'default',
    ),
    'delta' => 'navigation-sidebar-region',
    'view_mode' => 'default',
    'created' => 1416593225,
    'log' => '',
    'uid' => 1,
    'default_revision' => 1,
    'revisions' => array(),
    'vuuid' => '2f04e25b-c05f-41c7-a1a3-4c162d9f7822',
    'uuid' => 'b61c469a-5b9d-4f9c-963b-c5f894eeae78',
    'field_region_description' => array(
      'und' => array(
        0 => array(
          'value' => 'The navigation sidebar region contains a listing of all links located under the top level navigation for the current section. It may also contain promos related to navigating users to another piece of content related to the current page.',
          'format' => 'filtered_html',
          'safe_value' => '<p>The navigation sidebar region contains a listing of all links located under the top level navigation for the current section. It may also contain promos related to navigating users to another piece of content related to the current page.</p>
',
        ),
      ),
    ),
    'field_technical_information' => array(
      'und' => array(
        0 => array(
          'value' => 'Subnav is created via menu blocks, and contains active, active-trail, expanded, and leaf classes.',
          'format' => 'filtered_html',
          'safe_value' => '<p>Subnav is created via menu blocks, and contains active, active-trail, expanded, and leaf classes.</p>
',
        ),
      ),
    ),
    'field_content_examples' => array(
      'und' => array(
        0 => array(
          'value' => 'Subnavigation',
          'format' => NULL,
          'safe_value' => 'Subnavigation',
        ),
        1 => array(
          'value' => 'Related Links',
          'format' => NULL,
          'safe_value' => 'Related Links',
        ),
        2 => array(
          'value' => 'Call to Action',
          'format' => NULL,
          'safe_value' => 'Call to Action',
        ),
      ),
    ),
  );
  $beans[] = array(
    'label' => 'Header Second Region',
    'description' => NULL,
    'title' => 'Header Second',
    'type' => 'ia_theme_information',
    'data' => array(
      'view_mode' => 'default',
    ),
    'delta' => 'header-second-region',
    'view_mode' => 'default',
    'created' => 1416586696,
    'log' => '',
    'uid' => 1,
    'default_revision' => 1,
    'revisions' => array(),
    'vuuid' => '32df4395-4df4-4b9f-b33a-a6cfecc8382b',
    'uuid' => 'b926637a-33c6-4205-89e5-79ec1164759d',
    'field_region_description' => array(
      'und' => array(
        0 => array(
          'value' => 'The second header region contains gateway and utility menus. The gateway menu is used to display a curated list of helpful links to users who have self-identified as one of the listed types. The utility menu contains links that many users would like quick access to, as well as links that are needed across many user types. It may also contain elements typically found in other header regions on some designs.',
          'format' => 'filtered_html',
          'safe_value' => '<p>The second header region contains gateway and utility menus. The gateway menu is used to display a curated list of helpful links to users who have self-identified as one of the listed types. The utility menu contains links that many users would like quick access to, as well as links that are needed across many user types. It may also contain elements typically found in other header regions on some designs.</p>
',
        ),
      ),
    ),
    'field_technical_information' => array(
      'und' => array(
        0 => array(
          'value' => 'These menus will be displayed as menu blocks.',
          'format' => 'filtered_html',
          'safe_value' => '<p>These menus will be displayed as menu blocks.</p>
',
        ),
      ),
    ),
    'field_content_examples' => array(
      'und' => array(
        0 => array(
          'value' => 'Utility Menu',
          'format' => NULL,
          'safe_value' => 'Utility Menu',
        ),
        1 => array(
          'value' => 'Gateway Menu',
          'format' => NULL,
          'safe_value' => 'Gateway Menu',
        ),
      ),
    ),
  );
  $beans[] = array(
    'label' => 'Featured Content Region',
    'description' => NULL,
    'title' => 'Featured Content',
    'type' => 'ia_theme_information',
    'data' => array(
      'view_mode' => 'default',
    ),
    'delta' => 'featured-content-region',
    'view_mode' => 'default',
    'created' => 1416596320,
    'log' => '',
    'uid' => 1,
    'default_revision' => 1,
    'revisions' => array(),
    'vuuid' => 'f0cfeaf3-0a57-4782-a80b-84221176ac3c',
    'uuid' => 'bdd73def-707d-47ca-b096-caccdf3543ca',
    'field_region_description' => array(
      'und' => array(
        0 => array(
          'value' => 'The featured content region can contain a large image, video or promo that should be the main focus of the page. It may also contain a content introduction',
          'format' => 'filtered_html',
          'safe_value' => '<p>The featured content region can contain a large image, video or promo that should be the main focus of the page. It may also contain a content introduction</p>
',
        ),
      ),
    ),
    'field_technical_information' => array(
      'und' => array(
        0 => array(
          'value' => 'May use the "page content alternate locations" view to pull content from the node.',
          'format' => 'filtered_html',
          'safe_value' => '<p>May use the "page content alternate locations" view to pull content from the node.</p>
',
        ),
      ),
    ),
    'field_content_examples' => array(
      'und' => array(
        0 => array(
          'value' => 'large image',
          'format' => NULL,
          'safe_value' => 'large image',
        ),
        1 => array(
          'value' => 'video',
          'format' => NULL,
          'safe_value' => 'video',
        ),
        2 => array(
          'value' => 'intro blockquote',
          'format' => NULL,
          'safe_value' => 'intro blockquote',
        ),
      ),
    ),
  );
  $beans[] = array(
    'label' => 'Content Footer Region',
    'description' => NULL,
    'title' => 'Content Footer',
    'type' => 'ia_theme_information',
    'data' => array(
      'view_mode' => 'default',
    ),
    'delta' => 'content-footer-region',
    'view_mode' => 'default',
    'created' => 1416588956,
    'log' => '',
    'uid' => 1,
    'default_revision' => 1,
    'revisions' => array(),
    'vuuid' => 'd8e5e958-bd36-411a-b069-45ece038a4fd',
    'uuid' => 'bfcf4af6-2b46-4fa1-b967-f4521fd2a0f2',
    'field_region_description' => array(
      'und' => array(
        0 => array(
          'value' => 'The content footer region provides a full-width area below all other content on the page, but above the footer. This region may contain postscript data relating to the content of the page, promos spanning the full width of the page, or other full-width content on a per-layout basis.',
          'format' => 'filtered_html',
          'safe_value' => '<p>The content footer region provides a full-width area below all other content on the page, but above the footer. This region may contain postscript data relating to the content of the page, promos spanning the full width of the page, or other full-width content on a per-layout basis.</p>
',
        ),
      ),
    ),
    'field_technical_information' => array(),
    'field_content_examples' => array(
      'und' => array(
        0 => array(
          'value' => 'example',
          'format' => NULL,
          'safe_value' => 'example',
        ),
      ),
    ),
  );
  $beans[] = array(
    'label' => 'Content Right Region',
    'description' => NULL,
    'title' => 'Content Right',
    'type' => 'ia_theme_information',
    'data' => array(
      'view_mode' => 'default',
    ),
    'delta' => 'content-right-region',
    'view_mode' => 'default',
    'created' => 1416587383,
    'log' => '',
    'uid' => 1,
    'default_revision' => 1,
    'revisions' => array(),
    'vuuid' => '7c58171d-68f7-432a-a012-1a063d78a28c',
    'uuid' => 'c1897537-b084-4691-99b0-acc8f5fa772f',
    'field_region_description' => array(
      'und' => array(
        0 => array(
          'value' => 'The content right region is used in conjunction with the content left region to compare two sections of similar content side-by-side.',
          'format' => 'filtered_html',
          'safe_value' => '<p>The content right region is used in conjunction with the content left region to compare two sections of similar content side-by-side.</p>
',
        ),
      ),
    ),
    'field_technical_information' => array(
      'und' => array(
        0 => array(
          'value' => 'Content may be entered via static or dynamic blocks or on a node-level by utilizing the "page alternate locations" view to distribute content.',
          'format' => 'filtered_html',
          'safe_value' => '<p>Content may be entered via static or dynamic blocks or on a node-level by utilizing the "page alternate locations" view to distribute content.</p>
',
        ),
      ),
    ),
    'field_content_examples' => array(
      'und' => array(
        0 => array(
          'value' => 'example',
          'format' => NULL,
          'safe_value' => 'example',
        ),
      ),
    ),
  );
  $beans[] = array(
    'label' => 'Footer Second Region',
    'description' => NULL,
    'title' => 'Footer Second',
    'type' => 'ia_theme_information',
    'data' => array(
      'view_mode' => 'default',
    ),
    'delta' => 'footer-second-region',
    'view_mode' => 'default',
    'created' => 1416589140,
    'log' => '',
    'uid' => 1,
    'default_revision' => 1,
    'revisions' => array(),
    'vuuid' => '78cb2061-c0bd-4842-ad36-f3a1783257ef',
    'uuid' => 'd1d401d8-0af5-4fea-9916-f67815e1026d',
    'field_region_description' => array(
      'und' => array(
        0 => array(
          'value' => 'The footer second region will contain global contact information and legal/copyright information. It may also contain social media links as well as accreditation and affiliation links.',
          'format' => 'filtered_html',
          'safe_value' => '<p>The footer second region will contain global contact information and legal/copyright information. It may also contain social media links as well as accreditation and affiliation links.</p>
',
        ),
      ),
    ),
    'field_technical_information' => array(
      'und' => array(
        0 => array(
          'value' => 'Content will be displayed via static blocks.',
          'format' => 'filtered_html',
          'safe_value' => '<p>Content will be displayed via static blocks.</p>
',
        ),
      ),
    ),
    'field_content_examples' => array(
      'und' => array(
        0 => array(
          'value' => 'Address',
          'format' => NULL,
          'safe_value' => 'Address',
        ),
        1 => array(
          'value' => 'Contact Information',
          'format' => NULL,
          'safe_value' => 'Contact Information',
        ),
        2 => array(
          'value' => 'Social Media Links',
          'format' => NULL,
          'safe_value' => 'Social Media Links',
        ),
      ),
    ),
  );
  $beans[] = array(
    'label' => 'Header First Region',
    'description' => NULL,
    'title' => 'Header First',
    'type' => 'ia_theme_information',
    'data' => array(
      'view_mode' => 'default',
    ),
    'delta' => 'test-title',
    'view_mode' => 'default',
    'created' => 1416580748,
    'log' => '',
    'uid' => 1,
    'default_revision' => 1,
    'revisions' => array(),
    'vuuid' => '8b487506-3445-4bbf-944d-7c8aaad72d38',
    'uuid' => 'd8cda937-ae78-46da-9f5d-b30451269308',
    'field_region_description' => array(
      'und' => array(
        0 => array(
          'value' => 'The first header region contains the site logo. It may contain other items such as a show/hide toggle for the header region as well as additional logos as needed. It may also contain elements typically found in other header regions on some designs.',
          'format' => 'filtered_html',
          'safe_value' => '<p>The first header region contains the site logo. It may contain other items such as a show/hide toggle for the header region as well as additional logos as needed. It may also contain elements typically found in other header regions on some designs.</p>
',
        ),
      ),
    ),
    'field_technical_information' => array(
      'und' => array(
        0 => array(
          'value' => 'Clicking the site logo will take the user to the homepage of the site. Clicking the show/hide toggle will be visible on mobile and hidden on tablet and desktop. Clicking the toggle will toggle an "open" class on the header for use in displaying open/close functionality on the header elements.',
          'format' => 'filtered_html',
          'safe_value' => '<p>Clicking the site logo will take the user to the homepage of the site. Clicking the show/hide toggle will be visible on mobile and hidden on tablet and desktop. Clicking the toggle will toggle an "open" class on the header for use in displaying open/close functionality on the header elements.</p>
',
        ),
      ),
    ),
    'field_content_examples' => array(
      'und' => array(
        0 => array(
          'value' => 'Site Logo',
          'format' => NULL,
          'safe_value' => 'Site Logo',
        ),
      ),
    ),
  );
  $beans[] = array(
    'label' => 'Header Third Region',
    'description' => NULL,
    'title' => 'Header Third',
    'type' => 'ia_theme_information',
    'data' => array(
      'view_mode' => 'default',
    ),
    'delta' => 'header-third-region',
    'view_mode' => 'default',
    'created' => 1416586859,
    'log' => '',
    'uid' => 1,
    'default_revision' => 1,
    'revisions' => array(),
    'vuuid' => '01fcc171-e89d-465e-8db4-c67110dc877d',
    'uuid' => 'e2cd376e-eddb-4317-9a71-92eaa175569d',
    'field_region_description' => array(
      'und' => array(
        0 => array(
          'value' => 'The header third region will contain the main navigation of the site. It may also contain elements typically found in other header regions on some designs.',
          'format' => 'filtered_html',
          'safe_value' => '<p>The header third region will contain the main navigation of the site. It may also contain elements typically found in other header regions on some designs.</p>
',
        ),
      ),
    ),
    'field_technical_information' => array(
      'und' => array(
        0 => array(
          'value' => 'The main navigation will be a menu block.',
          'format' => 'filtered_html',
          'safe_value' => '<p>The main navigation will be a menu block.</p>
',
        ),
      ),
    ),
    'field_content_examples' => array(
      'und' => array(
        0 => array(
          'value' => 'Main Navigation',
          'format' => NULL,
          'safe_value' => 'Main Navigation',
        ),
      ),
    ),
  );
  $beans[] = array(
    'label' => 'Promo Sidebar Region',
    'description' => NULL,
    'title' => 'Promo Sidebar',
    'type' => 'ia_theme_information',
    'data' => array(
      'view_mode' => 'default',
    ),
    'delta' => 'promo-sidebar-region',
    'view_mode' => 'default',
    'created' => 1416596982,
    'log' => '',
    'uid' => 1,
    'default_revision' => 1,
    'revisions' => array(),
    'vuuid' => 'c57d803d-3776-44e9-9011-008f2ebbd6dd',
    'uuid' => 'e4b957c9-63dd-42c7-af05-43fb037c0005',
    'field_region_description' => array(
      'und' => array(
        0 => array(
          'value' => 'The Promo Sidebar Region should contain Call-to-Action content directing users to offerings and common goals.',
          'format' => 'filtered_html',
          'safe_value' => '<p>The Promo Sidebar Region should contain Call-to-Action content directing users to offerings and common goals.</p>
',
        ),
      ),
    ),
    'field_technical_information' => array(
      'und' => array(
        0 => array(
          'value' => 'n/a',
          'format' => 'filtered_html',
          'safe_value' => '<p>n/a</p>
',
        ),
      ),
    ),
    'field_content_examples' => array(
      'und' => array(
        0 => array(
          'value' => 'example',
          'format' => NULL,
          'safe_value' => 'example',
        ),
      ),
    ),
  );
  $beans[] = array(
    'label' => 'Footer First Region',
    'description' => NULL,
    'title' => 'Footer First',
    'type' => 'ia_theme_information',
    'data' => array(
      'view_mode' => 'default',
    ),
    'delta' => 'footer-first-region',
    'view_mode' => 'default',
    'created' => 1416589052,
    'log' => '',
    'uid' => 1,
    'default_revision' => 1,
    'revisions' => array(),
    'vuuid' => 'b868f275-018c-42a2-9610-4cfb91cc76fa',
    'uuid' => 'ec75e95e-19a2-4abd-a771-4b9706273386',
    'field_region_description' => array(
      'und' => array(
        0 => array(
          'value' => 'The footer first region will contain the footer navigation, usually consisting of legal/privacy/accessibility information, contact information, locations and directions, as well as a link to a sitemap.',
          'format' => 'filtered_html',
          'safe_value' => '<p>The footer first region will contain the footer navigation, usually consisting of legal/privacy/accessibility information, contact information, locations and directions, as well as a link to a sitemap.</p>
',
        ),
      ),
    ),
    'field_technical_information' => array(
      'und' => array(
        0 => array(
          'value' => 'The footer navigation will be created by a menu block.',
          'format' => 'filtered_html',
          'safe_value' => '<p>The footer navigation will be created by a menu block.</p>
',
        ),
      ),
    ),
    'field_content_examples' => array(
      'und' => array(
        0 => array(
          'value' => 'Footer Navigation',
          'format' => NULL,
          'safe_value' => 'Footer Navigation',
        ),
      ),
    ),
  );
  $beans[] = array(
    'label' => 'Above Content Region',
    'description' => NULL,
    'title' => 'Above Content',
    'type' => 'ia_theme_information',
    'data' => array(
      'view_mode' => 'default',
    ),
    'delta' => 'above-content-region',
    'view_mode' => 'default',
    'created' => 1416596409,
    'log' => '',
    'uid' => 1,
    'default_revision' => 1,
    'revisions' => array(),
    'vuuid' => '2a0723bc-456c-4da8-872b-9a7241c3c304',
    'uuid' => 'f5eb9906-b6d1-450e-96ba-afcd5466288f',
    'field_region_description' => array(
      'und' => array(
        0 => array(
          'value' => 'The above content region is used to insert boilerplate content or promos shown just above the content but within the same column width.',
          'format' => 'filtered_html',
          'safe_value' => '<p>The above content region is used to insert boilerplate content or promos shown just above the content but within the same column width.</p>
',
        ),
      ),
    ),
    'field_technical_information' => array(
      'und' => array(
        0 => array(
          'value' => 'n/a',
          'format' => 'filtered_html',
          'safe_value' => '<p>n/a</p>
',
        ),
      ),
    ),
    'field_content_examples' => array(
      'und' => array(
        0 => array(
          'value' => 'intro text',
          'format' => NULL,
          'safe_value' => 'intro text',
        ),
      ),
    ),
  );
  return $beans;
}
