<?php
require "vendor/autoload.php";
use PHPHtmlParser\Dom;

define(NLSOORT_URL, 'http://www.nederlandsesoorten.nl/content/footer-only-lng');
define(BLOCK_MENU_ID, 10);
define(BLOCK_FOOTER_ID, 11);

/**
 * Implements hook_drush_command().
 */
function drush_nlsoort_blocksync_drush_command()
{

    $commands['nlsoort_blocksync'] = array(
        'description' => 'This script retrieves the nlsoort footer and menu blocks and updates the corresponding blocks in this site',
        'aliases' => array('nl-blocksync'),
        'arguments' => array(
            'menu_block_id' => 'identifier of menu block',
            'footer_block_id' => 'identifier of footer block',
        ),
        'options' => array(
            'url' => 'Override the default url which is "' . NLSOORT_URL . '""',
        ),
        'examples' => array(
            'drush nl-blocksync' => 'Sync the footer and menu blocks using the defaults',
            'drush nl-blocksync 10 11' => 'Use a different identifier for the menu and footer blocks.',
            'drush nl-blocksync --url=' . NLSOORT_URL => 'Override the url for retrieving the menu and footer elements.',
        ),
    );

    return $commands;
}

/**
 * Drush command logic.
 * drush_[COMMAND_NAME]().
 */
function drush_drush_nlsoort_blocksync_nlsoort_blocksync($menu_block_id = BLOCK_MENU_ID, $footer_block_id = BLOCK_FOOTER_ID)
{

    $defaultUrl = NLSOORT_URL;
    $url = drush_get_option('url', $defaultUrl);

    $dom = new Dom;
    $dom->loadFromUrl($url, []);

    $menu = $dom->find('div.menu-search');
    if ($menu->count() > 0) {
        drush_update_block_contents($menu_block_id, $menu->innerHtml);
    } else {
        watchdog('nlsoort_blocksync', 'No menu found on %url.', array('%url' => $url), WATCHDOG_ERROR);

        return drush_set_error(dt("No menu found on @url" , array('@url' => $url)));
    }

    $footer = $dom->find('div.footer');
    if ($footer->count() > 0) {
        drush_update_block_contents($footer_block_id, $footer->innerHtml);
    } else {
        watchdog('nlsoort_blocksync', 'No footer found on %url.', array('%url' => $url), WATCHDOG_ERROR);

        return drush_set_error(dt("No footer found on  @url" , array('@url' => $url)));
    }
}

function drush_update_block_contents($bid, $html) {
    try {
        $result = db_query('SELECT * FROM {block_custom} WHERE bid = :bid', array(':bid' => $bid));

        $block = $result->fetchAssoc();
        if (!$block) {
            watchdog('nlsoort_blocksync', 'Block %bid does not exist.', array('%bid' => $bid), WATCHDOG_ERROR);
            return drush_set_error(dt("Block @bid does not exist" , array('@bid' => $bid)));
        }
        $block['body'] = $html;

        $updateqry = db_update('block_custom')
            ->fields($block)
            ->condition('bid', $bid);
        $updateqry->execute();

        watchdog('nlsoort_blocksync', 'Block @info updated.', array('@info' => $block['info']), WATCHDOG_INFO);
        drush_print(dt("Block @info updated" , array('@info' => $block['info'])));
    } catch (Exception $e) {
        watchdog('nlsoort_blocksync', 'Block %bid does not exist.', array('%bid' => $bid), WATCHDOG_ERROR);

        return drush_set_error(dt("Block @bid does not exist" , array('@bid' => $bid)));
    }
}

