<?php
/**
 * @file
 * beeldfeature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function beeldfeature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "boxes" && $api == "box") {
    return array("version" => "1");
  }
  if ($module == "captcha" && $api == "captcha") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function beeldfeature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function beeldfeature_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'beelduitwisselaar' => array(
      'name' => t('Image exchange'),
      'base' => 'node_content',
      'description' => t('Upload a new set of images'),
      'has_title' => '1',
      'title_label' => t('Title - Name photographer'),
      'help' => t('Images will be published under the terms specified on this site'),
    ),
    'mail' => array(
      'name' => t('Mail'),
      'base' => 'node_content',
      'description' => t('Mail template'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'webform' => array(
      'name' => t('Webform'),
      'base' => 'node_content',
      'description' => t('Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_default_search_api_index().
 */
function beeldfeature_default_search_api_index() {
  $items = array();
  $items['collectionindex'] = entity_import('search_api_index', '{
    "name" : "collectionindex",
    "machine_name" : "collectionindex",
    "description" : null,
    "server" : "localhost",
    "item_type" : "field_collection_item",
    "options" : {
      "index_directly" : 0,
      "cron_limit" : "500",
      "fields" : {
        "field_beeldevaluatie" : { "type" : "text" },
        "field_beeldexpert" : { "type" : "integer", "entity_type" : "user" },
        "field_beeldexpert:field_achternaam" : { "type" : "text" },
        "field_beeldexpert:field_contact" : { "type" : "text" },
        "field_beeldexpert:field_voornaam" : { "type" : "text" },
        "field_beeldexpert:name" : { "type" : "text" },
        "field_beeldexpert:uid" : { "type" : "integer" },
        "field_created" : { "type" : "date" },
        "field_datum" : { "type" : "date" },
        "field_fotograaf" : { "type" : "integer", "entity_type" : "user" },
        "field_fotograaf:field_achternaam" : { "type" : "text" },
        "field_fotograaf:field_contact" : { "type" : "text" },
        "field_fotograaf:field_email" : { "type" : "text" },
        "field_fotograaf:field_voornaam" : { "type" : "text" },
        "field_fotograaf:name" : { "type" : "text" },
        "field_fotograaf:uid" : { "type" : "integer" },
        "field_groep" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_groep:name" : { "type" : "text" },
        "field_locatie" : { "type" : "text" },
        "field_newimage:file" : { "type" : "integer", "entity_type" : "file" },
        "field_newimage:file:name" : { "type" : "text" },
        "field_opmerkingen" : { "type" : "text" },
        "field_soort_taxon" : { "type" : "text" },
        "field_status" : { "type" : "integer" },
        "field_textsoortenregister" : { "type" : "text" },
        "item_id" : { "type" : "integer" },
        "search_api_aggregation_1" : { "type" : "text" },
        "search_api_aggregation_2" : { "type" : "text" },
        "search_api_language" : { "type" : "string" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "search_api_alter_language_control" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "lang_field" : "", "languages" : [] }
        },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_aggregation" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : {
              "search_api_aggregation_1" : {
                "name" : "Fotograaf",
                "type" : "fulltext",
                "fields" : [ "field_fotograaf:field_achternaam", "field_fotograaf:field_voornaam" ],
                "description" : "A Fulltext aggregation of the following fields: Fotograaf \\u00bb Achternaam, Fotograaf \\u00bb Voornaam."
              },
              "search_api_aggregation_2" : {
                "name" : "Validator",
                "type" : "fulltext",
                "fields" : [
                  "field_beeldexpert:field_achternaam",
                  "field_beeldexpert:field_voornaam"
                ],
                "description" : "A Fulltext aggregation of the following fields: Validator \\u00bb Achternaam, Validator \\u00bb Voornaam."
              }
            }
          }
        },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : {
              "field_beeldevaluatie" : true,
              "field_locatie" : true,
              "field_opmerkingen" : true,
              "field_soort_taxon" : true,
              "field_textsoortenregister" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : {
              "field_beeldevaluatie" : true,
              "field_locatie" : true,
              "field_opmerkingen" : true,
              "field_soort_taxon" : true,
              "field_textsoortenregister" : true
            },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : {
              "field_beeldevaluatie" : true,
              "field_locatie" : true,
              "field_opmerkingen" : true,
              "field_soort_taxon" : true,
              "field_textsoortenregister" : true
            },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : {
              "field_beeldevaluatie" : true,
              "field_locatie" : true,
              "field_opmerkingen" : true,
              "field_soort_taxon" : true,
              "field_textsoortenregister" : true
            },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 0,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0"
  }');
  $items['localindex'] = entity_import('search_api_index', '{
    "name" : "localindex",
    "machine_name" : "localindex",
    "description" : null,
    "server" : "localhost",
    "item_type" : "node",
    "options" : {
      "index_directly" : 0,
      "cron_limit" : "-1",
      "fields" : {
        "created" : { "type" : "date" },
        "field_achternaam" : { "type" : "text" },
        "field_afbeeldingen:field_beeldevaluatie" : { "type" : "list\\u003Ctext\\u003E" },
        "field_afbeeldingen:field_beeldexpert" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "user" },
        "field_afbeeldingen:field_beeldexpert:field_achternaam" : { "type" : "list\\u003Ctext\\u003E" },
        "field_afbeeldingen:field_beeldexpert:field_contact" : { "type" : "list\\u003Ctext\\u003E" },
        "field_afbeeldingen:field_beeldexpert:field_voornaam" : { "type" : "list\\u003Ctext\\u003E" },
        "field_afbeeldingen:field_beeldexpert:name" : { "type" : "list\\u003Ctext\\u003E" },
        "field_afbeeldingen:field_fotograaf" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "user" },
        "field_afbeeldingen:field_fotograaf:field_achternaam" : { "type" : "list\\u003Ctext\\u003E" },
        "field_afbeeldingen:field_fotograaf:field_contact" : { "type" : "list\\u003Ctext\\u003E" },
        "field_afbeeldingen:field_fotograaf:field_voornaam" : { "type" : "list\\u003Ctext\\u003E" },
        "field_afbeeldingen:field_fotograaf:name" : { "type" : "list\\u003Ctext\\u003E" },
        "field_afbeeldingen:field_groep" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_afbeeldingen:field_license" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_afbeeldingen:field_locatie" : { "type" : "list\\u003Ctext\\u003E" },
        "field_afbeeldingen:field_nlsr" : { "type" : "list\\u003Ctext\\u003E" },
        "field_afbeeldingen:field_opmerkingen" : { "type" : "list\\u003Ctext\\u003E" },
        "field_afbeeldingen:field_opnameland" : { "type" : "list\\u003Ctext\\u003E" },
        "field_afbeeldingen:field_soort_taxon" : { "type" : "list\\u003Ctext\\u003E" },
        "field_afbeeldingen:field_status" : { "type" : "list\\u003Cinteger\\u003E" },
        "field_afbeeldingen:field_textsoortenregister" : { "type" : "list\\u003Ctext\\u003E" },
        "field_contact" : { "type" : "text" },
        "field_email" : { "type" : "text" },
        "field_tags" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "search_api_language" : { "type" : "string" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_language_control" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "lang_field" : "", "languages" : [] }
        },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : {
              "field_achternaam" : true,
              "field_contact" : true,
              "field_email" : true,
              "field_afbeeldingen:field_beeldevaluatie" : true,
              "field_afbeeldingen:field_locatie" : true,
              "field_afbeeldingen:field_nlsr" : true,
              "field_afbeeldingen:field_opmerkingen" : true,
              "field_afbeeldingen:field_opnameland" : true,
              "field_afbeeldingen:field_soort_taxon" : true,
              "field_afbeeldingen:field_textsoortenregister" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : {
              "field_achternaam" : true,
              "field_contact" : true,
              "field_email" : true,
              "field_afbeeldingen:field_beeldevaluatie" : true,
              "field_afbeeldingen:field_locatie" : true,
              "field_afbeeldingen:field_nlsr" : true,
              "field_afbeeldingen:field_opmerkingen" : true,
              "field_afbeeldingen:field_opnameland" : true,
              "field_afbeeldingen:field_soort_taxon" : true,
              "field_afbeeldingen:field_textsoortenregister" : true
            },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : {
              "field_achternaam" : true,
              "field_contact" : true,
              "field_email" : true,
              "field_afbeeldingen:field_beeldevaluatie" : true,
              "field_afbeeldingen:field_locatie" : true,
              "field_afbeeldingen:field_nlsr" : true,
              "field_afbeeldingen:field_opmerkingen" : true,
              "field_afbeeldingen:field_opnameland" : true,
              "field_afbeeldingen:field_soort_taxon" : true,
              "field_afbeeldingen:field_textsoortenregister" : true
            },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : {
              "field_achternaam" : true,
              "field_contact" : true,
              "field_email" : true,
              "field_afbeeldingen:field_beeldevaluatie" : true,
              "field_afbeeldingen:field_locatie" : true,
              "field_afbeeldingen:field_nlsr" : true,
              "field_afbeeldingen:field_opmerkingen" : true,
              "field_afbeeldingen:field_opnameland" : true,
              "field_afbeeldingen:field_soort_taxon" : true,
              "field_afbeeldingen:field_textsoortenregister" : true
            },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 0,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0"
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function beeldfeature_default_search_api_server() {
  $items = array();
  $items['localhost'] = entity_import('search_api_server', '{
    "name" : "localhost",
    "machine_name" : "localhost",
    "description" : "",
    "class" : "search_api_db_service",
    "options" : {
      "database" : "default:default",
      "min_chars" : "3",
      "partial_matches" : 1,
      "indexes" : {
        "localindex" : {
          "field_tags" : {
            "table" : "search_api_db_localindex_field_tags",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_achternaam" : {
            "table" : "search_api_db_localindex_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_contact" : {
            "table" : "search_api_db_localindex_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_email" : {
            "table" : "search_api_db_localindex_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_localindex",
            "column" : "search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_afbeeldingen:field_beeldevaluatie" : {
            "table" : "search_api_db_localindex_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          },
          "field_afbeeldingen:field_locatie" : {
            "table" : "search_api_db_localindex_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          },
          "field_afbeeldingen:field_nlsr" : {
            "table" : "search_api_db_localindex_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          },
          "field_afbeeldingen:field_opmerkingen" : {
            "table" : "search_api_db_localindex_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          },
          "field_afbeeldingen:field_opnameland" : {
            "table" : "search_api_db_localindex_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          },
          "field_afbeeldingen:field_soort_taxon" : {
            "table" : "search_api_db_localindex_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          },
          "field_afbeeldingen:field_status" : {
            "table" : "search_api_db_localindex_field_afbeeldingen_field_status",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_afbeeldingen:field_textsoortenregister" : {
            "table" : "search_api_db_localindex_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          },
          "field_afbeeldingen:field_beeldexpert" : {
            "table" : "search_api_db_localindex_field_afbeeldingen_field_beeldexpert",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_afbeeldingen:field_license" : {
            "table" : "search_api_db_localindex_field_afbeeldingen_field_license",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_afbeeldingen:field_fotograaf" : {
            "table" : "search_api_db_localindex_field_afbeeldingen_field_fotograaf",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_afbeeldingen:field_beeldexpert:name" : {
            "table" : "search_api_db_localindex_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          },
          "field_afbeeldingen:field_beeldexpert:field_achternaam" : {
            "table" : "search_api_db_localindex_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          },
          "field_afbeeldingen:field_beeldexpert:field_contact" : {
            "table" : "search_api_db_localindex_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          },
          "field_afbeeldingen:field_beeldexpert:field_voornaam" : {
            "table" : "search_api_db_localindex_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          },
          "field_afbeeldingen:field_groep" : {
            "table" : "search_api_db_localindex_field_afbeeldingen_field_groep",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_afbeeldingen:field_fotograaf:name" : {
            "table" : "search_api_db_localindex_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          },
          "field_afbeeldingen:field_fotograaf:field_achternaam" : {
            "table" : "search_api_db_localindex_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          },
          "field_afbeeldingen:field_fotograaf:field_contact" : {
            "table" : "search_api_db_localindex_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          },
          "field_afbeeldingen:field_fotograaf:field_voornaam" : {
            "table" : "search_api_db_localindex_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          },
          "created" : {
            "table" : "search_api_db_localindex",
            "column" : "created",
            "type" : "date",
            "boost" : "1.0"
          }
        },
        "collectionindex" : {
          "field_beeldevaluatie" : {
            "table" : "search_api_db_collectionindex_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_beeldexpert" : {
            "table" : "search_api_db_collectionindex",
            "column" : "field_beeldexpert",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_locatie" : {
            "table" : "search_api_db_collectionindex_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_opmerkingen" : {
            "table" : "search_api_db_collectionindex_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_soort_taxon" : {
            "table" : "search_api_db_collectionindex_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_groep" : {
            "table" : "search_api_db_collectionindex",
            "column" : "field_groep",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_textsoortenregister" : {
            "table" : "search_api_db_collectionindex_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_fotograaf" : {
            "table" : "search_api_db_collectionindex",
            "column" : "field_fotograaf",
            "type" : "integer",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_collectionindex",
            "column" : "search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_beeldexpert:field_achternaam" : {
            "table" : "search_api_db_collectionindex_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_beeldexpert:field_contact" : {
            "table" : "search_api_db_collectionindex_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_beeldexpert:field_voornaam" : {
            "table" : "search_api_db_collectionindex_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_fotograaf:field_achternaam" : {
            "table" : "search_api_db_collectionindex_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_fotograaf:field_email" : {
            "table" : "search_api_db_collectionindex_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_fotograaf:field_voornaam" : {
            "table" : "search_api_db_collectionindex_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "item_id" : {
            "table" : "search_api_db_collectionindex",
            "column" : "item_id_1",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_beeldexpert:uid" : {
            "table" : "search_api_db_collectionindex",
            "column" : "field_beeldexpert_uid",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_beeldexpert:name" : {
            "table" : "search_api_db_collectionindex_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_fotograaf:uid" : {
            "table" : "search_api_db_collectionindex",
            "column" : "field_fotograaf_uid",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_fotograaf:name" : {
            "table" : "search_api_db_collectionindex_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "search_api_aggregation_1" : {
            "table" : "search_api_db_collectionindex_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "search_api_aggregation_2" : {
            "table" : "search_api_db_collectionindex_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_newimage:file" : {
            "table" : "search_api_db_collectionindex",
            "column" : "field_newimage_file",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_newimage:file:name" : {
            "table" : "search_api_db_collectionindex_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_fotograaf:field_contact" : {
            "table" : "search_api_db_collectionindex_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_datum" : {
            "table" : "search_api_db_collectionindex",
            "column" : "field_datum",
            "type" : "date",
            "boost" : "1.0"
          },
          "field_created" : {
            "table" : "search_api_db_collectionindex",
            "column" : "field_created",
            "type" : "date",
            "boost" : "1.0"
          },
          "field_status" : {
            "table" : "search_api_db_collectionindex",
            "column" : "field_status",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_groep:name" : {
            "table" : "search_api_db_collectionindex_text",
            "type" : "text",
            "boost" : "1.0"
          }
        }
      }
    },
    "enabled" : "1"
  }');
  return $items;
}
