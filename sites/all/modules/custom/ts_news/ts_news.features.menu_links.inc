<?php
/**
 * @file
 * ts_news.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ts_news_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_business-news:http://localhost/time-summary/?q=business
  $menu_links['main-menu_business-news:http://localhost/time-summary/?q=business'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://localhost/time-summary/?q=business',
    'router_path' => '',
    'link_title' => 'Business News',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_business-news:http://localhost/time-summary/?q=business',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_home:<front>
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_sports-news:http://localhost/time-summary/?q=sports-news
  $menu_links['main-menu_sports-news:http://localhost/time-summary/?q=sports-news'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://localhost/time-summary/?q=sports-news',
    'router_path' => '',
    'link_title' => 'Sports News',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_sports-news:http://localhost/time-summary/?q=sports-news',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_top-stories:http://localhost/time-summary/?q=top-stories
  $menu_links['main-menu_top-stories:http://localhost/time-summary/?q=top-stories'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://localhost/time-summary/?q=top-stories',
    'router_path' => '',
    'link_title' => 'Top stories',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_top-stories:http://localhost/time-summary/?q=top-stories',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: main-menu_trending-now:trending
  $menu_links['main-menu_trending-now:trending'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'trending',
    'router_path' => 'trending',
    'link_title' => 'Trending now',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_trending-now:trending',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_world-news:http://localhost/time-summary/?q=world-news
  $menu_links['main-menu_world-news:http://localhost/time-summary/?q=world-news'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://localhost/time-summary/?q=world-news',
    'router_path' => '',
    'link_title' => 'World news',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_world-news:http://localhost/time-summary/?q=world-news',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Business News');
  t('Home');
  t('Sports News');
  t('Top stories');
  t('Trending now');
  t('World news');


  return $menu_links;
}
