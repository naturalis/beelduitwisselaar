<?php
/**
 * @file
 * This file contains the block template for the main menu.
 */
?>
<div id="<?php print $block_html_id; ?>" class="<?php print $classes; ?>" <?php print $attributes; ?>>
  <a href="#" class="menuToggle">
  	<img src="<?php print $path_to_assets; ?>/img/menutoggle.png" alt="">
	<span class="mobileTitle"><?php print variable_get('site_name', 'Nederlands Soortenregister'); ?></span>
  </a>
  <?php print render($title_prefix); ?>
  <?php if ($block->subject): ?>
    <h2<?php print $title_attributes; ?>><?php print $block->subject ?></h2>
  <?php endif; ?>
  <?php print render($title_suffix); ?>
  <?php print $content; ?>
</div>
