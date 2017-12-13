<?php
/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * - $title : The title of this group of rows.  May be empty.
 * - $options['type'] will either be ul or ol.
 * @ingroup views_templates
 */

  // Quick placeholder.
  $placeholder = !empty($view->args[0]) ? ' - ' . $view->args[0] : '';
?>
<div class="row title">
  <div class="col-md-12">
    <h1><?php print t('Nieuws!year', array('!year' => $placeholder)); ?></h1>
  </div>
</div>

<div class="row">
<?php foreach ($rows as $id => $row): ?>
  <div class="col-md-4 item">
    <?php print $row; ?>
  </div>

  <?php if (($id + 1) % 3 == 0): ?>
    </div><div class="row">
  <?php endif; ?>
<?php endforeach; ?>
</div>
