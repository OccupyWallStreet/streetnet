<?php
/**
 * @file
 * occupy_contexts.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function occupy_contexts_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'category_listing_page';
  $context->description = '';
  $context->tag = 'category listing';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'story-category/*' => 'story-category/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-category_block-block' => array(
          'module' => 'views',
          'delta' => 'category_block-block',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('category listing');
  $export['category_listing_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'contact_page';
  $context->description = 'Context for the Contact Page';
  $context->tag = 'Contact Page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'contact' => 'contact',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-ows_locations_map-block' => array(
          'module' => 'views',
          'delta' => 'ows_locations_map-block',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-ows_locations_map-block_1' => array(
          'module' => 'views',
          'delta' => 'ows_locations_map-block_1',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'boxes-how_to_find_us' => array(
          'module' => 'boxes',
          'delta' => 'how_to_find_us',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'boxes-contact_phone_number' => array(
          'module' => 'boxes',
          'delta' => 'contact_phone_number',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'block-25' => array(
          'module' => 'block',
          'delta' => 25,
          'region' => 'postscript_first',
          'weight' => '-10',
        ),
        'block-22' => array(
          'module' => 'block',
          'delta' => 22,
          'region' => 'postscript_second',
          'weight' => '-10',
        ),
        'block-23' => array(
          'module' => 'block',
          'delta' => 23,
          'region' => 'postscript_third',
          'weight' => '-10',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'contact',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Contact Page');
  t('Context for the Contact Page');
  $export['contact_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'contribute';
  $context->description = 'Context for contribute page layout';
  $context->tag = 'Contribute Page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'contribute' => 'contribute',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-24' => array(
          'module' => 'block',
          'delta' => 24,
          'region' => 'preface_first',
          'weight' => '-10',
        ),
        'block-14' => array(
          'module' => 'block',
          'delta' => 14,
          'region' => 'preface_second',
          'weight' => '-10',
        ),
        'views-ows_events-block' => array(
          'module' => 'views',
          'delta' => 'ows_events-block',
          'region' => 'preface_third',
          'weight' => '-10',
        ),
        'webform-client-block-30' => array(
          'module' => 'webform',
          'delta' => 'client-block-30',
          'region' => 'preface_fourth',
          'weight' => '-10',
        ),
        'block-16' => array(
          'module' => 'block',
          'delta' => 16,
          'region' => 'preface_fifth',
          'weight' => '-10',
        ),
        'block-17' => array(
          'module' => 'block',
          'delta' => 17,
          'region' => 'preface_sixth',
          'weight' => '-10',
        ),
        'block-18' => array(
          'module' => 'block',
          'delta' => 18,
          'region' => 'preface_seventh',
          'weight' => '-10',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'contribute',
    ),
    'theme_html' => array(
      'class' => 'layout-contribute-page-delta',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context for contribute page layout');
  t('Contribute Page');
  $export['contribute'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'front';
  $context->description = 'Front Page Layout';
  $context->tag = 'Front Page Layout';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-ows_stories-stories_page' => array(
          'module' => 'views',
          'delta' => '-exp-ows_stories-stories_page',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-ows_stories-block_2' => array(
          'module' => 'views',
          'delta' => 'ows_stories-block_2',
          'region' => 'content',
          'weight' => '-9',
        ),
        'block-11' => array(
          'module' => 'block',
          'delta' => '11',
          'region' => 'user_second',
          'weight' => '-10',
        ),
        'quicktabs-featured' => array(
          'module' => 'quicktabs',
          'delta' => 'featured',
          'region' => 'preface_first',
          'weight' => '-10',
        ),
        'quicktabs-feeds' => array(
          'module' => 'quicktabs',
          'delta' => 'feeds',
          'region' => 'preface_second',
          'weight' => '-10',
        ),
        'block-13' => array(
          'module' => 'block',
          'delta' => '13',
          'region' => 'preface_third',
          'weight' => '-10',
        ),
        'node-syndicate' => array(
          'module' => 'node',
          'delta' => 'syndicate',
          'region' => 'preface_fourth',
          'weight' => '-10',
        ),
        'block-10' => array(
          'module' => 'block',
          'delta' => '10',
          'region' => 'postscript_first',
          'weight' => '-10',
        ),
        'views-ows_news-block' => array(
          'module' => 'views',
          'delta' => 'ows_news-block',
          'region' => 'postscript_third',
          'weight' => '-10',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'front',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Front Page Layout');
  $export['front'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'learn_page';
  $context->description = 'Context for applying Learn Page Delta';
  $context->tag = 'Learn Page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'learn' => 'learn',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'quicktabs-learn' => array(
          'module' => 'quicktabs',
          'delta' => 'learn',
          'region' => 'content',
          'weight' => '-10',
        ),
        'block-26' => array(
          'module' => 'block',
          'delta' => '26',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'block-28' => array(
          'module' => 'block',
          'delta' => '28',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'block-29' => array(
          'module' => 'block',
          'delta' => '29',
          'region' => 'preface_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context for applying Learn Page Delta');
  t('Learn Page');
  $export['learn_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'read';
  $context->description = 'Stories page context';
  $context->tag = 'Stories';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'read' => 'read',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-ows_stories-stories_page' => array(
          'module' => 'views',
          'delta' => '-exp-ows_stories-stories_page',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
    'region' => array(
      'occupy' => array(
        'disable' => array(
          'sidebar_second' => 'sidebar_second',
          'page_top' => 0,
          'page_bottom' => 0,
          'content' => 0,
          'user_first' => 0,
          'user_second' => 0,
          'branding' => 0,
          'branding_two' => 0,
          'branding_three' => 0,
          'branding_four' => 0,
          'menu' => 0,
          'header_first' => 0,
          'header_second' => 0,
          'preface_first' => 0,
          'preface_second' => 0,
          'preface_third' => 0,
          'preface_fourth' => 0,
          'preface_fifth' => 0,
          'preface_sixth' => 0,
          'preface_seventh' => 0,
          'postscript_first' => 0,
          'postscript_second' => 0,
          'postscript_third' => 0,
          'postscript_fourth' => 0,
          'footer_first' => 0,
          'footer_second' => 0,
          'footer_third' => 0,
          'footer_fourth' => 0,
          'footer_fifth' => 0,
          'footer_sixth' => 0,
          'footer_seventh' => 0,
          'footer_eighth' => 0,
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'dashboard_inactive' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Stories');
  t('Stories page context');
  $export['read'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide';
  $context->description = 'Sitewide context';
  $context->tag = 'Sitewide Context';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'delta_blocks-site-name' => array(
          'module' => 'delta_blocks',
          'delta' => 'site-name',
          'region' => 'branding',
          'weight' => '-10',
        ),
        'delta_blocks-site-slogan' => array(
          'module' => 'delta_blocks',
          'delta' => 'site-slogan',
          'region' => 'branding',
          'weight' => '-9',
        ),
        'system-main-menu' => array(
          'module' => 'system',
          'delta' => 'main-menu',
          'region' => 'menu',
          'weight' => '-10',
        ),
        'block-2' => array(
          'module' => 'block',
          'delta' => '2',
          'region' => 'header_first',
          'weight' => '-10',
        ),
        'block-15' => array(
          'module' => 'block',
          'delta' => '15',
          'region' => 'header_second',
          'weight' => '-10',
        ),
        'block-12' => array(
          'module' => 'block',
          'delta' => '12',
          'region' => 'header_second',
          'weight' => '-9',
        ),
        'views-ows_announcements-block' => array(
          'module' => 'views',
          'delta' => 'ows_announcements-block',
          'region' => 'header_second',
          'weight' => '-8',
        ),
        'block-6' => array(
          'module' => 'block',
          'delta' => '6',
          'region' => 'footer_first',
          'weight' => '-10',
        ),
        'block-7' => array(
          'module' => 'block',
          'delta' => '7',
          'region' => 'footer_second',
          'weight' => '-10',
        ),
        'block-8' => array(
          'module' => 'block',
          'delta' => '8',
          'region' => 'footer_third',
          'weight' => '-10',
        ),
        'block-9' => array(
          'module' => 'block',
          'delta' => '9',
          'region' => 'footer_fourth',
          'weight' => '-10',
        ),
        'block-5' => array(
          'module' => 'block',
          'delta' => '5',
          'region' => 'footer_sixth',
          'weight' => '-10',
        ),
        'block-3' => array(
          'module' => 'block',
          'delta' => '3',
          'region' => 'footer_eighth',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Sitewide Context');
  t('Sitewide context');
  $export['sitewide'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'taxonomy_listing_page';
  $context->description = 'Page for taxonomy terms.';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'tags/*' => 'tags/*',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Page for taxonomy terms.');
  $export['taxonomy_listing_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'weekly_roundup';
  $context->description = 'Context for Weekly Round-up Category';
  $context->tag = 'category';
  $context->conditions = array(
    'node_taxonomy' => array(
      'values' => array(
        388 => 388,
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'theme_html' => array(
      'class' => 'weekly-roundup',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context for Weekly Round-up Category');
  t('category');
  $export['weekly_roundup'] = $context;

  return $export;
}
