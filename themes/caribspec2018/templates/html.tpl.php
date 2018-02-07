<!DOCTYPE html>
<html>
<head>
  <?php print $head; ?>
  <title><?php print $head_title; ?></title>
  <meta name="viewport" content="width=device-width, initial-scale=1">

  <!-- Render scripts -->
  <?php if (!empty($scripts)): ?>
    <?php print $scripts; ?>
  <?php endif; ?>

  <!-- Render Css -->
  <?php if (!empty($styles)): ?>
    <?php print $styles; ?>
  <?php endif; ?>
</head>
<body class="<?php print $classes; ?>" <?php print $attributes;?> itemscope itemtype="http://schema.org/WebPage">
<?php print $page_top; ?>
<?php print $page; ?>
<?php print $page_bottom; ?>
</body>
</html>
