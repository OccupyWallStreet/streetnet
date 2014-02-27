<?php

/**
 * Override or insert variables into the maintenance page template.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 */
// function streetnet_preprocess_maintenance_page(&$vars) {
  // When a variable is manipulated or added in preprocess_html or
  // preprocess_page, that same work is probably needed for the maintenance page
  // as well, so we can just re-use those functions to do that work here.
  // streetnet_preprocess_html($vars);
  // streetnet_preprocess_page($vars);
  // This preprocessor will also be used if the db is inactive. To ensure your
  // theme is used, add the following line to your settings.php file:
  // $conf['maintenance_theme'] = 'streetnet';
  // Also, check $vars['db_is_active'] before doing any db queries.
// }

/**
 * Implements hook_modernizr_load_alter().
 *
 * @return
 *   An array to be output as yepnope testObjects.
 */
/* -- Delete this line if you want to use this function
function streetnet_modernizr_load_alter(&$load) {

}

/**
 * Implements hook_preprocess_html()
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 */
/* -- Delete this line if you want to use this function
function streetnet_preprocess_html(&$vars) {

}

/**
 * Override or insert variables into the page template.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 */
/* -- Delete this line if you want to use this function
function streetnet_preprocess_page(&$vars) {

}

/**
 * Override or insert variables into the region templates.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 */
/* -- Delete this line if you want to use this function
function streetnet_preprocess_region(&$vars) {

}
// */

/**
 * Override or insert variables into the block templates.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 */
/* -- Delete this line if you want to use this function
function streetnet_preprocess_block(&$vars) {

}
// */

/**
 * Override or insert variables into the entity template.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 */
/* -- Delete this line if you want to use this function
function streetnet_preprocess_entity(&$vars) {

}
// */

/**
 * Override or insert variables into the node template.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 */
/* -- Delete this line if you want to use this function
function streetnet_preprocess_node(&$vars) {
  $node = $vars['node'];
}
// */

/**
 * Override or insert variables into the field template.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("field" in this case.)
 */
/* -- Delete this line if you want to use this function
function streetnet_preprocess_field(&$vars, $hook) {

}
// */

/**
 * Override or insert variables into the comment template.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 */
/* -- Delete this line if you want to use this function
function streetnet_preprocess_comment(&$vars) {
  $comment = $vars['comment'];
}
// */

/**
 * Override or insert variables into the views template.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 */
// function streetnet_preprocess_views_view(&$vars) {
//   $view = $vars['view'];
// }
// */


/**
 * Override or insert css on the site.
 *
 * @param $css
 *   An array of all CSS items being requested on the page.
 */
/* -- Delete this line if you want to use this function
// */

function streetnet_css_alter(&$css) {
  // Force CSS to be added with link tags, rather than @import. This prevents
  // crashing Chrome when using the inspector while livereload is enabled.
  if (theme_get_setting('aurora_livereload')) {
    foreach ($css as $key => $value) {
      $css[$key]['preprocess'] = FALSE;
    }
  }
}

/**
 * Override or insert javascript on the site.
 *
 * @param $js
 *   An array of all JavaScript being presented on the page.
 */
/* -- Delete this line if you want to use this function
function streetnet_js_alter(&$js) {

}
// */


/**
 * Mess with DS layouts right before they get sent to render
 *
 * @param $layout_render_array
 * @param $context
 * @param $vars
 */
// */ 
//function streetnet_ds_pre_render_alter(&$layout_render_array, $context, &$vars) {
  // dpm( $layout_render_array );
  // dpm( $context );
  // dpm( $vars );
//}

function streetnet_page_alter(&$vars) {
  $scripts = drupal_add_js();
  drupal_add_js('sites/all/themes/streetnet/js/mop.ui.js');
  drupal_add_js('sites/all/themes/streetnet/js/streetnet.js');
  //  add our civi newsletter form submission js
  //  drupal_add_js('sites/all/themes/occupy/js/ows_civi_form.js');
  drupal_add_js('sites/all/themes/occupy/bower_components/REM-unit-polyfill/js/rem.min.js');
}