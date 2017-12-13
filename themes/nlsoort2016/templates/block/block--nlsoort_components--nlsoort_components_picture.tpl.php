<?php
/**
 * @file
 * This file contains the block template for the main menu.
 */
?>
  <div id="<?php print $block_html_id; ?>" class="determineSpeciesContainer">
    <div class="row">
      <div class="col-md-12">
        <div class="<?php print $classes; ?>" <?php print $attributes; ?>>
          <div class="determineSpeciesImage">
            <?php print $image; ?>
          </div>

          <div class="description">
            <?php print render($title_prefix); ?>
            <h1><?php print $block->subject; ?></h1>
            <?php print render($title_suffix); ?>
            <?php print $link; ?>
          </div>
        </div>
      </div>
    </div>
  </div>
