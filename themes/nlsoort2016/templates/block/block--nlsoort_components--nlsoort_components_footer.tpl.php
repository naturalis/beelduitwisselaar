<?php
/**
 * @file
 * This file contains the block template for the main menu.
 */
?>
<div id="<?php print $block_html_id; ?>" class="<?php print $classes; ?>" <?php print $attributes; ?>>
  <div class="footer">
    <?php print render($title_prefix); ?>
    <?php print render($title_suffix); ?>

    <?php if (!empty($content)): ?>
      <?php print render($content); ?>
    <?php endif; ?>
  </div>
</div>
