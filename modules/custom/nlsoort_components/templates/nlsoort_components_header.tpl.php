<?php
/**
 * @file
 * This file contains the template for the front page slider.
 */
?>
<!-- Slider overlay for author information -->
<div class="sliderOverlay">
  <div class="titles">
    <h1 class="main-display-name">
      <?php if (!empty($vernacular_name)): ?>
        <?php print strip_tags($vernacular_name); ?>
      <?php endif; ?>
      <?php if (!empty($scientific_name) && $scientific_name != "-"): ?>
        <span><i><?php print strip_tags($scientific_name); ?></i></span>
      <?php endif; ?>
    </h1>
    <div id="taxonImageCredits">
      <?php if (!empty($photographer)): ?>
        <?php print strip_tags($photographer); ?>
      <?php endif; ?>
    </div>
  </div>
</div>
<!-- End slider overlay -->

<?php if (!empty($images)): ?>
  <!-- Flex slider -->
  <div class="flexslider">
    <ul class="slides">
      <?php foreach ($images as $key => $image): ?>
        <li>
          <?php print $image; ?>
          <div class="imageGradient"></div>
        </li>
      <?php endforeach; ?>
    </ul>
  </div>
  <!-- End of flex slider -->
<?php endif; ?>
