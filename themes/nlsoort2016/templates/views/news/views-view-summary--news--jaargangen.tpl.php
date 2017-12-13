<?php
/**
 * @file
 * Default simple view template to display a group of summary lines.
 *
 * This wraps items in a span if set to inline, or a div if not.
 *
 * @ingroup views_templates
 */
?>
<h2><?php print t('Nieuwsarchief'); ?></h2>

<ul class="sideMenu">
  <?php foreach ($rows as $id => $row): ?>
    <li>
      <a href="<?php print $row->url; ?>"<?php print !empty($row_classes[$id]) ? ' class="'. $row_classes[$id] .'"' : ''; ?>>
        <?php print $row->link; ?>
        <?php if (!empty($options['count'])): ?>
          (<?php print $row->count?>)
        <?php endif; ?>
      </a>
    </li>
  <?php endforeach; ?>
</ul>
