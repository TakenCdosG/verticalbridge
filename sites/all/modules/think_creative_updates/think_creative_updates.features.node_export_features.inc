<?php
/**
 * @file
 * think_creative_updates.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function think_creative_updates_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><strong>Tower Owners</strong></p>\\r\\n\\r\\n<p>If you own towers and are interested in maximizing your value, click <a href=\\"property-owners/tower-owners\\"><strong>here</strong></a>.</p>\\r\\n\\r\\n<p><strong>Building Owners</strong></p>\\r\\n\\r\\n<p>If you own real estate and are a VB client or interested in the Vertical Bridge program, click <a href=\\"property-owners/building-owners\\"><strong>here</strong></a>.</p>\\r\\n\\r\\n<p><strong>Land Owners</strong></p>\\r\\n\\r\\n<p>If you are a landlord with an Vertical Bridge ground lease, click <a href=\\"property-owners/land-owners\\"><strong>here</strong></a>.</p>\\r\\n\\r\\n<p><strong>Billboard Owners</strong></p>\\r\\n\\r\\n<p>If you own billboards and are interested in maximizing your value, click <a href=\\"property-owners/billboard-owners/\\"><strong>here</strong></a>.</p>",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p><strong>Tower Owners</strong></p>\\n<p>If you own towers and are interested in maximizing your value, click <a href=\\"property-owners/tower-owners\\"><strong>here</strong></a>.</p>\\n<p><strong>Building Owners</strong></p>\\n<p>If you own real estate and are a VB client or interested in the Vertical Bridge program, click <a href=\\"property-owners/building-owners\\"><strong>here</strong></a>.</p>\\n<p><strong>Land Owners</strong></p>\\n<p>If you are a landlord with an Vertical Bridge ground lease, click <a href=\\"property-owners/land-owners\\"><strong>here</strong></a>.</p>\\n<p><strong>Billboard Owners</strong></p>\\n<p>If you own billboards and are interested in maximizing your value, click <a href=\\"property-owners/billboard-owners/\\"><strong>here</strong></a>.</p>\\n ",
            \'safe_summary\' => \'  \',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'field_cta_button\' => array(),
      \'field_cta_content\' => array(),
      \'field_internal_header\' => array(),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'metatags\' => array(
        \'und\' => array(
          \'title\' => array(
            \'value\' => \'Property Owners - Cell Tower Lease | Vertical Bridge\',
          ),
          \'description\' => array(
            \'value\' => \'If you own cell towers, real estate, or land and are interested in maixmizing the value of your properties, contact the Vertical Bridge program to find out more about wireless and telecom lease solutions.\',
          ),
        ),
      ),
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(
        array(
          \'pnid\' => NULL,
          \'menu_name\' => \'navigation\',
          \'mlid\' => \'639\',
          \'plid\' => \'0\',
          \'link_path\' => \'node/6\',
          \'router_path\' => \'node/%\',
          \'link_title\' => \'Property Owners\',
          \'options\' => array(
            \'attributes\' => array(
              \'title\' => \'\',
            ),
          ),
          \'module\' => \'nodehierarchy\',
          \'hidden\' => \'1\',
          \'external\' => \'0\',
          \'has_children\' => \'0\',
          \'expanded\' => \'0\',
          \'weight\' => \'2\',
          \'depth\' => \'1\',
          \'customized\' => \'0\',
          \'p1\' => \'639\',
          \'p2\' => \'0\',
          \'p3\' => \'0\',
          \'p4\' => \'0\',
          \'p5\' => \'0\',
          \'p6\' => \'0\',
          \'p7\' => \'0\',
          \'p8\' => \'0\',
          \'p9\' => \'0\',
          \'updated\' => \'0\',
          \'language\' => \'und\',
          \'i18n_tsid\' => \'0\',
          \'enabled\' => FALSE,
          \'nid\' => \'6\',
        ),
      ),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Property Owners\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'page\',
      \'uid\' => \'227\',
      \'uuid\' => \'02b177fd-6991-4737-b19a-d2cc65098db7\',
      \'vid\' => NULL,
      \'vuuid\' => \'d7d66dea-eb81-49cc-b07e-af6102f55a2b\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<h1><span style=\\"color: rgb(255, 255, 255);\\">Meaningful Connections, New Opportunities</span></h1>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <h1><span style=\\"color: rgb(255, 255, 255);\\">Meaningful Connections, New Opportunities</span></h1>\\n ",
            \'safe_summary\' => \'  \',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'field_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'205\',
            \'uid\' => \'227\',
            \'filename\' => \'Vertical-Bridge_Home1.jpg\',
            \'uri\' => \'public://home-slides/Vertical-Bridge_Home1.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'164901\',
            \'status\' => \'1\',
            \'timestamp\' => \'1462973219\',
            \'type\' => \'image\',
            \'uuid\' => \'a1fd1210-6572-4771-8a7e-70f60da6a8a6\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'1024\',
              \'height\' => \'347\',
            ),
            \'alt\' => NULL,
            \'title\' => NULL,
            \'width\' => \'1024\',
            \'height\' => \'347\',
          ),
        ),
      ),
      \'field_internal_header\' => array(),
      \'field_order\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'0\',
      \'sticky\' => \'0\',
      \'title\' => \'Slide New 2\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'home_slide\',
      \'uid\' => \'227\',
      \'uuid\' => \'04cd03c6-c7d7-4982-be79-1343e67152b2\',
      \'vid\' => NULL,
      \'vuuid\' => \'03b9518b-17e9-4f71-96e2-269957d810d1\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Vertical Bridge has the unique ability to deliver Rooftops-to-Suit. What does this mean? Rooftop-to-Suit is a program whereby we acquire rooftop sites for specific carriers based on their search rings.</p>\\r\\n\\r\\n<p>How does this work?</p>\\r\\n\\r\\n<ul>\\r\\n\\t<li>The carrier pays no site acquisition fee</li>\\r\\n\\t<li>Wireless carriers identify search areas where towers do not exist and are unlikely to be zoned</li>\\r\\n\\t<li>VB rapidly identifies targeted rooftops for antenna site deployments</li>\\r\\n\\t<li>Carrier approves targeted sites for leasing</li>\\r\\n\\t<li>VB leases those sites to carriers under VB\'s existing agreement with each carrier</li>\\r\\n</ul>\\r\\n\\r\\n<p>&nbsp;</p>\\r\\n\\r\\n<p>Why is this important to carriers?</p>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Time-To-Market: VB has a proven history and ability to deliver rooftops fast</li>\\r\\n\\t<li>Cost Effective: Carriers do not pay site acquisition fees - a significant savings</li>\\r\\n\\t<li>Flexible: Leverage VB\'s vast knowledge of real estate markets and relationships with building owners.</li>\\r\\n</ul>\\r\\n\\r\\n<p>If you are interested, please click <a href=\\"mailto:rpaige@verticalbridge.com?subject=Vertical%20Bridge%20Web%20Site%20Inquiry%20-%20Rooftops-to-Suit\\"><strong>here</strong></a>.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p>Vertical Bridge has the unique ability to deliver Rooftops-to-Suit. What does this mean? Rooftop-to-Suit is a program whereby we acquire rooftop sites for specific carriers based on their search rings.</p>\\n<p>How does this work?</p>\\n<ul><li>The carrier pays no site acquisition fee</li>\\n<li>Wireless carriers identify search areas where towers do not exist and are unlikely to be zoned</li>\\n<li>VB rapidly identifies targeted rooftops for antenna site deployments</li>\\n<li>Carrier approves targeted sites for leasing</li>\\n<li>VB leases those sites to carriers under VB\'s existing agreement with each carrier</li>\\n</ul><p> </p>\\n<p>Why is this important to carriers?</p>\\n<ul><li>Time-To-Market: VB has a proven history and ability to deliver rooftops fast</li>\\n<li>Cost Effective: Carriers do not pay site acquisition fees - a significant savings</li>\\n<li>Flexible: Leverage VB\'s vast knowledge of real estate markets and relationships with building owners.</li>\\n</ul><p>If you are interested, please click <a href=\\"mailto:rpaige@verticalbridge.com?subject=Vertical%20Bridge%20Web%20Site%20Inquiry%20-%20Rooftops-to-Suit\\"><strong>here</strong></a>.</p>\\n ",
            \'safe_summary\' => \'  \',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'field_cta_button\' => array(),
      \'field_cta_content\' => array(),
      \'field_internal_header\' => array(),
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'metatags\' => array(
        \'en\' => array(
          \'title\' => array(
            \'value\' => \'Rooftops to Suit - Wireless Telecom Site Leasing | Vertical Bridge\',
          ),
          \'description\' => array(
            \'value\' => \'Vertical Bridge has the unique ability to deliver Rooftops-to-Suit. What does this mean? Rooftop-to-Suit is a program whereby we acquire rooftop sites for specific carriers based on their search rings.\',
          ),
        ),
      ),
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(
        array(
          \'pnid\' => \'5\',
          \'menu_name\' => \'navigation\',
          \'mlid\' => \'638\',
          \'plid\' => \'635\',
          \'link_path\' => \'node/29\',
          \'router_path\' => \'node/%\',
          \'link_title\' => \'Rooftops-to-Suit\',
          \'options\' => array(
            \'attributes\' => array(
              \'title\' => \'\',
            ),
          ),
          \'module\' => \'nodehierarchy\',
          \'hidden\' => \'1\',
          \'external\' => \'0\',
          \'has_children\' => \'0\',
          \'expanded\' => \'0\',
          \'weight\' => \'2\',
          \'depth\' => \'2\',
          \'customized\' => \'0\',
          \'p1\' => \'635\',
          \'p2\' => \'638\',
          \'p3\' => \'0\',
          \'p4\' => \'0\',
          \'p5\' => \'0\',
          \'p6\' => \'0\',
          \'p7\' => \'0\',
          \'p8\' => \'0\',
          \'p9\' => \'0\',
          \'updated\' => \'0\',
          \'language\' => \'und\',
          \'i18n_tsid\' => \'0\',
          \'enabled\' => FALSE,
          \'nid\' => \'29\',
        ),
      ),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Rooftops-to-Suit\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'page\',
      \'uid\' => \'227\',
      \'uuid\' => \'0d6d2405-d244-4314-ae46-53ce16dc7955\',
      \'vid\' => NULL,
      \'vuuid\' => \'64c3c2ff-01fd-42ce-9bbe-99d80e8433cd\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Hilton Anatole</p>\\r\\n",
            \'summary\' => "<p>Hilton Anatole</p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => " <p>Hilton Anatole</p>\\n ",
            \'safe_summary\' => " <p>Hilton Anatole</p>\\n ",
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'field_event_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'May 23-26, 2016\',
            \'format\' => NULL,
            \'safe_value\' => \'May 23-26, 2016\',
          ),
        ),
      ),
      \'field_event_location\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Dallas, TX\',
            \'format\' => NULL,
            \'safe_value\' => \'Dallas, TX\',
          ),
        ),
      ),
      \'field_internal_header\' => array(),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'PCIA\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'events\',
      \'uid\' => \'227\',
      \'uuid\' => \'0e509757-d21a-4081-9a3f-88e85fc3432b\',
      \'vid\' => NULL,
      \'vuuid\' => \'3d912ee3-05d9-48d0-b938-da52ecba6ccf\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Vertical Bridge is committed to giving back to the community and to helping the organizations that our employees and clients support with their time and money.&nbsp;We contribute not only time but also financial resources each year to these organizations, and our people provide thousands of volunteer hours to help them achieve their missions. In 2016, Vertical Bridge will donate over $700,000 to charity. We hope this demonstrates that philanthropy and giving back to the communities in which we live and work is one of Vertical Bridge’s core values.</p>\\r\\n\\r\\n<p>Some of the organizations Vertical Bridge supports include:</p>\\r\\n\\r\\n<ul>\\r\\n\\t<li><a href=\\"http://www.bocahelpinghands.org/\\">Boca Helping Hands</a>- Providing food and emergency assistance to meet basic human needs and long-term solutions to break the cycle of dependence.</li>\\r\\n\\t<li><a href=\\"http://www.habitat.org/\\">Habitat for Humanity</a> - Bringing people together to build homes, communities and hope.</li>\\r\\n\\t<li><a href=\\"http://warriors4wireless.org/\\">Warriors 4 Wireless&nbsp;</a> - Working with veterans to transfer their military skills into civilian careers.</li>\\r\\n\\t<li><a href=\\"http://www.marchofdimes.org/\\">March of Dimes</a> - Dedicated to improving the health of babies by preventing birth defects, and infant mortality.&nbsp;</li>\\r\\n\\t<li><a href=\\"http://www.surfriderpbc.org/\\">Surfrider Foundation</a> - Protecting our oceans, waves and beaches.</li>\\r\\n\\t<li><a href=\\"http://www.music-movement.org/\\" target=\\"_blank\\">Music Movement</a> - Creating music-centric programs for youth living with Autism.&nbsp;</li>\\r\\n</ul>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p>Vertical Bridge is committed to giving back to the community and to helping the organizations that our employees and clients support with their time and money. We contribute not only time but also financial resources each year to these organizations, and our people provide thousands of volunteer hours to help them achieve their missions. In 2016, Vertical Bridge will donate over $700,000 to charity. We hope this demonstrates that philanthropy and giving back to the communities in which we live and work is one of Vertical Bridge’s core values.</p>\\n<p>Some of the organizations Vertical Bridge supports include:</p>\\n<ul><li><a href=\\"http://www.bocahelpinghands.org/\\">Boca Helping Hands</a>- Providing food and emergency assistance to meet basic human needs and long-term solutions to break the cycle of dependence.</li>\\n<li><a href=\\"http://www.habitat.org/\\">Habitat for Humanity</a> - Bringing people together to build homes, communities and hope.</li>\\n<li><a href=\\"http://warriors4wireless.org/\\">Warriors 4 Wireless </a> - Working with veterans to transfer their military skills into civilian careers.</li>\\n<li><a href=\\"http://www.marchofdimes.org/\\">March of Dimes</a> - Dedicated to improving the health of babies by preventing birth defects, and infant mortality. </li>\\n<li><a href=\\"http://www.surfriderpbc.org/\\">Surfrider Foundation</a> - Protecting our oceans, waves and beaches.</li>\\n<li><a href=\\"http://www.music-movement.org/\\" target=\\"_blank\\">Music Movement</a> - Creating music-centric programs for youth living with Autism. </li>\\n</ul>",
            \'safe_summary\' => \'  \',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'field_bottom_logos\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1\',
          ),
        ),
      ),
      \'field_cta_button\' => array(),
      \'field_cta_content\' => array(),
      \'field_internal_header\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'226\',
            \'uid\' => \'227\',
            \'filename\' => \'Vertical-Bridge_Internal-with overlay.jpg\',
            \'uri\' => \'public://Vertical-Bridge_Internal-with overlay_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'116816\',
            \'status\' => \'1\',
            \'timestamp\' => \'1463522457\',
            \'type\' => \'image\',
            \'uuid\' => \'5f4b9fbf-9a6f-4b2b-ad71-ac46b387c3d2\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'1024\',
              \'height\' => \'242\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'1024\',
            \'height\' => \'242\',
          ),
        ),
      ),
      \'field_logos\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'227\',
            \'uid\' => \'227\',
            \'filename\' => \'Boca-HH.jpg\',
            \'uri\' => \'public://Boca-HH.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'17057\',
            \'status\' => \'1\',
            \'timestamp\' => \'1463523233\',
            \'type\' => \'image\',
            \'uuid\' => \'3cc2e71e-4d78-421e-9ea7-c0726ca25aa9\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'169\',
              \'height\' => \'118\',
            ),
            \'alt\' => \'Boca Helping Hands\',
            \'title\' => \'\',
            \'width\' => \'169\',
            \'height\' => \'118\',
          ),
          array(
            \'fid\' => \'228\',
            \'uid\' => \'227\',
            \'filename\' => \'Habitat_for_humanity.jpg\',
            \'uri\' => \'public://Habitat_for_humanity.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'13663\',
            \'status\' => \'1\',
            \'timestamp\' => \'1463523233\',
            \'type\' => \'image\',
            \'uuid\' => \'01d47847-932e-491d-a671-2447ef6718ae\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'169\',
              \'height\' => \'118\',
            ),
            \'alt\' => \'Habitat for Humanity\',
            \'title\' => \'\',
            \'width\' => \'169\',
            \'height\' => \'118\',
          ),
          array(
            \'fid\' => \'229\',
            \'uid\' => \'227\',
            \'filename\' => \'March_of_Dimes.jpg\',
            \'uri\' => \'public://March_of_Dimes.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'9017\',
            \'status\' => \'1\',
            \'timestamp\' => \'1463523233\',
            \'type\' => \'image\',
            \'uuid\' => \'e4831680-497f-4bb1-a8de-43f2dec14b97\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'169\',
              \'height\' => \'118\',
            ),
            \'alt\' => \'March of Dimes\',
            \'title\' => \'\',
            \'width\' => \'169\',
            \'height\' => \'118\',
          ),
          array(
            \'fid\' => \'230\',
            \'uid\' => \'227\',
            \'filename\' => \'Surfrider.jpg\',
            \'uri\' => \'public://Surfrider.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'19815\',
            \'status\' => \'1\',
            \'timestamp\' => \'1463523233\',
            \'type\' => \'image\',
            \'uuid\' => \'5cab9be5-dfb8-45df-8647-5bf2057d4f89\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'169\',
              \'height\' => \'118\',
            ),
            \'alt\' => \'Surfrider\',
            \'title\' => \'\',
            \'width\' => \'169\',
            \'height\' => \'118\',
          ),
          array(
            \'fid\' => \'231\',
            \'uid\' => \'227\',
            \'filename\' => \'warriors-for-wireless.jpg\',
            \'uri\' => \'public://warriors-for-wireless.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'10908\',
            \'status\' => \'1\',
            \'timestamp\' => \'1463523233\',
            \'type\' => \'image\',
            \'uuid\' => \'e0a347ce-5a43-4724-9c35-45f708d3b527\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'169\',
              \'height\' => \'118\',
            ),
            \'alt\' => \'Warriors for Wireless\',
            \'title\' => \'\',
            \'width\' => \'169\',
            \'height\' => \'118\',
          ),
          array(
            \'fid\' => \'293\',
            \'uid\' => \'227\',
            \'filename\' => \'mm.jpg\',
            \'uri\' => \'public://mm.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'8232\',
            \'status\' => \'1\',
            \'timestamp\' => \'1465500800\',
            \'type\' => \'image\',
            \'uuid\' => \'3f7f083a-26cb-451e-a135-8613b1dc7f54\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'169\',
              \'height\' => \'118\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'169\',
            \'height\' => \'118\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Vertical Bridge Charitable Network\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'basic_page_with_images\',
      \'uid\' => \'227\',
      \'uuid\' => \'0e5527e3-eb3d-4cd7-a5d2-73661b82af1a\',
      \'vid\' => NULL,
      \'vuuid\' => \'e9e7cf5d-2dec-4fa3-8e66-479300aa3046\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Our tenants are successful leaders in their industry and include all of the large telecommunications carriers, federal, state and local government agencies, broadcasters, internet-of-things, back-haul providers, WISPs, LMR-SMR operators and others who deploy wireless solutions.&nbsp;</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p>Our tenants are successful leaders in their industry and include all of the large telecommunications carriers, federal, state and local government agencies, broadcasters, internet-of-things, back-haul providers, WISPs, LMR-SMR operators and others who deploy wireless solutions. </p>\\n ",
            \'safe_summary\' => \'  \',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'field_cta_button\' => array(
        \'und\' => array(
          array(
            \'url\' => \'leasing-managers\',
            \'title\' => \'CLICK HERE\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_cta_content\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Get In Touch and See How We Make Partnering Easy.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p>Get In Touch and See How We Make Partnering Easy.</p>\\n ",
            \'safe_summary\' => \'  \',
          ),
        ),
      ),
      \'field_internal_header\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'302\',
            \'uid\' => \'227\',
            \'filename\' => \'Vertical-Bridge_Our-Tennants.jpg\',
            \'uri\' => \'public://Vertical-Bridge_Our-Tennants_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'152200\',
            \'status\' => \'1\',
            \'timestamp\' => \'1466794766\',
            \'type\' => \'image\',
            \'uuid\' => \'992116f2-84ae-4f69-a522-35f9c18682ef\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'1024\',
              \'height\' => \'242\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'1024\',
            \'height\' => \'242\',
          ),
        ),
      ),
      \'field_logos\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'278\',
            \'uid\' => \'227\',
            \'filename\' => \'at-t.jpg\',
            \'uri\' => \'public://at-t.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'16234\',
            \'status\' => \'1\',
            \'timestamp\' => \'1465413444\',
            \'type\' => \'image\',
            \'uuid\' => \'3e743ce9-d45d-4bf4-8ce2-8af88bf2c65b\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'133\',
              \'height\' => \'63\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'133\',
            \'height\' => \'63\',
          ),
          array(
            \'fid\' => \'279\',
            \'uid\' => \'227\',
            \'filename\' => \'verizon.jpg\',
            \'uri\' => \'public://verizon_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'14603\',
            \'status\' => \'1\',
            \'timestamp\' => \'1465413444\',
            \'type\' => \'image\',
            \'uuid\' => \'5aeeff2b-3fce-46f5-b8ef-3b7d7a9de054\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'114\',
              \'height\' => \'63\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'114\',
            \'height\' => \'63\',
          ),
          array(
            \'fid\' => \'280\',
            \'uid\' => \'227\',
            \'filename\' => \'tmobile.jpg\',
            \'uri\' => \'public://tmobile_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'20699\',
            \'status\' => \'1\',
            \'timestamp\' => \'1465413444\',
            \'type\' => \'image\',
            \'uuid\' => \'a0a58e2c-ff9f-49c4-ad7e-1ea2fef15b6b\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'163\',
              \'height\' => \'63\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'163\',
            \'height\' => \'63\',
          ),
          array(
            \'fid\' => \'281\',
            \'uid\' => \'227\',
            \'filename\' => \'sprint.jpg\',
            \'uri\' => \'public://sprint_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'20936\',
            \'status\' => \'1\',
            \'timestamp\' => \'1465413444\',
            \'type\' => \'image\',
            \'uuid\' => \'00c0984e-f3b9-48d6-8208-4d75c41a342a\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'150\',
              \'height\' => \'63\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'150\',
            \'height\' => \'63\',
          ),
          array(
            \'fid\' => \'282\',
            \'uid\' => \'227\',
            \'filename\' => \'cellullarone.jpg\',
            \'uri\' => \'public://cellullarone.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'24202\',
            \'status\' => \'1\',
            \'timestamp\' => \'1465413444\',
            \'type\' => \'image\',
            \'uuid\' => \'f1001edf-7a66-471d-8726-b6062607b2f0\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'210\',
              \'height\' => \'63\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'210\',
            \'height\' => \'63\',
          ),
          array(
            \'fid\' => \'283\',
            \'uid\' => \'227\',
            \'filename\' => \'alpha-logo-2.png\',
            \'uri\' => \'public://alpha-logo-2_0.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'11403\',
            \'status\' => \'1\',
            \'timestamp\' => \'1465413444\',
            \'type\' => \'image\',
            \'uuid\' => \'394d1127-2cf9-41ed-9e1e-a9c15fb9acb3\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'210\',
              \'height\' => \'63\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'210\',
            \'height\' => \'63\',
          ),
          array(
            \'fid\' => \'284\',
            \'uid\' => \'227\',
            \'filename\' => \'digity-2.png\',
            \'uri\' => \'public://digity-2_0.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'8324\',
            \'status\' => \'1\',
            \'timestamp\' => \'1465413444\',
            \'type\' => \'image\',
            \'uuid\' => \'2acda0eb-0c65-4657-8c43-ed16741b1fcb\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'161\',
              \'height\' => \'63\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'161\',
            \'height\' => \'63\',
          ),
          array(
            \'fid\' => \'285\',
            \'uid\' => \'227\',
            \'filename\' => \'townsquare.png\',
            \'uri\' => \'public://townsquare_1.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'10653\',
            \'status\' => \'1\',
            \'timestamp\' => \'1465413444\',
            \'type\' => \'image\',
            \'uuid\' => \'abcad54a-caf2-40ec-889a-386baf65eb95\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'153\',
              \'height\' => \'63\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'153\',
            \'height\' => \'63\',
          ),
          array(
            \'fid\' => \'286\',
            \'uid\' => \'227\',
            \'filename\' => \'uscellular.jpg\',
            \'uri\' => \'public://uscellular_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'17679\',
            \'status\' => \'1\',
            \'timestamp\' => \'1465413444\',
            \'type\' => \'image\',
            \'uuid\' => \'9dbc26b8-c3f0-43f8-8467-add29858c282\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'177\',
              \'height\' => \'63\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'177\',
            \'height\' => \'63\',
          ),
          array(
            \'fid\' => \'287\',
            \'uid\' => \'227\',
            \'filename\' => \'iheartmedia.jpg\',
            \'uri\' => \'public://iheartmedia.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'15266\',
            \'status\' => \'1\',
            \'timestamp\' => \'1465413444\',
            \'type\' => \'image\',
            \'uuid\' => \'888f5c88-a261-46b2-9a14-82ca883a6fed\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'210\',
              \'height\' => \'63\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'210\',
            \'height\' => \'63\',
          ),
          array(
            \'fid\' => \'288\',
            \'uid\' => \'227\',
            \'filename\' => \'tds.jpg\',
            \'uri\' => \'public://tds.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'14523\',
            \'status\' => \'1\',
            \'timestamp\' => \'1465413444\',
            \'type\' => \'image\',
            \'uuid\' => \'6c0216c7-4d0c-4b3f-9586-0f42c9df409e\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'111\',
              \'height\' => \'63\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'111\',
            \'height\' => \'63\',
          ),
        ),
      ),
      \'field_tab_content_wysiwyg\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Carriers can rely on the Vertical Bridge team to use automated processes to deliver an error-free, speedy, and consistent execution as well as an excellent customer experience. We manage efficient processing of documents from the receipt of co-location applications to lease executions and issuance of notice-to-proceed to the tenant.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p>Carriers can rely on the Vertical Bridge team to use automated processes to deliver an error-free, speedy, and consistent execution as well as an excellent customer experience. We manage efficient processing of documents from the receipt of co-location applications to lease executions and issuance of notice-to-proceed to the tenant.</p>\\n ",
            \'safe_summary\' => \'  \',
          ),
          array(
            \'value\' => "<p>With sites located in every major market in&nbsp;the United States, Alaska and Hawaii and Puerto Rico, Vertical Bridge is the largest owner of broadcast tower sites in the US and a valued resource for radio and television networks. Our sites and rooftop installations cover all categories of broadcasting including AM and AM-directional sites, FM and TV. We assist with site design as well as FCC matters, and our Professional Broadcast Engineers are able to handle the most complex broadcast installations.<br />\\r\\n<br />\\r\\nFor more information on our sites, <a href=\\"mailto:broadcast@VerticalBridge.com\\">contact our Broadcast Team</a>.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p>With sites located in every major market in the United States, Alaska and Hawaii and Puerto Rico, Vertical Bridge is the largest owner of broadcast tower sites in the US and a valued resource for radio and television networks. Our sites and rooftop installations cover all categories of broadcasting including AM and AM-directional sites, FM and TV. We assist with site design as well as FCC matters, and our Professional Broadcast Engineers are able to handle the most complex broadcast installations.</p>\\n<p>For more information on our sites, <a href=\\"mailto:broadcast@VerticalBridge.com\\">contact our Broadcast Team</a>.</p>\\n ",
            \'safe_summary\' => \'  \',
          ),
          array(
            \'value\' => "<p>Vertical Bridge’s leadership has deep experience with government requirements on large, multi-year programs in the wireless infrastructure arena. We meet rapid deployment needs and work with many federal agencies and a wide variety of other governmental entities in their long-term site tenant and landlord capacities.&nbsp;<br />\\r\\n<br />\\r\\nVertical Bridge has engaged with the U.S. First Responder Network Authority (FirstNet) since its inception and has provided detailed insights into planning and deployment of the new national broadband network for the FirstNet team and a wide array of FirstNet participants.&nbsp;</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p>Vertical Bridge’s leadership has deep experience with government requirements on large, multi-year programs in the wireless infrastructure arena. We meet rapid deployment needs and work with many federal agencies and a wide variety of other governmental entities in their long-term site tenant and landlord capacities. </p>\\n<p>Vertical Bridge has engaged with the U.S. First Responder Network Authority (FirstNet) since its inception and has provided detailed insights into planning and deployment of the new national broadband network for the FirstNet team and a wide array of FirstNet participants. </p>\\n ",
            \'safe_summary\' => \'  \',
          ),
          array(
            \'value\' => "<p>As technology evolves at unprecedented speed, wireless internet service providers face unique challenges. Vertical Bridge recognizes these roadblocks and offers an expansive portfolio of towers and other assets to get WISPs online and in service. There are multiple emerging opportunities for machine-to-machine (IoT) communications, and we’re dedicated to helping grow networks, expand coverage and increase capacity for our tenants.&nbsp;</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p>As technology evolves at unprecedented speed, wireless internet service providers face unique challenges. Vertical Bridge recognizes these roadblocks and offers an expansive portfolio of towers and other assets to get WISPs online and in service. There are multiple emerging opportunities for machine-to-machine (IoT) communications, and we’re dedicated to helping grow networks, expand coverage and increase capacity for our tenants. </p>\\n ",
            \'safe_summary\' => \'  \',
          ),
        ),
      ),
      \'field_tab_title\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Carriers\',
            \'format\' => NULL,
            \'safe_value\' => \'Carriers\',
          ),
          array(
            \'value\' => \'Radio and TV Stations\',
            \'format\' => NULL,
            \'safe_value\' => \'Radio and TV Stations\',
          ),
          array(
            \'value\' => \'Local, State, and Federal Government\',
            \'format\' => NULL,
            \'safe_value\' => \'Local, State, and Federal Government\',
          ),
          array(
            \'value\' => \'WISPs and IoT\',
            \'format\' => NULL,
            \'safe_value\' => \'WISPs and IoT\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Our Tenants\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'basic_page_with_tabs\',
      \'uid\' => \'227\',
      \'uuid\' => \'118e22d3-993d-49ac-9844-a3062f00e4e9\',
      \'vid\' => NULL,
      \'vuuid\' => \'947d9676-8029-496d-8a10-673a50ef4fde\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<ul>\\r\\n\\t<li>Acquisitions further expand the company’s tower portfolio in major markets across the US</li>\\r\\n\\t<li>Vertical Bridge enters the attractive Puerto Rico tower market</li>\\r\\n</ul>\\r\\n\\r\\n<p><strong>Boca Raton, FL, October1, 2014</strong> - Vertical Bridge Holdings, LLC., a privately owned tower company, today announced that it has completed the acquisition of six additional tower portfolios with assets in the Great Lakes region, through the Eastern US, Puerto Rico, and a number of Southern markets. These newly acquired portfolios further expand Vertical Bridge’s footprint in key regions of the United States.</p>\\r\\n\\r\\n<p>“VB continues to grow at an accelerated pace, taking advantage of a very healthy M&amp;A pipeline. We are closing deals with known partners who successfully worked with us before and also many new partners who like our approach to the M&amp;A process. We also are excited to be back in Puerto Rico, which we view as an attractive region”, said Alexander L. Gellman, CEO and Co-Founder of Vertical Bridge.</p>\\r\\n\\r\\n<p><strong>About Vertical Bridge Holdings, LLC</strong>.<br />\\r\\nVertical Bridge Holdings is a privately-owned tower company in the US headquartered in Boca Raton, Florida. The company focuses on owning, operating, and managing telecommunications towers, rooftops, and site locations across the country. Vertical Bridge was founded in 2014 by Digital Bridge Holdings, LLC as well as certain key executives from Global Tower Partners. For more information please visit <a href=\\"http://www.verticalbridge.com\\">www.verticalbridge.com</a> or call: Traci Clancy at 561-948-6367.</p>\\r\\n",
            \'summary\' => "<p><strong>Boca Raton, FL, October1, 2014</strong> - Vertical Bridge Holdings, LLC., a privately owned tower company, today announced that it has completed the acquisition of six additional tower portfolios with assets in the Great Lakes region, through the Eastern US, Puerto Rico, and a number of Southern markets. These newly acquired portfolios further expand Vertical Bridge’s footprint in key regions of the United States.</p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => " <ul><li>Acquisitions further expand the company’s tower portfolio in major markets across the US</li>\\n<li>Vertical Bridge enters the attractive Puerto Rico tower market</li>\\n</ul><p><strong>Boca Raton, FL, October1, 2014</strong> - Vertical Bridge Holdings, LLC., a privately owned tower company, today announced that it has completed the acquisition of six additional tower portfolios with assets in the Great Lakes region, through the Eastern US, Puerto Rico, and a number of Southern markets. These newly acquired portfolios further expand Vertical Bridge’s footprint in key regions of the United States.</p>\\n<p>“VB continues to grow at an accelerated pace, taking advantage of a very healthy M&amp;A pipeline. We are closing deals with known partners who successfully worked with us before and also many new partners who like our approach to the M&amp;A process. We also are excited to be back in Puerto Rico, which we view as an attractive region”, said Alexander L. Gellman, CEO and Co-Founder of Vertical Bridge.</p>\\n<p><strong>About Vertical Bridge Holdings, LLC</strong>.<br />\\nVertical Bridge Holdings is a privately-owned tower company in the US headquartered in Boca Raton, Florida. The company focuses on owning, operating, and managing telecommunications towers, rooftops, and site locations across the country. Vertical Bridge was founded in 2014 by Digital Bridge Holdings, LLC as well as certain key executives from Global Tower Partners. For more information please visit <a href=\\"http://www.verticalbridge.com\\">www.verticalbridge.com</a> or call: Traci Clancy at 561-948-6367.</p>\\n ",
            \'safe_summary\' => " <p><strong>Boca Raton, FL, October1, 2014</strong> - Vertical Bridge Holdings, LLC., a privately owned tower company, today announced that it has completed the acquisition of six additional tower portfolios with assets in the Great Lakes region, through the Eastern US, Puerto Rico, and a number of Southern markets. These newly acquired portfolios further expand Vertical Bridge’s footprint in key regions of the United States.</p>\\n ",
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;}\',
      \'field_date\' => array(),
      \'field_external_link\' => array(),
      \'field_internal_header\' => array(),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'0\',
      \'sticky\' => \'0\',
      \'title\' => \'Vertical Bridge Holdings, LLC. Completes Six More Acquisitions In September\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'press_release\',
      \'uid\' => \'227\',
      \'uuid\' => \'1deb75e5-d4c7-4c01-a0de-6b2a272cdd30\',
      \'vid\' => NULL,
      \'vuuid\' => \'1716733a-3d6f-4edc-8d92-412147a998bd\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><img align=\\"left\\" alt=\\"\\" border=\\"2\\" class=\\"media-image attr__typeof__foaf:Image img__fid__115 img__view_mode__media_original attr__format__media_original\\" height=\\"240\\" src=\\"http://stage.verticalbridge.com/sites/default/files/KS.jpg\\" style=\\"margin-right:5px;padding:5px;\\" typeof=\\"foaf:Image\\" width=\\"160\\" /></p>\\r\\n\\r\\n<p>Kimberlee Steck is the Senior Director of Human Resources of Vertical Bridge and has over 15 years of experience in Human Resources and in the telecommunications industry. She is responsible for the human resource function, including business partnering, talent and organizational development, compensation and benefits, and human resource operations.<br />\\r\\n<br />\\r\\nPrior to joining Vertical Bridge, Steck was the Senior Manager of Human Resources for American Tower Corporation. Previously, she was the Director of Human Resources for Global Tower Partners where she managed employees across theUnited States, Mexico, and Costa Rica.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p><img align=\\"left\\" alt=\\"\\" border=\\"2\\" class=\\"media-image attr__typeof__foaf:Image img__fid__115 img__view_mode__media_original attr__format__media_original\\" height=\\"240\\" src=\\"http://stage.verticalbridge.com/sites/default/files/KS.jpg\\" style=\\"margin-right:5px;padding:5px;\\" typeof=\\"foaf:Image\\" width=\\"160\\" /></p>\\n<p>Kimberlee Steck is the Senior Director of Human Resources of Vertical Bridge and has over 15 years of experience in Human Resources and in the telecommunications industry. She is responsible for the human resource function, including business partnering, talent and organizational development, compensation and benefits, and human resource operations.</p>\\n<p>Prior to joining Vertical Bridge, Steck was the Senior Manager of Human Resources for American Tower Corporation. Previously, she was the Director of Human Resources for Global Tower Partners where she managed employees across theUnited States, Mexico, and Costa Rica.</p>\\n ",
            \'safe_summary\' => \'  \',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'field_internal_header\' => array(),
      \'field_linkedin\' => array(),
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Kimberlee Steck\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'team_member\',
      \'uid\' => \'227\',
      \'uuid\' => \'226f0f4a-52ca-498a-9938-db0466c1a6ad\',
      \'vid\' => NULL,
      \'vuuid\' => \'41e7bb54-7a4f-4875-8d07-dc91cca834eb\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'\',
            \'summary\' => "<p><i>San Antonio Business Journal</i>, By James Aldridge</p>\\r\\n\\r\\n<p>Vertical Bridge has signed a multi-year agreement for the management and marketing of the wireless deployment of Clear Channel Outdoor America’s billboards and outdoor advertising properties in 45 out of the top 50 U.S. markets<i>.</i></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => \'  \',
            \'safe_summary\' => " <p><i>San Antonio Business Journal</i>, By James Aldridge</p>\\n<p>Vertical Bridge has signed a multi-year agreement for the management and marketing of the wireless deployment of Clear Channel Outdoor America’s billboards and outdoor advertising properties in 45 out of the top 50 U.S. markets<i>.</i></p>\\n ",
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'field_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015-09-11 16:15:00\',
            \'timezone\' => \'America/New_York\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_external_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://www.bizjournals.com/sanantonio/blog/morning-edition/2015/09/clear-channel-outdoor-strikes-another-deal-with.html\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_internal_header\' => array(),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Clear Channel Outdoor strikes another deal with Vertical Bridge\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'press_release\',
      \'uid\' => \'227\',
      \'uuid\' => \'2298e931-86d9-4402-b41f-410266b1c83c\',
      \'vid\' => NULL,
      \'vuuid\' => \'161e4271-d48c-4398-8b6d-29015a2d0016\',
    ),
  (object) array(
      \'body\' => array(),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'field_cta_button\' => array(),
      \'field_cta_content\' => array(),
      \'field_internal_header\' => array(),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'metatags\' => array(
        \'und\' => array(
          \'title\' => array(
            \'value\' => \'Cell Tower Lease Questions - FAQ | Vertical Bridge\',
          ),
          \'description\' => array(
            \'value\' => \'\',
          ),
        ),
      ),
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'FAQs\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'page\',
      \'uid\' => \'227\',
      \'uuid\' => \'236b9d70-74a6-4e4f-a5dd-2c139f3467ad\',
      \'vid\' => NULL,
      \'vuuid\' => \'035a2b86-517c-4dcf-8ed7-a142fa144367\',
    ),
  (object) array(
      \'body\' => array(),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'field_cta_button\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://verticalbridge.thinkcreativegroup.com/co-location\',
            \'title\' => \'CLICK HERE\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_cta_content\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>We Want to Be Your Partner!</p>\\r\\n\\r\\n<p>Download a Vertical Bridge Co-Location Application Today!</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p>We Want to Be Your Partner!</p>\\n<p>Download a Vertical Bridge Co-Location Application Today!</p>\\n ",
            \'safe_summary\' => \'  \',
          ),
        ),
      ),
      \'field_internal_header\' => array(),
      \'field_service_description\' => array(
        \'und\' => array(
          array(
            \'value\' => \'We work with our partners to develop a new tower or small cell location where they need it.\',
            \'format\' => NULL,
            \'safe_value\' => \'We work with our partners to develop a new tower or small cell location where they need it.\',
          ),
          array(
            \'value\' => \'We use existing assets and find new locations to provide collocation solutions that meet the needs of our clients.\',
            \'format\' => NULL,
            \'safe_value\' => \'We use existing assets and find new locations to provide collocation solutions that meet the needs of our clients.\',
          ),
          array(
            \'value\' => \'We deliver a turn-key solution to property owners and maximize their revenue generation opportunities. \',
            \'format\' => NULL,
            \'safe_value\' => \'We deliver a turn-key solution to property owners and maximize their revenue generation opportunities. \',
          ),
          array(
            \'value\' => \'We invest in tower, rooftop and ground locations across the United States.\',
            \'format\' => NULL,
            \'safe_value\' => \'We invest in tower, rooftop and ground locations across the United States.\',
          ),
        ),
      ),
      \'field_service_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'217\',
            \'uid\' => \'227\',
            \'filename\' => \'builds_2.jpg\',
            \'uri\' => \'public://builds_2.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'17931\',
            \'status\' => \'1\',
            \'timestamp\' => \'1463426990\',
            \'type\' => \'image\',
            \'uuid\' => \'1ef23ffe-737c-444d-aba5-774608a9d3e3\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'53\',
              \'height\' => \'79\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'53\',
            \'height\' => \'79\',
          ),
          array(
            \'fid\' => \'218\',
            \'uid\' => \'227\',
            \'filename\' => \'identifies_2.jpg\',
            \'uri\' => \'public://identifies_2.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'15669\',
            \'status\' => \'1\',
            \'timestamp\' => \'1463426990\',
            \'type\' => \'image\',
            \'uuid\' => \'86fbc2c1-bffa-4080-ac14-eb5440e880eb\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'64\',
              \'height\' => \'79\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'64\',
            \'height\' => \'79\',
          ),
          array(
            \'fid\' => \'219\',
            \'uid\' => \'227\',
            \'filename\' => \'manages_2.jpg\',
            \'uri\' => \'public://manages_2.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'15702\',
            \'status\' => \'1\',
            \'timestamp\' => \'1463426990\',
            \'type\' => \'image\',
            \'uuid\' => \'f421611d-24c4-419b-bd08-51652232fe94\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'79\',
              \'height\' => \'79\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'79\',
            \'height\' => \'79\',
          ),
          array(
            \'fid\' => \'220\',
            \'uid\' => \'227\',
            \'filename\' => \'invests_2.jpg\',
            \'uri\' => \'public://invests_2.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'23828\',
            \'status\' => \'1\',
            \'timestamp\' => \'1463426990\',
            \'type\' => \'image\',
            \'uuid\' => \'201ac885-d579-4ea4-9aaf-121b506d09f0\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'79\',
              \'height\' => \'79\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'79\',
            \'height\' => \'79\',
          ),
        ),
      ),
      \'field_service_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'what-we-do\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
          array(
            \'url\' => \'what-we-do\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
          array(
            \'url\' => \'our-partners\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
          array(
            \'url\' => \'what-we-do\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_service_title\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Build\',
            \'format\' => NULL,
            \'safe_value\' => \'Build\',
          ),
          array(
            \'value\' => \'Lease\',
            \'format\' => NULL,
            \'safe_value\' => \'Lease\',
          ),
          array(
            \'value\' => \'Manage\',
            \'format\' => NULL,
            \'safe_value\' => \'Manage\',
          ),
          array(
            \'value\' => \'Acquire\',
            \'format\' => NULL,
            \'safe_value\' => \'Acquire\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Homepage\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'homepage\',
      \'uid\' => \'227\',
      \'uuid\' => \'25b9821c-2b39-4d40-8523-b1d6e1090d26\',
      \'vid\' => NULL,
      \'vuuid\' => \'e24957d0-9730-47ab-9000-acd97c609c0d\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><strong><span class=\\"posted-by\\">By Joey Jackson&nbsp;</span><span class=\\"posted-on\\">on <span class=\\"dtreviewed\\"><time class=\\"value-datetime\\" datetime=\\"2015-12-03T10:12:25+00:00\\" itemprop=\\"datePublished\\">December 3, 2015</time></span></span></strong></p>\\r\\n\\r\\n<p><span><span>Tower ownership can be a risky endeavor, but it can also deliver hefty profits for those who know how to properly allocate their resources and build strong relationships with carriers.</span></span></p>\\r\\n\\r\\n<p><span><span>On this weeks Cell Tower News show, Alex Gellman, co-founder and CEO of Vertical Bridge, gave insight into ways to maximize profits for owners, what to look for in a tower site, advice for leasing to a carrier and predictions for the market in 2016 and beyond.</span></span></p>\\r\\n\\r\\n<p><span><span>Vertical Bridge is a tower ownership and leasing company Gellman started with co-founder Marc Ganzi when the two invested in rooftop towers during the MetroPCS expansion. Since then, Vertical Bridge has become a leading tower leasing company, working with all the major U.S. carriers.</span></span></p>\\r\\n\\r\\n<p><span><span>“Our job is to deliver sites to the wireless carriers, any radio operator who wants to use wireless antenna technology,” Gellman explained. “We deliver that real estate and that real estate can come in a bunch of different forms. One form would be a tower that we own, but other forms can include a rooftop where we don’t own the building, but we sublease the rooftop. It could include billboards. It could include water tanks, all different kinds of structures and it can be all kinds of different towers from a stealth pole to a 1,500-foot radio tower.”</span></span></p>\\r\\n\\r\\n<p><span><span>Carriers have a choice to either lease or own towers. Gellman says they are increasingly moving toward leasing because it requires less capital investment up front, which has created profitable partnerships for tower companies.</span></span></p>\\r\\n\\r\\n<p><span><span>“The advantage for a carrier is if they own it, they’ve stranded capital in that site and that’s capital they can’t use to add more radios and capital they can’t use to get more customers,” Gellman said. “So I think as carriers have evolved their thinking, they have recognized that owning the site isn’t very strategic and they had varying degrees of success in terms of leasing it out…The site would be more valuable to the tower companies.”</span></span></p>\\r\\n\\r\\n<p><span><span>Gellman says there are four main characteristics he looks for in a possible tower site. Location is first and foremost on his mind. The tower must be in a place where there is not much coverage so the value of the site goes up for carriers.</span></span></p>\\r\\n\\r\\n<p><span><span>“Primarily carriers will do what they’ve always done which is take a network design, they’ll draw ‘X’ marks the spot on a map, draw a circle around it and say I need a site here and generally they’ll look for existing structures first, but if not they’ll have somebody build a new one for them. It used to be they built it themselves, now pretty much nobody builds for themselves,” Gellman explained.</span></span></p>\\r\\n\\r\\n<p><span><span>Second is whether the structure is physically sound and has the proper capacity. Third, is what Gellman calls “good paper,” which means the site has collateral value, a clean title and no environmental issues. Finally, Gellman looks at the creditworthiness of the tenant.</span></span></p>\\r\\n\\r\\n<p><span><span>Maintenance is another issue Gellman addressed, noting the responsibly falls on both the tower owner and the tenant.</span></span></p>\\r\\n\\r\\n<p><span><span>“What we maintain is … steel and concrete,” he said of Vertical Bridge’s end of the deal. “The electronics are not maintained by us, they’re maintained by the carriers so our business is really fairly simple. We have to maintain access to the site, the physical site itself, the tower, the foundation. But the electronics, the antennas, the lines, those are maintained by the tenants.”</span></span></p>\\r\\n\\r\\n<p><span><span>Gellman’s advice to potential tower owners is to build a solid relationship with carriers and have your paperwork in order.</span></span></p>\\r\\n\\r\\n<p><span><span>“It’s hard to get them if you don’t have a good relationship with the carriers,” Gellman said. “They don’t really like to go to new locations and negotiate a lease from scratch, it’s very time consuming so one thing I would say is go as fast as you can … and secondly have your diligence together, have the documents … as far as environmental and title. A lot of these carriers will want to see that to satisfy themselves because they’re planning to be at these sites for decades so they want to make sure they can stay there.”</span></span></p>\\r\\n\\r\\n<p><span><span>Finally, Gellman made his prediction for the future, saying 2015 saw a lull in carrier activity, but he expects business will pick up as carriers move into new phases of network development.</span></span></p>\\r\\n\\r\\n<p><span><span>“We’re at an ironic time in that asset values are very high, but the carriers have not been that active in the past year, so only Verizon has been investing significantly in their network constant with past years. AT&amp;T, T-Mobile, Sprint have really not invested much and AT&amp;T is well down from prior years. At the same time, three of the four carriers are laying people off. Verizon, AT&amp;T and Sprint have all announced programs … to cut out some middle management,” Gellman said. “So they’re all going through these reorganization processes, yet asset values are really high.”</span></span></p>\\r\\n\\r\\n<p><span><span>Gellman explained the biggest factor driving asset values is data demand.</span></span></p>\\r\\n\\r\\n<p><span><span>“This explosion of video on the mobile devices is really driving incredible bandwidth growth from the carriers. They have to invest in their networks in order to meet it,” Gellman said.</span></span></p>\\r\\n\\r\\n<p><span><span>But, Gellman predicts a bright future for tower owners based on where he sees the network cycle heading into next year.</span></span></p>\\r\\n\\r\\n<p><span><span>“In the long run the carriers will need to invest in their networks and there’s sort of these cycles where they invest in new technology, they harvest the new technology and then they fill it in and then comes the next technology, so I think really where we are is they’ve invested in LTE, they’re harvesting it the last year or two, they’re going to start investing in it and filling in so we’ll start to see more amendments next year and more capacity added to the LTE networks that are out there and then there will come 5G, which will be a new network they’ll invest in building. … It’s a cycle and it’s unavoidable.”</span></span></p>\\r\\n",
            \'summary\' => "<p>RCR Wireless, By Joey Jackson</p>\\r\\n\\r\\n<p>Tower ownership can be a risky endeavor, but it can also deliver hefty profits for those who know how to properly allocate their resources and build strong relationships with carriers….Alex Gellman, co-founder and CEO of&nbsp;<a href=\\"http://verticalbridge.com/\\">Vertical Bridge</a>, gave insight into ways to maximize profits for owners, what to look for in a tower site, advice for leasing to a carrier and predictions for the market in 2016 and beyond.</p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => " <p><strong><span class=\\"posted-by\\">By Joey Jackson </span><span class=\\"posted-on\\">on <span class=\\"dtreviewed\\"><time class=\\"value-datetime\\" datetime=\\"2015-12-03T10:12:25+00:00\\" itemprop=\\"datePublished\\">December 3, 2015</time></span></span></strong></p>\\n<p><span><span>Tower ownership can be a risky endeavor, but it can also deliver hefty profits for those who know how to properly allocate their resources and build strong relationships with carriers.</span></span></p>\\n<p><span><span>On this weeks Cell Tower News show, Alex Gellman, co-founder and CEO of Vertical Bridge, gave insight into ways to maximize profits for owners, what to look for in a tower site, advice for leasing to a carrier and predictions for the market in 2016 and beyond.</span></span></p>\\n<p><span><span>Vertical Bridge is a tower ownership and leasing company Gellman started with co-founder Marc Ganzi when the two invested in rooftop towers during the MetroPCS expansion. Since then, Vertical Bridge has become a leading tower leasing company, working with all the major U.S. carriers.</span></span></p>\\n<p><span><span>“Our job is to deliver sites to the wireless carriers, any radio operator who wants to use wireless antenna technology,” Gellman explained. “We deliver that real estate and that real estate can come in a bunch of different forms. One form would be a tower that we own, but other forms can include a rooftop where we don’t own the building, but we sublease the rooftop. It could include billboards. It could include water tanks, all different kinds of structures and it can be all kinds of different towers from a stealth pole to a 1,500-foot radio tower.”</span></span></p>\\n<p><span><span>Carriers have a choice to either lease or own towers. Gellman says they are increasingly moving toward leasing because it requires less capital investment up front, which has created profitable partnerships for tower companies.</span></span></p>\\n<p><span><span>“The advantage for a carrier is if they own it, they’ve stranded capital in that site and that’s capital they can’t use to add more radios and capital they can’t use to get more customers,” Gellman said. “So I think as carriers have evolved their thinking, they have recognized that owning the site isn’t very strategic and they had varying degrees of success in terms of leasing it out…The site would be more valuable to the tower companies.”</span></span></p>\\n<p><span><span>Gellman says there are four main characteristics he looks for in a possible tower site. Location is first and foremost on his mind. The tower must be in a place where there is not much coverage so the value of the site goes up for carriers.</span></span></p>\\n<p><span><span>“Primarily carriers will do what they’ve always done which is take a network design, they’ll draw ‘X’ marks the spot on a map, draw a circle around it and say I need a site here and generally they’ll look for existing structures first, but if not they’ll have somebody build a new one for them. It used to be they built it themselves, now pretty much nobody builds for themselves,” Gellman explained.</span></span></p>\\n<p><span><span>Second is whether the structure is physically sound and has the proper capacity. Third, is what Gellman calls “good paper,” which means the site has collateral value, a clean title and no environmental issues. Finally, Gellman looks at the creditworthiness of the tenant.</span></span></p>\\n<p><span><span>Maintenance is another issue Gellman addressed, noting the responsibly falls on both the tower owner and the tenant.</span></span></p>\\n<p><span><span>“What we maintain is … steel and concrete,” he said of Vertical Bridge’s end of the deal. “The electronics are not maintained by us, they’re maintained by the carriers so our business is really fairly simple. We have to maintain access to the site, the physical site itself, the tower, the foundation. But the electronics, the antennas, the lines, those are maintained by the tenants.”</span></span></p>\\n<p><span><span>Gellman’s advice to potential tower owners is to build a solid relationship with carriers and have your paperwork in order.</span></span></p>\\n<p><span><span>“It’s hard to get them if you don’t have a good relationship with the carriers,” Gellman said. “They don’t really like to go to new locations and negotiate a lease from scratch, it’s very time consuming so one thing I would say is go as fast as you can … and secondly have your diligence together, have the documents … as far as environmental and title. A lot of these carriers will want to see that to satisfy themselves because they’re planning to be at these sites for decades so they want to make sure they can stay there.”</span></span></p>\\n<p><span><span>Finally, Gellman made his prediction for the future, saying 2015 saw a lull in carrier activity, but he expects business will pick up as carriers move into new phases of network development.</span></span></p>\\n<p><span><span>“We’re at an ironic time in that asset values are very high, but the carriers have not been that active in the past year, so only Verizon has been investing significantly in their network constant with past years. AT&amp;T, T-Mobile, Sprint have really not invested much and AT&amp;T is well down from prior years. At the same time, three of the four carriers are laying people off. Verizon, AT&amp;T and Sprint have all announced programs … to cut out some middle management,” Gellman said. “So they’re all going through these reorganization processes, yet asset values are really high.”</span></span></p>\\n<p><span><span>Gellman explained the biggest factor driving asset values is data demand.</span></span></p>\\n<p><span><span>“This explosion of video on the mobile devices is really driving incredible bandwidth growth from the carriers. They have to invest in their networks in order to meet it,” Gellman said.</span></span></p>\\n<p><span><span>But, Gellman predicts a bright future for tower owners based on where he sees the network cycle heading into next year.</span></span></p>\\n<p><span><span>“In the long run the carriers will need to invest in their networks and there’s sort of these cycles where they invest in new technology, they harvest the new technology and then they fill it in and then comes the next technology, so I think really where we are is they’ve invested in LTE, they’re harvesting it the last year or two, they’re going to start investing in it and filling in so we’ll start to see more amendments next year and more capacity added to the LTE networks that are out there and then there will come 5G, which will be a new network they’ll invest in building. … It’s a cycle and it’s unavoidable.”</span></span></p>\\n ",
            \'safe_summary\' => " <p>RCR Wireless, By Joey Jackson</p>\\n<p>Tower ownership can be a risky endeavor, but it can also deliver hefty profits for those who know how to properly allocate their resources and build strong relationships with carriers….Alex Gellman, co-founder and CEO of <a href=\\"http://verticalbridge.com/\\">Vertical Bridge</a>, gave insight into ways to maximize profits for owners, what to look for in a tower site, advice for leasing to a carrier and predictions for the market in 2016 and beyond.</p>\\n ",
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'field_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015-12-03 14:15:00\',
            \'timezone\' => \'America/New_York\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_external_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://www.rcrwireless.com/20151203/cell-tower-news/tower-ownership-predictions-possibilities-and-pitfalls-tag20\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_internal_header\' => array(),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Tower ownership: Predictions, Possibilities and Pitfalls\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'press_release\',
      \'uid\' => \'227\',
      \'uuid\' => \'29301e0a-f492-4f6e-9804-5c01b6c23e2b\',
      \'vid\' => NULL,
      \'vuuid\' => \'ba981407-1cea-41d3-97ee-ecdd41e3c4b9\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Vertical Bridge Reaches Agreement with Welltower To Add Medical Office Building Sites to Managed Portfolio</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p>Vertical Bridge Reaches Agreement with Welltower To Add Medical Office Building Sites to Managed Portfolio</p>\\n ",
            \'safe_summary\' => \'  \',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'0\',
      \'sticky\' => \'0\',
      \'title\' => \'Vertical Bridge Reaches Agreement with Welltower To Add Medical Office Building Sites to Managed Portfolio\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'news_marquee\',
      \'uid\' => \'227\',
      \'uuid\' => \'29b0e0b8-9969-4ca0-847b-61b648ac1316\',
      \'vid\' => NULL,
      \'vuuid\' => \'3647ffe8-8e89-4b9e-918f-b71c31072a20\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Vertical Bridge Acquires Rights to a Portfolio of Towers from Nsight Tower Holdings</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p>Vertical Bridge Acquires Rights to a Portfolio of Towers from Nsight Tower Holdings</p>\\n ",
            \'safe_summary\' => \'  \',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'0\',
      \'sticky\' => \'0\',
      \'title\' => \'Vertical Bridge Acquires Rights to a Portfolio of Towers from Nsight Tower Holdings\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'news_marquee\',
      \'uid\' => \'227\',
      \'uuid\' => \'2cae3d51-b90c-4ba2-9df7-d28ec66f7e75\',
      \'vid\' => NULL,
      \'vuuid\' => \'f17f4732-f3df-41d6-b0a7-7afa63e0747b\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<h1><span style=\\"color: rgb(255, 255, 255);\\">Maximizing the Value of Your Property</span></h1>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <h1><span style=\\"color: rgb(255, 255, 255);\\">Maximizing the Value of Your Property</span></h1>\\n ",
            \'safe_summary\' => \'  \',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'field_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'242\',
            \'uid\' => \'227\',
            \'filename\' => \'Vertical Bridge_Home2.jpg\',
            \'uri\' => \'public://home-slides/Vertical Bridge_Home2_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'1310606\',
            \'status\' => \'1\',
            \'timestamp\' => \'1464198367\',
            \'type\' => \'image\',
            \'uuid\' => \'a0d5b1aa-3bd4-4313-be63-7c932a9f2648\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'4752\',
              \'height\' => \'1610\',
            ),
            \'alt\' => NULL,
            \'title\' => NULL,
            \'width\' => \'4752\',
            \'height\' => \'1610\',
          ),
        ),
      ),
      \'field_internal_header\' => array(),
      \'field_order\' => array(
        \'und\' => array(
          array(
            \'value\' => \'4\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'0\',
      \'sticky\' => \'0\',
      \'title\' => \'Slide 4\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'home_slide\',
      \'uid\' => \'227\',
      \'uuid\' => \'2d47df5f-9a60-4e42-92a9-55fbe701a571\',
      \'vid\' => NULL,
      \'vuuid\' => \'d1d09e57-b85b-4996-a594-81e2a75c1a4f\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><em>By Alyssa Stahr with Inside Towers on September 17, 2015</em></p>\\r\\n\\r\\n<p>Vertical Bridge Holdings, a privately-owned real estate investment trust focused on the ownership of wireless communication towers, is becoming one of the fastest growing tower companies under CEO Alex Gellman’s watch, thanks to a recent $400 million tower asset acquisition portfolio of iHeartMedia and the hiring of three veteran engineers.</p>\\r\\n\\r\\n<p>According to Vertical Bridge, the transaction closed in Q1 2015 and gained Vertical Bridge approximately 2,000 revenue producing sites. With the acquisition of the portfolio came another chance to expand, and Dave Dybas, Gary Hess and Mark Stennett were brought on board to the broadcast tower team in September, April and February, respectively.</p>\\r\\n\\r\\n<p>According to a recent announcement, Hess’ newly-created role as vice president of broadcast tower leasing charges him to oversee the growth and development of Vertical Bridge’s current portfolio of approximately 600 to 700 broadcast towers. Hess was previously the manager of the Clear Channel Tower Group (now iHeart).</p>\\r\\n\\r\\n<p>“I came on in 2009, and I’m a broadcast engineer by background. Vertical started out in the deep part of the pool; they said they wanted to grow, and quite frankly, they’re on fire,” Hess said. “The acquisition is just stunning…what they’re doing every week. It reenergized me. This company is very aggressive; they get it.”</p>\\r\\n\\r\\n<p>Stennett’s role as senior broadcast engineer was newly-created due to the iHeart acquisition. He brings more than 30 years of experience overseeing technical and operational activities related to broadcast assets and clients. He will also support making broadcast assets easily available to other types of clients such as wireless carriers.</p>\\r\\n\\r\\n<p>“At the time I interviewed for the position I wasn’t certain that the company would be growing, and that seemed like a nice portfolio to take care of. Much to my pleasant surprise, they’ve been growing by leaps and bounds,” Stennett said. Dybas also has more than 30 years in the broadcast industry with AM and FM radio, which helps with some of the towers located across the country, especially in the Midwest. He said that he is trying to convince some AM broadcasters who own radio stations on leased land that they have options.</p>\\r\\n\\r\\n<p>“I’ve seen situations where AM stations have had their landlord come in and notify them that they’ve got 60 days to get off the property, and they are stuck with nowhere to go,” he said. “What they’re not aware of, and what’s sort of been a forbidden territory in the past, is the fact that some of the towers that Vertical Bridge has are well suited for an AM skirted antenna.”</p>\\r\\n\\r\\n<p>Hess continued that he thinks that’s a key point as to what sets Vertical Bridge apart from the public tower companies. “We’re willing to go a lot deeper into doing these types of things. The other broadcast tower companies kind of push off when you start dealing with AM, especially combining. We’re open and willing to do it. We have three good engineers sitting at this table, and all of us have had that experience,” Hess said. “Broadcast tower leasing is really a specialization if you will. This industry is so robust right now that the other tower companies are happy with the low hanging fruit. There’s not much we can’t do when it comes to co-location across the board.”</p>\\r\\n\\r\\n<p>Stennett said that the team is putting their heads together and are not afraid to be creative with new ways to leverage properties.</p>\\r\\n\\r\\n<p>“In addition of being able to put AMs on traditional FM and cellular towers, we’re also looking at co-locating cell sites on AM properties. And we can co-locate multiple AM stations on a single skirted tower, so everybody benefits in that situation. You start to reduce the expenses for people,” he said.</p>\\r\\n\\r\\n<p>So, what’s the difference between a cell phone tower and a broadcast tower? That’s a question for the ages, the engineers said. Stennett said that the differences are many and varied, and there are AM stations through TV stations, FM and in between with all different power levels.</p>\\r\\n\\r\\n<p>“Some of them are less than your typical cell installation, but many of them are magnitudes greater in power, so you’ve got exposure that you have to pay attention to. It’s crucial to protect workers and the environment. In the case of most AM stations the tower itself is the antenna so it’s insulated above ground; it’s usually base fed with a lot of energy so adding anything to the tower or even climbing the tower requires special care and consideration,” Stennett said. Now that Vertical Bridge’s mergers and acquisitions department is on fire, Hess sees something he hasn’t seen in a long time—a high growth company.</p>\\r\\n\\r\\n<p>“Vertical is putting new life into our industry,” he said. We’re out to do a lot of things that haven’t been done before, and that’s what I like. That’s my wheelhouse.”</p>\\r\\n\\r\\n<p><em>Vertical Bridge, founded in 2014, is headquartered in Boca Raton, Fla.</em></p>\\r\\n",
            \'summary\' => "<p><i>Inside Towers</i>, By Alyssa Stahr</p>\\r\\n\\r\\n<p>Vertical Bridge Holdings, a privately-owned real estate investment trust focused on the ownership of wireless communication towers, is becoming one of the fastest growing tower companies under CEO Alex Gellman’s watch, thanks to a recent $400 million tower asset acquisition portfolio of iHeartMedia and the hiring of three veteran engineers</p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => " <p><em>By Alyssa Stahr with Inside Towers on September 17, 2015</em></p>\\n<p>Vertical Bridge Holdings, a privately-owned real estate investment trust focused on the ownership of wireless communication towers, is becoming one of the fastest growing tower companies under CEO Alex Gellman’s watch, thanks to a recent $400 million tower asset acquisition portfolio of iHeartMedia and the hiring of three veteran engineers.</p>\\n<p>According to Vertical Bridge, the transaction closed in Q1 2015 and gained Vertical Bridge approximately 2,000 revenue producing sites. With the acquisition of the portfolio came another chance to expand, and Dave Dybas, Gary Hess and Mark Stennett were brought on board to the broadcast tower team in September, April and February, respectively.</p>\\n<p>According to a recent announcement, Hess’ newly-created role as vice president of broadcast tower leasing charges him to oversee the growth and development of Vertical Bridge’s current portfolio of approximately 600 to 700 broadcast towers. Hess was previously the manager of the Clear Channel Tower Group (now iHeart).</p>\\n<p>“I came on in 2009, and I’m a broadcast engineer by background. Vertical started out in the deep part of the pool; they said they wanted to grow, and quite frankly, they’re on fire,” Hess said. “The acquisition is just stunning…what they’re doing every week. It reenergized me. This company is very aggressive; they get it.”</p>\\n<p>Stennett’s role as senior broadcast engineer was newly-created due to the iHeart acquisition. He brings more than 30 years of experience overseeing technical and operational activities related to broadcast assets and clients. He will also support making broadcast assets easily available to other types of clients such as wireless carriers.</p>\\n<p>“At the time I interviewed for the position I wasn’t certain that the company would be growing, and that seemed like a nice portfolio to take care of. Much to my pleasant surprise, they’ve been growing by leaps and bounds,” Stennett said. Dybas also has more than 30 years in the broadcast industry with AM and FM radio, which helps with some of the towers located across the country, especially in the Midwest. He said that he is trying to convince some AM broadcasters who own radio stations on leased land that they have options.</p>\\n<p>“I’ve seen situations where AM stations have had their landlord come in and notify them that they’ve got 60 days to get off the property, and they are stuck with nowhere to go,” he said. “What they’re not aware of, and what’s sort of been a forbidden territory in the past, is the fact that some of the towers that Vertical Bridge has are well suited for an AM skirted antenna.”</p>\\n<p>Hess continued that he thinks that’s a key point as to what sets Vertical Bridge apart from the public tower companies. “We’re willing to go a lot deeper into doing these types of things. The other broadcast tower companies kind of push off when you start dealing with AM, especially combining. We’re open and willing to do it. We have three good engineers sitting at this table, and all of us have had that experience,” Hess said. “Broadcast tower leasing is really a specialization if you will. This industry is so robust right now that the other tower companies are happy with the low hanging fruit. There’s not much we can’t do when it comes to co-location across the board.”</p>\\n<p>Stennett said that the team is putting their heads together and are not afraid to be creative with new ways to leverage properties.</p>\\n<p>“In addition of being able to put AMs on traditional FM and cellular towers, we’re also looking at co-locating cell sites on AM properties. And we can co-locate multiple AM stations on a single skirted tower, so everybody benefits in that situation. You start to reduce the expenses for people,” he said.</p>\\n<p>So, what’s the difference between a cell phone tower and a broadcast tower? That’s a question for the ages, the engineers said. Stennett said that the differences are many and varied, and there are AM stations through TV stations, FM and in between with all different power levels.</p>\\n<p>“Some of them are less than your typical cell installation, but many of them are magnitudes greater in power, so you’ve got exposure that you have to pay attention to. It’s crucial to protect workers and the environment. In the case of most AM stations the tower itself is the antenna so it’s insulated above ground; it’s usually base fed with a lot of energy so adding anything to the tower or even climbing the tower requires special care and consideration,” Stennett said. Now that Vertical Bridge’s mergers and acquisitions department is on fire, Hess sees something he hasn’t seen in a long time—a high growth company.</p>\\n<p>“Vertical is putting new life into our industry,” he said. We’re out to do a lot of things that haven’t been done before, and that’s what I like. That’s my wheelhouse.”</p>\\n<p><em>Vertical Bridge, founded in 2014, is headquartered in Boca Raton, Fla.</em></p>\\n ",
            \'safe_summary\' => " <p><i>Inside Towers</i>, By Alyssa Stahr</p>\\n<p>Vertical Bridge Holdings, a privately-owned real estate investment trust focused on the ownership of wireless communication towers, is becoming one of the fastest growing tower companies under CEO Alex Gellman’s watch, thanks to a recent $400 million tower asset acquisition portfolio of iHeartMedia and the hiring of three veteran engineers</p>\\n ",
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'field_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015-09-17 13:15:00\',
            \'timezone\' => \'America/New_York\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_external_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'https://insidetowers.com/quite-frankly-theyre-on-fire/\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_internal_header\' => array(),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Vertical Bridge is Burning Up\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'press_release\',
      \'uid\' => \'227\',
      \'uuid\' => \'32cf8259-af57-4966-9451-3f64c4da494b\',
      \'vid\' => NULL,
      \'vuuid\' => \'cebe3632-56d5-40ce-a9e0-f5c6d2e70c65\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><strong>The VB Experience</strong></p>\\r\\n\\r\\n<p>If you are ready for opportunity and an exciting career, you have found the right place. If you have the desire to contribute to the continued success of a high-growth company, consider joining VB.&nbsp;VB provides a fast paced and flexible work environment. You\'ll have a chance to do more, experience new things, expand your skills and develop an incredible career.</p>\\r\\n\\r\\n<p><strong>The Company</strong></p>\\r\\n\\r\\n<p>VB is a growth company with career opportunities at our Boca Raton, Florida headquarters and various remote locations. By hiring the most qualified people for open positions, we have created an organization with the depth and breadth of talent and experience producing a market leader in the tower and telecom site sector.</p>\\r\\n\\r\\n<p><strong>The Culture at VB</strong></p>\\r\\n\\r\\n<p>Our culture is informal but we work hard and we have high standards in all that we do. We understand that our employees are our greatest asset and that they make VB a great company and an exciting place to work.</p>\\r\\n\\r\\n<p><strong><span lang=\\"EN\\" style=\\"font-family: Arial, sans-serif;\\">Diversity at VB</span></strong><span lang=\\"EN\\" style=\\"font-family: Arial, sans-serif;\\"><o:p></o:p></span></p>\\r\\n\\r\\n<p style=\\"text-align:justify\\"><span lang=\\"EN\\" style=\\"font-family: Arial, sans-serif;\\">Vertical Bridge is committed to a policy of equal employment and will not discriminate against an applicant or employee. Vertical Bridge is an Equal Employment Opportunity Employer M/F/D/V.<o:p></o:p></span></p>\\r\\n\\r\\n<p><strong>Current Opportunities</strong></p>\\r\\n\\r\\n<p>We are always looking for talented individuals who are seeking exciting challenges. To apply for an open position, send your resume to <a href=\\"mailto:careers@verticalbridge.com\\">careers@verticalbridge.com</a>.</p>\\r\\n\\r\\n<p>&nbsp;</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p><strong>The VB Experience</strong></p>\\n<p>If you are ready for opportunity and an exciting career, you have found the right place. If you have the desire to contribute to the continued success of a high-growth company, consider joining VB. VB provides a fast paced and flexible work environment. You\'ll have a chance to do more, experience new things, expand your skills and develop an incredible career.</p>\\n<p><strong>The Company</strong></p>\\n<p>VB is a growth company with career opportunities at our Boca Raton, Florida headquarters and various remote locations. By hiring the most qualified people for open positions, we have created an organization with the depth and breadth of talent and experience producing a market leader in the tower and telecom site sector.</p>\\n<p><strong>The Culture at VB</strong></p>\\n<p>Our culture is informal but we work hard and we have high standards in all that we do. We understand that our employees are our greatest asset and that they make VB a great company and an exciting place to work.</p>\\n<p><strong><span lang=\\"EN\\" style=\\"font-family: Arial, sans-serif;\\" xml:lang=\\"EN\\">Diversity at VB</span></strong><span lang=\\"EN\\" style=\\"font-family: Arial, sans-serif;\\" xml:lang=\\"EN\\"><p></p></span></p>\\n<p style=\\"text-align:justify\\"><span lang=\\"EN\\" style=\\"font-family: Arial, sans-serif;\\" xml:lang=\\"EN\\">Vertical Bridge is committed to a policy of equal employment and will not discriminate against an applicant or employee. Vertical Bridge is an Equal Employment Opportunity Employer M/F/D/V.<p></p></span></p>\\n<p><strong>Current Opportunities</strong></p>\\n<p>We are always looking for talented individuals who are seeking exciting challenges. To apply for an open position, send your resume to <a href=\\"mailto:careers@verticalbridge.com\\">careers@verticalbridge.com</a>.</p>\\n<p> </p>\\n ",
            \'safe_summary\' => \'  \',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'field_cta_button\' => array(),
      \'field_cta_content\' => array(),
      \'field_internal_header\' => array(),
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'metatags\' => array(
        \'en\' => array(
          \'title\' => array(
            \'value\' => \'Careers | Vertical Bridge\',
          ),
          \'description\' => array(
            \'value\' => \'VB is a growth company with career opportunities at our Boca Raton, Florida offices. By hiring the most qualified people for open positions, we have created an organization with the depth and breadth of talent and experience producing a market leader in the tower and telecom site sector.\',
          ),
        ),
      ),
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(
        array(
          \'pnid\' => \'1\',
          \'menu_name\' => \'navigation\',
          \'mlid\' => \'619\',
          \'plid\' => \'498\',
          \'link_path\' => \'node/16\',
          \'router_path\' => \'node/%\',
          \'link_title\' => \'Careers\',
          \'options\' => array(
            \'attributes\' => array(
              \'title\' => \'\',
            ),
          ),
          \'module\' => \'nodehierarchy\',
          \'hidden\' => \'1\',
          \'external\' => \'0\',
          \'has_children\' => \'0\',
          \'expanded\' => \'0\',
          \'weight\' => \'4\',
          \'depth\' => \'2\',
          \'customized\' => \'0\',
          \'p1\' => \'498\',
          \'p2\' => \'619\',
          \'p3\' => \'0\',
          \'p4\' => \'0\',
          \'p5\' => \'0\',
          \'p6\' => \'0\',
          \'p7\' => \'0\',
          \'p8\' => \'0\',
          \'p9\' => \'0\',
          \'updated\' => \'0\',
          \'language\' => \'und\',
          \'i18n_tsid\' => \'0\',
          \'enabled\' => FALSE,
          \'nid\' => \'16\',
        ),
      ),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Careers\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'page\',
      \'uid\' => \'227\',
      \'uuid\' => \'34b72e7a-228f-4d1b-91cf-55339fa9d960\',
      \'vid\' => NULL,
      \'vuuid\' => \'a5795b40-4c19-41fe-b70f-7de710518aea\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><img alt=\\"\\" class=\\"media-image attr__typeof__foaf:Image img__fid__26 img__view_mode__media_large attr__format__media_large\\" src=\\"/sites/default/files/Bernard%20Borghei.jpg\\" style=\\"margin-right: 5px; padding: 5px; width: 180px; border-width: 0px; border-style: solid; float: left;\\" typeof=\\"foaf:Image\\" /></p>\\r\\n\\r\\n<p>Bernard Borghei is the Co-Founder and Senior Vice President, Operations of Vertical Bridge. He is responsible for Vertical Bridge’s daily operations, regulatory compliance, vendor management, engineering services, and human resources.<br />\\r\\n<br />\\r\\nBorghei has over 22 years of experience in wireless industries and before co-founding Vertical Bridge, he served as Senior Vice President and Partner at Global Tower Partners (GTP), where he oversaw domestic and international market operations, including a portfolio of more than 6,500 towers and 12,000 managed properties.<br />\\r\\n<br />\\r\\nBorghei has also held executive and senior management positions in operations, engineering, sales, supply chain, site development, and customer care at several wireless operators and service providers including SkyBitz, Wireless Facilities, Inc. Western Wireless International, and at Triton PCS where he successfully ran operations across 24 different countries in Europe, the Middle East, Africa, North and South America.<br />\\r\\n<br />\\r\\nBernard has a Bachelor’s degree in electrical engineering from Villanova University and an MBA in global management from the University of Phoenix.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p><img alt=\\"\\" class=\\"media-image attr__typeof__foaf:Image img__fid__26 img__view_mode__media_large attr__format__media_large\\" src=\\"/sites/default/files/Bernard%20Borghei.jpg\\" style=\\"margin-right: 5px; padding: 5px; width: 180px; border-width: 0px; border-style: solid; float: left;\\" typeof=\\"foaf:Image\\" /></p>\\n<p>Bernard Borghei is the Co-Founder and Senior Vice President, Operations of Vertical Bridge. He is responsible for Vertical Bridge’s daily operations, regulatory compliance, vendor management, engineering services, and human resources.</p>\\n<p>Borghei has over 22 years of experience in wireless industries and before co-founding Vertical Bridge, he served as Senior Vice President and Partner at Global Tower Partners (GTP), where he oversaw domestic and international market operations, including a portfolio of more than 6,500 towers and 12,000 managed properties.</p>\\n<p>Borghei has also held executive and senior management positions in operations, engineering, sales, supply chain, site development, and customer care at several wireless operators and service providers including SkyBitz, Wireless Facilities, Inc. Western Wireless International, and at Triton PCS where he successfully ran operations across 24 different countries in Europe, the Middle East, Africa, North and South America.</p>\\n<p>Bernard has a Bachelor’s degree in electrical engineering from Villanova University and an MBA in global management from the University of Phoenix.</p>\\n ",
            \'safe_summary\' => \'  \',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'field_internal_header\' => array(),
      \'field_linkedin\' => array(),
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'metatags\' => array(
        \'en\' => array(
          \'title\' => array(
            \'value\' => \'Bernard Borghei - Senior VP Operations & Cofounder | Vertical Bridge\',
          ),
          \'description\' => array(
            \'value\' => \'Bernard Borghei is the Senior Vice President and co-founder of Vertical Bridge. Prior to joining Vertical Bridge Bernard was the Senior Vice President of Operations at Global Tower Partners where he was responsible for all aspects of domestic and international site management, engineering, regulatory compliance, and GTP’s international build to suit program.\',
          ),
        ),
      ),
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Bernard Borghei\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'team_member\',
      \'uid\' => \'227\',
      \'uuid\' => \'34e4b104-b6bf-4d18-bd57-30ab05c7efdb\',
      \'vid\' => NULL,
      \'vuuid\' => \'92a83fc8-2366-4267-98f4-06652f50b575\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<article about=\\"/news/vertical-bridge-reaches-agreement-welltower-add-medical-office-building-sites-managed-portfolio\\" role=\\"article\\" typeof=\\"sioc:Item foaf:Document\\">\\r\\n<p><em>Portfolio of more than 42,000 site locations in support of wireless network deployment in the U.S.</em></p>\\r\\n\\r\\n<p><strong>Boca Raton, FL (PRWEB) January 19, 2016 -</strong>&nbsp;Vertical Bridge, the largest private owner and manager of wireless communication infrastructure in the U.S., today announced it has entered into an agreement to manage and market wireless deployment sites at 250 medical office buildings owned by Welltower Inc. Terms of the transaction were not disclosed.</p>\\r\\n\\r\\n<p>Since January 2015, Vertical Bridge has entered into partnership agreements with leading media and real estate companies such as Hudson Pacific, Love’s, iHeartMedia, Inc., Clear Channel Outdoor Americas, Townsquare Media, CiG Wireless Corp., U.S. Cellular and Nsight Tower Holdings, LLC.</p>\\r\\n\\r\\n<p>Vertical Bridge has a portfolio of more than 42,000 owned and/or managed sites including billboard, tower, rooftop, utility attachments and other site locations. These locations are geographically dispersed across urban, suburban, traffic corridor and rural areas to enable capacity increases for mobile services and enhance the user experience.</p>\\r\\n\\r\\n<p>“The attractive Welltower sites offer numerous possibilities for small cells, macro sites, rooftop installations and some possible tower opportunities,” said Alex Gellman, Chief Executive Officer of Vertical Bridge. “We admire their investment and portfolio strategy, and feel fortunate to partner with them to enhance wireless communication infrastructure in the areas surrounding their properties. We continue to seek opportunities to expand our portfolio, and to help our partners leverage their assets while meeting the evolving needs of today’s mobile, digital and social media consumers.”</p>\\r\\n\\r\\n<p><strong>About Vertical Bridge&nbsp;</strong></p>\\r\\n\\r\\n<p>Vertical Bridge is the largest private owner and manager of wireless communication infrastructure in the United States. The company owns, operates and manages over 42,000 tower, rooftop, billboard, utility attachment and other site locations in support of all wireless network deployments. Based in Boca Raton, Florida, Vertical Bridge was founded in 2014 by key executives from Digital Bridge Holdings, LLC and former senior officers of Global Tower Partners. The senior management team at Vertical Bridge has over 150 years of collective experience in tower infrastructure and related sectors. For more information, please visit&nbsp;<a href=\\"http://www.verticalbridge.com/\\">http://www.verticalbridge.com</a>.</p>\\r\\n\\r\\n<p><strong>About Welltower</strong></p>\\r\\n\\r\\n<p>Welltower Inc., an S&amp;P 500 company headquartered in Toledo, Ohio, is driving the transformation of health care infrastructure. The company invests with leading seniors housing operators, post-acute providers and health systems to fund the real estate infrastructure needed to scale innovative care delivery models and improve people\'s wellness and overall health care experience. Welltower™, a real estate investment trust (REIT), owns more than 1,400 properties in major, high-growth markets in the United States, Canada and the United Kingdom, consisting of seniors housing and post-acute communities and outpatient medical properties. More information is available at&nbsp;<a href=\\"http://www.welltower.com/\\">http://www.welltower.com</a>.</p>\\r\\n</article>\\r\\n\\r\\n<footer role=\\"contentinfo\\">\\r\\n<nav id=\\"block-menu-menu-footer-menu\\" role=\\"navigation\\">&nbsp;</nav>\\r\\n</footer>\\r\\n",
            \'summary\' => "<p>Vertical Bridge, the largest private owner and manager of wireless communication infrastructure in the U.S., today announced it has entered into an agreement to manage and market wireless deployment sites at 250 medical office buildings owned by Welltower Inc.</p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => " <p><article about=\\"/news/vertical-bridge-reaches-agreement-welltower-add-medical-office-building-sites-managed-portfolio\\" role=\\"article\\" typeof=\\"sioc:Item foaf:Document\\"></article></p>\\n<p><em>Portfolio of more than 42,000 site locations in support of wireless network deployment in the U.S.</em></p>\\n<p><strong>Boca Raton, FL (PRWEB) January 19, 2016 -</strong> Vertical Bridge, the largest private owner and manager of wireless communication infrastructure in the U.S., today announced it has entered into an agreement to manage and market wireless deployment sites at 250 medical office buildings owned by Welltower Inc. Terms of the transaction were not disclosed.</p>\\n<p>Since January 2015, Vertical Bridge has entered into partnership agreements with leading media and real estate companies such as Hudson Pacific, Love’s, iHeartMedia, Inc., Clear Channel Outdoor Americas, Townsquare Media, CiG Wireless Corp., U.S. Cellular and Nsight Tower Holdings, LLC.</p>\\n<p>Vertical Bridge has a portfolio of more than 42,000 owned and/or managed sites including billboard, tower, rooftop, utility attachments and other site locations. These locations are geographically dispersed across urban, suburban, traffic corridor and rural areas to enable capacity increases for mobile services and enhance the user experience.</p>\\n<p>“The attractive Welltower sites offer numerous possibilities for small cells, macro sites, rooftop installations and some possible tower opportunities,” said Alex Gellman, Chief Executive Officer of Vertical Bridge. “We admire their investment and portfolio strategy, and feel fortunate to partner with them to enhance wireless communication infrastructure in the areas surrounding their properties. We continue to seek opportunities to expand our portfolio, and to help our partners leverage their assets while meeting the evolving needs of today’s mobile, digital and social media consumers.”</p>\\n<p><strong>About Vertical Bridge </strong></p>\\n<p>Vertical Bridge is the largest private owner and manager of wireless communication infrastructure in the United States. The company owns, operates and manages over 42,000 tower, rooftop, billboard, utility attachment and other site locations in support of all wireless network deployments. Based in Boca Raton, Florida, Vertical Bridge was founded in 2014 by key executives from Digital Bridge Holdings, LLC and former senior officers of Global Tower Partners. The senior management team at Vertical Bridge has over 150 years of collective experience in tower infrastructure and related sectors. For more information, please visit <a href=\\"http://www.verticalbridge.com/\\">http://www.verticalbridge.com</a>.</p>\\n<p><strong>About Welltower</strong></p>\\n<p>Welltower Inc., an S&amp;P 500 company headquartered in Toledo, Ohio, is driving the transformation of health care infrastructure. The company invests with leading seniors housing operators, post-acute providers and health systems to fund the real estate infrastructure needed to scale innovative care delivery models and improve people\'s wellness and overall health care experience. Welltower™, a real estate investment trust (REIT), owns more than 1,400 properties in major, high-growth markets in the United States, Canada and the United Kingdom, consisting of seniors housing and post-acute communities and outpatient medical properties. More information is available at <a href=\\"http://www.welltower.com/\\">http://www.welltower.com</a>.</p>\\n<p></p>\\n<p><footer role=\\"contentinfo\\"><br /><nav id=\\"block-menu-menu-footer-menu\\" role=\\"navigation\\"> </nav><br /></footer></p>\\n ",
            \'safe_summary\' => " <p>Vertical Bridge, the largest private owner and manager of wireless communication infrastructure in the U.S., today announced it has entered into an agreement to manage and market wireless deployment sites at 250 medical office buildings owned by Welltower Inc.</p>\\n ",
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'field_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2016-01-19 18:15:00\',
            \'timezone\' => \'America/New_York\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_internal_header\' => array(),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Vertical Bridge Reaches Agreement with Welltower To Add Medical Office Building Sites to Managed Portfolio\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'press\',
      \'uid\' => \'227\',
      \'uuid\' => \'356881c8-35ae-4b13-b0f8-1dd93057cbf1\',
      \'vid\' => NULL,
      \'vuuid\' => \'132a598e-8f71-459a-bf3e-aa005313c2a1\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><strong>Company Converts to Lease Arrangement To Continue To Use Those Towers To Broadcast Its Radio Stations </strong></p>\\r\\n\\r\\n<p><strong>December 11, 2014 – New York, NY</strong> – iHeartMedia, Inc. (OTCBB: IHRT), one of the leading global media and entertainment companies, announced today the sale of a select portfolio of its tower assets toVertical Bridge for up to $400 million. The transaction is subject to due diligence and other customary closing conditions.</p>\\r\\n\\r\\n<p>The transaction is expected to close in Q1 2015. There will be no impact on the company’s broadcast capabilities and operations; at closing, the company will enter into a lease with respect to the sold tower assets that will ensure the ability of its broadcast operations to continue without interruption. The company also advised that investors should expect incremental lease expense as a result of the transaction.</p>\\r\\n\\r\\n<p>“This is a great example of how we continue to optimize our balance sheet and maximize liquidity -- and how we continually review our entire portfolio of assets to ensure we operate them in the most efficient way possible and invest our resources in the highest return opportunities,” said Richard J. Bressler, President and Chief Financial Officer of iHeartMedia, Inc.</p>\\r\\n\\r\\n<p>“We are excited to add this high quality tower portfolio to our existing assets,” said Alexander L. Gellman, CEO of Vertical Bridge Holdings, LLC. “We are looking forward to a strong partnership with iHeartMedia. In addition to being a premier broadcast portfolio, these sites already have many broadband telephony and data tenants and the capacity and potential to add many more. With this latest transaction, Vertical Bridge now has approximately 2000 revenue producing sites that are owned or under definitive agreement.”</p>\\r\\n\\r\\n<p><strong>About iHeartMedia, Inc./iHeartCommunications, Inc.</strong><br />\\r\\niHeartMedia, Inc (OTCBB: IHRT), the parent company of iHeartCommunications, Inc., is one of the leading global media and entertainment companies. The company specializes in radio, digital, outdoor,mobile, social, live events, on-demand entertainment and information services for local communities, and uses its unparalleled national reach to target both nationally and locally on behalf of its advertising partners. The company is dedicated to using the latest technology solutions to transform the company’s products and services for the benefit of its consumers, communities, partners and advertisers, and its outdoor business reaches over 40 countries across five continents, connecting people to brands using innovative new technology.</p>\\r\\n\\r\\n<p><strong>About Vertical Bridge Holdings, LLC </strong><br />\\r\\nVertical Bridge Holdings is a privately-owned real estate investment trust focused on the ownership of wireless communication towers in the U.S. The company owns, operates and manages telecommunications towers, rooftops, and site locations across the country. Vertical Bridge was founded in 2014 by Digital Bridge Holdings, LLC as well as certain key executives from Global Tower Partners and is headquartered in Boca Raton, Florida. For more information,please visit www.verticalbridge.com or call Traci Clancy at 561-948-6367.</p>\\r\\n",
            \'summary\' => "<p>Company Converts to Lease Arrangement To Continue To Use Those Towers To Broadcast Its Radio Stations December 11, 2014 – New York, NY – iHeartMedia, Inc. (OTCBB: IHRT), one of the leading global media and entertainment companies, announced today the sale of a select portfolio of its tower assets toVertical Bridge for up to $400 million. The transaction is subject to due diligence and other customary closing conditions.</p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => " <p><strong>Company Converts to Lease Arrangement To Continue To Use Those Towers To Broadcast Its Radio Stations </strong></p>\\n<p><strong>December 11, 2014 – New York, NY</strong> – iHeartMedia, Inc. (OTCBB: IHRT), one of the leading global media and entertainment companies, announced today the sale of a select portfolio of its tower assets toVertical Bridge for up to $400 million. The transaction is subject to due diligence and other customary closing conditions.</p>\\n<p>The transaction is expected to close in Q1 2015. There will be no impact on the company’s broadcast capabilities and operations; at closing, the company will enter into a lease with respect to the sold tower assets that will ensure the ability of its broadcast operations to continue without interruption. The company also advised that investors should expect incremental lease expense as a result of the transaction.</p>\\n<p>“This is a great example of how we continue to optimize our balance sheet and maximize liquidity -- and how we continually review our entire portfolio of assets to ensure we operate them in the most efficient way possible and invest our resources in the highest return opportunities,” said Richard J. Bressler, President and Chief Financial Officer of iHeartMedia, Inc.</p>\\n<p>“We are excited to add this high quality tower portfolio to our existing assets,” said Alexander L. Gellman, CEO of Vertical Bridge Holdings, LLC. “We are looking forward to a strong partnership with iHeartMedia. In addition to being a premier broadcast portfolio, these sites already have many broadband telephony and data tenants and the capacity and potential to add many more. With this latest transaction, Vertical Bridge now has approximately 2000 revenue producing sites that are owned or under definitive agreement.”</p>\\n<p><strong>About iHeartMedia, Inc./iHeartCommunications, Inc.</strong><br />\\niHeartMedia, Inc (OTCBB: IHRT), the parent company of iHeartCommunications, Inc., is one of the leading global media and entertainment companies. The company specializes in radio, digital, outdoor,mobile, social, live events, on-demand entertainment and information services for local communities, and uses its unparalleled national reach to target both nationally and locally on behalf of its advertising partners. The company is dedicated to using the latest technology solutions to transform the company’s products and services for the benefit of its consumers, communities, partners and advertisers, and its outdoor business reaches over 40 countries across five continents, connecting people to brands using innovative new technology.</p>\\n<p><strong>About Vertical Bridge Holdings, LLC </strong><br />\\nVertical Bridge Holdings is a privately-owned real estate investment trust focused on the ownership of wireless communication towers in the U.S. The company owns, operates and manages telecommunications towers, rooftops, and site locations across the country. Vertical Bridge was founded in 2014 by Digital Bridge Holdings, LLC as well as certain key executives from Global Tower Partners and is headquartered in Boca Raton, Florida. For more information,please visit <a href=\\"http://www.verticalbridge.com\\">www.verticalbridge.com</a> or call Traci Clancy at 561-948-6367.</p>\\n ",
            \'safe_summary\' => " <p>Company Converts to Lease Arrangement To Continue To Use Those Towers To Broadcast Its Radio Stations December 11, 2014 – New York, NY – iHeartMedia, Inc. (OTCBB: IHRT), one of the leading global media and entertainment companies, announced today the sale of a select portfolio of its tower assets toVertical Bridge for up to $400 million. The transaction is subject to due diligence and other customary closing conditions.</p>\\n ",
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'field_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-12-11 19:15:00\',
            \'timezone\' => \'America/New_York\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_internal_header\' => array(),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'iHeartMedia, Inc. Announces Sale of a Select Portfolio of Its Radio Towers to Vertical Bridge for $400 Million\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'press\',
      \'uid\' => \'227\',
      \'uuid\' => \'37397d80-9b3c-46f2-861a-46c952ebff62\',
      \'vid\' => NULL,
      \'vuuid\' => \'a4ab394a-6597-462b-a43e-225bdd0ec79b\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<ul>\\r\\n\\t<li>Acquisitions marks tenth transaction in less than three months</li>\\r\\n\\t<li>Industry veteran Jim McCulloch to lead real estate division</li>\\r\\n</ul>\\r\\n\\r\\n<p><strong>Boca Raton, FL., August, 2014</strong> - Vertical Bridge Holdings, LLC., a privately owned tower company in the U.S., today announced that it has completed its acquisition of four tower portfolios.&nbsp; The portfolios further strengthen Vertical Bridge’s footprint in key regions of the Eastern United States.</p>\\r\\n\\r\\n<p>“We are pleased to announce another acquisition of tower portfolios,” said Alexander L. Gellman, CEO and Co-Founder, Vertical Bridge. “The Eastern U.S. is an attractive market for towers given its heavily congested metropolitan areas and the need for cell site densification. We have acquired four more portfolios of strategically located towers.&nbsp; We expect to continue to build upon this acquisition momentum and see a number of opportunities as we continue to pursue strategic portfolio acquisitions,” said Mr. Gellman.</p>\\r\\n\\r\\n<p>Vertical Bridge now owns or has exclusive leasing rights to 320 towers and rooftops across the U.S.</p>\\r\\n\\r\\n<p>Vertical Bridge also announced today the appointment of telecom industry veteran, Jim McCulloch, who has joined Vertical Bridge as Vice President of its Real Estate division. In this role, Mr. McCullough will lead the development and expansion of Vertical Bridge’s real estate portfolio.&nbsp; With over 20 years of experience, Mr. McCulloch has enjoyed a successful career in telecommunications and technology. Mr. McCulloch was most recently at Global Tower Partners (GTP), where he served as the Vice President of Real Estate responsible for GTP’s Real Estate Department.&nbsp; In that role he helped to develop GTP’s real estate portfolio, and expand existing landlord relationships. Prior to GTP, he was a partner in DGP Development, a leading provider of Distributed Antenna Systems (DAS) to hotels and sports stadiums. Mr. McCulloch previously served as Vice President of Information Technology for Destination Hotels and Resorts.</p>\\r\\n\\r\\n<p>“We are delighted that an experienced executive such as Jim has joined our team to lead our real estate division, which is a key focus area of our business strategy and growth at Vertical Bridge,” added Mr. Gellman.</p>\\r\\n\\r\\n<p><strong>About Vertical Bridge Holdings, LLC.</strong></p>\\r\\n\\r\\n<p>Vertical Bridge Holdings is a privately-owned tower company in the US headquartered in Boca Raton, Florida. The company focuses on owning, operating, and managing telecommunications towers, rooftops, and site locations across the country. Vertical Bridge was founded in 2014 by Digital Bridge Holdings, LLC as well as certain key executives from Global Tower Partners.&nbsp; For more information please visit <a href=\\"http://www.verticalbridge.com/\\"><u>www.verticalbridge.com</u></a> or call: Traci Clancy at 561-948-6367.</p>\\r\\n\\r\\n<p><strong>About Digital Bridge Holdings, LLC.</strong></p>\\r\\n\\r\\n<p>Digital Bridge Holdings, is a communications infrastructure platform based in Boca Raton, Florida. It was formed in 2013 through a partnership between Ben Jenkins (formerly of The Blackstone Group) and Marc Ganzi (former founder and CEO of Global Tower Partners). Digital Bridge owns interests in a broad range of communications infrastructure companies. It is dedicated to long-term value creation through the active management of its companies and strong alignment with its investor partners. Digital Bridge manages investments on behalf of institutional, corporate, endowment and family offices around the world.&nbsp; More information may be found at <a href=\\"http://www.digitalbridgellc.com/\\"><u>www.digitalbridgellc.com</u></a>.</p>\\r\\n",
            \'summary\' => "<p><strong>Boca Raton, FL., August, 2014</strong> - Vertical Bridge Holdings, LLC., a privately owned tower company in the U.S., today announced that it has completed its acquisition of four tower portfolios.&nbsp; The portfolios further strengthen Vertical Bridge’s footprint in key regions of the Eastern United States.</p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => " <ul><li>Acquisitions marks tenth transaction in less than three months</li>\\n<li>Industry veteran Jim McCulloch to lead real estate division</li>\\n</ul><p><strong>Boca Raton, FL., August, 2014</strong> - Vertical Bridge Holdings, LLC., a privately owned tower company in the U.S., today announced that it has completed its acquisition of four tower portfolios.  The portfolios further strengthen Vertical Bridge’s footprint in key regions of the Eastern United States.</p>\\n<p>“We are pleased to announce another acquisition of tower portfolios,” said Alexander L. Gellman, CEO and Co-Founder, Vertical Bridge. “The Eastern U.S. is an attractive market for towers given its heavily congested metropolitan areas and the need for cell site densification. We have acquired four more portfolios of strategically located towers.  We expect to continue to build upon this acquisition momentum and see a number of opportunities as we continue to pursue strategic portfolio acquisitions,” said Mr. Gellman.</p>\\n<p>Vertical Bridge now owns or has exclusive leasing rights to 320 towers and rooftops across the U.S.</p>\\n<p>Vertical Bridge also announced today the appointment of telecom industry veteran, Jim McCulloch, who has joined Vertical Bridge as Vice President of its Real Estate division. In this role, Mr. McCullough will lead the development and expansion of Vertical Bridge’s real estate portfolio.  With over 20 years of experience, Mr. McCulloch has enjoyed a successful career in telecommunications and technology. Mr. McCulloch was most recently at Global Tower Partners (GTP), where he served as the Vice President of Real Estate responsible for GTP’s Real Estate Department.  In that role he helped to develop GTP’s real estate portfolio, and expand existing landlord relationships. Prior to GTP, he was a partner in DGP Development, a leading provider of Distributed Antenna Systems (DAS) to hotels and sports stadiums. Mr. McCulloch previously served as Vice President of Information Technology for Destination Hotels and Resorts.</p>\\n<p>“We are delighted that an experienced executive such as Jim has joined our team to lead our real estate division, which is a key focus area of our business strategy and growth at Vertical Bridge,” added Mr. Gellman.</p>\\n<p><strong>About Vertical Bridge Holdings, LLC.</strong></p>\\n<p>Vertical Bridge Holdings is a privately-owned tower company in the US headquartered in Boca Raton, Florida. The company focuses on owning, operating, and managing telecommunications towers, rooftops, and site locations across the country. Vertical Bridge was founded in 2014 by Digital Bridge Holdings, LLC as well as certain key executives from Global Tower Partners.  For more information please visit <a href=\\"http://www.verticalbridge.com/\\"><u>www.verticalbridge.com</u></a> or call: Traci Clancy at 561-948-6367.</p>\\n<p><strong>About Digital Bridge Holdings, LLC.</strong></p>\\n<p>Digital Bridge Holdings, is a communications infrastructure platform based in Boca Raton, Florida. It was formed in 2013 through a partnership between Ben Jenkins (formerly of The Blackstone Group) and Marc Ganzi (former founder and CEO of Global Tower Partners). Digital Bridge owns interests in a broad range of communications infrastructure companies. It is dedicated to long-term value creation through the active management of its companies and strong alignment with its investor partners. Digital Bridge manages investments on behalf of institutional, corporate, endowment and family offices around the world.  More information may be found at <a href=\\"http://www.digitalbridgellc.com/\\"><u>www.digitalbridgellc.com</u></a>.</p>\\n ",
            \'safe_summary\' => " <p><strong>Boca Raton, FL., August, 2014</strong> - Vertical Bridge Holdings, LLC., a privately owned tower company in the U.S., today announced that it has completed its acquisition of four tower portfolios.  The portfolios further strengthen Vertical Bridge’s footprint in key regions of the Eastern United States.</p>\\n ",
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'field_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-08-05 20:30:00\',
            \'timezone\' => \'America/New_York\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_internal_header\' => array(),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Vertical Bridge Holdings, LLC. Continues Portfolio Expansion; Appoints New Head of Real Estate\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'press\',
      \'uid\' => \'227\',
      \'uuid\' => \'3752082b-d98a-444c-a41e-59f48e6fca3a\',
      \'vid\' => NULL,
      \'vuuid\' => \'535b7b52-5660-4ff0-9aaf-097bb87d4ff5\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<ul>\\r\\n\\t<li>Significant equity investment by Digital Bridge Holdings, The Jordan Company and The Edgewater Funds</li>\\r\\n\\t<li>Senior credit facility led by TD Securities and &nbsp;Deutsche Bank</li>\\r\\n\\t<li>New capital to fuel future M&amp;A and tower development.</li>\\r\\n</ul>\\r\\n\\r\\n<p><strong>Boca Raton, FL., September, 2014</strong> - Vertical Bridge Holdings, LLC, a privately owned tower company, today announced that it has secured over $500 million of incremental capital to support its acquisition and new tower build programs and growth strategy. &nbsp;</p>\\r\\n\\r\\n<p>“Vertical Bridge has secured significant additional capital to fund our M&amp;A, new tower development and operational needs. We have invested over $100 million already and will continue our rapid growth in partnership with Digital Bridge, The Jordan Company and Edgewater” said Alexander L. Gellman, CEO and Co-Founder of Vertical Bridge. Committed capital includes significant new commitments from The Jordan Company, The Edgewater Funds and additional capital from Digital Bridge Holdings, LLC, which led the fund raising process on behalf of Vertical Bridge through its Digital Bridge US Tower Holdings subsidiary.</p>\\r\\n\\r\\n<p>Marc Ganzi, CEO of Digital Bridge commented: “This investment marks Digital Bridge’s third investment in telecommunications infrastructure this year. We are excited about working with the Vertical Bridge team, many of whom are GTP veterans and have two decades of a proven track record of success in the sector. We are very bullish on the US tower space and feel that the VB team is well positioned to assist our wireless carrier partners in the deployment of their future network needs.”</p>\\r\\n\\r\\n<p>Eion Hu, Senior Partner at The Jordan Company, added: “We are delighted to partner with the Digital Bridge and Vertical Bridge teams. We see a long term capital formation opportunity in the U.S. tower market, and the opportunity to invest in Vertical Bridge fits our investment thesis of backing best in class management teams in high growth sectors.”</p>\\r\\n\\r\\n<p>Vertical Bridge also announced that it has closed on a $270 million dollar senior credit facility led by TD Securities and Deutsche Bank as part of this recent round of capital formation</p>\\r\\n\\r\\n<p><strong>About Vertical Bridge Holdings, LLC.</strong></p>\\r\\n\\r\\n<p>Vertical Bridge Holdings is a privately-owned tower company in the US headquartered in Boca Raton, Florida. The company focuses on owning, operating, and managing telecommunications towers, rooftops, and site locations across the country. Vertical Bridge was founded in 2014 by Digital Bridge Holdings, LLC as well as certain key executives from Global Tower Partners.&nbsp; For more information please visit <a href=\\"http://www.verticalbridge.com/\\"><u>www.verticalbridge.com</u></a> or call: Traci Clancy at 561-948-6367</p>\\r\\n\\r\\n<p><strong>About Digital Bridge Holdings, LLC.</strong></p>\\r\\n\\r\\n<p>Digital Bridge Holdings, is a communications infrastructure platform based in Boca Raton, Florida. It was formed in 2013 through a partnership between Ben Jenkins (formerly of The Blackstone Group) and Marc Ganzi (former founder and CEO of Global Tower Partners). Digital Bridge owns interests in a broad range of communications infrastructure companies. It is dedicated to long-term value creation through the active management of its companies and strong alignment with its investor partners. Digital Bridge manages investments on behalf of institutional, corporate, endowment and family offices around the world.&nbsp; More information may be found at <a href=\\"http://www.digitalbridgellc.com/\\"><u>www.digitalbridgellc.com</u></a>.</p>\\r\\n\\r\\n<p>&nbsp;</p>\\r\\n",
            \'summary\' => "<p><strong>Boca Raton, FL., September, 2014</strong> - Vertical Bridge Holdings, LLC, a privately owned tower company, today announced that it has secured over $500 million of incremental capital to support its acquisition and new tower build programs and growth strategy. &nbsp;</p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => " <ul><li>Significant equity investment by Digital Bridge Holdings, The Jordan Company and The Edgewater Funds</li>\\n<li>Senior credit facility led by TD Securities and  Deutsche Bank</li>\\n<li>New capital to fuel future M&amp;A and tower development.</li>\\n</ul><p><strong>Boca Raton, FL., September, 2014</strong> - Vertical Bridge Holdings, LLC, a privately owned tower company, today announced that it has secured over $500 million of incremental capital to support its acquisition and new tower build programs and growth strategy.  </p>\\n<p>“Vertical Bridge has secured significant additional capital to fund our M&amp;A, new tower development and operational needs. We have invested over $100 million already and will continue our rapid growth in partnership with Digital Bridge, The Jordan Company and Edgewater” said Alexander L. Gellman, CEO and Co-Founder of Vertical Bridge. Committed capital includes significant new commitments from The Jordan Company, The Edgewater Funds and additional capital from Digital Bridge Holdings, LLC, which led the fund raising process on behalf of Vertical Bridge through its Digital Bridge US Tower Holdings subsidiary.</p>\\n<p>Marc Ganzi, CEO of Digital Bridge commented: “This investment marks Digital Bridge’s third investment in telecommunications infrastructure this year. We are excited about working with the Vertical Bridge team, many of whom are GTP veterans and have two decades of a proven track record of success in the sector. We are very bullish on the US tower space and feel that the VB team is well positioned to assist our wireless carrier partners in the deployment of their future network needs.”</p>\\n<p>Eion Hu, Senior Partner at The Jordan Company, added: “We are delighted to partner with the Digital Bridge and Vertical Bridge teams. We see a long term capital formation opportunity in the U.S. tower market, and the opportunity to invest in Vertical Bridge fits our investment thesis of backing best in class management teams in high growth sectors.”</p>\\n<p>Vertical Bridge also announced that it has closed on a $270 million dollar senior credit facility led by TD Securities and Deutsche Bank as part of this recent round of capital formation</p>\\n<p><strong>About Vertical Bridge Holdings, LLC.</strong></p>\\n<p>Vertical Bridge Holdings is a privately-owned tower company in the US headquartered in Boca Raton, Florida. The company focuses on owning, operating, and managing telecommunications towers, rooftops, and site locations across the country. Vertical Bridge was founded in 2014 by Digital Bridge Holdings, LLC as well as certain key executives from Global Tower Partners.  For more information please visit <a href=\\"http://www.verticalbridge.com/\\"><u>www.verticalbridge.com</u></a> or call: Traci Clancy at 561-948-6367</p>\\n<p><strong>About Digital Bridge Holdings, LLC.</strong></p>\\n<p>Digital Bridge Holdings, is a communications infrastructure platform based in Boca Raton, Florida. It was formed in 2013 through a partnership between Ben Jenkins (formerly of The Blackstone Group) and Marc Ganzi (former founder and CEO of Global Tower Partners). Digital Bridge owns interests in a broad range of communications infrastructure companies. It is dedicated to long-term value creation through the active management of its companies and strong alignment with its investor partners. Digital Bridge manages investments on behalf of institutional, corporate, endowment and family offices around the world.  More information may be found at <a href=\\"http://www.digitalbridgellc.com/\\"><u>www.digitalbridgellc.com</u></a>.</p>\\n<p> </p>\\n ",
            \'safe_summary\' => " <p><strong>Boca Raton, FL., September, 2014</strong> - Vertical Bridge Holdings, LLC, a privately owned tower company, today announced that it has secured over $500 million of incremental capital to support its acquisition and new tower build programs and growth strategy.  </p>\\n ",
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;}\',
      \'field_date\' => array(),
      \'field_external_link\' => array(),
      \'field_internal_header\' => array(),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'0\',
      \'sticky\' => \'0\',
      \'title\' => \'Vertical Bridge Holdings, LLC Secures Over $500 Million of Additional Investable Capital\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'press_release\',
      \'uid\' => \'227\',
      \'uuid\' => \'3b897691-4b6a-4c83-aa23-43a2dbda87ca\',
      \'vid\' => NULL,
      \'vuuid\' => \'8130ca7f-80e5-4ff0-b7af-258b30132a8f\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><img alt=\\"\\" class=\\"media-image attr__typeof__foaf:Image img__fid__35 img__view_mode__media_large attr__format__media_large\\" src=\\"/sites/default/files/Crawford%20Bio%20Pic.jpg\\" style=\\"border-width: 0px; border-style: solid; padding: 5px; width: 180px; margin-right: 5px; float: left;\\" typeof=\\"foaf:Image\\" /></p>\\r\\n\\r\\n<p>Johnny Crawford is the Vice President Development of Vertical Bridge. He is responsible for overseeing all sales and delivery of build-to-suit opportunities for the company.<br />\\r\\n<br />\\r\\nPrior to joining Vertical Bridge, Crawford was Vice President of Business Development, Network Services at SBA Communications Corporation where he was responsible for sales to SBA’s national customers. Additionally, he has served as Vice President of Engineering and Operations for Airgate PCS, a Sprint PCS affiliate and as Director of Engineering and Operations for Sprint, where he launched one of the first PCS markets. Crawford was also a co-owner of Optima Towers, a South Carolina-based company that owns towers in the Southeast.<br />\\r\\n<br />\\r\\nCrawford was recently appointed as a Board Member for Music-Movement.Org, a 501(c) 3 nonprofit organization that develops and funds music centric programs for children and young adults living with Autism.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p><img alt=\\"\\" class=\\"media-image attr__typeof__foaf:Image img__fid__35 img__view_mode__media_large attr__format__media_large\\" src=\\"/sites/default/files/Crawford%20Bio%20Pic.jpg\\" style=\\"border-width: 0px; border-style: solid; padding: 5px; width: 180px; margin-right: 5px; float: left;\\" typeof=\\"foaf:Image\\" /></p>\\n<p>Johnny Crawford is the Vice President Development of Vertical Bridge. He is responsible for overseeing all sales and delivery of build-to-suit opportunities for the company.</p>\\n<p>Prior to joining Vertical Bridge, Crawford was Vice President of Business Development, Network Services at SBA Communications Corporation where he was responsible for sales to SBA’s national customers. Additionally, he has served as Vice President of Engineering and Operations for Airgate PCS, a Sprint PCS affiliate and as Director of Engineering and Operations for Sprint, where he launched one of the first PCS markets. Crawford was also a co-owner of Optima Towers, a South Carolina-based company that owns towers in the Southeast.</p>\\n<p>Crawford was recently appointed as a Board Member for Music-Movement.Org, a 501(c) 3 nonprofit organization that develops and funds music centric programs for children and young adults living with Autism.</p>\\n ",
            \'safe_summary\' => \'  \',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;}\',
      \'field_internal_header\' => array(),
      \'field_linkedin\' => array(),
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Johnny Crawford\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'team_member\',
      \'uid\' => \'227\',
      \'uuid\' => \'3cb19b2d-7133-4438-beee-aee62704691e\',
      \'vid\' => NULL,
      \'vuuid\' => \'384f3fde-8a42-4301-8491-13fefa291cf4\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><em>Portfolio Includes Nearly 200 Towers on More Than 100 Sites in Key Markets&nbsp;</em></p>\\r\\n\\r\\n<p><strong>BOCA RATON, FL – March 2, 2016</strong> – Vertical Bridge, the largest private owner and manager of wireless communication infrastructure in the U.S., today announced that it has completed the acquisition of nearly 200 radio broadcast towers in a two part transaction with Alpha Media. The portfolio of assets acquired includes 64 sites from Alpha Media’s existing portfolio and 49 sites which Alpha Media recently acquired as part of its purchase of radio stations from Digity, LLC. Financial terms of the transaction were not disclosed.&nbsp;</p>\\r\\n\\r\\n<p>With this acquisition, Vertical Bridge now has a total portfolio of over 42,000 towers, rooftop locations, billboards, utility infrastructure and other site locations that it owns, operates or manages. The company’s geographic presence in key markets across the U.S. has also expanded significantly.&nbsp;</p>\\r\\n\\r\\n<p>“We are thrilled to partner with Larry Wilson and Alpha Media, which owns and operates an admirable portfolio of assets in prime locations across top markets,” said Alex Gellman, Chief Executive Officer of Vertical Bridge. “It would be challenging to site these towers today, and we feel fortunate to expand our portfolio into these areas and further strengthen Vertical Bridge’s offering to our partners. Since these towers have not yet been marketed to wireless carriers, they offer attractive new collocation opportunities. Our broadcast partners will also benefit from the height of these towers as they will provide good relocation options relative to the 600MHz auction repacking process.”&nbsp;</p>\\r\\n\\r\\n<p>Alpha Media Chairman, Larry Wilson commented on the announcement, “We could not have done this without the hard work and determination from the great team at Vertical Bridge. We’re proud to call them a partner of the Alpha Media family.”&nbsp;</p>\\r\\n\\r\\n<p>George Reed of Media Services Group is the broker for Alpha Media.&nbsp;</p>\\r\\n\\r\\n<p><strong>About Vertical Bridge&nbsp;</strong><br />\\r\\n<span>Vertical Bridge is the largest private owner and manager of wireless communication infrastructure in the United States. The company owns, operates and manages over 42,000 tower, rooftop, billboard, utility attachment and other site locations in support of all wireless network deployments. Based in Boca Raton, Florida, Vertical Bridge was founded in 2014 by key executives from Digital Bridge Holdings, LLC and former senior officers of Global Tower Partners. The senior management team at Vertical Bridge has over 150 years of collective experience in tower infrastructure and related sectors. For more information, please visit http://www.verticalbridge.com.&nbsp;</span></p>\\r\\n\\r\\n<p><strong>About Alpha Media&nbsp;</strong><br />\\r\\nAlpha Media is a radio broadcast media company that is the third largest broadcast tower company in the U.S. Headquartered in Portland, Oregon and formed by veteran radio executive, Larry Wilson, in 2009, Alpha Media owns and operates over 250 radio stations within 53 markets across the United States covering all formats including Top 40, Adult Contemporary, Spanish, Urban, News Talk, Sports, Rock, Country and more. In addition to these radio stations, Alpha Media owns the intimate performance venues, Skype Live Studio in Portland, Oregon and Alamo Lounge in San Antonio, Texas. For more information, please visit www.alphamediausa.com.&nbsp;</p>\\r\\n",
            \'summary\' => "<p>Vertical Bridge has completed the acquisition of 200 radio broadcast towers in a two part transaction with Alpha Media.&nbsp;The portfolio of assets acquired includes 64 sites from Alpha Media’s existing portfolio and 49 sites which Alpha Media recently acquired as part of its purchase of radio stations from Digity, LLC.</p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => " <p><em>Portfolio Includes Nearly 200 Towers on More Than 100 Sites in Key Markets </em></p>\\n<p><strong>BOCA RATON, FL – March 2, 2016</strong> – Vertical Bridge, the largest private owner and manager of wireless communication infrastructure in the U.S., today announced that it has completed the acquisition of nearly 200 radio broadcast towers in a two part transaction with Alpha Media. The portfolio of assets acquired includes 64 sites from Alpha Media’s existing portfolio and 49 sites which Alpha Media recently acquired as part of its purchase of radio stations from Digity, LLC. Financial terms of the transaction were not disclosed. </p>\\n<p>With this acquisition, Vertical Bridge now has a total portfolio of over 42,000 towers, rooftop locations, billboards, utility infrastructure and other site locations that it owns, operates or manages. The company’s geographic presence in key markets across the U.S. has also expanded significantly. </p>\\n<p>“We are thrilled to partner with Larry Wilson and Alpha Media, which owns and operates an admirable portfolio of assets in prime locations across top markets,” said Alex Gellman, Chief Executive Officer of Vertical Bridge. “It would be challenging to site these towers today, and we feel fortunate to expand our portfolio into these areas and further strengthen Vertical Bridge’s offering to our partners. Since these towers have not yet been marketed to wireless carriers, they offer attractive new collocation opportunities. Our broadcast partners will also benefit from the height of these towers as they will provide good relocation options relative to the 600MHz auction repacking process.” </p>\\n<p>Alpha Media Chairman, Larry Wilson commented on the announcement, “We could not have done this without the hard work and determination from the great team at Vertical Bridge. We’re proud to call them a partner of the Alpha Media family.” </p>\\n<p>George Reed of Media Services Group is the broker for Alpha Media. </p>\\n<p><strong>About Vertical Bridge </strong><br /><span>Vertical Bridge is the largest private owner and manager of wireless communication infrastructure in the United States. The company owns, operates and manages over 42,000 tower, rooftop, billboard, utility attachment and other site locations in support of all wireless network deployments. Based in Boca Raton, Florida, Vertical Bridge was founded in 2014 by key executives from Digital Bridge Holdings, LLC and former senior officers of Global Tower Partners. The senior management team at Vertical Bridge has over 150 years of collective experience in tower infrastructure and related sectors. For more information, please visit <a href=\\"http://www.verticalbridge.com. \\">http://www.verticalbridge.com. </a></span></p>\\n<p><strong>About Alpha Media </strong><br />\\nAlpha Media is a radio broadcast media company that is the third largest broadcast tower company in the U.S. Headquartered in Portland, Oregon and formed by veteran radio executive, Larry Wilson, in 2009, Alpha Media owns and operates over 250 radio stations within 53 markets across the United States covering all formats including Top 40, Adult Contemporary, Spanish, Urban, News Talk, Sports, Rock, Country and more. In addition to these radio stations, Alpha Media owns the intimate performance venues, Skype Live Studio in Portland, Oregon and Alamo Lounge in San Antonio, Texas. For more information, please visit <a href=\\"http://www.alphamediausa.com. \\">www.alphamediausa.com. </a></p>\\n ",
            \'safe_summary\' => " <p>Vertical Bridge has completed the acquisition of 200 radio broadcast towers in a two part transaction with Alpha Media. The portfolio of assets acquired includes 64 sites from Alpha Media’s existing portfolio and 49 sites which Alpha Media recently acquired as part of its purchase of radio stations from Digity, LLC.</p>\\n ",
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'field_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2016-03-02 05:00:00\',
            \'timezone\' => \'America/New_York\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_internal_header\' => array(),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Vertical Bridge Acquires Portfolio of Broadcast Towers from Alpha Media\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'press\',
      \'uid\' => \'227\',
      \'uuid\' => \'43dad401-1dd1-4da0-8465-8af28b0a777e\',
      \'vid\' => NULL,
      \'vuuid\' => \'fe50a579-23b8-4099-8c9e-d4e14ca09fab\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><em>Under Agreement, Clear Channel’s Portfolio of Out-of-Home Assets in 45 DMAs Will Significantly Enhance Wireless Service for Mobile Customers</em></p>\\r\\n\\r\\n<p><strong>September 10, 2015 - Las Vegas, NV -</strong> &nbsp;Vertical Bridge, the largest U.S. private owner and manager of wireless telecommunication infrastructure and Clear Channel Outdoor Holdings, Inc., (NYSE: CCO), a subsidiary of iHeartMedia Inc., today announced the signing of an exclusive multi-year agreement for the management and marketing of wireless deployment on Clear Channel Outdoor America’s (CCOA) billboards and other out-of-home assets in 45 of the top 50 U.S. markets. This agreement, covering more geography and out of home inventory than any similar agreement in the U.S., was announced at The Wireless Association’s CTIA Super Mobility 2015 conference in Las Vegas.</p>\\r\\n\\r\\n<p>Under the terms of the agreement, Vertical Bridge will have exclusive rights to antenna and small cell site deployment across CCOA’s multi-platform footprint. These small cell base stations will significantly improve concentrated bandwidth and enable capacity increases for mobile services, while enhancing the user experience.</p>\\r\\n\\r\\n<p>With the addition of CCOA’s assets, Vertical Bridge will own or manage a portfolio of over 40,000 attractive billboard, tower, rooftop, utility attachments and other site locations that are geographically dispersed across urban, suburban, traffic corridor and rural areas. Financial terms of the transaction were not disclosed.</p>\\r\\n\\r\\n<p>“We are very pleased to broaden our relationship with iHeartMedia through this partnership with Clear Channel Outdoor Americas,” said Alex Gellman, CEO, Vertical Bridge. “Growth in mobile data traffic is driving network demand, and the top U.S. carriers are in the midst of a significant investment cycle to maintain the reliability and performance of their networks. We believe billboards will play an increasingly important role in the deployment of all networks, and CCOA has the best locations for carriers who are looking to enhance services for mobile consumers.”</p>\\r\\n\\r\\n<p>“Clear Channel Outdoor is consistently at the forefront of innovation leveraging our assets to help our partners reach today’s mobile, digital and social media consumers,” said Scott Wells, CEO, Clear Channel Outdoor Americas. “Today’s agreement enables wireless carriers to better serve millions of consumers across Clear Channel’s vast network around the country, and we are always pleased to find win-win opportunities to further monetize our valuable portfolio of assets.”</p>\\r\\n\\r\\n<p><strong>About Clear Channel Outdoor</strong></p>\\r\\n\\r\\n<p>Clear Channel Outdoor Holdings, Inc. (NYSE:CCO) is one of the world’s largest outdoor advertising companies with more than 640,000 displays in over 40 countries across Asia, Australia, Europe, Latin America and North America. Reaching millions of people monthly, including consumers in 45 of the top 50 U.S. markets, Clear Channel Outdoor enables advertisers to engage with consumers through innovative advertising solutions. Clear Channel Outdoor is pioneering the integration of out-of-home with mobile and social platforms, and the company’s digital platform includes over 1,200 digital billboards across 38 markets in North America and over 5,000 digital displays in international markets. More information is available at www.clearchanneloutdoor.com and www.clearchannelinternational.com.</p>\\r\\n\\r\\n<p><strong>About Vertical Bridge </strong></p>\\r\\n\\r\\n<p>Vertical Bridge is the largest private owner and manager of wireless communication infrastructure in the United States. The company owns, operates and manages over 40,000 tower, rooftop, utility attachment and other site locations in support of all wireless network deployments. Based in Boca Raton, Florida, Vertical Bridge was founded in 2014 by key executives from Digital Bridge Holdings, LLC and former senior officers of Global Tower Partners. The senior management team at Vertical Bridge has over 150 years of collective experience in tower infrastructure and related sectors. For more information, please visit www.verticalbridge.com.</p>\\r\\n\\r\\n<p>&nbsp;</p>\\r\\n\\r\\n<p><strong>Contacts:</strong></p>\\r\\n\\r\\n<p>Vertical Bridge:<br />\\r\\nStanton PR &amp; Marketing&nbsp;<br />\\r\\nCharlyn Lusk<br />\\r\\n646-502-3546<br />\\r\\nclusk@stantonprm.com</p>\\r\\n\\r\\n<p>Clear Channel Outdoor Holdings, Inc.&nbsp;<br />\\r\\nJason D. King<br />\\r\\n212-812-0064&nbsp;<br />\\r\\njasondking@clearchannel.com</p>\\r\\n\\r\\n<p>or</p>\\r\\n\\r\\n<p>David Press<br />\\r\\n917-721-7046<br />\\r\\ndavid@feverpress.com</p>\\r\\n\\r\\n<p>or</p>\\r\\n\\r\\n<p>Cindy Stoller<br />\\r\\n917-331-0418<br />\\r\\ncindy@feverpress.com &nbsp;&nbsp;</p>\\r\\n",
            \'summary\' => "<p>Under Agreement, Clear Channel’s Portfolio of Out-of-Home Assets in 45 DMAs Will Significantly Enhance Wireless Service for Mobile Customers September 10, 2015 - Las Vegas, NV -&nbsp;&nbsp;Vertical Bridge, the largest U.S. private owner and manager of wireless telecommunication infrastructure and Clear Channel Outdoor Holdings, Inc., (NYSE: CCO), a subsidiary of iHeartMedia Inc., today announced the signing of an exclusive multi-year agreement for the management and marketing of wireless deployment on Clear Channel Outdoor America’s (CCOA) billboards and other out-of-home assets in 45 of the top 50 U.S. markets.&nbsp;</p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => " <p><em>Under Agreement, Clear Channel’s Portfolio of Out-of-Home Assets in 45 DMAs Will Significantly Enhance Wireless Service for Mobile Customers</em></p>\\n<p><strong>September 10, 2015 - Las Vegas, NV -</strong>  Vertical Bridge, the largest U.S. private owner and manager of wireless telecommunication infrastructure and Clear Channel Outdoor Holdings, Inc., (NYSE: CCO), a subsidiary of iHeartMedia Inc., today announced the signing of an exclusive multi-year agreement for the management and marketing of wireless deployment on Clear Channel Outdoor America’s (CCOA) billboards and other out-of-home assets in 45 of the top 50 U.S. markets. This agreement, covering more geography and out of home inventory than any similar agreement in the U.S., was announced at The Wireless Association’s CTIA Super Mobility 2015 conference in Las Vegas.</p>\\n<p>Under the terms of the agreement, Vertical Bridge will have exclusive rights to antenna and small cell site deployment across CCOA’s multi-platform footprint. These small cell base stations will significantly improve concentrated bandwidth and enable capacity increases for mobile services, while enhancing the user experience.</p>\\n<p>With the addition of CCOA’s assets, Vertical Bridge will own or manage a portfolio of over 40,000 attractive billboard, tower, rooftop, utility attachments and other site locations that are geographically dispersed across urban, suburban, traffic corridor and rural areas. Financial terms of the transaction were not disclosed.</p>\\n<p>“We are very pleased to broaden our relationship with iHeartMedia through this partnership with Clear Channel Outdoor Americas,” said Alex Gellman, CEO, Vertical Bridge. “Growth in mobile data traffic is driving network demand, and the top U.S. carriers are in the midst of a significant investment cycle to maintain the reliability and performance of their networks. We believe billboards will play an increasingly important role in the deployment of all networks, and CCOA has the best locations for carriers who are looking to enhance services for mobile consumers.”</p>\\n<p>“Clear Channel Outdoor is consistently at the forefront of innovation leveraging our assets to help our partners reach today’s mobile, digital and social media consumers,” said Scott Wells, CEO, Clear Channel Outdoor Americas. “Today’s agreement enables wireless carriers to better serve millions of consumers across Clear Channel’s vast network around the country, and we are always pleased to find win-win opportunities to further monetize our valuable portfolio of assets.”</p>\\n<p><strong>About Clear Channel Outdoor</strong></p>\\n<p>Clear Channel Outdoor Holdings, Inc. (NYSE:CCO) is one of the world’s largest outdoor advertising companies with more than 640,000 displays in over 40 countries across Asia, Australia, Europe, Latin America and North America. Reaching millions of people monthly, including consumers in 45 of the top 50 U.S. markets, Clear Channel Outdoor enables advertisers to engage with consumers through innovative advertising solutions. Clear Channel Outdoor is pioneering the integration of out-of-home with mobile and social platforms, and the company’s digital platform includes over 1,200 digital billboards across 38 markets in North America and over 5,000 digital displays in international markets. More information is available at <a href=\\"http://www.clearchanneloutdoor.com\\">www.clearchanneloutdoor.com</a> and <a href=\\"http://www.clearchannelinternational.com\\">www.clearchannelinternational.com</a>.</p>\\n<p><strong>About Vertical Bridge </strong></p>\\n<p>Vertical Bridge is the largest private owner and manager of wireless communication infrastructure in the United States. The company owns, operates and manages over 40,000 tower, rooftop, utility attachment and other site locations in support of all wireless network deployments. Based in Boca Raton, Florida, Vertical Bridge was founded in 2014 by key executives from Digital Bridge Holdings, LLC and former senior officers of Global Tower Partners. The senior management team at Vertical Bridge has over 150 years of collective experience in tower infrastructure and related sectors. For more information, please visit <a href=\\"http://www.verticalbridge.com\\">www.verticalbridge.com</a>.</p>\\n<p> </p>\\n<p><strong>Contacts:</strong></p>\\n<p>Vertical Bridge:<br />\\nStanton PR &amp; Marketing <br />\\nCharlyn Lusk<br />\\n646-502-3546<br /><a href=\\"mailto:clusk@stantonprm.com\\">clusk@stantonprm.com</a></p>\\n<p>Clear Channel Outdoor Holdings, Inc. <br />\\nJason D. King<br />\\n212-812-0064 <br /><a href=\\"mailto:jasondking@clearchannel.com\\">jasondking@clearchannel.com</a></p>\\n<p>or</p>\\n<p>David Press<br />\\n917-721-7046<br /><a href=\\"mailto:david@feverpress.com\\">david@feverpress.com</a></p>\\n<p>or</p>\\n<p>Cindy Stoller<br />\\n917-331-0418<br /><a href=\\"mailto:cindy@feverpress.com\\">cindy@feverpress.com</a>   </p>\\n ",
            \'safe_summary\' => " <p>Under Agreement, Clear Channel’s Portfolio of Out-of-Home Assets in 45 DMAs Will Significantly Enhance Wireless Service for Mobile Customers September 10, 2015 - Las Vegas, NV -  Vertical Bridge, the largest U.S. private owner and manager of wireless telecommunication infrastructure and Clear Channel Outdoor Holdings, Inc., (NYSE: CCO), a subsidiary of iHeartMedia Inc., today announced the signing of an exclusive multi-year agreement for the management and marketing of wireless deployment on Clear Channel Outdoor America’s (CCOA) billboards and other out-of-home assets in 45 of the top 50 U.S. markets. </p>\\n ",
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'field_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015-09-10 18:00:00\',
            \'timezone\' => \'America/New_York\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_internal_header\' => array(),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Clear Channel Outdoor Americas and Vertical Bridge Announce Landmark National Partnership for Wireless Deployment on Billboards\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'press\',
      \'uid\' => \'227\',
      \'uuid\' => \'46884a93-ea5e-4287-b823-089abcca31a6\',
      \'vid\' => NULL,
      \'vuuid\' => \'e6412f60-3d78-44df-9feb-b14c568bd556\',
    ),
  (object) array(
      \'body\' => array(),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'field_cta_button_events\' => array(
        \'und\' => array(
          array(
            \'url\' => \'mailto:events@verticalbridge.com\',
            \'title\' => \'CLICK HERE\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_cta_button_press\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://verticalbridge.thinkcreativegroup.com/contact-us\',
            \'title\' => \'CLICK HERE\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_cta_button_press_release\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://verticalbridge.thinkcreativegroup.com/contact-us\',
            \'title\' => \'CLICK HERE\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_cta_content_events\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Interested in meeting with us at an Industry Event?</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p>Interested in meeting with us at an Industry Event?</p>\\n ",
            \'safe_summary\' => \'  \',
          ),
        ),
      ),
      \'field_cta_content_press\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Sign Up to Hear Our News as it Happens!</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p>Sign Up to Hear Our News as it Happens!</p>\\n ",
            \'safe_summary\' => \'  \',
          ),
        ),
      ),
      \'field_cta_content_press_release\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Sign Up for Timely Vertical Bridge Updates!</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p>Sign Up for Timely Vertical Bridge Updates!</p>\\n ",
            \'safe_summary\' => \'  \',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'1\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'View CTA\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'view_cta\',
      \'uid\' => \'227\',
      \'uuid\' => \'4784ff3c-3d13-4096-9268-d8b1d406bc1d\',
      \'vid\' => NULL,
      \'vuuid\' => \'cc852e9f-ae67-42e7-b12e-92c95cbe71e0\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'\',
            \'summary\' => "<p><i>Radio World</i></p>\\r\\n\\r\\n<p>Vertical Bridge, a specialist in wireless communication infrastructure, has acquired almost 200 radio broadcast towers from Alpha Media. Some of the towers were owned by Alpha and others were acquired as a result of the recent acquisition of station group owner Digity.</p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => \'  \',
            \'safe_summary\' => " <p><i>Radio World</i></p>\\n<p>Vertical Bridge, a specialist in wireless communication infrastructure, has acquired almost 200 radio broadcast towers from Alpha Media. Some of the towers were owned by Alpha and others were acquired as a result of the recent acquisition of station group owner Digity.</p>\\n ",
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'field_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2016-03-02 16:45:00\',
            \'timezone\' => \'America/New_York\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_external_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://www.radioworld.com/article/vertical-bridge-acquires-alpha-towers/278273\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_internal_header\' => array(),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Vertical Bridge Acquires Alpha Towers\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'press_release\',
      \'uid\' => \'227\',
      \'uuid\' => \'4901d015-0a20-46ab-a539-14bdf3211bc6\',
      \'vid\' => NULL,
      \'vuuid\' => \'72bfb873-b23a-4f7d-ace9-d298fe1e8ca3\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<h1><span style=\\"color: rgb(255, 255, 255);\\">Seamless Relationships, Unparalleled Service</span></h1>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <h1><span style=\\"color: rgb(255, 255, 255);\\">Seamless Relationships, Unparalleled Service</span></h1>\\n ",
            \'safe_summary\' => \'  \',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'field_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'235\',
            \'uid\' => \'227\',
            \'filename\' => \'Vertical-Bridge_Home-New-3.jpg\',
            \'uri\' => \'public://home-slides/Vertical-Bridge_Home-New-3.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'285172\',
            \'status\' => \'1\',
            \'timestamp\' => \'1463688016\',
            \'type\' => \'image\',
            \'uuid\' => \'515b9af0-7301-478b-bed1-ef6c500d21d7\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'1025\',
              \'height\' => \'347\',
            ),
            \'alt\' => NULL,
            \'title\' => NULL,
            \'width\' => \'1025\',
            \'height\' => \'347\',
          ),
        ),
      ),
      \'field_internal_header\' => array(),
      \'field_order\' => array(
        \'und\' => array(
          array(
            \'value\' => \'3\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'0\',
      \'sticky\' => \'0\',
      \'title\' => \'Slide New 3\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'home_slide\',
      \'uid\' => \'227\',
      \'uuid\' => \'51a7e7ec-02ee-4b97-9d99-36179ef75b08\',
      \'vid\' => NULL,
      \'vuuid\' => \'e4dc1f3a-25b6-49bf-8d96-4c6b650ba042\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<ul>\\r\\n\\t<li>Significant equity investment by Digital Bridge Holdings, The Jordan Company and The Edgewater Funds</li>\\r\\n\\t<li>Senior credit facility led by TD Securities and &nbsp;Deutsche Bank</li>\\r\\n\\t<li>New capital to fuel future M&amp;A and tower development.</li>\\r\\n</ul>\\r\\n\\r\\n<p><strong>Boca Raton, FL., September, 2014</strong> - Vertical Bridge Holdings, LLC, a privately owned tower company, today announced that it has secured over $500 million of incremental capital to support its acquisition and new tower build programs and growth strategy. &nbsp;</p>\\r\\n\\r\\n<p>“Vertical Bridge has secured significant additional capital to fund our M&amp;A, new tower development and operational needs. We have invested over $100 million already and will continue our rapid growth in partnership with Digital Bridge, The Jordan Company and Edgewater” said Alexander L. Gellman, CEO and Co-Founder of Vertical Bridge. Committed capital includes significant new commitments from The Jordan Company, The Edgewater Funds and additional capital from Digital Bridge Holdings, LLC, which led the fund raising process on behalf of Vertical Bridge through its Digital Bridge US Tower Holdings subsidiary.</p>\\r\\n\\r\\n<p>Marc Ganzi, CEO of Digital Bridge commented: “This investment marks Digital Bridge’s third investment in telecommunications infrastructure this year. We are excited about working with the Vertical Bridge team, many of whom are GTP veterans and have two decades of a proven track record of success in the sector. We are very bullish on the US tower space and feel that the VB team is well positioned to assist our wireless carrier partners in the deployment of their future network needs.”</p>\\r\\n\\r\\n<p>Eion Hu, Senior Partner at The Jordan Company, added: “We are delighted to partner with the Digital Bridge and Vertical Bridge teams. We see a long term capital formation opportunity in the U.S. tower market, and the opportunity to invest in Vertical Bridge fits our investment thesis of backing best in class management teams in high growth sectors.”</p>\\r\\n\\r\\n<p>Vertical Bridge also announced that it has closed on a $270 million dollar senior credit facility led by TD Securities and Deutsche Bank as part of this recent round of capital formation</p>\\r\\n\\r\\n<p><strong>About Vertical Bridge Holdings, LLC.</strong></p>\\r\\n\\r\\n<p>Vertical Bridge Holdings is a privately-owned tower company in the US headquartered in Boca Raton, Florida. The company focuses on owning, operating, and managing telecommunications towers, rooftops, and site locations across the country. Vertical Bridge was founded in 2014 by Digital Bridge Holdings, LLC as well as certain key executives from Global Tower Partners.&nbsp; For more information please visit <a href=\\"http://www.verticalbridge.com/\\"><u>www.verticalbridge.com</u></a> or call: Traci Clancy at 561-948-6367</p>\\r\\n\\r\\n<p><strong>About Digital Bridge Holdings, LLC.</strong></p>\\r\\n\\r\\n<p>Digital Bridge Holdings, is a communications infrastructure platform based in Boca Raton, Florida. It was formed in 2013 through a partnership between Ben Jenkins (formerly of The Blackstone Group) and Marc Ganzi (former founder and CEO of Global Tower Partners). Digital Bridge owns interests in a broad range of communications infrastructure companies. It is dedicated to long-term value creation through the active management of its companies and strong alignment with its investor partners. Digital Bridge manages investments on behalf of institutional, corporate, endowment and family offices around the world.&nbsp; More information may be found at <a href=\\"http://www.digitalbridgellc.com/\\"><u>www.digitalbridgellc.com</u></a>.</p>\\r\\n",
            \'summary\' => "<p><strong>Boca Raton, FL., September, 2014</strong> - Vertical Bridge Holdings, LLC, a privately owned tower company, today announced that it has secured over $500 million of incremental capital to support its acquisition and new tower build programs and growth strategy. &nbsp;<br />\\r\\n&nbsp;</p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => " <ul><li>Significant equity investment by Digital Bridge Holdings, The Jordan Company and The Edgewater Funds</li>\\n<li>Senior credit facility led by TD Securities and  Deutsche Bank</li>\\n<li>New capital to fuel future M&amp;A and tower development.</li>\\n</ul><p><strong>Boca Raton, FL., September, 2014</strong> - Vertical Bridge Holdings, LLC, a privately owned tower company, today announced that it has secured over $500 million of incremental capital to support its acquisition and new tower build programs and growth strategy.  </p>\\n<p>“Vertical Bridge has secured significant additional capital to fund our M&amp;A, new tower development and operational needs. We have invested over $100 million already and will continue our rapid growth in partnership with Digital Bridge, The Jordan Company and Edgewater” said Alexander L. Gellman, CEO and Co-Founder of Vertical Bridge. Committed capital includes significant new commitments from The Jordan Company, The Edgewater Funds and additional capital from Digital Bridge Holdings, LLC, which led the fund raising process on behalf of Vertical Bridge through its Digital Bridge US Tower Holdings subsidiary.</p>\\n<p>Marc Ganzi, CEO of Digital Bridge commented: “This investment marks Digital Bridge’s third investment in telecommunications infrastructure this year. We are excited about working with the Vertical Bridge team, many of whom are GTP veterans and have two decades of a proven track record of success in the sector. We are very bullish on the US tower space and feel that the VB team is well positioned to assist our wireless carrier partners in the deployment of their future network needs.”</p>\\n<p>Eion Hu, Senior Partner at The Jordan Company, added: “We are delighted to partner with the Digital Bridge and Vertical Bridge teams. We see a long term capital formation opportunity in the U.S. tower market, and the opportunity to invest in Vertical Bridge fits our investment thesis of backing best in class management teams in high growth sectors.”</p>\\n<p>Vertical Bridge also announced that it has closed on a $270 million dollar senior credit facility led by TD Securities and Deutsche Bank as part of this recent round of capital formation</p>\\n<p><strong>About Vertical Bridge Holdings, LLC.</strong></p>\\n<p>Vertical Bridge Holdings is a privately-owned tower company in the US headquartered in Boca Raton, Florida. The company focuses on owning, operating, and managing telecommunications towers, rooftops, and site locations across the country. Vertical Bridge was founded in 2014 by Digital Bridge Holdings, LLC as well as certain key executives from Global Tower Partners.  For more information please visit <a href=\\"http://www.verticalbridge.com/\\"><u>www.verticalbridge.com</u></a> or call: Traci Clancy at 561-948-6367</p>\\n<p><strong>About Digital Bridge Holdings, LLC.</strong></p>\\n<p>Digital Bridge Holdings, is a communications infrastructure platform based in Boca Raton, Florida. It was formed in 2013 through a partnership between Ben Jenkins (formerly of The Blackstone Group) and Marc Ganzi (former founder and CEO of Global Tower Partners). Digital Bridge owns interests in a broad range of communications infrastructure companies. It is dedicated to long-term value creation through the active management of its companies and strong alignment with its investor partners. Digital Bridge manages investments on behalf of institutional, corporate, endowment and family offices around the world.  More information may be found at <a href=\\"http://www.digitalbridgellc.com/\\"><u>www.digitalbridgellc.com</u></a>.</p>\\n ",
            \'safe_summary\' => " <p><strong>Boca Raton, FL., September, 2014</strong> - Vertical Bridge Holdings, LLC, a privately owned tower company, today announced that it has secured over $500 million of incremental capital to support its acquisition and new tower build programs and growth strategy.  <br />\\n </p>\\n ",
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'field_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-09-05 20:15:00\',
            \'timezone\' => \'America/New_York\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_internal_header\' => array(),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Vertical Bridge Holdings, LLC Secures Over $500 Million of Additional Investable Capital\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'press\',
      \'uid\' => \'227\',
      \'uuid\' => \'52626fd5-8539-4079-baeb-b7530dc15d5b\',
      \'vid\' => NULL,
      \'vuuid\' => \'139283cd-ad9f-4a11-b429-f9f746adab9c\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><img border=\\"0\\" src=\\"/sites/default/files/regionalsalesteam_us_map-2.png\\" style=\\"max-width:100%; height:auto\\" usemap=\\"#Map\\" width=\\"1024\\" /><map id=\\"Map\\" name=\\"Map\\"><area alt=\\"zone1\\" class=\\"zone-id\\" coords=\\"61,3,92,16,93,57,125,82,144,95,161,48,157,12,191,5,457,54,445,228,362,221,332,432,298,426,236,389,219,381,153,442,160,455,146,468,138,443,123,425,86,406,59,399,60,395,68,393,96,408,111,410,129,419,142,434,151,437,214,381,190,376,144,321,125,243,116,204,117,175,135,110,139,97,82,56,65,60,16,76,51,60,38,47,48,15,60,4\\" href=\\"#\\" id=\\"West\\" shape=\\"poly\\" /> <area alt=\\"zone2\\" class=\\"zone-id\\" coords=\\"557,60,569,196,583,254,594,272,602,335,679,333,687,343,667,412,612,412,615,433,623,458,618,483,546,529,544,548,551,565,518,557,473,481,460,476,437,492,412,469,380,426,350,422,349,434,336,431,364,224,448,231,460,55,557,60\\" href=\\"#\\" id=\\"Midwest\\" shape=\\"poly\\" /> <area alt=\\"zone3\\" class=\\"zone-id\\" coords=\\"562,61,594,56,670,79,633,108,696,88,693,98,710,108,743,100,758,114,730,117,705,146,713,209,723,213,737,189,730,154,745,122,768,130,776,146,766,163,783,155,793,176,782,205,761,210,767,264,807,275,818,296,800,318,718,328,690,335,689,339,681,331,603,333,598,275,587,256,573,194,562,61\\" href=\\"#\\" id=\\"Central\\" shape=\\"poly\\" /> <area alt=\\"zone4\\" class=\\"zone-id\\" coords=\\"718,330,801,321,819,298,858,266,880,246,878,236,914,228,922,255,930,257,910,272,928,312,899,362,849,425,847,445,892,529,889,556,881,559,847,523,836,488,807,459,784,472,752,460,719,459,690,465,700,483,687,490,622,481,626,452,612,414,670,414,692,335\\" href=\\"#\\" id=\\"South\\" shape=\\"poly\\" /> <area alt=\\"zone5\\" class=\\"zone-id\\" coords=\\"973,36,994,41,1020,83,988,109,975,148,993,168,939,203,930,254,925,255,917,225,877,232,877,245,821,292,809,274,770,262,764,212,785,208,802,211,856,173,850,161,884,151,889,121,923,105,967,89,973,36\\" href=\\"#\\" id=\\"Northeast\\" shape=\\"poly\\" /></map></p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p><img border=\\"0\\" src=\\"/sites/default/files/regionalsalesteam_us_map-2.png\\" style=\\"max-width:100%; height:auto\\" usemap=\\"#Map\\" width=\\"1024\\" /><map id=\\"Map\\" name=\\"Map\\"><area alt=\\"zone1\\" class=\\"zone-id\\" coords=\\"61,3,92,16,93,57,125,82,144,95,161,48,157,12,191,5,457,54,445,228,362,221,332,432,298,426,236,389,219,381,153,442,160,455,146,468,138,443,123,425,86,406,59,399,60,395,68,393,96,408,111,410,129,419,142,434,151,437,214,381,190,376,144,321,125,243,116,204,117,175,135,110,139,97,82,56,65,60,16,76,51,60,38,47,48,15,60,4\\" href=\\"#\\" id=\\"West\\" shape=\\"poly\\" /><area alt=\\"zone2\\" class=\\"zone-id\\" coords=\\"557,60,569,196,583,254,594,272,602,335,679,333,687,343,667,412,612,412,615,433,623,458,618,483,546,529,544,548,551,565,518,557,473,481,460,476,437,492,412,469,380,426,350,422,349,434,336,431,364,224,448,231,460,55,557,60\\" href=\\"#\\" id=\\"Midwest\\" shape=\\"poly\\" /><area alt=\\"zone3\\" class=\\"zone-id\\" coords=\\"562,61,594,56,670,79,633,108,696,88,693,98,710,108,743,100,758,114,730,117,705,146,713,209,723,213,737,189,730,154,745,122,768,130,776,146,766,163,783,155,793,176,782,205,761,210,767,264,807,275,818,296,800,318,718,328,690,335,689,339,681,331,603,333,598,275,587,256,573,194,562,61\\" href=\\"#\\" id=\\"Central\\" shape=\\"poly\\" /><area alt=\\"zone4\\" class=\\"zone-id\\" coords=\\"718,330,801,321,819,298,858,266,880,246,878,236,914,228,922,255,930,257,910,272,928,312,899,362,849,425,847,445,892,529,889,556,881,559,847,523,836,488,807,459,784,472,752,460,719,459,690,465,700,483,687,490,622,481,626,452,612,414,670,414,692,335\\" href=\\"#\\" id=\\"South\\" shape=\\"poly\\" /><area alt=\\"zone5\\" class=\\"zone-id\\" coords=\\"973,36,994,41,1020,83,988,109,975,148,993,168,939,203,930,254,925,255,917,225,877,232,877,245,821,292,809,274,770,262,764,212,785,208,802,211,856,173,850,161,884,151,889,121,923,105,967,89,973,36\\" href=\\"#\\" id=\\"Northeast\\" shape=\\"poly\\" /></map></p>\\n ",
            \'safe_summary\' => \'  \',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'field_address_data\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><strong>Mike Hofe, Regional Sales Director</strong><br />\\r\\n301.667.0001<br />\\r\\n<a href=\\"mailto:mhofe@verticalbridge.com\\">mhofe@verticalbridge.com</a></p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p><strong>Mike Hofe, Regional Sales Director</strong><br />\\n301.667.0001<br /><a href=\\"mailto:mhofe@verticalbridge.com\\">mhofe@verticalbridge.com</a></p>\\n ",
            \'safe_summary\' => \'  \',
          ),
          array(
            \'value\' => "<p><strong>Wendy Zavaleta, Regional Sales Director</strong><br />\\r\\n512.796.3490<br />\\r\\n<a href=\\"mailto:wzavaleta@verticalbridge.com\\">wzavaleta@verticalbridge.com</a></p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p><strong>Wendy Zavaleta, Regional Sales Director</strong><br />\\n512.796.3490<br /><a href=\\"mailto:wzavaleta@verticalbridge.com\\">wzavaleta@verticalbridge.com</a></p>\\n ",
            \'safe_summary\' => \'  \',
          ),
          array(
            \'value\' => "<p><strong>Jamie Harris, Regional Sales Director</strong><br />\\r\\n941.374.5513<br />\\r\\n<a href=\\"mailto:jharris@verticalbridge.com\\">jharris@verticalbridge.com</a></p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p><strong>Jamie Harris, Regional Sales Director</strong><br />\\n941.374.5513<br /><a href=\\"mailto:jharris@verticalbridge.com\\">jharris@verticalbridge.com</a></p>\\n ",
            \'safe_summary\' => \'  \',
          ),
          array(
            \'value\' => "<p><strong>Blair Bode, Director of Business Development</strong><br />\\r\\n209.482.2030<br />\\r\\n<a href=\\"mailto:bbode@verticalbridge.com\\">bbode@verticalbridge.com</a></p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p><strong>Blair Bode, Director of Business Development</strong><br />\\n209.482.2030<br /><a href=\\"mailto:bbode@verticalbridge.com\\">bbode@verticalbridge.com</a></p>\\n ",
            \'safe_summary\' => \'  \',
          ),
          array(
            \'value\' => "<p><strong>Charles Johnson, Regional Director of Business Development</strong><br />\\r\\n614.361.1445<br />\\r\\n<a href=\\"mailto:cjohnson@verticalbridge.com\\">cjohnson@verticalbridge.com</a></p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p><strong>Charles Johnson, Regional Director of Business Development</strong><br />\\n614.361.1445<br /><a href=\\"mailto:cjohnson@verticalbridge.com\\">cjohnson@verticalbridge.com</a></p>\\n ",
            \'safe_summary\' => \'  \',
          ),
          array(
            \'value\' => "<p><strong>Johnny Crawford, Vice President of Development</strong><br />\\r\\n843.324.9732<br />\\r\\n<a href=\\"mailto:jcrawford@verticalbridge.com\\">jcrawford@verticalbridge.com</a></p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p><strong>Johnny Crawford, Vice President of Development</strong><br />\\n843.324.9732<br /><a href=\\"mailto:jcrawford@verticalbridge.com\\">jcrawford@verticalbridge.com</a></p>\\n ",
            \'safe_summary\' => \'  \',
          ),
        ),
      ),
      \'field_address_title\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Northeast\',
            \'format\' => NULL,
            \'safe_value\' => \'Northeast\',
          ),
          array(
            \'value\' => \'Midwest\',
            \'format\' => NULL,
            \'safe_value\' => \'Midwest\',
          ),
          array(
            \'value\' => \'South\',
            \'format\' => NULL,
            \'safe_value\' => \'South\',
          ),
          array(
            \'value\' => \'West\',
            \'format\' => NULL,
            \'safe_value\' => \'West\',
          ),
          array(
            \'value\' => \'Central\',
            \'format\' => NULL,
            \'safe_value\' => \'Central\',
          ),
          array(
            \'value\' => \'National\',
            \'format\' => NULL,
            \'safe_value\' => \'National\',
          ),
        ),
      ),
      \'field_cta_button\' => array(),
      \'field_cta_content\' => array(),
      \'field_internal_header\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'300\',
            \'uid\' => \'227\',
            \'filename\' => \'Vertical-Bridge_Our-Partners.jpg\',
            \'uri\' => \'public://Vertical-Bridge_Our-Partners.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'170021\',
            \'status\' => \'1\',
            \'timestamp\' => \'1466793826\',
            \'type\' => \'image\',
            \'uuid\' => \'12875c54-39ea-436e-8b57-cfb4db9c8dd3\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'1024\',
              \'height\' => \'242\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'1024\',
            \'height\' => \'242\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Development Directors (BTS)\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'leasing_agents\',
      \'uid\' => \'227\',
      \'uuid\' => \'557b9fe1-386f-4801-bd83-d8ecb7d59b64\',
      \'vid\' => NULL,
      \'vuuid\' => \'c75a875f-36dd-478f-bee7-519149d001dd\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<ul>\\r\\n\\t<li>Acquisitions marks tenth transaction in less than three months</li>\\r\\n\\t<li>Industry veteran Jim McCulloch to lead real estate division</li>\\r\\n</ul>\\r\\n\\r\\n<p><strong>Boca Raton, FL., August, 2014</strong> - Vertical Bridge Holdings, LLC., a privately owned tower company in the U.S., today announced that it has completed its acquisition of four tower portfolios.&nbsp; The portfolios further strengthen Vertical Bridge’s footprint in key regions of the Eastern United States.</p>\\r\\n\\r\\n<p>“We are pleased to announce another acquisition of tower portfolios,” said Alexander L. Gellman, CEO and Co-Founder, Vertical Bridge. “The Eastern U.S. is an attractive market for towers given its heavily congested metropolitan areas and the need for cell site densification. We have acquired four more portfolios of strategically located towers.&nbsp; We expect to continue to build upon this acquisition momentum and see a number of opportunities as we continue to pursue strategic portfolio acquisitions,” said Mr. Gellman.</p>\\r\\n\\r\\n<p>Vertical Bridge now owns or has exclusive leasing rights to 320 towers and rooftops across the U.S.</p>\\r\\n\\r\\n<p>Vertical Bridge also announced today the appointment of telecom industry veteran, Jim McCulloch, who has joined Vertical Bridge as Vice President of its Real Estate division. In this role, Mr. McCullough will lead the development and expansion of Vertical Bridge’s real estate portfolio.&nbsp; With over 20 years of experience, Mr. McCulloch has enjoyed a successful career in telecommunications and technology. Mr. McCulloch was most recently at Global Tower Partners (GTP), where he served as the Vice President of Real Estate responsible for GTP’s Real Estate Department.&nbsp; In that role he helped to develop GTP’s real estate portfolio, and expand existing landlord relationships. Prior to GTP, he was a partner in DGP Development, a leading provider of Distributed Antenna Systems (DAS) to hotels and sports stadiums. Mr. McCulloch previously served as Vice President of Information Technology for Destination Hotels and Resorts.</p>\\r\\n\\r\\n<p>“We are delighted that an experienced executive such as Jim has joined our team to lead our real estate division, which is a key focus area of our business strategy and growth at Vertical Bridge,” added Mr. Gellman.</p>\\r\\n\\r\\n<p><strong>About Vertical Bridge Holdings, LLC.</strong></p>\\r\\n\\r\\n<p>Vertical Bridge Holdings is a privately-owned tower company in the US headquartered in Boca Raton, Florida. The company focuses on owning, operating, and managing telecommunications towers, rooftops, and site locations across the country. Vertical Bridge was founded in 2014 by Digital Bridge Holdings, LLC as well as certain key executives from Global Tower Partners.&nbsp; For more information please visit <a href=\\"http://www.verticalbridge.com/\\"><u>www.verticalbridge.com</u></a> or call: Traci Clancy at 561-948-6367.</p>\\r\\n\\r\\n<p><strong>About Digital Bridge Holdings, LLC.</strong></p>\\r\\n\\r\\n<p>Digital Bridge Holdings, is a communications infrastructure platform based in Boca Raton, Florida. It was formed in 2013 through a partnership between Ben Jenkins (formerly of The Blackstone Group) and Marc Ganzi (former founder and CEO of Global Tower Partners). Digital Bridge owns interests in a broad range of communications infrastructure companies. It is dedicated to long-term value creation through the active management of its companies and strong alignment with its investor partners. Digital Bridge manages investments on behalf of institutional, corporate, endowment and family offices around the world.&nbsp; More information may be found at <a href=\\"http://www.digitalbridgellc.com/\\"><u>www.digitalbridgellc.com</u></a>.</p>\\r\\n",
            \'summary\' => "<p><strong>Boca Raton, FL., August, 2014</strong> - Vertical Bridge Holdings, LLC., a privately owned tower company in the U.S., today announced that it has completed its acquisition of four tower portfolios.&nbsp; The portfolios further strengthen Vertical Bridge’s footprint in key regions of the Eastern United States.</p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => " <ul><li>Acquisitions marks tenth transaction in less than three months</li>\\n<li>Industry veteran Jim McCulloch to lead real estate division</li>\\n</ul><p><strong>Boca Raton, FL., August, 2014</strong> - Vertical Bridge Holdings, LLC., a privately owned tower company in the U.S., today announced that it has completed its acquisition of four tower portfolios.  The portfolios further strengthen Vertical Bridge’s footprint in key regions of the Eastern United States.</p>\\n<p>“We are pleased to announce another acquisition of tower portfolios,” said Alexander L. Gellman, CEO and Co-Founder, Vertical Bridge. “The Eastern U.S. is an attractive market for towers given its heavily congested metropolitan areas and the need for cell site densification. We have acquired four more portfolios of strategically located towers.  We expect to continue to build upon this acquisition momentum and see a number of opportunities as we continue to pursue strategic portfolio acquisitions,” said Mr. Gellman.</p>\\n<p>Vertical Bridge now owns or has exclusive leasing rights to 320 towers and rooftops across the U.S.</p>\\n<p>Vertical Bridge also announced today the appointment of telecom industry veteran, Jim McCulloch, who has joined Vertical Bridge as Vice President of its Real Estate division. In this role, Mr. McCullough will lead the development and expansion of Vertical Bridge’s real estate portfolio.  With over 20 years of experience, Mr. McCulloch has enjoyed a successful career in telecommunications and technology. Mr. McCulloch was most recently at Global Tower Partners (GTP), where he served as the Vice President of Real Estate responsible for GTP’s Real Estate Department.  In that role he helped to develop GTP’s real estate portfolio, and expand existing landlord relationships. Prior to GTP, he was a partner in DGP Development, a leading provider of Distributed Antenna Systems (DAS) to hotels and sports stadiums. Mr. McCulloch previously served as Vice President of Information Technology for Destination Hotels and Resorts.</p>\\n<p>“We are delighted that an experienced executive such as Jim has joined our team to lead our real estate division, which is a key focus area of our business strategy and growth at Vertical Bridge,” added Mr. Gellman.</p>\\n<p><strong>About Vertical Bridge Holdings, LLC.</strong></p>\\n<p>Vertical Bridge Holdings is a privately-owned tower company in the US headquartered in Boca Raton, Florida. The company focuses on owning, operating, and managing telecommunications towers, rooftops, and site locations across the country. Vertical Bridge was founded in 2014 by Digital Bridge Holdings, LLC as well as certain key executives from Global Tower Partners.  For more information please visit <a href=\\"http://www.verticalbridge.com/\\"><u>www.verticalbridge.com</u></a> or call: Traci Clancy at 561-948-6367.</p>\\n<p><strong>About Digital Bridge Holdings, LLC.</strong></p>\\n<p>Digital Bridge Holdings, is a communications infrastructure platform based in Boca Raton, Florida. It was formed in 2013 through a partnership between Ben Jenkins (formerly of The Blackstone Group) and Marc Ganzi (former founder and CEO of Global Tower Partners). Digital Bridge owns interests in a broad range of communications infrastructure companies. It is dedicated to long-term value creation through the active management of its companies and strong alignment with its investor partners. Digital Bridge manages investments on behalf of institutional, corporate, endowment and family offices around the world.  More information may be found at <a href=\\"http://www.digitalbridgellc.com/\\"><u>www.digitalbridgellc.com</u></a>.</p>\\n ",
            \'safe_summary\' => " <p><strong>Boca Raton, FL., August, 2014</strong> - Vertical Bridge Holdings, LLC., a privately owned tower company in the U.S., today announced that it has completed its acquisition of four tower portfolios.  The portfolios further strengthen Vertical Bridge’s footprint in key regions of the Eastern United States.</p>\\n ",
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;}\',
      \'field_date\' => array(),
      \'field_external_link\' => array(),
      \'field_internal_header\' => array(),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'0\',
      \'sticky\' => \'0\',
      \'title\' => \'Vertical Bridge Holdings, LLC. Continues Portfolio Expansion; Appoints New Head of Real Estate\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'press_release\',
      \'uid\' => \'227\',
      \'uuid\' => \'571e5767-238f-4598-bc86-e81dcff54c2c\',
      \'vid\' => NULL,
      \'vuuid\' => \'8f172df7-831d-46c7-a301-040565397bd9\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>VB provides complete build-to-suit services in every region of the United States. We have built hundreds of towers. With an experienced staff and vast resources, VB has a well-known reputation for performing on time and under budget. VB is flexible in meeting the needs of wireless providers: we specialize in taking on projects at various stages of the process:</p>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Issuance of search ring</li>\\r\\n\\t<li>Upon zoning approval</li>\\r\\n\\t<li>Upon receipt of building permit</li>\\r\\n</ul>\\r\\n\\r\\n<p>VB is experienced and has the capacity for small or large BTS projects. Our relationships with all wireless providers demonstrate a strong history of success.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p>VB provides complete build-to-suit services in every region of the United States. We have built hundreds of towers. With an experienced staff and vast resources, VB has a well-known reputation for performing on time and under budget. VB is flexible in meeting the needs of wireless providers: we specialize in taking on projects at various stages of the process:</p>\\n<ul><li>Issuance of search ring</li>\\n<li>Upon zoning approval</li>\\n<li>Upon receipt of building permit</li>\\n</ul><p>VB is experienced and has the capacity for small or large BTS projects. Our relationships with all wireless providers demonstrate a strong history of success.</p>\\n ",
            \'safe_summary\' => \'  \',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'field_cta_button\' => array(),
      \'field_cta_content\' => array(),
      \'field_internal_header\' => array(),
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'metatags\' => array(
        \'en\' => array(
          \'title\' => array(
            \'value\' => \'Cell Tower Build To Suit | Vertical Bridge\',
          ),
          \'description\' => array(
            \'value\' => \'VB provides complete build-to-suit services in every region of the United States. We have built hundreds of towers. With an experienced staff and vast resources, VB has a well-known reputation for performing on time and under budget.\',
          ),
        ),
      ),
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(
        array(
          \'pnid\' => \'5\',
          \'menu_name\' => \'navigation\',
          \'mlid\' => \'637\',
          \'plid\' => \'635\',
          \'link_path\' => \'node/28\',
          \'router_path\' => \'node/%\',
          \'link_title\' => \'New Tower Builds\',
          \'options\' => array(
            \'attributes\' => array(
              \'title\' => \'\',
            ),
          ),
          \'module\' => \'nodehierarchy\',
          \'hidden\' => \'1\',
          \'external\' => \'0\',
          \'has_children\' => \'0\',
          \'expanded\' => \'0\',
          \'weight\' => \'1\',
          \'depth\' => \'2\',
          \'customized\' => \'0\',
          \'p1\' => \'635\',
          \'p2\' => \'637\',
          \'p3\' => \'0\',
          \'p4\' => \'0\',
          \'p5\' => \'0\',
          \'p6\' => \'0\',
          \'p7\' => \'0\',
          \'p8\' => \'0\',
          \'p9\' => \'0\',
          \'updated\' => \'0\',
          \'language\' => \'und\',
          \'i18n_tsid\' => \'0\',
          \'enabled\' => FALSE,
          \'nid\' => \'28\',
        ),
      ),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'New Tower Builds\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'page\',
      \'uid\' => \'227\',
      \'uuid\' => \'58cb08b5-584f-48a1-a783-5492851c8911\',
      \'vid\' => NULL,
      \'vuuid\' => \'60cfd1f1-66cc-4f70-a4fe-e05d94eae917\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<ul>\\r\\n\\t<li>Acquisitions further expand the company’s tower portfolio in major markets across the US</li>\\r\\n\\t<li>Vertical Bridge enters the attractive Puerto Rico tower market</li>\\r\\n</ul>\\r\\n\\r\\n<p><strong>Boca Raton, FL, October1, 2014</strong> - Vertical Bridge Holdings, LLC., a privately owned tower company, today announced that it has completed the acquisition of six additional tower portfolios with assets in the Great Lakes region, through the Eastern US, Puerto Rico, and a number of Southern markets. These newly acquired portfolios further expand Vertical Bridge’s footprint in key regions of the United States.</p>\\r\\n\\r\\n<p>“VB continues to grow at an accelerated pace, taking advantage of a very healthy M&amp;A pipeline. We are closing deals with known partners who successfully worked with us before and also many new partners who like our approach to the M&amp;A process. We also are excited to be back in Puerto Rico, which we view as an attractive region”, said Alexander L. Gellman, CEO and Co-Founder of Vertical Bridge.</p>\\r\\n\\r\\n<p><strong>About Vertical Bridge Holdings, LLC</strong>.<br />\\r\\nVertical Bridge Holdings is a privately-owned tower company in the US headquartered in Boca Raton, Florida. The company focuses on owning, operating, and managing telecommunications towers, rooftops, and site locations across the country. Vertical Bridge was founded in 2014 by Digital Bridge Holdings, LLC as well as certain key executives from Global Tower Partners. For more information please visit <a href=\\"http://www.verticalbridge.com\\">www.verticalbridge.com</a> or call: Traci Clancy at 561-948-6367.</p>\\r\\n",
            \'summary\' => "<p>&nbsp;</p>\\r\\n\\r\\n<p>Boca Raton, FL, October1, 2014 - Vertical Bridge Holdings, LLC., a privately owned tower company, today announced that it has completed the acquisition of six additional tower portfolios with assets in the Great Lakes region, through the Eastern US, Puerto Rico, and a number of Southern markets. These newly acquired portfolios further expand Vertical Bridge’s footprint in key regions of the United States.</p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => " <ul><li>Acquisitions further expand the company’s tower portfolio in major markets across the US</li>\\n<li>Vertical Bridge enters the attractive Puerto Rico tower market</li>\\n</ul><p><strong>Boca Raton, FL, October1, 2014</strong> - Vertical Bridge Holdings, LLC., a privately owned tower company, today announced that it has completed the acquisition of six additional tower portfolios with assets in the Great Lakes region, through the Eastern US, Puerto Rico, and a number of Southern markets. These newly acquired portfolios further expand Vertical Bridge’s footprint in key regions of the United States.</p>\\n<p>“VB continues to grow at an accelerated pace, taking advantage of a very healthy M&amp;A pipeline. We are closing deals with known partners who successfully worked with us before and also many new partners who like our approach to the M&amp;A process. We also are excited to be back in Puerto Rico, which we view as an attractive region”, said Alexander L. Gellman, CEO and Co-Founder of Vertical Bridge.</p>\\n<p><strong>About Vertical Bridge Holdings, LLC</strong>.<br />\\nVertical Bridge Holdings is a privately-owned tower company in the US headquartered in Boca Raton, Florida. The company focuses on owning, operating, and managing telecommunications towers, rooftops, and site locations across the country. Vertical Bridge was founded in 2014 by Digital Bridge Holdings, LLC as well as certain key executives from Global Tower Partners. For more information please visit <a href=\\"http://www.verticalbridge.com\\">www.verticalbridge.com</a> or call: Traci Clancy at 561-948-6367.</p>\\n ",
            \'safe_summary\' => " <p> </p>\\n<p>Boca Raton, FL, October1, 2014 - Vertical Bridge Holdings, LLC., a privately owned tower company, today announced that it has completed the acquisition of six additional tower portfolios with assets in the Great Lakes region, through the Eastern US, Puerto Rico, and a number of Southern markets. These newly acquired portfolios further expand Vertical Bridge’s footprint in key regions of the United States.</p>\\n ",
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'field_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-10-02 04:15:00\',
            \'timezone\' => \'America/New_York\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_internal_header\' => array(),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Vertical Bridge Holdings, LLC. Completes Six More Acquisitions In September\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'press\',
      \'uid\' => \'227\',
      \'uuid\' => \'5ddb03b9-a938-49ce-acee-c5dca659e25c\',
      \'vid\' => NULL,
      \'vuuid\' => \'514001fc-0835-4cf3-937d-5a1b2cbb1a6f\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<ul>\\r\\n\\t<li>Significant additional equity investment by Digital Bridge Holdings and The Jordan Company</li>\\r\\n\\t<li>Major new commitments from GS Infrastructure Partners (Goldman Sachs) and Stonepeak Infrastructure Partners</li>\\r\\n\\t<li>Over $1 billion of committed capital to fund investment in growth of the business</li>\\r\\n</ul>\\r\\n\\r\\n<p><strong>Boca Raton, FL., November 11, 2014</strong> - Vertical Bridge Holdings, LLC, a privately owned real estate investment trust focused on the ownership of wireless communications towers in the U.S., today announced that it has secured over $470 million of incremental equity commitments in a second round capital raise to support its acquisitions, new tower build programs, and growth strategy.</p>\\r\\n\\r\\n<p>With the closing of these commitments, which include significant additional equity from existing investors Digital Bridge Holdings, LLC and The Jordan Company, and major new commitments from GS Infrastructure Partners and Stonepeak Infrastructure Partners, Vertical Bridge has secured equity capital commitments of $750 million.</p>\\r\\n\\r\\n<p>Vertical Bridge has closed 23 acquisitions to date in 2014, including 4 deals completed since October 1, the company said.</p>\\r\\n\\r\\n<p>“Vertical Bridge now has over $750 million of committed equity, and alongside our existing $270 million senior credit facility, we have over $1 billion of immediately investable capital to fund our growth,” said Alexander L. Gellman, CEO and Co-Founder of Vertical Bridge, which was founded in 2014. “We are pleased that Digital Bridge and The Jordan Company increased their commitments, and welcome the opportunity to work with well-established partners such as GS Infrastructure Partners and Stonepeak.”</p>\\r\\n\\r\\n<p>“We are extremely excited to support the Vertical Bridge team with the largest commitment among this high quality equity investor group,\\" commented Marc Ganzi, CEO of Digital Bridge Holdings, LLC. \\"We remain very bullish on the U.S. tower space, and are pleased to provide the Vertical Bridge team with the capital necessary to assist our wireless carrier partners in the deployment of their ongoing and future network needs.”</p>\\r\\n\\r\\n<p>“Since the day we first invested in Vertical Bridge, we have become even more excited about our partnership with Marc, Alex and the rest of the Vertical Bridge team,\\" said Eion Hu, Senior Partner at The Jordan Company. \\"They have proven themselves to be a superior management team in an industry benefiting from significant demand drivers. We are thrilled with this opportunity to increase our equity commitment in Vertical Bridge.”</p>\\r\\n\\r\\n<p>“As global infrastructure investors, we look for opportunities to partner with best-in-class management teams in industries that can provide stability and attractive prospects. We believe Vertical Bridge stands out in the wireless tower sector and we are excited to work with management on their next phase of growth,” said Edward Pallesen, Head of Americas for GS Infrastructure Partners at Goldman Sachs.</p>\\r\\n\\r\\n<p>“We view the U.S. tower sector as the critical infrastructure enabling connectivity in the U.S. wireless telecom industry. We are thrilled to have the opportunity to be involved in this space through our partnership with Vertical Bridge, Digital Bridge, and their other financial partners,\\" added Trent Vichie, Senior Managing Director &amp; Co-Founder of Stonepeak Infrastructure Partners.</p>\\r\\n\\r\\n<p><strong>About Vertical Bridge Holdings, LLC </strong></p>\\r\\n\\r\\n<p>Vertical Bridge Holdings is a privately-owned real estate investment trust focused on the ownership of wireless communication towers in the U.S. headquartered in Boca Raton, Florida. The company focuses on owning, operating, and managing telecommunications towers, rooftops, and site locations across the country. Vertical Bridge was founded in 2014 by Digital Bridge Holdings, LLC as well as certain key executives from Global Tower Partners. For more information, please visit www.verticalbridge.com or call Traci Clancy at 561-948-6367.</p>\\r\\n\\r\\n<p><strong>About Digital Bridge Holdings, LLC</strong></p>\\r\\n\\r\\n<p>Digital Bridge Holdings is a communications infrastructure platform based in Boca Raton, Florida. It was formed in 2013 through a partnership between Ben Jenkins (formerly of The Blackstone Group) and Marc Ganzi (former founder and CEO of Global Tower Partners). Digital Bridge owns interests in a broad range of communications infrastructure companies. It is dedicated to long-term value creation through the active management of its companies and strong alignment with its investor partners. Digital Bridge manages investments on behalf of institutional, corporate, endowment and family offices around the world. More information may be found at www.digitalbridgellc.com.</p>\\r\\n\\r\\n<p><strong>About The Jordan Company, L.P.</strong></p>\\r\\n\\r\\n<p>The Jordan Company, founded in 1982, is a leading middle-market private equity firm with more than $8 billion of committed capital assets under management and a 30-year track record of investing in and contributing to the growth of many businesses across a wide range of industries. The firm’s senior investment team has been together for more than 15 years and is supported by its Operations Management Group, which was established in 1988 to initiate and support operational improvements in portfolio companies. Headquartered in New York, The Jordan Company also has offices in Chicago and Shanghai. For more information, please refer to www.thejordancompany.com.</p>\\r\\n\\r\\n<p><strong>About Goldman Sachs</strong></p>\\r\\n\\r\\n<p>Founded in 1869, Goldman, Sachs &amp; Co. (“Goldman Sachs”) is a leading global investment banking, securities and investment management firm that provides a wide range of financial services to a substantial and diversified client base that includes corporations, financial institutions, governments and high-net-worth individuals. GS Infrastructure Partners is Goldman Sachs’ primary vehicle to make direct investments in infrastructure and infrastructure-related assets and companies. GS Infrastructure Partners has approximately $10 billion in aggregate assets under management and is managed by the Merchant Banking Division of Goldman Sachs. For more information, please visit www.gs.com.</p>\\r\\n\\r\\n<p><strong>About Stonepeak Infrastructure Partners</strong></p>\\r\\n\\r\\n<p>Stonepeak Infrastructure Partners is an independent private equity investment firm, managing $1.7 billion, specializing in North American middle-market infrastructure. Stonepeak invests in businesses comprised of hard assets with strategic importance, primarily in the following sectors: Energy, Power &amp; Renewables, Transportation, Utilities, Water &amp; Communications. Stonepeak is based in New York. Visit www.stonepeakpartners.com for more information.  </p>\\r\\n",
            \'summary\' => "<p>Significant additional equity investment by Digital Bridge Holdings and The Jordan Company Major new commitments from GS Infrastructure Partners (Goldman Sachs) and Stonepeak Infrastructure Partners Over $1 billion of committed capital to fund investment in growth of the business</p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => " <ul><li>Significant additional equity investment by Digital Bridge Holdings and The Jordan Company</li>\\n<li>Major new commitments from GS Infrastructure Partners (Goldman Sachs) and Stonepeak Infrastructure Partners</li>\\n<li>Over $1 billion of committed capital to fund investment in growth of the business</li>\\n</ul><p><strong>Boca Raton, FL., November 11, 2014</strong> - Vertical Bridge Holdings, LLC, a privately owned real estate investment trust focused on the ownership of wireless communications towers in the U.S., today announced that it has secured over $470 million of incremental equity commitments in a second round capital raise to support its acquisitions, new tower build programs, and growth strategy.</p>\\n<p>With the closing of these commitments, which include significant additional equity from existing investors Digital Bridge Holdings, LLC and The Jordan Company, and major new commitments from GS Infrastructure Partners and Stonepeak Infrastructure Partners, Vertical Bridge has secured equity capital commitments of $750 million.</p>\\n<p>Vertical Bridge has closed 23 acquisitions to date in 2014, including 4 deals completed since October 1, the company said.</p>\\n<p>“Vertical Bridge now has over $750 million of committed equity, and alongside our existing $270 million senior credit facility, we have over $1 billion of immediately investable capital to fund our growth,” said Alexander L. Gellman, CEO and Co-Founder of Vertical Bridge, which was founded in 2014. “We are pleased that Digital Bridge and The Jordan Company increased their commitments, and welcome the opportunity to work with well-established partners such as GS Infrastructure Partners and Stonepeak.”</p>\\n<p>“We are extremely excited to support the Vertical Bridge team with the largest commitment among this high quality equity investor group,\\" commented Marc Ganzi, CEO of Digital Bridge Holdings, LLC. \\"We remain very bullish on the U.S. tower space, and are pleased to provide the Vertical Bridge team with the capital necessary to assist our wireless carrier partners in the deployment of their ongoing and future network needs.”</p>\\n<p>“Since the day we first invested in Vertical Bridge, we have become even more excited about our partnership with Marc, Alex and the rest of the Vertical Bridge team,\\" said Eion Hu, Senior Partner at The Jordan Company. \\"They have proven themselves to be a superior management team in an industry benefiting from significant demand drivers. We are thrilled with this opportunity to increase our equity commitment in Vertical Bridge.”</p>\\n<p>“As global infrastructure investors, we look for opportunities to partner with best-in-class management teams in industries that can provide stability and attractive prospects. We believe Vertical Bridge stands out in the wireless tower sector and we are excited to work with management on their next phase of growth,” said Edward Pallesen, Head of Americas for GS Infrastructure Partners at Goldman Sachs.</p>\\n<p>“We view the U.S. tower sector as the critical infrastructure enabling connectivity in the U.S. wireless telecom industry. We are thrilled to have the opportunity to be involved in this space through our partnership with Vertical Bridge, Digital Bridge, and their other financial partners,\\" added Trent Vichie, Senior Managing Director &amp; Co-Founder of Stonepeak Infrastructure Partners.</p>\\n<p><strong>About Vertical Bridge Holdings, LLC </strong></p>\\n<p>Vertical Bridge Holdings is a privately-owned real estate investment trust focused on the ownership of wireless communication towers in the U.S. headquartered in Boca Raton, Florida. The company focuses on owning, operating, and managing telecommunications towers, rooftops, and site locations across the country. Vertical Bridge was founded in 2014 by Digital Bridge Holdings, LLC as well as certain key executives from Global Tower Partners. For more information, please visit <a href=\\"http://www.verticalbridge.com\\">www.verticalbridge.com</a> or call Traci Clancy at 561-948-6367.</p>\\n<p><strong>About Digital Bridge Holdings, LLC</strong></p>\\n<p>Digital Bridge Holdings is a communications infrastructure platform based in Boca Raton, Florida. It was formed in 2013 through a partnership between Ben Jenkins (formerly of The Blackstone Group) and Marc Ganzi (former founder and CEO of Global Tower Partners). Digital Bridge owns interests in a broad range of communications infrastructure companies. It is dedicated to long-term value creation through the active management of its companies and strong alignment with its investor partners. Digital Bridge manages investments on behalf of institutional, corporate, endowment and family offices around the world. More information may be found at <a href=\\"http://www.digitalbridgellc.com\\">www.digitalbridgellc.com</a>.</p>\\n<p><strong>About The Jordan Company, L.P.</strong></p>\\n<p>The Jordan Company, founded in 1982, is a leading middle-market private equity firm with more than $8 billion of committed capital assets under management and a 30-year track record of investing in and contributing to the growth of many businesses across a wide range of industries. The firm’s senior investment team has been together for more than 15 years and is supported by its Operations Management Group, which was established in 1988 to initiate and support operational improvements in portfolio companies. Headquartered in New York, The Jordan Company also has offices in Chicago and Shanghai. For more information, please refer to <a href=\\"http://www.thejordancompany.com\\">www.thejordancompany.com</a>.</p>\\n<p><strong>About Goldman Sachs</strong></p>\\n<p>Founded in 1869, Goldman, Sachs &amp; Co. (“Goldman Sachs”) is a leading global investment banking, securities and investment management firm that provides a wide range of financial services to a substantial and diversified client base that includes corporations, financial institutions, governments and high-net-worth individuals. GS Infrastructure Partners is Goldman Sachs’ primary vehicle to make direct investments in infrastructure and infrastructure-related assets and companies. GS Infrastructure Partners has approximately $10 billion in aggregate assets under management and is managed by the Merchant Banking Division of Goldman Sachs. For more information, please visit <a href=\\"http://www.gs.com\\">www.gs.com</a>.</p>\\n<p><strong>About Stonepeak Infrastructure Partners</strong></p>\\n<p>Stonepeak Infrastructure Partners is an independent private equity investment firm, managing $1.7 billion, specializing in North American middle-market infrastructure. Stonepeak invests in businesses comprised of hard assets with strategic importance, primarily in the following sectors: Energy, Power &amp; Renewables, Transportation, Utilities, Water &amp; Communications. Stonepeak is based in New York. Visit <a href=\\"http://www.stonepeakpartners.com\\">www.stonepeakpartners.com</a> for more information.  </p>\\n ",
            \'safe_summary\' => " <p>Significant additional equity investment by Digital Bridge Holdings and The Jordan Company Major new commitments from GS Infrastructure Partners (Goldman Sachs) and Stonepeak Infrastructure Partners Over $1 billion of committed capital to fund investment in growth of the business</p>\\n ",
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'field_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-11-11 19:15:00\',
            \'timezone\' => \'America/New_York\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_internal_header\' => array(),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Vertical Bridge Holdings Completes Second Round Capital Raise; Equity Commitments Now Total $750 million\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'press\',
      \'uid\' => \'227\',
      \'uuid\' => \'5eabab97-66ac-4628-8bcd-020a29d76973\',
      \'vid\' => NULL,
      \'vuuid\' => \'0d6ce995-3fa1-49b8-b546-5e972bf4d5a6\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Clear Channel Outdoor Americas and Vertical Bridge Announce Landmark National Partnership for Wireless Deployment on Billboards&nbsp;</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p>Clear Channel Outdoor Americas and Vertical Bridge Announce Landmark National Partnership for Wireless Deployment on Billboards </p>\\n ",
            \'safe_summary\' => \'  \',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'0\',
      \'sticky\' => \'0\',
      \'title\' => \'Clear Channel Outdoor Americas and Vertical Bridge Announce Landmark National Partnership for Wireless Deployment on Billboards\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'news_marquee\',
      \'uid\' => \'227\',
      \'uuid\' => \'5ef2b1bf-dd3c-4325-8070-31959963007f\',
      \'vid\' => NULL,
      \'vuuid\' => \'b425160f-66b7-4a48-9929-a2a963626441\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'\',
            \'summary\' => "<p><i>Inside Radio</i></p>\\r\\n\\r\\n<p>Less than a week after putting the wraps on its $264 million purchase of Digity Media, Alpha Media has closed on the sale of nearly 200 broadcast towers to tower giant Vertical Bridge. The two-part deal includes 64 sites from Alpha’s legacy portfolio and 49 sites it recently acquired as part of the Digity acquisition.</p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => \'  \',
            \'safe_summary\' => " <p><i>Inside Radio</i></p>\\n<p>Less than a week after putting the wraps on its $264 million purchase of Digity Media, Alpha Media has closed on the sale of nearly 200 broadcast towers to tower giant Vertical Bridge. The two-part deal includes 64 sites from Alpha’s legacy portfolio and 49 sites it recently acquired as part of the Digity acquisition.</p>\\n ",
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'field_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2016-03-02 17:00:00\',
            \'timezone\' => \'America/New_York\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_external_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://www.insideradio.com/alpha-sale-adds-to-vertical-bridge-tower-assets/article_0b582392-e0b0-11e5-842c-3bf85c9e9804.html\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_internal_header\' => array(),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Alpha Sale Adds To Vertical Bridge Tower Assets\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'press_release\',
      \'uid\' => \'227\',
      \'uuid\' => \'64595f30-5a62-49c5-b8ee-e11da0f94749\',
      \'vid\' => NULL,
      \'vuuid\' => \'8681dbfe-1ea1-48e4-9ac4-dff60399f401\',
    ),
  (object) array(
      \'body\' => array(),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'field_event_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'November 14-16, 2016\',
            \'format\' => NULL,
            \'safe_value\' => \'November 14-16, 2016\',
          ),
        ),
      ),
      \'field_event_location\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Dallas, TX\',
            \'format\' => NULL,
            \'safe_value\' => \'Dallas, TX\',
          ),
        ),
      ),
      \'field_internal_header\' => array(),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'5G World North America\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'events\',
      \'uid\' => \'227\',
      \'uuid\' => \'65a183c9-5b54-4a39-96a2-d6818d70599f\',
      \'vid\' => NULL,
      \'vuuid\' => \'d962cff9-0511-48bc-a7fc-8738663af58c\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><em>Vertical Bridge will gain exclusive rights to over 200 towers </em></p>\\r\\n\\r\\n<p><strong>BOCA RATON, FL NOVEMBER 06, 2015</strong>&nbsp;- Vertical Bridge, the largest private owner and manager of wireless communication infrastructure in the U.S., today announced it has closed a transaction to acquire the rights to over 200 wireless communications towers from Nsight Tower Holdings, LLC (“Nsight”), a major telecommunication service provider in the Midwest. Vertical Bridge will have the exclusive rights to lease and operate the portfolio of Nsight towers for a weighted average term of approximately 31 years. Vertical Bridge will also have fixed price purchase options to acquire the towers based on their anticipated fair market values at the end of the lease terms. Financial terms of the private transaction were not disclosed.</p>\\r\\n\\r\\n<p>“Vertical Bridge is very pleased to have earned the opportunity to become a long-term partner with Nsight,” stated Alex Gellman, Chief Executive Officer and Co-Founder of Vertical Bridge. “These unique, high quality, fiber-ready towers are built in prime locations, and Nsight will be the anchor tenant on all of the sites. By acquiring access to this portfolio of concentrated assets, Vertical Bridge will enhance its ability to provide improved regional coverage in Northern Wisconsin while capturing incremental leasing opportunities.”</p>\\r\\n\\r\\n<p>“We view this as an opportune time to transition management and operation of Nsight’s owned tower portfolio to a trusted partner,” said Patrick Riordan, Nsight’s Chief Executive Officer. “We have known and worked extensively with members of Vertical Bridge’s executive team and are comfortable with them as our long-term landlord. Nsight will use the proceeds from this transaction to continue to build out our LTE network and acquire additional spectrum in key markets.”</p>\\r\\n\\r\\n<p>Vertical Bridge now has almost 3,000 owned towers in its portfolio, and over 42,000 total sites. The portfolio is uniquely positioned to capitalize on the nationwide proliferation of advanced mobile communication and broadband services.</p>\\r\\n\\r\\n<p><strong>About Vertical Bridge</strong></p>\\r\\n\\r\\n<p>Vertical Bridge is the largest private owner and manager of wireless communication infrastructure in the United States. The company owns, operates and manages over 42,000 tower, rooftop, billboard, utility attachment and other site locations in support of all wireless network deployments. Based in Boca Raton, Florida, Vertical Bridge was founded in 2014 by key executives from Digital Bridge Holdings, LLC and former senior officers of Global Tower Partners. The senior management team at Vertical Bridge has over 150 years of collective experience in tower infrastructure and related sectors. For more information, please visit http://www.verticalbridge.com.</p>\\r\\n\\r\\n<p><strong>About Nsight</strong></p>\\r\\n\\r\\n<p>Nsight is the parent company of Cellcom, Nsight Telservices and Nsight Tower. The family of companies provides wireless, telecommunication and broadband services to residential and business customers, along with tower erection and maintenance services in Wisconsin and Michigan’s Upper Peninsula.</p>\\r\\n",
            \'summary\' => "<p><span style=\\"font-size: 13.6px;\\">Vertical Bridge will gain exclusive rights to over 200 towers Vertical Bridge will have the exclusive rights to lease and operate the portfolio of Nsight towers for a weighted average term of approximately 31 years. Vertical Bridge will also have fixed price purchase options to acquire the towers based on their anticipated fair market values at the end of the lease terms.</span></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => " <p><em>Vertical Bridge will gain exclusive rights to over 200 towers </em></p>\\n<p><strong>BOCA RATON, FL NOVEMBER 06, 2015</strong> - Vertical Bridge, the largest private owner and manager of wireless communication infrastructure in the U.S., today announced it has closed a transaction to acquire the rights to over 200 wireless communications towers from Nsight Tower Holdings, LLC (“Nsight”), a major telecommunication service provider in the Midwest. Vertical Bridge will have the exclusive rights to lease and operate the portfolio of Nsight towers for a weighted average term of approximately 31 years. Vertical Bridge will also have fixed price purchase options to acquire the towers based on their anticipated fair market values at the end of the lease terms. Financial terms of the private transaction were not disclosed.</p>\\n<p>“Vertical Bridge is very pleased to have earned the opportunity to become a long-term partner with Nsight,” stated Alex Gellman, Chief Executive Officer and Co-Founder of Vertical Bridge. “These unique, high quality, fiber-ready towers are built in prime locations, and Nsight will be the anchor tenant on all of the sites. By acquiring access to this portfolio of concentrated assets, Vertical Bridge will enhance its ability to provide improved regional coverage in Northern Wisconsin while capturing incremental leasing opportunities.”</p>\\n<p>“We view this as an opportune time to transition management and operation of Nsight’s owned tower portfolio to a trusted partner,” said Patrick Riordan, Nsight’s Chief Executive Officer. “We have known and worked extensively with members of Vertical Bridge’s executive team and are comfortable with them as our long-term landlord. Nsight will use the proceeds from this transaction to continue to build out our LTE network and acquire additional spectrum in key markets.”</p>\\n<p>Vertical Bridge now has almost 3,000 owned towers in its portfolio, and over 42,000 total sites. The portfolio is uniquely positioned to capitalize on the nationwide proliferation of advanced mobile communication and broadband services.</p>\\n<p><strong>About Vertical Bridge</strong></p>\\n<p>Vertical Bridge is the largest private owner and manager of wireless communication infrastructure in the United States. The company owns, operates and manages over 42,000 tower, rooftop, billboard, utility attachment and other site locations in support of all wireless network deployments. Based in Boca Raton, Florida, Vertical Bridge was founded in 2014 by key executives from Digital Bridge Holdings, LLC and former senior officers of Global Tower Partners. The senior management team at Vertical Bridge has over 150 years of collective experience in tower infrastructure and related sectors. For more information, please visit <a href=\\"http://www.verticalbridge.com\\">http://www.verticalbridge.com</a>.</p>\\n<p><strong>About Nsight</strong></p>\\n<p>Nsight is the parent company of Cellcom, Nsight Telservices and Nsight Tower. The family of companies provides wireless, telecommunication and broadband services to residential and business customers, along with tower erection and maintenance services in Wisconsin and Michigan’s Upper Peninsula.</p>\\n ",
            \'safe_summary\' => " <p><span style=\\"font-size: 13.6px;\\">Vertical Bridge will gain exclusive rights to over 200 towers Vertical Bridge will have the exclusive rights to lease and operate the portfolio of Nsight towers for a weighted average term of approximately 31 years. Vertical Bridge will also have fixed price purchase options to acquire the towers based on their anticipated fair market values at the end of the lease terms.</span></p>\\n ",
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'field_date\' => array(),
      \'field_external_link\' => array(),
      \'field_internal_header\' => array(),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'0\',
      \'sticky\' => \'0\',
      \'title\' => \'Vertical Bridge Acquires Rights to a Portfolio of Towers from Nsight Tower Holdings\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'press_release\',
      \'uid\' => \'227\',
      \'uuid\' => \'6a547507-c834-496c-bbd4-3dadda395908\',
      \'vid\' => NULL,
      \'vuuid\' => \'b66c357f-55bf-4225-8a1f-61cb2cdd4632\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Boca Raton, FL - July 2014 - Vertical Bridge Holdings, LLC announced the completion of four more acquisitions in the US. The majority of these newly acquired assets were built by proven tower developers who are now partnering with Vertical Bridge to build dozens of additional towers in the Eastern US over a multi-year period. The towers are all anchored by investment grade carriers and each tower has the capacity to add at least three additional tenants. “We continue to expand our tower portfolio with high capacity assets that have broadband tenants, while securing our future pipeline with attractive assets in high-demand locations. All of the sites in our pipeline are currently under development and will be completed over the next 18 months. We are thrilled that experienced and successful developers continue to choose to partner with Vertical Bridge for their development pipeline,” said Alexander L. Gellman, the CEO and Co-Founder of Vertical Bridge.</p>\\r\\n\\r\\n<p><strong>About Vertical Bridge Holdings, LLC. </strong></p>\\r\\n\\r\\n<p>Vertical Bridge Holdings is a privately-owned tower company in the US headquartered in Boca Raton, Florida. The company focuses on owning, operating, and managing telecommunications towers, rooftops, and site locations across the country. For more information please visit www.verticalbridge.com or call: 561-948-6367.</p>\\r\\n",
            \'summary\' => "<p>Boca Raton, FL - July 2014 - Vertical Bridge Holdings, LLC announced the completion of four more acquisitions in the US. The majority of these newly acquired assets were built by proven tower developers who are now partnering with Vertical Bridge to build dozens of additional towers in the Eastern US over a multi-year period. The towers are all anchored by investment grade carriers and each tower has the capacity to add at least three additional tenants.</p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => " <p>Boca Raton, FL - July 2014 - Vertical Bridge Holdings, LLC announced the completion of four more acquisitions in the US. The majority of these newly acquired assets were built by proven tower developers who are now partnering with Vertical Bridge to build dozens of additional towers in the Eastern US over a multi-year period. The towers are all anchored by investment grade carriers and each tower has the capacity to add at least three additional tenants. “We continue to expand our tower portfolio with high capacity assets that have broadband tenants, while securing our future pipeline with attractive assets in high-demand locations. All of the sites in our pipeline are currently under development and will be completed over the next 18 months. We are thrilled that experienced and successful developers continue to choose to partner with Vertical Bridge for their development pipeline,” said Alexander L. Gellman, the CEO and Co-Founder of Vertical Bridge.</p>\\n<p><strong>About Vertical Bridge Holdings, LLC. </strong></p>\\n<p>Vertical Bridge Holdings is a privately-owned tower company in the US headquartered in Boca Raton, Florida. The company focuses on owning, operating, and managing telecommunications towers, rooftops, and site locations across the country. For more information please visit <a href=\\"http://www.verticalbridge.com\\">www.verticalbridge.com</a> or call: 561-948-6367.</p>\\n ",
            \'safe_summary\' => " <p>Boca Raton, FL - July 2014 - Vertical Bridge Holdings, LLC announced the completion of four more acquisitions in the US. The majority of these newly acquired assets were built by proven tower developers who are now partnering with Vertical Bridge to build dozens of additional towers in the Eastern US over a multi-year period. The towers are all anchored by investment grade carriers and each tower has the capacity to add at least three additional tenants.</p>\\n ",
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'field_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-07-15 20:30:00\',
            \'timezone\' => \'America/New_York\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_internal_header\' => array(),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Vertical Bridge Holdings, LLC, Expands Its Portfolio with the Completion of Four More Acquisitions in the U.S.\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'press\',
      \'uid\' => \'227\',
      \'uuid\' => \'6b358347-8300-46cb-9baf-65343f9b5fb8\',
      \'vid\' => NULL,
      \'vuuid\' => \'f20a539c-ff48-494e-b504-0a16323bfeda\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Investors in Vertical Bridge include Digital Bridge Holdings, LLC, The Jordan Company, The Edgewater Funds, Goldman Sachs Infrastructure Partners, and Stonepeak Infrastructure Partners. The Vertical Bridge management team also holds a significant stake in the company.&nbsp;</p>\\r\\n\\r\\n<p>Formed in 2013 through a partnership between Ben Jenkins of Dering Capital (formerly of The Blackstone Group) and Marc Ganzi (former founder and CEO of GTP), <a href=\\"http://www.digitalbridgellc.com/\\" target=\\"_blank\\">Digital Bridge Holdings</a> owns interest in a broad range of communications infrastructure companies including cellular and broadcast towers, rooftop antenna management and distributed antenna systems. An innovator in the communications infrastructure sector, Digital Bridge is a leader in acquisition, funding and management.</p>\\r\\n\\r\\n<p><a href=\\"http://www.thejordancompany.com\\" target=\\"_blank\\">The Jordan Company</a> was founded in 1982 and is a leading middle-market private equity firm with more than $8 billion of committed capital assets under management and a 30-year track record of investing in, and contributing to the growth of, businesses across a wide range of industries. The Jordan Company is headquartered in New York with offices in Chicago and Shanghai.</p>\\r\\n\\r\\n<p><a href=\\"http://www.goldmansachs.com/what-we-do/investing-and-lending/direct-private-investing/equity-folder/infrastructure.html\\" target=\\"_blank\\">Goldman Sachs Infrastructure Partners</a>&nbsp;pursues a long-term investment strategy focusing on core infrastructure assets and partnering with best-in-class operators/management teams.</p>\\r\\n\\r\\n<p><a href=\\"https://stonepeakpartners.com/\\" target=\\"_blank\\">Stonepeak Infrastructure Partners</a> is a North America-focused private equity firm with a conservative yet opportunistic approach to infrastructure investing. Stonepeak invests in businesses comprised of hard assets with leading market positions primarily in the following sectors: Energy, Power &amp; Renewables, Transportation, Utilities, and Water &amp; Communications.</p>\\r\\n\\r\\n<p><a href=\\"http://www.calstrs.com/\\">The California State Teachers’ Retirement System</a> is the largest educator-only pension fund in the world. CalSTRS is committed to its mission to secure the financial future of California’s educators, providing retirement, disability and survivor benefits for 862,000 educators and their families.</p>\\r\\n\\r\\n<p><a href=\\"http://www.edgewaterfunds.com\\" target=\\"_blank\\">The Edgewater Funds</a> is a Chicago-based private equity firm with $1.4 billion in committed capital. Edgewater focuses on funding high quality middle-market companies where they can add substantial value through capital investment, experience and their broad network.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p>Investors in Vertical Bridge include Digital Bridge Holdings, LLC, The Jordan Company, The Edgewater Funds, Goldman Sachs Infrastructure Partners, and Stonepeak Infrastructure Partners. The Vertical Bridge management team also holds a significant stake in the company. </p>\\n<p>Formed in 2013 through a partnership between Ben Jenkins of Dering Capital (formerly of The Blackstone Group) and Marc Ganzi (former founder and CEO of GTP), <a href=\\"http://www.digitalbridgellc.com/\\" target=\\"_blank\\">Digital Bridge Holdings</a> owns interest in a broad range of communications infrastructure companies including cellular and broadcast towers, rooftop antenna management and distributed antenna systems. An innovator in the communications infrastructure sector, Digital Bridge is a leader in acquisition, funding and management.</p>\\n<p><a href=\\"http://www.thejordancompany.com\\" target=\\"_blank\\">The Jordan Company</a> was founded in 1982 and is a leading middle-market private equity firm with more than $8 billion of committed capital assets under management and a 30-year track record of investing in, and contributing to the growth of, businesses across a wide range of industries. The Jordan Company is headquartered in New York with offices in Chicago and Shanghai.</p>\\n<p><a href=\\"http://www.goldmansachs.com/what-we-do/investing-and-lending/direct-private-investing/equity-folder/infrastructure.html\\" target=\\"_blank\\">Goldman Sachs Infrastructure Partners</a> pursues a long-term investment strategy focusing on core infrastructure assets and partnering with best-in-class operators/management teams.</p>\\n<p><a href=\\"https://stonepeakpartners.com/\\" target=\\"_blank\\">Stonepeak Infrastructure Partners</a> is a North America-focused private equity firm with a conservative yet opportunistic approach to infrastructure investing. Stonepeak invests in businesses comprised of hard assets with leading market positions primarily in the following sectors: Energy, Power &amp; Renewables, Transportation, Utilities, and Water &amp; Communications.</p>\\n<p><a href=\\"http://www.calstrs.com/\\">The California State Teachers’ Retirement System</a> is the largest educator-only pension fund in the world. CalSTRS is committed to its mission to secure the financial future of California’s educators, providing retirement, disability and survivor benefits for 862,000 educators and their families.</p>\\n<p><a href=\\"http://www.edgewaterfunds.com\\" target=\\"_blank\\">The Edgewater Funds</a> is a Chicago-based private equity firm with $1.4 billion in committed capital. Edgewater focuses on funding high quality middle-market companies where they can add substantial value through capital investment, experience and their broad network.</p>\\n ",
            \'safe_summary\' => \'  \',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'field_bottom_logos\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0\',
          ),
        ),
      ),
      \'field_cta_button\' => array(),
      \'field_cta_content\' => array(),
      \'field_internal_header\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'195\',
            \'uid\' => \'227\',
            \'filename\' => \'Vertical-Bridge_Investors.jpg\',
            \'uri\' => \'public://Vertical-Bridge_Investors.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'132062\',
            \'status\' => \'1\',
            \'timestamp\' => \'1462972632\',
            \'type\' => \'image\',
            \'uuid\' => \'a4c01047-9e18-44ed-8259-fdc53724c40d\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'1024\',
              \'height\' => \'242\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'1024\',
            \'height\' => \'242\',
          ),
        ),
      ),
      \'field_logos\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'304\',
            \'uid\' => \'227\',
            \'filename\' => \'digital-bridge.jpg\',
            \'uri\' => \'public://digital-bridge.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'21591\',
            \'status\' => \'1\',
            \'timestamp\' => \'1467041579\',
            \'type\' => \'image\',
            \'uuid\' => \'d6101818-0522-4d1c-bf39-da5fc9e2863d\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'126\',
              \'height\' => \'44\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'126\',
            \'height\' => \'44\',
          ),
          array(
            \'fid\' => \'309\',
            \'uid\' => \'227\',
            \'filename\' => \'tjc.jpg\',
            \'uri\' => \'public://tjc.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'12296\',
            \'status\' => \'1\',
            \'timestamp\' => \'1467041579\',
            \'type\' => \'image\',
            \'uuid\' => \'f3523436-e7cc-43c9-8cd2-63c61329e444\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'55\',
              \'height\' => \'44\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'55\',
            \'height\' => \'44\',
          ),
          array(
            \'fid\' => \'305\',
            \'uid\' => \'227\',
            \'filename\' => \'goldman-sachs.jpg\',
            \'uri\' => \'public://goldman-sachs.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'10453\',
            \'status\' => \'1\',
            \'timestamp\' => \'1467041579\',
            \'type\' => \'image\',
            \'uuid\' => \'8cd61344-118b-4805-9f60-239234f4a249\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'44\',
              \'height\' => \'44\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'44\',
            \'height\' => \'44\',
          ),
          array(
            \'fid\' => \'306\',
            \'uid\' => \'227\',
            \'filename\' => \'stonepeak.jpg\',
            \'uri\' => \'public://stonepeak.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'13099\',
            \'status\' => \'1\',
            \'timestamp\' => \'1467041579\',
            \'type\' => \'image\',
            \'uuid\' => \'59ed01e4-8d5b-4465-8b4c-15a6eff30b83\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'126\',
              \'height\' => \'44\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'126\',
            \'height\' => \'44\',
          ),
          array(
            \'fid\' => \'308\',
            \'uid\' => \'227\',
            \'filename\' => \'calstrs.png\',
            \'uri\' => \'public://calstrs_0.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'5190\',
            \'status\' => \'1\',
            \'timestamp\' => \'1467041579\',
            \'type\' => \'image\',
            \'uuid\' => \'19595344-3636-4458-9c9f-59859ccb58b8\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'117\',
              \'height\' => \'44\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'117\',
            \'height\' => \'44\',
          ),
          array(
            \'fid\' => \'310\',
            \'uid\' => \'227\',
            \'filename\' => \'tef.jpg\',
            \'uri\' => \'public://tef_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'16964\',
            \'status\' => \'1\',
            \'timestamp\' => \'1467041726\',
            \'type\' => \'image\',
            \'uuid\' => \'7266abf7-c2f6-457a-a347-1f7ccd2bbced\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'126\',
              \'height\' => \'44\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'126\',
            \'height\' => \'44\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Investors\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'basic_page_with_images\',
      \'uid\' => \'227\',
      \'uuid\' => \'6c104355-8524-4799-a77f-8d7b94cc5f8c\',
      \'vid\' => NULL,
      \'vuuid\' => \'1227d659-1325-4df4-8ff2-aaa90c77104a\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>VB will help you maximize the value of your towers.&nbsp;</p>\\r\\n\\r\\n<p>VB has experience and the industry reputation for closing deals on time, for the price envisioned, and with as little hassle as possible to sellers. Our reputation is important to us and it shows in every deal we close. Please call a professional at VB to start a dialogue about your towers. We will turn around a valuation analysis quickly and can follow through with a quick closing. We have negotiated and closed deals from one tower to over 100 towers. Give us a chance to show you the VB way.</p>\\r\\n\\r\\n<p>If you do not want to sell but want more revenue, VB can help with that as well by managing your tower and marketing it through our rich database of interested clients and tenants. Email<strong>&nbsp;<a href=\\"mailto:rpaige@verticalbridge.com\\">Robert Paige</a></strong>&nbsp;for more information.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p>VB will help you maximize the value of your towers. </p>\\n<p>VB has experience and the industry reputation for closing deals on time, for the price envisioned, and with as little hassle as possible to sellers. Our reputation is important to us and it shows in every deal we close. Please call a professional at VB to start a dialogue about your towers. We will turn around a valuation analysis quickly and can follow through with a quick closing. We have negotiated and closed deals from one tower to over 100 towers. Give us a chance to show you the VB way.</p>\\n<p>If you do not want to sell but want more revenue, VB can help with that as well by managing your tower and marketing it through our rich database of interested clients and tenants. Email<strong> <a href=\\"mailto:rpaige@verticalbridge.com\\">Robert Paige</a></strong> for more information.</p>\\n ",
            \'safe_summary\' => \'  \',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'field_cta_button\' => array(),
      \'field_cta_content\' => array(),
      \'field_internal_header\' => array(),
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'metatags\' => array(
        \'en\' => array(
          \'title\' => array(
            \'value\' => \'Cell Tower Owners - Cell Tower Leasing | Vertical Bridge\',
          ),
          \'description\' => array(
            \'value\' => \'Vertical Bridge has experience and the industry reputation for closing deals on time, for the price envisioned, and with as little hassles as possible to sellers. If you are a tower owner looking to maximize the value of your towers, contact us.\',
          ),
        ),
      ),
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(
        array(
          \'pnid\' => \'6\',
          \'menu_name\' => \'navigation\',
          \'mlid\' => \'640\',
          \'plid\' => \'639\',
          \'link_path\' => \'node/30\',
          \'router_path\' => \'node/%\',
          \'link_title\' => \'Tower Owners\',
          \'options\' => array(
            \'attributes\' => array(
              \'title\' => \'\',
            ),
          ),
          \'module\' => \'nodehierarchy\',
          \'hidden\' => \'1\',
          \'external\' => \'0\',
          \'has_children\' => \'0\',
          \'expanded\' => \'0\',
          \'weight\' => \'0\',
          \'depth\' => \'2\',
          \'customized\' => \'0\',
          \'p1\' => \'639\',
          \'p2\' => \'640\',
          \'p3\' => \'0\',
          \'p4\' => \'0\',
          \'p5\' => \'0\',
          \'p6\' => \'0\',
          \'p7\' => \'0\',
          \'p8\' => \'0\',
          \'p9\' => \'0\',
          \'updated\' => \'0\',
          \'language\' => \'und\',
          \'i18n_tsid\' => \'0\',
          \'enabled\' => FALSE,
          \'nid\' => \'30\',
        ),
      ),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Tower Owners\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'page\',
      \'uid\' => \'227\',
      \'uuid\' => \'6d9c2d97-78d5-4766-a6a7-637d9562fd46\',
      \'vid\' => NULL,
      \'vuuid\' => \'48fb4d78-cdd1-49c5-ad78-564ea2b7982f\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><img alt=\\"\\" class=\\"media-image attr__typeof__foaf:Image img__fid__29 img__view_mode__media_large attr__format__media_large\\" src=\\"/sites/default/files/Dan%20Marinberg.jpg\\" style=\\"border-width: 0px; border-style: solid; padding: 5px; width: 180px; margin-right: 5px; float: left;\\" typeof=\\"foaf:Image\\" /></p>\\r\\n\\r\\n<p>Dan Marinberg is the Vice President and General Counsel of Vertical Bridge. Marinberg is responsible for legal, regulatory and government affairs, as well as Secretary to the Board of Directors. &nbsp;<br />\\r\\n<br />\\r\\nPrior to joining Vertical Bridge, Marinberg was a partner at top international law firm Greenberg Traurig where his practice focused on real estate including, acquisitions and dispositions of commercial real estate, financings, leasing, development, and joint venture structuring for individual properties and multi-asset portfolios. He also assisted clients with international issues arising from these transactions.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p><img alt=\\"\\" class=\\"media-image attr__typeof__foaf:Image img__fid__29 img__view_mode__media_large attr__format__media_large\\" src=\\"/sites/default/files/Dan%20Marinberg.jpg\\" style=\\"border-width: 0px; border-style: solid; padding: 5px; width: 180px; margin-right: 5px; float: left;\\" typeof=\\"foaf:Image\\" /></p>\\n<p>Dan Marinberg is the Vice President and General Counsel of Vertical Bridge. Marinberg is responsible for legal, regulatory and government affairs, as well as Secretary to the Board of Directors.  </p>\\n<p>Prior to joining Vertical Bridge, Marinberg was a partner at top international law firm Greenberg Traurig where his practice focused on real estate including, acquisitions and dispositions of commercial real estate, financings, leasing, development, and joint venture structuring for individual properties and multi-asset portfolios. He also assisted clients with international issues arising from these transactions.</p>\\n ",
            \'safe_summary\' => \'  \',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;}\',
      \'field_internal_header\' => array(),
      \'field_linkedin\' => array(),
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Daniel Marinberg\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'team_member\',
      \'uid\' => \'227\',
      \'uuid\' => \'6f5c226a-2a04-4a21-a3d9-68a2fe4fba45\',
      \'vid\' => NULL,
      \'vuuid\' => \'d2b08b87-5a5e-4ac1-aaea-592ee2258d15\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Boca Raton, FL - June 2014 - Vertical Bridge Holdings announces the completion of two acquisitions in the US. The newly acquired assets provide Vertical Bridge with extremely attractive and in-demand telephony and broadcast sites across several states, including Pennsylvania, New Jersey, Delaware, Florida, Texas, and Georgia. “We are very pleased to add such highly valuable locations and assets to our portfolio which will further strengthen our existing relationships with the national wireless operators,” said Alexander L. Gellman, the CEO and Co-Founder of Vertical Bridge.</p>\\r\\n\\r\\n<p>Industry veterans Alex Gellman, Bernard Borghei, and Michael Belski recently announced the formation of Vertical Bridge Holdings, LLC. Vertical Bridge owns, develops, and manages wireless infrastructure assets including cell towers and rooftops throughout the country. Gellman, Borghei, and Belski were partners and part of the executive team of Global Tower Partners, which was acquired by American Tower in October of 2013.</p>\\r\\n\\r\\n<p><strong>Alex Gellman</strong>, CEO and Co-Founder of Vertical Bridge was the President and Chief Operating Officer of Global Tower Partners where he directed all leasing, build-to-suit, operations, human resources and information technology.</p>\\r\\n\\r\\n<p><strong>Bernard Borghei</strong>, Senior Vice President of Operations and Co-Founder of Vertical Bridge was the Senior Vice President of Operations at Global Tower Partners where he was responsible for all aspects of domestic and international site management, engineering, regulatory compliance, and GTP’s build to suit program.</p>\\r\\n\\r\\n<p><strong>Michael (Mike) Belski</strong>, Senior Vice President of Leasing and Development and Co-Founder of Vertical Bridge was the Senior Vice President of Leasing and Marketing at Global Tower Partners where he was responsible for leasing and marketing the GTP Portfolio and securing build-to-suit contracts.</p>\\r\\n\\r\\n<p>The company also announced that the following executives have joined Vertical Bridge:</p>\\r\\n\\r\\n<p><strong>Robert (Bob) Paige</strong> – Bob has joined Vertical Bridge as its Senior Vice President of Mergers and Acquisitions. Prior to joining Vertical Bridge, Bob was with Brown Brothers Harriman for 8 years specializing in mergers and acquisitions and financial advisory services for companies in the telecommunications industry with a specific focus on the wireline and wireless sector. Previously, Robert served as the Managing Director at Falkenberg Capital Corporation where he completed over 50 transactions for telecommunications companies. Robert began his telecom career at Nortel Networks. He graduated from Franklin and Marshall College and received his MBA from the Cox School of Southern Methodist University.</p>\\r\\n\\r\\n<p><strong>Daniel Marinberg</strong> – Dan has joined Vertical Bridge as its Vice President and General Counsel. Prior to joining Vertical Bridge Dan was a real estate partner in the Miami office of the top international law firm Greenberg Traurig. During his 10 years at Greenberg, he handled virtually all aspects of sophisticated real estate transactions, including acquisitions and dispositions of commercial real estate, financings, leasing, development, and joint venture structuring for individual properties and multi-asset portfolios. He also assisted clients with international issues arising from these transactions. Dan received his Juris Doctorate from Boston University School of Law, and his Bachelor of Science in Foreign Service from Georgetown University. He speaks English, Russian, French, and Spanish. He is the recipient of multiple awards such as Rising Star, Super Lawyers Magazine and was a finalist for the Daily Business Review’s Top Dealmaker of The Year.</p>\\r\\n\\r\\n<p><strong>Johnny Crawford</strong> – Johnny has joined Vertical Bridge as its Vice President of Development. Before joining Vertical Bridge, Johnny was the Vice President of Business Development, Network Services at SBA where he was responsible for sales to SBA’s national customers. Prior to joining SBA, Johnny was the Vice President of Engineering and Operations for Airgate PCS, a Sprint PCS affiliate. Prior to Airgate, Johnny worked for Sprint for 9 years in various engineering capacities, including as the Director of Engineering and Operations, where he launched one of the first PCS markets for Sprint in Milwaukee WI. Johnny also has been the co-owner of Optima Towers, a South Carolina based company that owns towers in the Southeast.</p>\\r\\n\\r\\n<p><strong>Suzanne Docobo</strong> – Suzanne has joined Vertical Bridge as its Vice President and Corporate Controller. Prior to joining Vertical Bridge, Suzanne was the President of Docobo Accounting CPA PA where she was responsible for accounting, payroll, and tax related services for a diverse portfolio of clients. For the past 4 years, she has also served as a tax consultant for Global Tower Partners, responsible for all US tax compliance and planning.</p>\\r\\n\\r\\n<p>From 2007 to 2010, she was the director of Income Tax and Financial Reporting at Global Tower Partners, responsible for financial reporting, budgeting, taxes, due diligence, and assisting IT to develop financial reporting systems. Suzanne has over 15 years of experience in the financial tax arenas in a wide array of industries, specializing in real estate. Suzanne graduated from Florida International University with a Bachelor in Accounting and a Masters in the Science Taxation and also has a CPA license in the state of Florida.</p>\\r\\n\\r\\n<p>“We are excited to have put together this talented and experienced team. The Wireless industry continues to experience unprecedented growth and we are delighted to have the opportunity to start this venture at such exciting times in our industry”, said Alex Gellman.</p>\\r\\n\\r\\n<p><strong>About Vertical Bridge Holdings, LLC.</strong></p>\\r\\n\\r\\n<p>Vertical Bridge Holdings is a privately-owned tower company in the US headquartered in Boca Raton, Florida. The company focuses on owning, operating, and managing telecommunications towers, rooftops, and site locations across the country. For more information please visit <a href=\\"http://www.verticalbridge.com/\\"><u>www.verticalbridge.com</u></a> or call: 561-948-6367.</p>\\r\\n",
            \'summary\' => "<p>Boca Raton, FL - June 2014 - Vertical Bridge Holdings announces the completion of two acquisitions in the US. The newly acquired assets provide Vertical Bridge with extremely attractive and in-demand telephony and broadcast sites across several states, including Pennsylvania, New Jersey, Delaware, Florida, Texas, and Georgia. “We are very pleased to add such highly valuable locations and assets to our portfolio which will further strengthen our existing relationships with the national wireless operators,” said Alexander L. Gellman, the CEO and Co-Founder of Vertical Bridge.</p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => " <p>Boca Raton, FL - June 2014 - Vertical Bridge Holdings announces the completion of two acquisitions in the US. The newly acquired assets provide Vertical Bridge with extremely attractive and in-demand telephony and broadcast sites across several states, including Pennsylvania, New Jersey, Delaware, Florida, Texas, and Georgia. “We are very pleased to add such highly valuable locations and assets to our portfolio which will further strengthen our existing relationships with the national wireless operators,” said Alexander L. Gellman, the CEO and Co-Founder of Vertical Bridge.</p>\\n<p>Industry veterans Alex Gellman, Bernard Borghei, and Michael Belski recently announced the formation of Vertical Bridge Holdings, LLC. Vertical Bridge owns, develops, and manages wireless infrastructure assets including cell towers and rooftops throughout the country. Gellman, Borghei, and Belski were partners and part of the executive team of Global Tower Partners, which was acquired by American Tower in October of 2013.</p>\\n<p><strong>Alex Gellman</strong>, CEO and Co-Founder of Vertical Bridge was the President and Chief Operating Officer of Global Tower Partners where he directed all leasing, build-to-suit, operations, human resources and information technology.</p>\\n<p><strong>Bernard Borghei</strong>, Senior Vice President of Operations and Co-Founder of Vertical Bridge was the Senior Vice President of Operations at Global Tower Partners where he was responsible for all aspects of domestic and international site management, engineering, regulatory compliance, and GTP’s build to suit program.</p>\\n<p><strong>Michael (Mike) Belski</strong>, Senior Vice President of Leasing and Development and Co-Founder of Vertical Bridge was the Senior Vice President of Leasing and Marketing at Global Tower Partners where he was responsible for leasing and marketing the GTP Portfolio and securing build-to-suit contracts.</p>\\n<p>The company also announced that the following executives have joined Vertical Bridge:</p>\\n<p><strong>Robert (Bob) Paige</strong> – Bob has joined Vertical Bridge as its Senior Vice President of Mergers and Acquisitions. Prior to joining Vertical Bridge, Bob was with Brown Brothers Harriman for 8 years specializing in mergers and acquisitions and financial advisory services for companies in the telecommunications industry with a specific focus on the wireline and wireless sector. Previously, Robert served as the Managing Director at Falkenberg Capital Corporation where he completed over 50 transactions for telecommunications companies. Robert began his telecom career at Nortel Networks. He graduated from Franklin and Marshall College and received his MBA from the Cox School of Southern Methodist University.</p>\\n<p><strong>Daniel Marinberg</strong> – Dan has joined Vertical Bridge as its Vice President and General Counsel. Prior to joining Vertical Bridge Dan was a real estate partner in the Miami office of the top international law firm Greenberg Traurig. During his 10 years at Greenberg, he handled virtually all aspects of sophisticated real estate transactions, including acquisitions and dispositions of commercial real estate, financings, leasing, development, and joint venture structuring for individual properties and multi-asset portfolios. He also assisted clients with international issues arising from these transactions. Dan received his Juris Doctorate from Boston University School of Law, and his Bachelor of Science in Foreign Service from Georgetown University. He speaks English, Russian, French, and Spanish. He is the recipient of multiple awards such as Rising Star, Super Lawyers Magazine and was a finalist for the Daily Business Review’s Top Dealmaker of The Year.</p>\\n<p><strong>Johnny Crawford</strong> – Johnny has joined Vertical Bridge as its Vice President of Development. Before joining Vertical Bridge, Johnny was the Vice President of Business Development, Network Services at SBA where he was responsible for sales to SBA’s national customers. Prior to joining SBA, Johnny was the Vice President of Engineering and Operations for Airgate PCS, a Sprint PCS affiliate. Prior to Airgate, Johnny worked for Sprint for 9 years in various engineering capacities, including as the Director of Engineering and Operations, where he launched one of the first PCS markets for Sprint in Milwaukee WI. Johnny also has been the co-owner of Optima Towers, a South Carolina based company that owns towers in the Southeast.</p>\\n<p><strong>Suzanne Docobo</strong> – Suzanne has joined Vertical Bridge as its Vice President and Corporate Controller. Prior to joining Vertical Bridge, Suzanne was the President of Docobo Accounting CPA PA where she was responsible for accounting, payroll, and tax related services for a diverse portfolio of clients. For the past 4 years, she has also served as a tax consultant for Global Tower Partners, responsible for all US tax compliance and planning.</p>\\n<p>From 2007 to 2010, she was the director of Income Tax and Financial Reporting at Global Tower Partners, responsible for financial reporting, budgeting, taxes, due diligence, and assisting IT to develop financial reporting systems. Suzanne has over 15 years of experience in the financial tax arenas in a wide array of industries, specializing in real estate. Suzanne graduated from Florida International University with a Bachelor in Accounting and a Masters in the Science Taxation and also has a CPA license in the state of Florida.</p>\\n<p>“We are excited to have put together this talented and experienced team. The Wireless industry continues to experience unprecedented growth and we are delighted to have the opportunity to start this venture at such exciting times in our industry”, said Alex Gellman.</p>\\n<p><strong>About Vertical Bridge Holdings, LLC.</strong></p>\\n<p>Vertical Bridge Holdings is a privately-owned tower company in the US headquartered in Boca Raton, Florida. The company focuses on owning, operating, and managing telecommunications towers, rooftops, and site locations across the country. For more information please visit <a href=\\"http://www.verticalbridge.com/\\"><u>www.verticalbridge.com</u></a> or call: 561-948-6367.</p>\\n ",
            \'safe_summary\' => " <p>Boca Raton, FL - June 2014 - Vertical Bridge Holdings announces the completion of two acquisitions in the US. The newly acquired assets provide Vertical Bridge with extremely attractive and in-demand telephony and broadcast sites across several states, including Pennsylvania, New Jersey, Delaware, Florida, Texas, and Georgia. “We are very pleased to add such highly valuable locations and assets to our portfolio which will further strengthen our existing relationships with the national wireless operators,” said Alexander L. Gellman, the CEO and Co-Founder of Vertical Bridge.</p>\\n ",
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'field_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-05-30 20:30:00\',
            \'timezone\' => \'America/New_York\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_internal_header\' => array(),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Vertical Bridge Holdings, LLC, Completes Two Acquisitions in the U.S.\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'press\',
      \'uid\' => \'227\',
      \'uuid\' => \'728a3ccf-ccd2-4c22-8d7b-e0c22f4de441\',
      \'vid\' => NULL,
      \'vuuid\' => \'913de385-767a-4489-9166-914fc07209ff\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><strong>The Experience</strong><br />\\r\\nIf you are ready for greater opportunity and an exciting career, and have the desire to contribute to the continued success of a high-growth company, consider joining Vertical Bridge. We offer a fast-paced and flexible work environment where you\'ll have the chance to make an impact, create new experiences, and expand your skills.&nbsp;</p>\\r\\n\\r\\n<p><b>The Culture</b>&nbsp;<br />\\r\\nOur culture is informal, but we work hard and we hold high standards in all that we do. We understand that our employees are our greatest asset and that they make VB a great company and an exciting place to work.</p>\\r\\n\\r\\n<p><b>Diversity at Vertical Bridge</b><br />\\r\\nVertical Bridge is committed to a policy of equal employment and will not discriminate against an applicant or employee. Vertical Bridge is an Equal Employment Opportunity Employer M/F/D/V.</p>\\r\\n\\r\\n<p><b>Current Opportunities</b><br />\\r\\nWe are always looking for talented individuals who are seeking exciting challenges. To apply for an open position, please submit your resume below or contact <a href=\\"mailto:careers@verticalbridge.com\\">careers@verticalbridge.com</a>.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p><strong>The Experience</strong><br />\\nIf you are ready for greater opportunity and an exciting career, and have the desire to contribute to the continued success of a high-growth company, consider joining Vertical Bridge. We offer a fast-paced and flexible work environment where you\'ll have the chance to make an impact, create new experiences, and expand your skills. </p>\\n<p><b>The Culture</b> <br />\\nOur culture is informal, but we work hard and we hold high standards in all that we do. We understand that our employees are our greatest asset and that they make VB a great company and an exciting place to work.</p>\\n<p><b>Diversity at Vertical Bridge</b><br />\\nVertical Bridge is committed to a policy of equal employment and will not discriminate against an applicant or employee. Vertical Bridge is an Equal Employment Opportunity Employer M/F/D/V.</p>\\n<p><b>Current Opportunities</b><br />\\nWe are always looking for talented individuals who are seeking exciting challenges. To apply for an open position, please submit your resume below or contact <a href=\\"mailto:careers@verticalbridge.com\\">careers@verticalbridge.com</a>.</p>\\n ",
            \'safe_summary\' => \'  \',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'field_cta_button\' => array(),
      \'field_cta_content\' => array(),
      \'field_internal_header\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'210\',
            \'uid\' => \'227\',
            \'filename\' => \'Vertical-Bridge_Careers.jpg\',
            \'uri\' => \'public://Vertical-Bridge_Careers_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'206482\',
            \'status\' => \'1\',
            \'timestamp\' => \'1463066258\',
            \'type\' => \'image\',
            \'uuid\' => \'c9dbba07-079a-4690-bf17-1908d4e43d13\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'1024\',
              \'height\' => \'242\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'1024\',
            \'height\' => \'242\',
          ),
        ),
      ),
      \'field_links\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><strong>Current Openings</strong></p>\\r\\n\\r\\n<p><a href=\\"/sites/default/files/JD-Human%20Resources%20Payroll%20Specialist%2001%2026%2015_0.pdf\\" target=\\"_blank\\">Human Resources/Payroll Specialist</a></p>\\r\\n\\r\\n<p><a href=\\"/sites/default/files/JD-Broadcast%20Engineer%20Senior%2005%2004%2016.pdf\\" target=\\"_blank\\">Senior Broadcast Engineer</a></p>\\r\\n\\r\\n<p><a href=\\"/sites/default/files/JD-Asset%20Manager%2005%2019%2016.pdf\\" target=\\"_blank\\">Asset Manager</a></p>\\r\\n\\r\\n<p><a href=\\"/sites/default/files/JD-Dynamics%20AX%20Project%20and%20Support%20Manager%2004%2028%2016.pdf\\" target=\\"_blank\\">Dynamics AX Project and Support Manager</a></p>\\r\\n\\r\\n<p><a href=\\"/sites/default/files/JD-Paralegal%2005%2019%2016.pdf\\" target=\\"_blank\\">Paralegal</a></p>\\r\\n\\r\\n<p><a href=\\"/sites/default/files/JD-Corporate%20Counsel%2005%2019%2016.pdf\\" target=\\"_blank\\">Corporate Counsel</a></p>\\r\\n\\r\\n<p><a href=\\"/sites/default/files/JD-VP%20of%20Accounting%20Operations%2005%2023%2016.pdf\\" target=\\"_blank\\">Vice President Accounting Operations</a></p>\\r\\n\\r\\n<p><img alt=\\"\\" src=\\"/sites/default/files/twp-sunsentinel.png\\" style=\\"width: 250px; height: 110px;\\" /></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => " <p><strong>Current Openings</strong></p>\\n<p><a href=\\"/sites/default/files/JD-Human%20Resources%20Payroll%20Specialist%2001%2026%2015_0.pdf\\" target=\\"_blank\\">Human Resources/Payroll Specialist</a></p>\\n<p><a href=\\"/sites/default/files/JD-Broadcast%20Engineer%20Senior%2005%2004%2016.pdf\\" target=\\"_blank\\">Senior Broadcast Engineer</a></p>\\n<p><a href=\\"/sites/default/files/JD-Asset%20Manager%2005%2019%2016.pdf\\" target=\\"_blank\\">Asset Manager</a></p>\\n<p><a href=\\"/sites/default/files/JD-Dynamics%20AX%20Project%20and%20Support%20Manager%2004%2028%2016.pdf\\" target=\\"_blank\\">Dynamics AX Project and Support Manager</a></p>\\n<p><a href=\\"/sites/default/files/JD-Paralegal%2005%2019%2016.pdf\\" target=\\"_blank\\">Paralegal</a></p>\\n<p><a href=\\"/sites/default/files/JD-Corporate%20Counsel%2005%2019%2016.pdf\\" target=\\"_blank\\">Corporate Counsel</a></p>\\n<p><a href=\\"/sites/default/files/JD-VP%20of%20Accounting%20Operations%2005%2023%2016.pdf\\" target=\\"_blank\\">Vice President Accounting Operations</a></p>\\n<p><img alt=\\"\\" src=\\"/sites/default/files/twp-sunsentinel.png\\" style=\\"width: 250px; height: 110px;\\" /></p>\\n ",
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Careers\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'careers\',
      \'uid\' => \'227\',
      \'uuid\' => \'72f015a2-2a45-41b5-97c9-f688cda838e4\',
      \'vid\' => NULL,
      \'vuuid\' => \'5aedab04-4d8c-40e0-93aa-e818c4da85f5\',
      \'webform\' => array(
        \'nid\' => \'15390\',
        \'confirmation\' => \'\',
        \'confirmation_format\' => \'full_html\',
        \'redirect_url\' => \'<confirmation>\',
        \'status\' => \'1\',
        \'block\' => \'0\',
        \'allow_draft\' => \'0\',
        \'auto_save\' => \'0\',
        \'submit_notice\' => \'1\',
        \'submit_text\' => \'\',
        \'submit_limit\' => \'-1\',
        \'submit_interval\' => \'-1\',
        \'total_submit_limit\' => \'-1\',
        \'total_submit_interval\' => \'-1\',
        \'progressbar_bar\' => \'1\',
        \'progressbar_page_number\' => \'0\',
        \'progressbar_percent\' => \'0\',
        \'progressbar_pagebreak_labels\' => \'1\',
        \'progressbar_include_confirmation\' => \'1\',
        \'progressbar_label_first\' => \'Start\',
        \'progressbar_label_confirmation\' => \'Complete\',
        \'preview\' => \'0\',
        \'preview_next_button_label\' => \'\',
        \'preview_prev_button_label\' => \'\',
        \'preview_title\' => \'\',
        \'preview_message\' => \'\',
        \'preview_message_format\' => \'full_html\',
        \'preview_excluded_components\' => array(),
        \'next_serial\' => \'11\',
        \'confidential\' => \'0\',
        \'record_exists\' => TRUE,
        \'roles\' => array(
          \'1\',
          \'2\',
        ),
        \'emails\' => array(
          1 => array(
            \'nid\' => \'15390\',
            \'eid\' => \'1\',
            \'email\' => \'Careers@VerticalBridge.com\',
            \'subject\' => \'default\',
            \'from_name\' => \'default\',
            \'from_address\' => \'4\',
            \'template\' => \'default\',
            \'excluded_components\' => array(),
            \'html\' => \'0\',
            \'attachments\' => \'0\',
            \'extra\' => FALSE,
            \'exclude_empty\' => \'0\',
            \'status\' => \'1\',
          ),
        ),
        \'components\' => array(
          1 => array(
            \'nid\' => 15390,
            \'cid\' => \'1\',
            \'pid\' => \'0\',
            \'form_key\' => \'first_name\',
            \'name\' => \'First Name\',
            \'type\' => \'textfield\',
            \'value\' => \'\',
            \'extra\' => array(
              \'title_display\' => \'before\',
              \'description_above\' => 0,
              \'private\' => 0,
              \'wrapper_classes\' => \'\',
              \'css_classes\' => \'\',
              \'width\' => \'\',
              \'maxlength\' => \'\',
              \'field_prefix\' => \'\',
              \'field_suffix\' => \'\',
              \'disabled\' => 0,
              \'unique\' => 0,
              \'description\' => \'\',
              \'placeholder\' => \'\',
              \'attributes\' => array(),
              \'analysis\' => FALSE,
            ),
            \'required\' => \'0\',
            \'weight\' => \'0\',
            \'page_num\' => 1,
          ),
          2 => array(
            \'nid\' => 15390,
            \'cid\' => \'2\',
            \'pid\' => \'0\',
            \'form_key\' => \'last_name\',
            \'name\' => \'Last Name\',
            \'type\' => \'textfield\',
            \'value\' => \'\',
            \'extra\' => array(
              \'title_display\' => \'before\',
              \'description_above\' => 0,
              \'private\' => 0,
              \'wrapper_classes\' => \'\',
              \'css_classes\' => \'\',
              \'width\' => \'\',
              \'maxlength\' => \'\',
              \'field_prefix\' => \'\',
              \'field_suffix\' => \'\',
              \'disabled\' => 0,
              \'unique\' => 0,
              \'description\' => \'\',
              \'placeholder\' => \'\',
              \'attributes\' => array(),
              \'analysis\' => FALSE,
            ),
            \'required\' => \'0\',
            \'weight\' => \'1\',
            \'page_num\' => 1,
          ),
          3 => array(
            \'nid\' => 15390,
            \'cid\' => \'3\',
            \'pid\' => \'0\',
            \'form_key\' => \'phone_number\',
            \'name\' => \'Phone number\',
            \'type\' => \'textfield\',
            \'value\' => \'\',
            \'extra\' => array(
              \'title_display\' => \'before\',
              \'description_above\' => 0,
              \'private\' => 0,
              \'wrapper_classes\' => \'\',
              \'css_classes\' => \'\',
              \'width\' => \'\',
              \'maxlength\' => \'\',
              \'field_prefix\' => \'\',
              \'field_suffix\' => \'\',
              \'disabled\' => 0,
              \'unique\' => 0,
              \'description\' => \'\',
              \'placeholder\' => \'\',
              \'attributes\' => array(),
              \'analysis\' => FALSE,
            ),
            \'required\' => \'0\',
            \'weight\' => \'2\',
            \'page_num\' => 1,
          ),
          4 => array(
            \'nid\' => 15390,
            \'cid\' => \'4\',
            \'pid\' => \'0\',
            \'form_key\' => \'email\',
            \'name\' => \'Email\',
            \'type\' => \'email\',
            \'value\' => \'\',
            \'extra\' => array(
              \'title_display\' => \'before\',
              \'description_above\' => 0,
              \'private\' => 0,
              \'wrapper_classes\' => \'\',
              \'css_classes\' => \'\',
              \'multiple\' => 0,
              \'format\' => \'short\',
              \'width\' => \'\',
              \'unique\' => 0,
              \'disabled\' => 0,
              \'description\' => \'\',
              \'placeholder\' => \'\',
              \'attributes\' => array(),
              \'analysis\' => FALSE,
            ),
            \'required\' => \'0\',
            \'weight\' => \'3\',
            \'page_num\' => 1,
          ),
          5 => array(
            \'nid\' => 15390,
            \'cid\' => \'5\',
            \'pid\' => \'0\',
            \'form_key\' => \'resume\',
            \'name\' => \'Resume\',
            \'type\' => \'file\',
            \'value\' => \'\',
            \'extra\' => array(
              \'title_display\' => \'before\',
              \'description_above\' => 0,
              \'private\' => 0,
              \'wrapper_classes\' => \'\',
              \'css_classes\' => \'\',
              \'filtering\' => array(
                \'size\' => \'2 MB\',
                \'types\' => array(
                  \'pdf\',
                  \'doc\',
                  \'docx\',
                ),
                \'addextensions\' => \'\',
              ),
              \'rename\' => \'\',
              \'scheme\' => \'public\',
              \'directory\' => \'\',
              \'progress_indicator\' => \'throbber\',
              \'description\' => \'\',
              \'attributes\' => array(),
              \'analysis\' => FALSE,
            ),
            \'required\' => \'0\',
            \'weight\' => \'4\',
            \'page_num\' => 1,
          ),
          6 => array(
            \'nid\' => 15390,
            \'cid\' => \'6\',
            \'pid\' => \'0\',
            \'form_key\' => \'cover_letter\',
            \'name\' => \'Cover Letter\',
            \'type\' => \'file\',
            \'value\' => \'\',
            \'extra\' => array(
              \'title_display\' => \'before\',
              \'description_above\' => 0,
              \'private\' => 0,
              \'wrapper_classes\' => \'\',
              \'css_classes\' => \'\',
              \'filtering\' => array(
                \'size\' => \'2 MB\',
                \'types\' => array(
                  \'pdf\',
                  \'doc\',
                  \'docx\',
                ),
                \'addextensions\' => \'\',
              ),
              \'rename\' => \'\',
              \'scheme\' => \'public\',
              \'directory\' => \'\',
              \'progress_indicator\' => \'throbber\',
              \'description\' => \'\',
              \'attributes\' => array(),
              \'analysis\' => FALSE,
            ),
            \'required\' => \'0\',
            \'weight\' => \'5\',
            \'page_num\' => 1,
          ),
        ),
        \'conditionals\' => array(),
      ),
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Rio All Suites Hotel &amp; Casino</p>\\r\\n",
            \'summary\' => "<p>Rio All Suites Hotel &amp; Casino</p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => " <p>Rio All Suites Hotel &amp; Casino</p>\\n ",
            \'safe_summary\' => " <p>Rio All Suites Hotel &amp; Casino</p>\\n ",
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'field_event_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'October 11-13, 2016\',
            \'format\' => NULL,
            \'safe_value\' => \'October 11-13, 2016\',
          ),
        ),
      ),
      \'field_event_location\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Las Vegas, NV\',
            \'format\' => NULL,
            \'safe_value\' => \'Las Vegas, NV\',
          ),
        ),
      ),
      \'field_internal_header\' => array(),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'WISPAPALOOZA\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'events\',
      \'uid\' => \'227\',
      \'uuid\' => \'75d26ec0-971d-4d22-86d3-039bd72f9736\',
      \'vid\' => NULL,
      \'vuuid\' => \'72bdc22a-b39f-40b8-90a1-6481b06add3c\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><img alt=\\"\\" class=\\"media-image attr__typeof__foaf:Image img__fid__106 img__view_mode__media_large attr__format__media_large\\" src=\\"http://stage.verticalbridge.com/sites/default/files/styles/large/public/Buddy_0.png?itok=jUn9tj1g\\" style=\\"width: 170px; height: 192px; float: left; margin-left: 10px; margin-right: 10px;\\" typeof=\\"foaf:Image\\" /></p>\\r\\n\\r\\n<p>Buddy Norman is the Vice President of Real Estate Development of Vertical Bridge. Norman is responsible for all excess real estate leasing and disposition, ground lease amendment negotiations and ground lease buyouts.<br />\\r\\n<br />\\r\\nPrior to joining Vertical Bridge, Norman founded and served as President of KW Commercial, one of the largest national commercial real estate brokerage firms in the United States. Under his leadership, KW Commercial expanded to over 1,700 commercial agents in 450 cities completing over $7 billion in transaction volume for 2015. Norman started his commercial real estate career at the Staubach Company where he was promoted to co-managing partner in Southern California.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p><img alt=\\"\\" class=\\"media-image attr__typeof__foaf:Image img__fid__106 img__view_mode__media_large attr__format__media_large\\" src=\\"http://stage.verticalbridge.com/sites/default/files/styles/large/public/Buddy_0.png?itok=jUn9tj1g\\" style=\\"width: 170px; height: 192px; float: left; margin-left: 10px; margin-right: 10px;\\" typeof=\\"foaf:Image\\" /></p>\\n<p>Buddy Norman is the Vice President of Real Estate Development of Vertical Bridge. Norman is responsible for all excess real estate leasing and disposition, ground lease amendment negotiations and ground lease buyouts.</p>\\n<p>Prior to joining Vertical Bridge, Norman founded and served as President of KW Commercial, one of the largest national commercial real estate brokerage firms in the United States. Under his leadership, KW Commercial expanded to over 1,700 commercial agents in 450 cities completing over $7 billion in transaction volume for 2015. Norman started his commercial real estate career at the Staubach Company where he was promoted to co-managing partner in Southern California.</p>\\n ",
            \'safe_summary\' => \'  \',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'field_internal_header\' => array(),
      \'field_linkedin\' => array(),
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Buddy Norman\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'team_member\',
      \'uid\' => \'227\',
      \'uuid\' => \'780d1283-27a6-4396-9b35-6506c0d9744b\',
      \'vid\' => NULL,
      \'vuuid\' => \'8af92feb-aca2-4795-b6b9-090e8ecbb87f\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<ul>\\r\\n\\t<li>Vertical Bridge to market collocation on more than 1,000 existing Conterra Broadband sites.</li>\\r\\n\\t<li>Both companies join forces to develop new turnkey “build-to-haul” towers.</li>\\r\\n</ul>\\r\\n\\r\\n<p>Boca Raton, FL., September, 2014 - Vertical Bridge Holdings and Conterra Ultra Broadband Holdings announced today that Vertical Bridge will have exclusive rights to market collocation opportunities on authorized Conterra infrastructure sites. Conterra owns and operates more than 1,000 communication towers and rooftop locations in 23 states. The two companies also announced the formation of a joint venture that will focus on developing build-to-suit towers and new “build-to-haul” sites that bundle build-to-suit towers and fiber-quality backhaul services to improve wireless carriers’ time to market and operating costs.</p>\\r\\n\\r\\n<p>“Conterra’s fiber quality backhaul solutions provide proven value-add opportunity for our carrier tenants, allowing for quick and efficient access to broadband level of backhaul services on the towers that we will develop with Conterra” said Alexander L. Gellman, CEO and Co-Founder of Vertical Bridge.</p>\\r\\n\\r\\n<p>Stephen R. Leeolou, Chairman and CEO of Conterra, added: “In looking for the right partner to market and fully develop the growth potential of our existing assets and utilizing our best-in-class broadband solutions for new tower builds, we selected the Vertical Bridge team because of their successful and proven track records with these types of opportunities. Their approach and execution capabilities fit the profile of the partner that will enable us to meet our strategic objectives for our existing and future tower locations.”</p>\\r\\n\\r\\n<p><strong>About Vertical Bridge Holdings, LLC. </strong></p>\\r\\n\\r\\n<p>Vertical Bridge Holdings is a privately-owned tower company in the US headquartered in Boca Raton, Florida. The company focuses on owning, operating, and managing telecommunications towers, rooftops, and site locations across the country. Vertical Bridge was founded in 2014 by Digital Bridge Holdings, LLC as well as certain key executives from Global Tower Partners. For more information please visit www.verticalbridge.com or call: Traci Clancy at 561-948-6367</p>\\r\\n\\r\\n<p><strong>About Digital Bridge Holdings, LLC. </strong></p>\\r\\n\\r\\n<p>Digital Bridge Holdings, is a communications infrastructure platform based in Boca Raton, Florida. It was formed in 2013 through a partnership between Ben Jenkins (formerly of The Blackstone Group) and Marc Ganzi (former founder and CEO of Global Tower Partners). Digital Bridge owns interests in a broad range of communications infrastructure companies. It is dedicated to long-term value creation through the active management of its companies and strong alignment with its investor partners. Digital Bridge manages investments on behalf of institutional, corporate, endowment and family offices around the world. More information may be found at www.digitalbridgellc.com.</p>\\r\\n\\r\\n<p><strong>About Conterra</strong></p>\\r\\n\\r\\n<p>Conterra is a nationwide provider of bandwidth infrastructure services, specializing in the design, deployment and operation of customized networks, largely in underserved areas. During the last decade the company has connected thousands of customers in 25 states, bringing high-capacity middle and last-mile services primarily to the wireless carriers, education, healthcare and municipal government sectors. As a result, today Conterra is among the largest and most experienced suburban and rural broadband services providers in the US. For more information about Conterra please visit www.conterra.com</p>\\r\\n",
            \'summary\' => "<p>Boca Raton, FL., September, 2014 - Vertical Bridge Holdings and Conterra Ultra Broadband Holdings announced today that Vertical Bridge will have exclusive rights to market collocation opportunities on authorized Conterra infrastructure sites. Conterra owns and operates more than 1,000 communication towers and rooftop locations in 23 states. The two companies also announced the formation of a joint venture that will focus on developing build-to-suit towers and new “build-to-haul” sites that bundle build-to-suit towers and fiber-quality backhaul services to improve wireless carriers’ time to market and operating costs.</p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => " <ul><li>Vertical Bridge to market collocation on more than 1,000 existing Conterra Broadband sites.</li>\\n<li>Both companies join forces to develop new turnkey “build-to-haul” towers.</li>\\n</ul><p>Boca Raton, FL., September, 2014 - Vertical Bridge Holdings and Conterra Ultra Broadband Holdings announced today that Vertical Bridge will have exclusive rights to market collocation opportunities on authorized Conterra infrastructure sites. Conterra owns and operates more than 1,000 communication towers and rooftop locations in 23 states. The two companies also announced the formation of a joint venture that will focus on developing build-to-suit towers and new “build-to-haul” sites that bundle build-to-suit towers and fiber-quality backhaul services to improve wireless carriers’ time to market and operating costs.</p>\\n<p>“Conterra’s fiber quality backhaul solutions provide proven value-add opportunity for our carrier tenants, allowing for quick and efficient access to broadband level of backhaul services on the towers that we will develop with Conterra” said Alexander L. Gellman, CEO and Co-Founder of Vertical Bridge.</p>\\n<p>Stephen R. Leeolou, Chairman and CEO of Conterra, added: “In looking for the right partner to market and fully develop the growth potential of our existing assets and utilizing our best-in-class broadband solutions for new tower builds, we selected the Vertical Bridge team because of their successful and proven track records with these types of opportunities. Their approach and execution capabilities fit the profile of the partner that will enable us to meet our strategic objectives for our existing and future tower locations.”</p>\\n<p><strong>About Vertical Bridge Holdings, LLC. </strong></p>\\n<p>Vertical Bridge Holdings is a privately-owned tower company in the US headquartered in Boca Raton, Florida. The company focuses on owning, operating, and managing telecommunications towers, rooftops, and site locations across the country. Vertical Bridge was founded in 2014 by Digital Bridge Holdings, LLC as well as certain key executives from Global Tower Partners. For more information please visit <a href=\\"http://www.verticalbridge.com\\">www.verticalbridge.com</a> or call: Traci Clancy at 561-948-6367</p>\\n<p><strong>About Digital Bridge Holdings, LLC. </strong></p>\\n<p>Digital Bridge Holdings, is a communications infrastructure platform based in Boca Raton, Florida. It was formed in 2013 through a partnership between Ben Jenkins (formerly of The Blackstone Group) and Marc Ganzi (former founder and CEO of Global Tower Partners). Digital Bridge owns interests in a broad range of communications infrastructure companies. It is dedicated to long-term value creation through the active management of its companies and strong alignment with its investor partners. Digital Bridge manages investments on behalf of institutional, corporate, endowment and family offices around the world. More information may be found at <a href=\\"http://www.digitalbridgellc.com\\">www.digitalbridgellc.com</a>.</p>\\n<p><strong>About Conterra</strong></p>\\n<p>Conterra is a nationwide provider of bandwidth infrastructure services, specializing in the design, deployment and operation of customized networks, largely in underserved areas. During the last decade the company has connected thousands of customers in 25 states, bringing high-capacity middle and last-mile services primarily to the wireless carriers, education, healthcare and municipal government sectors. As a result, today Conterra is among the largest and most experienced suburban and rural broadband services providers in the US. For more information about Conterra please visit <a href=\\"http://www.conterra.com\\">www.conterra.com</a></p>\\n ",
            \'safe_summary\' => " <p>Boca Raton, FL., September, 2014 - Vertical Bridge Holdings and Conterra Ultra Broadband Holdings announced today that Vertical Bridge will have exclusive rights to market collocation opportunities on authorized Conterra infrastructure sites. Conterra owns and operates more than 1,000 communication towers and rooftop locations in 23 states. The two companies also announced the formation of a joint venture that will focus on developing build-to-suit towers and new “build-to-haul” sites that bundle build-to-suit towers and fiber-quality backhaul services to improve wireless carriers’ time to market and operating costs.</p>\\n ",
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'field_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-09-11 20:15:00\',
            \'timezone\' => \'America/New_York\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_internal_header\' => array(),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Vertical Bridge Holdings, LLC. and Conterra Ultra Broadband Holdings, Inc. Establish Marketing Agreement and Form Joint Venture For New Tower Development\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'press\',
      \'uid\' => \'227\',
      \'uuid\' => \'7848ede1-b392-4450-9bf9-d077ebf1c80a\',
      \'vid\' => NULL,
      \'vuuid\' => \'c02a8f7c-8235-4b04-8955-4d50606a7eff\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><strong>Corporate Headquarters:</strong><br />\\r\\nVertical&nbsp;Bridge Holdings, LLC<br />\\r\\n750 Park of Commerce Drive<br />\\r\\nBoca Raton, Florida 33487<br />\\r\\n(561) 948-6367</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p><strong>Corporate Headquarters:</strong><br />\\nVertical Bridge Holdings, LLC<br />\\n750 Park of Commerce Drive<br />\\nBoca Raton, Florida 33487<br />\\n(561) 948-6367</p>\\n ",
            \'safe_summary\' => \'  \',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'field_internal_header\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'200\',
            \'uid\' => \'227\',
            \'filename\' => \'Vertical-Bridge_Contact-Us.jpg\',
            \'uri\' => \'public://Vertical-Bridge_Contact-Us.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'138002\',
            \'status\' => \'1\',
            \'timestamp\' => \'1462972960\',
            \'type\' => \'image\',
            \'uuid\' => \'b53f540f-9c9e-4ed3-b004-46871aa0d5a5\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'1024\',
              \'height\' => \'242\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'1024\',
            \'height\' => \'242\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'metatags\' => array(
        \'und\' => array(
          \'title\' => array(
            \'value\' => \'Contact Us | Vertical Bridge\',
          ),
          \'description\' => array(
            \'value\' => \'Vertical Bridge Holdings (VB) is a privately owned tower company in the US. If you have any questions or would like to speak to a Vertical Bridge representative please use the form on this page to contact us.\',
          ),
        ),
      ),
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'1\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Contact Us\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'webform\',
      \'uid\' => \'227\',
      \'uuid\' => \'7a10b86b-1f3c-464d-9b0d-f66454a03b90\',
      \'vid\' => NULL,
      \'vuuid\' => \'cf0ee437-fa1e-4971-a55d-2f53a64809c6\',
      \'webform\' => array(
        \'nid\' => \'7\',
        \'confirmation\' => \'\',
        \'confirmation_format\' => NULL,
        \'redirect_url\' => \'<confirmation>\',
        \'status\' => \'1\',
        \'block\' => \'0\',
        \'allow_draft\' => \'0\',
        \'auto_save\' => \'0\',
        \'submit_notice\' => \'1\',
        \'submit_text\' => \'\',
        \'submit_limit\' => \'-1\',
        \'submit_interval\' => \'-1\',
        \'total_submit_limit\' => \'-1\',
        \'total_submit_interval\' => \'-1\',
        \'progressbar_bar\' => \'0\',
        \'progressbar_page_number\' => \'0\',
        \'progressbar_percent\' => \'0\',
        \'progressbar_pagebreak_labels\' => \'0\',
        \'progressbar_include_confirmation\' => \'0\',
        \'progressbar_label_first\' => NULL,
        \'progressbar_label_confirmation\' => NULL,
        \'preview\' => \'0\',
        \'preview_next_button_label\' => NULL,
        \'preview_prev_button_label\' => NULL,
        \'preview_title\' => NULL,
        \'preview_message\' => \'\',
        \'preview_message_format\' => NULL,
        \'preview_excluded_components\' => array(),
        \'next_serial\' => \'191\',
        \'confidential\' => \'0\',
        \'record_exists\' => TRUE,
        \'roles\' => array(
          \'1\',
          \'2\',
        ),
        \'emails\' => array(
          1 => array(
            \'nid\' => \'7\',
            \'eid\' => \'1\',
            \'email\' => \'erobertson@verticalbridge.com\',
            \'subject\' => \'default\',
            \'from_name\' => \'1\',
            \'from_address\' => \'2\',
            \'template\' => \'default\',
            \'excluded_components\' => array(),
            \'html\' => \'0\',
            \'attachments\' => \'0\',
            \'extra\' => FALSE,
            \'exclude_empty\' => \'0\',
            \'status\' => \'1\',
          ),
        ),
        \'components\' => array(
          5 => array(
            \'nid\' => 7,
            \'cid\' => \'5\',
            \'pid\' => \'0\',
            \'form_key\' => \'header_label\',
            \'name\' => \'Header Label\',
            \'type\' => \'markup\',
            \'value\' => "<p>Please send us your inquiry by completing the form below. Please do not use this for press inquiries.</p>\\r\\n",
            \'extra\' => array(
              \'format\' => \'full_html\',
              \'private\' => 0,
              \'display_on\' => \'form\',
            ),
            \'required\' => \'0\',
            \'weight\' => \'13\',
            \'page_num\' => 1,
          ),
          6 => array(
            \'nid\' => 7,
            \'cid\' => \'6\',
            \'pid\' => \'0\',
            \'form_key\' => \'please_select_one\',
            \'name\' => \'Please select the department(s) you would like to reach:\',
            \'type\' => \'select\',
            \'value\' => \'\',
            \'extra\' => array(
              \'items\' => "lease_key|Lease from us - Leasing\\r\\nbuild_key|Build with us - Development \\r\\npartner_key|Partner with us - Real Estate\\r\\nsell_key|Sell to Us - M&A\\r\\nother_key|Other",
              \'multiple\' => 1,
              \'title_display\' => \'before\',
              \'description_above\' => 0,
              \'private\' => 0,
              \'wrapper_classes\' => \'\',
              \'css_classes\' => \'\',
              \'aslist\' => 0,
              \'empty_option\' => \'\',
              \'optrand\' => 0,
              \'other_option\' => NULL,
              \'other_text\' => \'Other...\',
              \'description\' => \'\',
              \'custom_keys\' => FALSE,
              \'options_source\' => \'\',
              \'analysis\' => TRUE,
            ),
            \'required\' => \'1\',
            \'weight\' => \'14\',
            \'page_num\' => 1,
          ),
          1 => array(
            \'nid\' => 7,
            \'cid\' => \'1\',
            \'pid\' => \'0\',
            \'form_key\' => \'name\',
            \'name\' => \'Name\',
            \'type\' => \'textfield\',
            \'value\' => \'\',
            \'extra\' => array(
              \'title_display\' => \'none\',
              \'description_above\' => 0,
              \'private\' => 0,
              \'wrapper_classes\' => \'\',
              \'css_classes\' => \'contact-name\',
              \'placeholder\' => \'Name\',
              \'maxlength\' => \'50\',
              \'width\' => \'\',
              \'field_prefix\' => \'\',
              \'field_suffix\' => \'\',
              \'disabled\' => 0,
              \'unique\' => 0,
              \'description\' => \'\',
              \'attributes\' => array(),
              \'analysis\' => FALSE,
            ),
            \'required\' => \'1\',
            \'weight\' => \'15\',
            \'page_num\' => 1,
          ),
          2 => array(
            \'nid\' => 7,
            \'cid\' => \'2\',
            \'pid\' => \'0\',
            \'form_key\' => \'e_mail\',
            \'name\' => \'E-mail\',
            \'type\' => \'email\',
            \'value\' => \'\',
            \'extra\' => array(
              \'title_display\' => \'none\',
              \'description_above\' => 0,
              \'private\' => 0,
              \'wrapper_classes\' => \'\',
              \'css_classes\' => \'contact-email\',
              \'placeholder\' => \'Email\',
              \'multiple\' => 0,
              \'format\' => \'short\',
              \'width\' => \'\',
              \'unique\' => 0,
              \'disabled\' => 0,
              \'description\' => \'\',
              \'attributes\' => array(),
              \'analysis\' => FALSE,
            ),
            \'required\' => \'1\',
            \'weight\' => \'16\',
            \'page_num\' => 1,
          ),
          4 => array(
            \'nid\' => 7,
            \'cid\' => \'4\',
            \'pid\' => \'0\',
            \'form_key\' => \'message_questions\',
            \'name\' => \'Message/Questions\',
            \'type\' => \'textarea\',
            \'value\' => \'\',
            \'extra\' => array(
              \'title_display\' => \'none\',
              \'description_above\' => 0,
              \'private\' => 0,
              \'wrapper_classes\' => \'\',
              \'css_classes\' => \'\',
              \'rows\' => \'10\',
              \'placeholder\' => \'Message\',
              \'cols\' => \'\',
              \'resizable\' => 1,
              \'disabled\' => 0,
              \'description\' => \'\',
              \'attributes\' => array(),
              \'analysis\' => FALSE,
            ),
            \'required\' => \'1\',
            \'weight\' => \'17\',
            \'page_num\' => 1,
          ),
        ),
        \'conditionals\' => array(),
      ),
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<ul>\\r\\n\\t<li>Significant additional equity investment by Digital Bridge Holdings and The Jordan Company</li>\\r\\n\\t<li>Major new commitments from GS Infrastructure Partners (Goldman Sachs) and Stonepeak Infrastructure Partners</li>\\r\\n\\t<li>Over $1 billion of committed capital to fund investment in growth of the business</li>\\r\\n</ul>\\r\\n\\r\\n<p><strong>Boca Raton, FL., November 11, 2014</strong> - Vertical Bridge Holdings, LLC, a privately owned real estate investment trust focused on the ownership of wireless communications towers in the U.S., today announced that it has secured over $470 million of incremental equity commitments in a second round capital raise to support its acquisitions, new tower build programs, and growth strategy.</p>\\r\\n\\r\\n<p>With the closing of these commitments, which include significant additional equity from existing investors Digital Bridge Holdings, LLC and The Jordan Company, and major new commitments from GS Infrastructure Partners and Stonepeak Infrastructure Partners, Vertical Bridge has secured equity capital commitments of $750 million.</p>\\r\\n\\r\\n<p>Vertical Bridge has closed 23 acquisitions to date in 2014, including 4 deals completed since October 1, the company said.</p>\\r\\n\\r\\n<p>“Vertical Bridge now has over $750 million of committed equity, and alongside our existing $270 million senior credit facility, we have over $1 billion of immediately investable capital to fund our growth,” said Alexander L. Gellman, CEO and Co-Founder of Vertical Bridge, which was founded in 2014. “We are pleased that Digital Bridge and The Jordan Company increased their commitments, and welcome the opportunity to work with well-established partners such as GS Infrastructure Partners and Stonepeak.”</p>\\r\\n\\r\\n<p>“We are extremely excited to support the Vertical Bridge team with the largest commitment among this high quality equity investor group,\\" commented Marc Ganzi, CEO of Digital Bridge Holdings, LLC. \\"We remain very bullish on the U.S. tower space, and are pleased to provide the Vertical Bridge team with the capital necessary to assist our wireless carrier partners in the deployment of their ongoing and future network needs.”</p>\\r\\n\\r\\n<p>“Since the day we first invested in Vertical Bridge, we have become even more excited about our partnership with Marc, Alex and the rest of the Vertical Bridge team,\\" said Eion Hu, Senior Partner at The Jordan Company. \\"They have proven themselves to be a superior management team in an industry benefiting from significant demand drivers. We are thrilled with this opportunity to increase our equity commitment in Vertical Bridge.”</p>\\r\\n\\r\\n<p>“As global infrastructure investors, we look for opportunities to partner with best-in-class management teams in industries that can provide stability and attractive prospects. We believe Vertical Bridge stands out in the wireless tower sector and we are excited to work with management on their next phase of growth,” said Edward Pallesen, Head of Americas for GS Infrastructure Partners at Goldman Sachs.</p>\\r\\n\\r\\n<p>“We view the U.S. tower sector as the critical infrastructure enabling connectivity in the U.S. wireless telecom industry. We are thrilled to have the opportunity to be involved in this space through our partnership with Vertical Bridge, Digital Bridge, and their other financial partners,\\" added Trent Vichie, Senior Managing Director &amp; Co-Founder of Stonepeak Infrastructure Partners.</p>\\r\\n\\r\\n<p><strong>About Vertical Bridge Holdings, LLC </strong></p>\\r\\n\\r\\n<p>Vertical Bridge Holdings is a privately-owned real estate investment trust focused on the ownership of wireless communication towers in the U.S. headquartered in Boca Raton, Florida. The company focuses on owning, operating, and managing telecommunications towers, rooftops, and site locations across the country. Vertical Bridge was founded in 2014 by Digital Bridge Holdings, LLC as well as certain key executives from Global Tower Partners. For more information, please visit www.verticalbridge.com or call Traci Clancy at 561-948-6367.</p>\\r\\n\\r\\n<p><strong>About Digital Bridge Holdings, LLC</strong></p>\\r\\n\\r\\n<p>Digital Bridge Holdings is a communications infrastructure platform based in Boca Raton, Florida. It was formed in 2013 through a partnership between Ben Jenkins (formerly of The Blackstone Group) and Marc Ganzi (former founder and CEO of Global Tower Partners). Digital Bridge owns interests in a broad range of communications infrastructure companies. It is dedicated to long-term value creation through the active management of its companies and strong alignment with its investor partners. Digital Bridge manages investments on behalf of institutional, corporate, endowment and family offices around the world. More information may be found at www.digitalbridgellc.com.</p>\\r\\n\\r\\n<p><strong>About The Jordan Company, L.P.</strong></p>\\r\\n\\r\\n<p>The Jordan Company, founded in 1982, is a leading middle-market private equity firm with more than $8 billion of committed capital assets under management and a 30-year track record of investing in and contributing to the growth of many businesses across a wide range of industries. The firm’s senior investment team has been together for more than 15 years and is supported by its Operations Management Group, which was established in 1988 to initiate and support operational improvements in portfolio companies. Headquartered in New York, The Jordan Company also has offices in Chicago and Shanghai. For more information, please refer to www.thejordancompany.com.</p>\\r\\n\\r\\n<p><strong>About Goldman Sachs</strong></p>\\r\\n\\r\\n<p>Founded in 1869, Goldman, Sachs &amp; Co. (“Goldman Sachs”) is a leading global investment banking, securities and investment management firm that provides a wide range of financial services to a substantial and diversified client base that includes corporations, financial institutions, governments and high-net-worth individuals. GS Infrastructure Partners is Goldman Sachs’ primary vehicle to make direct investments in infrastructure and infrastructure-related assets and companies. GS Infrastructure Partners has approximately $10 billion in aggregate assets under management and is managed by the Merchant Banking Division of Goldman Sachs. For more information, please visit www.gs.com.</p>\\r\\n\\r\\n<p><strong>About Stonepeak Infrastructure Partners</strong></p>\\r\\n\\r\\n<p>Stonepeak Infrastructure Partners is an independent private equity investment firm, managing $1.7 billion, specializing in North American middle-market infrastructure. Stonepeak invests in businesses comprised of hard assets with strategic importance, primarily in the following sectors: Energy, Power &amp; Renewables, Transportation, Utilities, Water &amp; Communications. Stonepeak is based in New York. Visit www.stonepeakpartners.com for more information.  </p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <ul><li>Significant additional equity investment by Digital Bridge Holdings and The Jordan Company</li>\\n<li>Major new commitments from GS Infrastructure Partners (Goldman Sachs) and Stonepeak Infrastructure Partners</li>\\n<li>Over $1 billion of committed capital to fund investment in growth of the business</li>\\n</ul><p><strong>Boca Raton, FL., November 11, 2014</strong> - Vertical Bridge Holdings, LLC, a privately owned real estate investment trust focused on the ownership of wireless communications towers in the U.S., today announced that it has secured over $470 million of incremental equity commitments in a second round capital raise to support its acquisitions, new tower build programs, and growth strategy.</p>\\n<p>With the closing of these commitments, which include significant additional equity from existing investors Digital Bridge Holdings, LLC and The Jordan Company, and major new commitments from GS Infrastructure Partners and Stonepeak Infrastructure Partners, Vertical Bridge has secured equity capital commitments of $750 million.</p>\\n<p>Vertical Bridge has closed 23 acquisitions to date in 2014, including 4 deals completed since October 1, the company said.</p>\\n<p>“Vertical Bridge now has over $750 million of committed equity, and alongside our existing $270 million senior credit facility, we have over $1 billion of immediately investable capital to fund our growth,” said Alexander L. Gellman, CEO and Co-Founder of Vertical Bridge, which was founded in 2014. “We are pleased that Digital Bridge and The Jordan Company increased their commitments, and welcome the opportunity to work with well-established partners such as GS Infrastructure Partners and Stonepeak.”</p>\\n<p>“We are extremely excited to support the Vertical Bridge team with the largest commitment among this high quality equity investor group,\\" commented Marc Ganzi, CEO of Digital Bridge Holdings, LLC. \\"We remain very bullish on the U.S. tower space, and are pleased to provide the Vertical Bridge team with the capital necessary to assist our wireless carrier partners in the deployment of their ongoing and future network needs.”</p>\\n<p>“Since the day we first invested in Vertical Bridge, we have become even more excited about our partnership with Marc, Alex and the rest of the Vertical Bridge team,\\" said Eion Hu, Senior Partner at The Jordan Company. \\"They have proven themselves to be a superior management team in an industry benefiting from significant demand drivers. We are thrilled with this opportunity to increase our equity commitment in Vertical Bridge.”</p>\\n<p>“As global infrastructure investors, we look for opportunities to partner with best-in-class management teams in industries that can provide stability and attractive prospects. We believe Vertical Bridge stands out in the wireless tower sector and we are excited to work with management on their next phase of growth,” said Edward Pallesen, Head of Americas for GS Infrastructure Partners at Goldman Sachs.</p>\\n<p>“We view the U.S. tower sector as the critical infrastructure enabling connectivity in the U.S. wireless telecom industry. We are thrilled to have the opportunity to be involved in this space through our partnership with Vertical Bridge, Digital Bridge, and their other financial partners,\\" added Trent Vichie, Senior Managing Director &amp; Co-Founder of Stonepeak Infrastructure Partners.</p>\\n<p><strong>About Vertical Bridge Holdings, LLC </strong></p>\\n<p>Vertical Bridge Holdings is a privately-owned real estate investment trust focused on the ownership of wireless communication towers in the U.S. headquartered in Boca Raton, Florida. The company focuses on owning, operating, and managing telecommunications towers, rooftops, and site locations across the country. Vertical Bridge was founded in 2014 by Digital Bridge Holdings, LLC as well as certain key executives from Global Tower Partners. For more information, please visit <a href=\\"http://www.verticalbridge.com\\">www.verticalbridge.com</a> or call Traci Clancy at 561-948-6367.</p>\\n<p><strong>About Digital Bridge Holdings, LLC</strong></p>\\n<p>Digital Bridge Holdings is a communications infrastructure platform based in Boca Raton, Florida. It was formed in 2013 through a partnership between Ben Jenkins (formerly of The Blackstone Group) and Marc Ganzi (former founder and CEO of Global Tower Partners). Digital Bridge owns interests in a broad range of communications infrastructure companies. It is dedicated to long-term value creation through the active management of its companies and strong alignment with its investor partners. Digital Bridge manages investments on behalf of institutional, corporate, endowment and family offices around the world. More information may be found at <a href=\\"http://www.digitalbridgellc.com\\">www.digitalbridgellc.com</a>.</p>\\n<p><strong>About The Jordan Company, L.P.</strong></p>\\n<p>The Jordan Company, founded in 1982, is a leading middle-market private equity firm with more than $8 billion of committed capital assets under management and a 30-year track record of investing in and contributing to the growth of many businesses across a wide range of industries. The firm’s senior investment team has been together for more than 15 years and is supported by its Operations Management Group, which was established in 1988 to initiate and support operational improvements in portfolio companies. Headquartered in New York, The Jordan Company also has offices in Chicago and Shanghai. For more information, please refer to <a href=\\"http://www.thejordancompany.com\\">www.thejordancompany.com</a>.</p>\\n<p><strong>About Goldman Sachs</strong></p>\\n<p>Founded in 1869, Goldman, Sachs &amp; Co. (“Goldman Sachs”) is a leading global investment banking, securities and investment management firm that provides a wide range of financial services to a substantial and diversified client base that includes corporations, financial institutions, governments and high-net-worth individuals. GS Infrastructure Partners is Goldman Sachs’ primary vehicle to make direct investments in infrastructure and infrastructure-related assets and companies. GS Infrastructure Partners has approximately $10 billion in aggregate assets under management and is managed by the Merchant Banking Division of Goldman Sachs. For more information, please visit <a href=\\"http://www.gs.com\\">www.gs.com</a>.</p>\\n<p><strong>About Stonepeak Infrastructure Partners</strong></p>\\n<p>Stonepeak Infrastructure Partners is an independent private equity investment firm, managing $1.7 billion, specializing in North American middle-market infrastructure. Stonepeak invests in businesses comprised of hard assets with strategic importance, primarily in the following sectors: Energy, Power &amp; Renewables, Transportation, Utilities, Water &amp; Communications. Stonepeak is based in New York. Visit <a href=\\"http://www.stonepeakpartners.com\\">www.stonepeakpartners.com</a> for more information.  </p>\\n ",
            \'safe_summary\' => \'  \',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;}\',
      \'field_date\' => array(),
      \'field_external_link\' => array(),
      \'field_internal_header\' => array(),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'0\',
      \'sticky\' => \'0\',
      \'title\' => \'Vertical Bridge Holdings Completes Second Round Capital Raise; Equity Commitments Now Total $750 million\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'press_release\',
      \'uid\' => \'227\',
      \'uuid\' => \'82f57c8a-0be7-4fd2-a4d2-04fd69ddde04\',
      \'vid\' => NULL,
      \'vuuid\' => \'e89337aa-a381-401c-9a42-603ba4ea7c9a\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><em>Tower Sale Harvests Capital from Non-Strategic Asset</em>s</p>\\r\\n\\r\\n<p><strong>August 5,2015 - Greenwhich, Connecticut -</strong> Townsquare Media, Inc. (NYSE:TSQ) (the “Company”) today announced that it has entered into an agreement to sell 43 towers to a subsidiary of Vertical Bridge Holdings, LLC for approximately $22.8 million in cash, subject to closing adjustments (the “Tower Sale”). The Company will retain ownership of more than 250 towers following the Tower Sale.</p>\\r\\n\\r\\n<p>“We are very excited to complete this transaction which will allow us to unlock capital sequestered in non-strategic tower assets at an attractive valuation level,” commented Townsquare Chairman and Chief Executive Officer Steven Price.</p>\\r\\n\\r\\n<p>The 43 towers being divested are located on 41 sites in 28 markets and presently house antenna which broadcast certain of the Company’s radio stations, together with third party tenants who pay rent for similar space on such towers. For a period of 35 years following the closing, including an initial term of twenty years and three optional five-year renewal periods, the Company will pay $41 of rent per annum ($1 per site per annum) to Vertical Bridge for the right to house its existing antenna on the divested towers. The Company has also entered into an agreement with Vertical Bridge whereby Vertical Bridge will serve as the exclusive marketing agent for the towers retained by the Company. The Tower Sale will reduce the Company’s annual net revenue and Adjusted EBITDA by approximately $1.5 million and $1.3 million, respectively.</p>\\r\\n\\r\\n<p>Alex Gellman, Vertical Bridge Chief Executive Officer commented: “We are excited to be working again with the team at Townsquare Media. With over 250 managed sites and 43 owned towers, this transaction adds over 300 high quality towers in great locations to our growing portfolio of owned and managed towers, including a strong rent roll of third party tenants.”</p>\\r\\n\\r\\n<p><strong>About Townsquare Media, Inc.&nbsp;</strong></p>\\r\\n\\r\\n<p>Townsquare Media, Inc. is an integrated and diversified media and entertainment and digital marketing services company that owns and operates market leading radio stations, digital and social properties and live events in small and mid-sized markets across the United States, delivering national scale and expertise to the communities it serves on a local level. The Company owns and operates 310 radio stations, over 325 search engine and mobile-optimized local websites and approximately 500 live events in 66 small and mid-sized U.S. markets, making Townsquare Media the third largest owner of radio stations in the United States by number of radio stations owned. The Company supplements its local offerings with the nationwide reach of our owned, operated and affiliated music and entertainment websites, which, on a combined basis, attracted the largest audience among music focused digital advertising networks as of June 2015 as well as certain large scale live events. For more information, please visit www.townsquaremedia.com.</p>\\r\\n\\r\\n<p><strong>About Vertical Bridge Holdings, LLC </strong></p>\\r\\n\\r\\n<p>Vertical Bridge Holdings, LLC is a privately-owned real estate investment trust focused on the ownership of wireless communication towers in the U.S. The company owns, operates and manages telecommunications towers, rooftops, and site locations across the country. Vertical Bridge was founded in 2014 by Digital Bridge Holdings, LLC as well as certain key executives from Global Tower Partners, and is headquartered in Boca Raton, Florida. For more information, please visit www.verticalbridge.com or contact Erica Robertson at: 561-406-4032.</p>\\r\\n\\r\\n<p><strong>Forward Looking Statements </strong></p>\\r\\n\\r\\n<p>Statements in this press release that are not historical are forward-looking statements within the meaning of the safe harbor provisions of the U.S. Private Securities Litigation Reform Act of 1995. These forward-looking statements are based upon management’s current beliefs and expectations and are subject to uncertainty and changes in circumstances. They contain words such as “believe,” “intend,” “expect” and “anticipate” and include statements about expectations for the Company’s operations, markets, products, services, financial results and other risk factors discussed in the Company’s filings with the Securities and Exchange Commission (the “SEC”), including under the “Risk Factors” section in the Company’s most recent Form 10-K and other SEC filings. Unless otherwise required by applicable laws, the Company undertakes no obligation to update or revise any forward-looking statements, whether as a result of new information or future developments.</p>\\r\\n\\r\\n<p><strong>Contacts: </strong></p>\\r\\n\\r\\n<p>Vertical Bridge<br />\\r\\nErica Robertson<br />\\r\\n(561) 406-4032<br />\\r\\nERobertson@VerticalBridge.com</p>\\r\\n\\r\\n<p>Investor Relations<br />\\r\\nTownsquare Media, Inc.<br />\\r\\nClaire Yenicay (Messner)<br />\\r\\n203-900-5555<br />\\r\\ninvestors@townsquaremedia.com</p>\\r\\n",
            \'summary\' => "<p>Tower Sale Harvests Capital from Non-Strategic Assets August 5,2015 - Greenwhich, Connecticut - Townsquare Media, Inc. (NYSE:TSQ) (the “Company”) today announced that it has entered into an agreement to sell 43 towers to a subsidiary of Vertical Bridge Holdings, LLC for approximately $22.8 million in cash, subject to closing adjustments (the “Tower Sale”). The Company will retain ownership of more than 250 towers following the Tower Sale.</p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => " <p><em>Tower Sale Harvests Capital from Non-Strategic Asset</em>s</p>\\n<p><strong>August 5,2015 - Greenwhich, Connecticut -</strong> Townsquare Media, Inc. (NYSE:TSQ) (the “Company”) today announced that it has entered into an agreement to sell 43 towers to a subsidiary of Vertical Bridge Holdings, LLC for approximately $22.8 million in cash, subject to closing adjustments (the “Tower Sale”). The Company will retain ownership of more than 250 towers following the Tower Sale.</p>\\n<p>“We are very excited to complete this transaction which will allow us to unlock capital sequestered in non-strategic tower assets at an attractive valuation level,” commented Townsquare Chairman and Chief Executive Officer Steven Price.</p>\\n<p>The 43 towers being divested are located on 41 sites in 28 markets and presently house antenna which broadcast certain of the Company’s radio stations, together with third party tenants who pay rent for similar space on such towers. For a period of 35 years following the closing, including an initial term of twenty years and three optional five-year renewal periods, the Company will pay $41 of rent per annum ($1 per site per annum) to Vertical Bridge for the right to house its existing antenna on the divested towers. The Company has also entered into an agreement with Vertical Bridge whereby Vertical Bridge will serve as the exclusive marketing agent for the towers retained by the Company. The Tower Sale will reduce the Company’s annual net revenue and Adjusted EBITDA by approximately $1.5 million and $1.3 million, respectively.</p>\\n<p>Alex Gellman, Vertical Bridge Chief Executive Officer commented: “We are excited to be working again with the team at Townsquare Media. With over 250 managed sites and 43 owned towers, this transaction adds over 300 high quality towers in great locations to our growing portfolio of owned and managed towers, including a strong rent roll of third party tenants.”</p>\\n<p><strong>About Townsquare Media, Inc. </strong></p>\\n<p>Townsquare Media, Inc. is an integrated and diversified media and entertainment and digital marketing services company that owns and operates market leading radio stations, digital and social properties and live events in small and mid-sized markets across the United States, delivering national scale and expertise to the communities it serves on a local level. The Company owns and operates 310 radio stations, over 325 search engine and mobile-optimized local websites and approximately 500 live events in 66 small and mid-sized U.S. markets, making Townsquare Media the third largest owner of radio stations in the United States by number of radio stations owned. The Company supplements its local offerings with the nationwide reach of our owned, operated and affiliated music and entertainment websites, which, on a combined basis, attracted the largest audience among music focused digital advertising networks as of June 2015 as well as certain large scale live events. For more information, please visit <a href=\\"http://www.townsquaremedia.com\\">www.townsquaremedia.com</a>.</p>\\n<p><strong>About Vertical Bridge Holdings, LLC </strong></p>\\n<p>Vertical Bridge Holdings, LLC is a privately-owned real estate investment trust focused on the ownership of wireless communication towers in the U.S. The company owns, operates and manages telecommunications towers, rooftops, and site locations across the country. Vertical Bridge was founded in 2014 by Digital Bridge Holdings, LLC as well as certain key executives from Global Tower Partners, and is headquartered in Boca Raton, Florida. For more information, please visit <a href=\\"http://www.verticalbridge.com\\">www.verticalbridge.com</a> or contact Erica Robertson at: 561-406-4032.</p>\\n<p><strong>Forward Looking Statements </strong></p>\\n<p>Statements in this press release that are not historical are forward-looking statements within the meaning of the safe harbor provisions of the U.S. Private Securities Litigation Reform Act of 1995. These forward-looking statements are based upon management’s current beliefs and expectations and are subject to uncertainty and changes in circumstances. They contain words such as “believe,” “intend,” “expect” and “anticipate” and include statements about expectations for the Company’s operations, markets, products, services, financial results and other risk factors discussed in the Company’s filings with the Securities and Exchange Commission (the “SEC”), including under the “Risk Factors” section in the Company’s most recent Form 10-K and other SEC filings. Unless otherwise required by applicable laws, the Company undertakes no obligation to update or revise any forward-looking statements, whether as a result of new information or future developments.</p>\\n<p><strong>Contacts: </strong></p>\\n<p>Vertical Bridge<br />\\nErica Robertson<br />\\n(561) 406-4032<br /><a href=\\"mailto:ERobertson@VerticalBridge.com\\">ERobertson@VerticalBridge.com</a></p>\\n<p>Investor Relations<br />\\nTownsquare Media, Inc.<br />\\nClaire Yenicay (Messner)<br />\\n203-900-5555<br /><a href=\\"mailto:investors@townsquaremedia.com\\">investors@townsquaremedia.com</a></p>\\n ",
            \'safe_summary\' => " <p>Tower Sale Harvests Capital from Non-Strategic Assets August 5,2015 - Greenwhich, Connecticut - Townsquare Media, Inc. (NYSE:TSQ) (the “Company”) today announced that it has entered into an agreement to sell 43 towers to a subsidiary of Vertical Bridge Holdings, LLC for approximately $22.8 million in cash, subject to closing adjustments (the “Tower Sale”). The Company will retain ownership of more than 250 towers following the Tower Sale.</p>\\n ",
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'field_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015-08-05 18:15:00\',
            \'timezone\' => \'America/New_York\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_internal_header\' => array(),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Townsquare Media Announces Sale of 43 Towers\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'press\',
      \'uid\' => \'227\',
      \'uuid\' => \'86a70fef-0d74-4523-a346-41d13cc4b7f7\',
      \'vid\' => NULL,
      \'vuuid\' => \'5e5f4190-47cc-4d9d-88da-78be5bed7208\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Hilton&nbsp;Chicacgo</p>\\r\\n",
            \'summary\' => "<p>Hilton&nbsp;Chicacgo</p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => " <p>Hilton Chicacgo</p>\\n ",
            \'safe_summary\' => " <p>Hilton Chicacgo</p>\\n ",
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'field_event_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'October 4, 2016\',
            \'format\' => NULL,
            \'safe_value\' => \'October 4, 2016\',
          ),
        ),
      ),
      \'field_event_location\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Chicago, IL\',
            \'format\' => NULL,
            \'safe_value\' => \'Chicago, IL\',
          ),
        ),
      ),
      \'field_internal_header\' => array(),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'AGL Conference\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'events\',
      \'uid\' => \'227\',
      \'uuid\' => \'86af1539-0cf7-4187-bec6-7546876dc955\',
      \'vid\' => NULL,
      \'vuuid\' => \'19c6e04a-b80f-4f8a-a18e-15abb653c56d\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><strong>Company Converts to Lease Arrangement To Continue To Use Those Towers To Broadcast Its Radio Stations </strong></p>\\r\\n\\r\\n<p><strong>December 11, 2014 – New York, NY</strong> – iHeartMedia, Inc. (OTCBB: IHRT), one of the leading global media and entertainment companies, announced today the sale of a select portfolio of its tower assets toVertical Bridge for up to $400 million. The transaction is subject to due diligence and other customary closing conditions.</p>\\r\\n\\r\\n<p>The transaction is expected to close in Q1 2015. There will be no impact on the company’s broadcast capabilities and operations; at closing, the company will enter into a lease with respect to the sold tower assets that will ensure the ability of its broadcast operations to continue without interruption. The company also advised that investors should expect incremental lease expense as a result of the transaction.</p>\\r\\n\\r\\n<p>“This is a great example of how we continue to optimize our balance sheet and maximize liquidity -- and how we continually review our entire portfolio of assets to ensure we operate them in the most efficient way possible and invest our resources in the highest return opportunities,” said Richard J. Bressler, President and Chief Financial Officer of iHeartMedia, Inc.</p>\\r\\n\\r\\n<p>“We are excited to add this high quality tower portfolio to our existing assets,” said Alexander L. Gellman, CEO of Vertical Bridge Holdings, LLC. “We are looking forward to a strong partnership with iHeartMedia. In addition to being a premier broadcast portfolio, these sites already have many broadband telephony and data tenants and the capacity and potential to add many more. With this latest transaction, Vertical Bridge now has approximately 2000 revenue producing sites that are owned or under definitive agreement.”</p>\\r\\n\\r\\n<p><strong>About iHeartMedia, Inc./iHeartCommunications, Inc.</strong><br />\\r\\niHeartMedia, Inc (OTCBB: IHRT), the parent company of iHeartCommunications, Inc., is one of the leading global media and entertainment companies. The company specializes in radio, digital, outdoor,mobile, social, live events, on-demand entertainment and information services for local communities, and uses its unparalleled national reach to target both nationally and locally on behalf of its advertising partners. The company is dedicated to using the latest technology solutions to transform the company’s products and services for the benefit of its consumers, communities, partners and advertisers, and its outdoor business reaches over 40 countries across five continents, connecting people to brands using innovative new technology.</p>\\r\\n\\r\\n<p><strong>About Vertical Bridge Holdings, LLC </strong><br />\\r\\nVertical Bridge Holdings is a privately-owned real estate investment trust focused on the ownership of wireless communication towers in the U.S. The company owns, operates and manages telecommunications towers, rooftops, and site locations across the country. Vertical Bridge was founded in 2014 by Digital Bridge Holdings, LLC as well as certain key executives from Global Tower Partners and is headquartered in Boca Raton, Florida. For more information,please visit www.verticalbridge.com or call Traci Clancy at 561-948-6367.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p><strong>Company Converts to Lease Arrangement To Continue To Use Those Towers To Broadcast Its Radio Stations </strong></p>\\n<p><strong>December 11, 2014 – New York, NY</strong> – iHeartMedia, Inc. (OTCBB: IHRT), one of the leading global media and entertainment companies, announced today the sale of a select portfolio of its tower assets toVertical Bridge for up to $400 million. The transaction is subject to due diligence and other customary closing conditions.</p>\\n<p>The transaction is expected to close in Q1 2015. There will be no impact on the company’s broadcast capabilities and operations; at closing, the company will enter into a lease with respect to the sold tower assets that will ensure the ability of its broadcast operations to continue without interruption. The company also advised that investors should expect incremental lease expense as a result of the transaction.</p>\\n<p>“This is a great example of how we continue to optimize our balance sheet and maximize liquidity -- and how we continually review our entire portfolio of assets to ensure we operate them in the most efficient way possible and invest our resources in the highest return opportunities,” said Richard J. Bressler, President and Chief Financial Officer of iHeartMedia, Inc.</p>\\n<p>“We are excited to add this high quality tower portfolio to our existing assets,” said Alexander L. Gellman, CEO of Vertical Bridge Holdings, LLC. “We are looking forward to a strong partnership with iHeartMedia. In addition to being a premier broadcast portfolio, these sites already have many broadband telephony and data tenants and the capacity and potential to add many more. With this latest transaction, Vertical Bridge now has approximately 2000 revenue producing sites that are owned or under definitive agreement.”</p>\\n<p><strong>About iHeartMedia, Inc./iHeartCommunications, Inc.</strong><br />\\niHeartMedia, Inc (OTCBB: IHRT), the parent company of iHeartCommunications, Inc., is one of the leading global media and entertainment companies. The company specializes in radio, digital, outdoor,mobile, social, live events, on-demand entertainment and information services for local communities, and uses its unparalleled national reach to target both nationally and locally on behalf of its advertising partners. The company is dedicated to using the latest technology solutions to transform the company’s products and services for the benefit of its consumers, communities, partners and advertisers, and its outdoor business reaches over 40 countries across five continents, connecting people to brands using innovative new technology.</p>\\n<p><strong>About Vertical Bridge Holdings, LLC </strong><br />\\nVertical Bridge Holdings is a privately-owned real estate investment trust focused on the ownership of wireless communication towers in the U.S. The company owns, operates and manages telecommunications towers, rooftops, and site locations across the country. Vertical Bridge was founded in 2014 by Digital Bridge Holdings, LLC as well as certain key executives from Global Tower Partners and is headquartered in Boca Raton, Florida. For more information,please visit <a href=\\"http://www.verticalbridge.com\\">www.verticalbridge.com</a> or call Traci Clancy at 561-948-6367.</p>\\n ",
            \'safe_summary\' => \'  \',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;}\',
      \'field_date\' => array(),
      \'field_external_link\' => array(),
      \'field_internal_header\' => array(),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'0\',
      \'sticky\' => \'0\',
      \'title\' => \'iHeartMedia, Inc. Announces Sale of a Select Portfolio of Its Radio Towers to Vertical Bridge for $400 Million\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'press_release\',
      \'uid\' => \'227\',
      \'uuid\' => \'89a5ce72-6127-457a-9a4b-9dc4d500483b\',
      \'vid\' => NULL,
      \'vuuid\' => \'127c3cc9-1f57-4135-a072-f4f8a7672379\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Vertical Bridge has deep industry experience and a track record of closing deals on time, on budget and with minimal hassle for sellers. Our reputation is important to us, and it shows in every deal. With our established network, collaborative approach and experienced management team, Vertical Bridge is a valued resource for our clients.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p>Vertical Bridge has deep industry experience and a track record of closing deals on time, on budget and with minimal hassle for sellers. Our reputation is important to us, and it shows in every deal. With our established network, collaborative approach and experienced management team, Vertical Bridge is a valued resource for our clients.</p>\\n ",
            \'safe_summary\' => \'  \',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'field_cta_button\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://sitelocator.verticalbridge.com/\',
            \'title\' => \'CLICK HERE\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_cta_content\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Where Are Vertical Bridge\'s 45,000 Assets Located?</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p>Where Are Vertical Bridge\'s 45,000 Assets Located?</p>\\n ",
            \'safe_summary\' => \'  \',
          ),
        ),
      ),
      \'field_internal_header\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'267\',
            \'uid\' => \'227\',
            \'filename\' => \'VB_header-1.jpg\',
            \'uri\' => \'public://VB_header-1.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'79221\',
            \'status\' => \'1\',
            \'timestamp\' => \'1465332931\',
            \'type\' => \'image\',
            \'uuid\' => \'d3b681fb-109d-4381-a44e-d5ad551530ec\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'1024\',
              \'height\' => \'242\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'1024\',
            \'height\' => \'242\',
          ),
        ),
      ),
      \'field_logos\' => array(),
      \'field_tab_content_wysiwyg\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Vertical Bridge owns, manages and operates a portfolio of both broadband and broadcast towers. We are the largest owner of broadcast towers and the largest private owner and manager of broadband towers in the US. We have experienced leasing and operations teams with specialists located at our Headquarters in Boca Raton as well as managers in the field, all devoted to serving your collocation needs. We are committed to providing an efficient and seamless leasing process.&nbsp;<br />\\r\\n<br />\\r\\nFor more information on our Broadcast and Wireless Towers, <a href=\\"mailto:Leasing@VerticalBridge.com\\">contact our Leasing Team.</a></p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p>Vertical Bridge owns, manages and operates a portfolio of both broadband and broadcast towers. We are the largest owner of broadcast towers and the largest private owner and manager of broadband towers in the US. We have experienced leasing and operations teams with specialists located at our Headquarters in Boca Raton as well as managers in the field, all devoted to serving your collocation needs. We are committed to providing an efficient and seamless leasing process. </p>\\n<p>For more information on our Broadcast and Wireless Towers, <a href=\\"mailto:Leasing@VerticalBridge.com\\">contact our Leasing Team.</a></p>\\n ",
            \'safe_summary\' => \'  \',
          ),
          array(
            \'value\' => "<p>We provide Build-to-Suit tower services across the country for all wireless carriers and can take on a project at any stage of development. We have the ability to deploy large amounts of capital to handle projects of any size, and our team has built thousands of towers for customers in all 50 states. We work with local municipalities, carriers, and site acquisition resources to find sites that resolve issues with coverage gaps or capacity to implement a fast and flexible solution for our clients.&nbsp;<br />\\r\\n<br />\\r\\nFor more information on our development services, <a href=\\"mailto:ABacchus@VerticalBridge.com\\">contact our Development Team</a>.&nbsp;</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p>We provide Build-to-Suit tower services across the country for all wireless carriers and can take on a project at any stage of development. We have the ability to deploy large amounts of capital to handle projects of any size, and our team has built thousands of towers for customers in all 50 states. We work with local municipalities, carriers, and site acquisition resources to find sites that resolve issues with coverage gaps or capacity to implement a fast and flexible solution for our clients. </p>\\n<p>For more information on our development services, <a href=\\"mailto:ABacchus@VerticalBridge.com\\">contact our Development Team</a>. </p>\\n ",
            \'safe_summary\' => \'  \',
          ),
          array(
            \'value\' => "<p>Vertical Bridge utilizes a master/sub lease structure.&nbsp; This allows us to bring you more business than you would be able to get on your own due to our pre-negotiated master lease agreements.&nbsp; Carriers want ease and speed, and the master/sub-lease agreements that we use at Vertical Bridge are the mechanism that provide it. &nbsp;</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p>Vertical Bridge utilizes a master/sub lease structure.  This allows us to bring you more business than you would be able to get on your own due to our pre-negotiated master lease agreements.  Carriers want ease and speed, and the master/sub-lease agreements that we use at Vertical Bridge are the mechanism that provide it.  </p>\\n ",
            \'safe_summary\' => \'  \',
          ),
          array(
            \'value\' => "<p>For tower owners looking to generate income through a sale of assets, Vertical Bridge can work with you to ensure you receive the value envisioned. We close deals quickly and for the best possible price, whether it’s for one or 100 towers. We turn around a valuation analysis without delays and follow through with a swift closing. Vertical Bridge’s expertise in maximizing revenue also helps owners who do not want to sell, but want incremental income, by managing and marketing market assets through our rich database of interested clients and tenants.&nbsp;<br />\\r\\n<br />\\r\\nFor more information on making money from your assets, <a href=\\"mailto:BPaige@VerticalBridge.com\\">contact our M&amp;A Team</a>.&nbsp;</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p>For tower owners looking to generate income through a sale of assets, Vertical Bridge can work with you to ensure you receive the value envisioned. We close deals quickly and for the best possible price, whether it’s for one or 100 towers. We turn around a valuation analysis without delays and follow through with a swift closing. Vertical Bridge’s expertise in maximizing revenue also helps owners who do not want to sell, but want incremental income, by managing and marketing market assets through our rich database of interested clients and tenants. </p>\\n<p>For more information on making money from your assets, <a href=\\"mailto:BPaige@VerticalBridge.com\\">contact our M&amp;A Team</a>. </p>\\n ",
            \'safe_summary\' => \'  \',
          ),
          array(
            \'value\' => "<p>With increasing demand for data usage as people use the internet to manage more and more aspects of their lives, the wireless industry has had to evolve quickly and seamlessly. We offer a variety of structures for small cell and IoT collocations, allowing our customers to provide better capacity and coverage without bigger footprints. Antennas no longer have to mean large, visible structures.&nbsp;</p>\\r\\n\\r\\n<p>For more information on our small cell structures, <a href=\\"mailto:RealEstate@VerticalBridge.com\\">contact our Real Estate Team.</a></p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p>With increasing demand for data usage as people use the internet to manage more and more aspects of their lives, the wireless industry has had to evolve quickly and seamlessly. We offer a variety of structures for small cell and IoT collocations, allowing our customers to provide better capacity and coverage without bigger footprints. Antennas no longer have to mean large, visible structures. </p>\\n<p>For more information on our small cell structures, <a href=\\"mailto:RealEstate@VerticalBridge.com\\">contact our Real Estate Team.</a></p>\\n ",
            \'safe_summary\' => \'  \',
          ),
          array(
            \'value\' => "<p>At Vertical Bridge, we make it our priority to ensure our valued landlords are satisfied. Our landlords have an opportunity to receive a lump sum payment or structured payout verses the current lease rent payments.&nbsp;</p>\\r\\n\\r\\n<p>Cash today can be a tremendous advantage in meeting current financial plans and goals.&nbsp; At Vertical Bridge we strive to meet the varied requests of our landlords and offer several income options for convenience.&nbsp;<br />\\r\\n<br />\\r\\nDo you have a tower or rooftop antenna on your property that is not owned by Vertical Bridge?&nbsp;&nbsp;<br />\\r\\n<br />\\r\\nFor more information about your income options, <a href=\\"mailto:BNorman@verticalbridge.com,SGarcia@verticalbrdige.com\\">contact our Real Estate Development Team.</a></p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p>At Vertical Bridge, we make it our priority to ensure our valued landlords are satisfied. Our landlords have an opportunity to receive a lump sum payment or structured payout verses the current lease rent payments. </p>\\n<p>Cash today can be a tremendous advantage in meeting current financial plans and goals.  At Vertical Bridge we strive to meet the varied requests of our landlords and offer several income options for convenience. </p>\\n<p>Do you have a tower or rooftop antenna on your property that is not owned by Vertical Bridge?  </p>\\n<p>For more information about your income options, <a href=\\"mailto:BNorman@verticalbridge.com,SGarcia@verticalbrdige.com\\">contact our Real Estate Development Team.</a></p>\\n ",
            \'safe_summary\' => \'  \',
          ),
        ),
      ),
      \'field_tab_title\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Site Leasing\',
            \'format\' => NULL,
            \'safe_value\' => \'Site Leasing\',
          ),
          array(
            \'value\' => \'Development/Build-to-Suit\',
            \'format\' => NULL,
            \'safe_value\' => \'Development/Build-to-Suit\',
          ),
          array(
            \'value\' => \'Master/Sub-Lease Properties\',
            \'format\' => NULL,
            \'safe_value\' => \'Master/Sub-Lease Properties\',
          ),
          array(
            \'value\' => \'Mergers & Acquisitions\',
            \'format\' => NULL,
            \'safe_value\' => \'Mergers &amp; Acquisitions\',
          ),
          array(
            \'value\' => \'Small Cells/IoT\',
            \'format\' => NULL,
            \'safe_value\' => \'Small Cells/IoT\',
          ),
          array(
            \'value\' => \'Ground Lease Buyouts\',
            \'format\' => NULL,
            \'safe_value\' => \'Ground Lease Buyouts\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'What We Do\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'basic_page_with_tabs\',
      \'uid\' => \'227\',
      \'uuid\' => \'89cccd69-bc60-4886-8697-643fb036d4bf\',
      \'vid\' => NULL,
      \'vuuid\' => \'61198082-c0c0-490d-9327-de961a782f31\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><img align=\\"left\\" alt=\\"\\" border=\\"2\\" class=\\"media-image attr__typeof__foaf:Image img__fid__42 img__view_mode__media_original attr__format__media_original\\" height=\\"239\\" src=\\"http://www.verticalbridge.com/sites/default/files/Bob%20Paige.jpg\\" style=\\"padding: 5px; width: 175px; margin-right: 5px;\\" typeof=\\"foaf:Image\\" width=\\"446\\" /></p>\\r\\n\\r\\n<p>Bob Paige is the Senior Vice President of M&amp;A of Vertical Bridge. Paige is responsible for all portfolio acquisitions, joint ventures and other strategic transactions.<br />\\r\\n<br />\\r\\nPrior to joining Vertical Bridge, Paige was a Principal and Telecom M&amp;A Group Head at Brown Brothers Harriman where he led all assignments for companies in the telecommunications industry with a specific focus on the wireline and wireless sector. He also served as the Managing Director at Falkenberg Capital Corporation where he advised wireline and wireless companies in M&amp;A transactions.<br />\\r\\n<br />\\r\\nPaige started his career as a telecom lending executive with Northern Telecom and GE Capital.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p><img align=\\"left\\" alt=\\"\\" border=\\"2\\" class=\\"media-image attr__typeof__foaf:Image img__fid__42 img__view_mode__media_original attr__format__media_original\\" height=\\"239\\" src=\\"http://www.verticalbridge.com/sites/default/files/Bob%20Paige.jpg\\" style=\\"padding: 5px; width: 175px; margin-right: 5px;\\" typeof=\\"foaf:Image\\" width=\\"446\\" /></p>\\n<p>Bob Paige is the Senior Vice President of M&amp;A of Vertical Bridge. Paige is responsible for all portfolio acquisitions, joint ventures and other strategic transactions.</p>\\n<p>Prior to joining Vertical Bridge, Paige was a Principal and Telecom M&amp;A Group Head at Brown Brothers Harriman where he led all assignments for companies in the telecommunications industry with a specific focus on the wireline and wireless sector. He also served as the Managing Director at Falkenberg Capital Corporation where he advised wireline and wireless companies in M&amp;A transactions.</p>\\n<p>Paige started his career as a telecom lending executive with Northern Telecom and GE Capital.</p>\\n ",
            \'safe_summary\' => \'  \',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;}\',
      \'field_internal_header\' => array(),
      \'field_linkedin\' => array(),
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Bob Paige\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'team_member\',
      \'uid\' => \'227\',
      \'uuid\' => \'9040cc4c-dae7-486a-aa8c-deacf706de47\',
      \'vid\' => NULL,
      \'vuuid\' => \'f641eb06-b3ed-4a66-b227-342ebcf949e6\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Vertical Bridge is committed to giving back to the community and to helping the organizations that our employees and clients support with their time and money.&nbsp; We contribute not only time but also financial resources each year to these organizations, and our people provide hundreds of volunteer hours to help them achieve their missions. We hope this demonstrates that philanthropy and giving back to the communities in which we live and work is one of Vertical Bridge’s core values.</p>\\r\\n\\r\\n<p>Some of the organizations Vertical Bridge supports include:</p>\\r\\n\\r\\n<ul>\\r\\n\\t<li><a href=\\"http://www.bocahelpinghands.org/\\">Boca Helping Hands</a>- Providing food and emergency assistance to meet basic human needs and long-term solutions to break the cycle of dependence.</li>\\r\\n\\t<li><a href=\\"http://www.habitat.org/\\">Habitat for Humanity</a> - Bringing people together to build homes, communities and hope.</li>\\r\\n\\t<li><a href=\\"http://warriors4wireless.org/\\">Warriors 4 Wireless&nbsp;</a> - Working with veterans to transfer their military skills into civilian careers.</li>\\r\\n\\t<li><a href=\\"http://www.marchofdimes.org/\\">March of Dimes</a> - Dedicated to improving the health of babies by preventing birth defects, and infant mortality.&nbsp;</li>\\r\\n\\t<li><a href=\\"http://www.surfriderpbc.org/\\">Surfrider Foundation</a> - Protecting our oceans, waves and beaches.</li>\\r\\n</ul>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p>Vertical Bridge is committed to giving back to the community and to helping the organizations that our employees and clients support with their time and money.  We contribute not only time but also financial resources each year to these organizations, and our people provide hundreds of volunteer hours to help them achieve their missions. We hope this demonstrates that philanthropy and giving back to the communities in which we live and work is one of Vertical Bridge’s core values.</p>\\n<p>Some of the organizations Vertical Bridge supports include:</p>\\n<ul><li><a href=\\"http://www.bocahelpinghands.org/\\">Boca Helping Hands</a>- Providing food and emergency assistance to meet basic human needs and long-term solutions to break the cycle of dependence.</li>\\n<li><a href=\\"http://www.habitat.org/\\">Habitat for Humanity</a> - Bringing people together to build homes, communities and hope.</li>\\n<li><a href=\\"http://warriors4wireless.org/\\">Warriors 4 Wireless </a> - Working with veterans to transfer their military skills into civilian careers.</li>\\n<li><a href=\\"http://www.marchofdimes.org/\\">March of Dimes</a> - Dedicated to improving the health of babies by preventing birth defects, and infant mortality. </li>\\n<li><a href=\\"http://www.surfriderpbc.org/\\">Surfrider Foundation</a> - Protecting our oceans, waves and beaches.</li>\\n</ul>",
            \'safe_summary\' => \'  \',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'field_cta_button\' => array(),
      \'field_cta_content\' => array(),
      \'field_internal_header\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'216\',
            \'uid\' => \'227\',
            \'filename\' => \'Vertical-Bridge_Internal-with overlay.jpg\',
            \'uri\' => \'public://Vertical-Bridge_Internal-with overlay.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'116816\',
            \'status\' => \'1\',
            \'timestamp\' => \'1463408329\',
            \'type\' => \'image\',
            \'uuid\' => \'b91a7db3-4e69-4abe-9345-cde5df0601ef\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'1024\',
              \'height\' => \'242\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'1024\',
            \'height\' => \'242\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Vertical Bridge Charitable Network\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'page\',
      \'uid\' => \'227\',
      \'uuid\' => \'90f62510-c0b1-4a3d-bf52-a76b8d822752\',
      \'vid\' => NULL,
      \'vuuid\' => \'45caad05-51e8-4b32-9709-fdcea08130f3\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Leasing space for your wireless telecommunications needs couldn\'t be easier than working with VB. We have a dedicated team of quick, knowledgeable and approachable people ready to devote their time and efforts to make your experience with us effortless.</p>\\r\\n\\r\\n<p>Your team consists of your main contact, a Regional Leasing Manager who will coordinate and set all terms with you; a Regional Site Manager who will review and approve your application and will work with you on issuing the NTP, and a Leasing Specialist who will provide all documentation to you;.</p>\\r\\n\\r\\n<p>Why is leasing space easy? VB understands how important it is for you to \\"get it done quickly, at a fair market rental rate and with an easy installation process\\" - and that is equally important to us! We provide this by ensuring:</p>\\r\\n\\r\\n<ul>\\r\\n\\t<li>No application fees!</li>\\r\\n\\t<li>Site documentation as required is sent to you within 48 hours of application</li>\\r\\n\\t<li>Site lease documentation is sent to you within 48 hours</li>\\r\\n\\t<li>Lease document is executed by the owner first</li>\\r\\n</ul>\\r\\n\\r\\n<p>For leasing and site information, click <a href=\\"mailto:bmaxwell@verticalbridge.com?subject=Inquiry%20from%20Vertical%20Bridge%20Web%20Site%20-%20Site%20Solutions\\"><strong>here</strong></a>.</p>\\r\\n\\r\\n<p>For general inquiries on how VB can help you achieve your business objectives, please click <a href=\\"mailto:bborghei@verticalbridge.com?subject=Inquiry%20from%20Vertical%20Bridge%20Web%20Site%20-%20Site%20Solutions\\"><strong>here</strong></a>.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p>Leasing space for your wireless telecommunications needs couldn\'t be easier than working with VB. We have a dedicated team of quick, knowledgeable and approachable people ready to devote their time and efforts to make your experience with us effortless.</p>\\n<p>Your team consists of your main contact, a Regional Leasing Manager who will coordinate and set all terms with you; a Regional Site Manager who will review and approve your application and will work with you on issuing the NTP, and a Leasing Specialist who will provide all documentation to you;.</p>\\n<p>Why is leasing space easy? VB understands how important it is for you to \\"get it done quickly, at a fair market rental rate and with an easy installation process\\" - and that is equally important to us! We provide this by ensuring:</p>\\n<ul><li>No application fees!</li>\\n<li>Site documentation as required is sent to you within 48 hours of application</li>\\n<li>Site lease documentation is sent to you within 48 hours</li>\\n<li>Lease document is executed by the owner first</li>\\n</ul><p>For leasing and site information, click <a href=\\"mailto:bmaxwell@verticalbridge.com?subject=Inquiry%20from%20Vertical%20Bridge%20Web%20Site%20-%20Site%20Solutions\\"><strong>here</strong></a>.</p>\\n<p>For general inquiries on how VB can help you achieve your business objectives, please click <a href=\\"mailto:bborghei@verticalbridge.com?subject=Inquiry%20from%20Vertical%20Bridge%20Web%20Site%20-%20Site%20Solutions\\"><strong>here</strong></a>.</p>\\n ",
            \'safe_summary\' => \'  \',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'field_cta_button\' => array(),
      \'field_cta_content\' => array(),
      \'field_internal_header\' => array(),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'metatags\' => array(
        \'und\' => array(
          \'title\' => array(
            \'value\' => \'Cell Tower Leasing Solutions | Vertical Bridge\',
          ),
          \'description\' => array(
            \'value\' => "Leasing space for your wireless telecommunications needs couldn\'t be easier than working with VB. We have a dedicated team of quick, knowledgeable and approachable people ready to devote their time and efforts to make your experience with us effortless.",
          ),
        ),
      ),
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(
        array(
          \'pnid\' => NULL,
          \'menu_name\' => \'navigation\',
          \'mlid\' => \'635\',
          \'plid\' => \'0\',
          \'link_path\' => \'node/5\',
          \'router_path\' => \'node/%\',
          \'link_title\' => \'Site Solutions\',
          \'options\' => array(
            \'attributes\' => array(
              \'title\' => \'\',
            ),
          ),
          \'module\' => \'nodehierarchy\',
          \'hidden\' => \'1\',
          \'external\' => \'0\',
          \'has_children\' => \'0\',
          \'expanded\' => \'0\',
          \'weight\' => \'1\',
          \'depth\' => \'1\',
          \'customized\' => \'0\',
          \'p1\' => \'635\',
          \'p2\' => \'0\',
          \'p3\' => \'0\',
          \'p4\' => \'0\',
          \'p5\' => \'0\',
          \'p6\' => \'0\',
          \'p7\' => \'0\',
          \'p8\' => \'0\',
          \'p9\' => \'0\',
          \'updated\' => \'0\',
          \'language\' => \'und\',
          \'i18n_tsid\' => \'0\',
          \'enabled\' => FALSE,
          \'nid\' => \'5\',
        ),
      ),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Site Solutions\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'page\',
      \'uid\' => \'227\',
      \'uuid\' => \'93e1090a-41bd-4fe6-af10-27731427fe0e\',
      \'vid\' => NULL,
      \'vuuid\' => \'5e7fb36e-e04a-4665-9321-ad6fd556a321\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<h1><span style=\\"color: rgb(255, 255, 255);\\">Bringing Communications to New Heights</span></h1>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <h1><span style=\\"color: rgb(255, 255, 255);\\">Bringing Communications to New Heights</span></h1>\\n ",
            \'safe_summary\' => \'  \',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'field_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'234\',
            \'uid\' => \'227\',
            \'filename\' => \'Vertical-Bridge_Home-New-1.jpg\',
            \'uri\' => \'public://home-slides/Vertical-Bridge_Home-New-1.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'314156\',
            \'status\' => \'1\',
            \'timestamp\' => \'1463687948\',
            \'type\' => \'image\',
            \'uuid\' => \'075b1686-1544-4135-a191-6b2e79454b42\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'1025\',
              \'height\' => \'347\',
            ),
            \'alt\' => NULL,
            \'title\' => NULL,
            \'width\' => \'1025\',
            \'height\' => \'347\',
          ),
        ),
      ),
      \'field_internal_header\' => array(),
      \'field_order\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'0\',
      \'sticky\' => \'0\',
      \'title\' => \'Slide New 1\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'home_slide\',
      \'uid\' => \'227\',
      \'uuid\' => \'947cab92-36ce-450a-833c-13a2cb4e78e5\',
      \'vid\' => NULL,
      \'vuuid\' => \'3d681461-84f3-4163-af72-4cff52707cd0\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'\',
            \'summary\' => "<p>AGL Media Group,&nbsp;<i>By J. Sharpe Smith</i>&nbsp;</p>\\r\\n\\r\\n<p>Vertical Bridge has acquired 275 sites and secured a build to suit arrangement for new towers from Alaska Wireless Network (AWN), the wholly owned subsidiary of wireless carrier General Communications, Inc. for $91 million.</p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => \'  \',
            \'safe_summary\' => " <p>AGL Media Group, <i>By J. Sharpe Smith</i> </p>\\n<p>Vertical Bridge has acquired 275 sites and secured a build to suit arrangement for new towers from Alaska Wireless Network (AWN), the wholly owned subsidiary of wireless carrier General Communications, Inc. for $91 million.</p>\\n ",
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'field_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2016-05-05 15:45:00\',
            \'timezone\' => \'America/New_York\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_external_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://www.aglmediagroup.com/vertical-bridge-acquires-towers-from-alaska-wireless-network/\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_internal_header\' => array(),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Vertical Bridge Acquires Towers from Alaska Wireless Network\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'press_release\',
      \'uid\' => \'227\',
      \'uuid\' => \'9c170192-b077-46c6-b52c-957423d3a715\',
      \'vid\' => NULL,
      \'vuuid\' => \'c3f1a9ea-f4e9-455b-85cf-e2ed50ea20dd\',
    ),
  (object) array(
      \'body\' => array(),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'field_cta_button\' => array(),
      \'field_cta_content\' => array(),
      \'field_internal_header\' => array(),
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Sitemap\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'page\',
      \'uid\' => \'227\',
      \'uuid\' => \'9ce0df07-1e7f-4e40-b48e-624db03baae6\',
      \'vid\' => NULL,
      \'vuuid\' => \'5cb3a1bc-2f90-4813-92ca-f239c1d20f18\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><span style=\\"font-size: 16px;\\">Premier locations with investment-grade carrier tenants </span></p>\\r\\n\\r\\n<p><strong>Boca Raton, FL., September 5, 2014</strong> - Vertical Bridge Holdings, LLC, a privately owned tower company, today announced that it has completed its acquisition of 269 investment grade tenant leases on 205 wireless attachment sites in the Southeast U.S. from PT Access Networks (“PTAN”), an affiliate of Duke Energy. All of the acquired leases are with major wireless carriers with long term leases.</p>\\r\\n\\r\\n<p>“We welcome the opportunity to work with Duke and PTAN again,” said Alexander L. Gellman, President of Vertical Bridge. “This latest transaction further solidifies our long-standing relationship.”</p>\\r\\n\\r\\n<p>Under the deal, PTAN will continue to manage the sites where the leases are being acquired - providing Vertical Bridge and its carrier customers with maintenance and other site services. “We are very pleased to be working with Vertical Bridge on this portion of our wireless site portfolio,” said Joe Stockwell, President of PTAN. “Together, PTAN and Vertical Bridge will continue to provide our carrier customers with excellent service on the acquired sites.”</p>\\r\\n\\r\\n<p><strong>About Vertical Bridge Holdings, LLC. </strong></p>\\r\\n\\r\\n<p>Vertical Bridge Holdings is a privately-owned tower company in the US headquartered in Boca Raton, Florida. The company focuses on owning, operating, and managing telecommunications towers, rooftops, and site locations across the country. Vertical Bridge was founded in 2014 by Digital Bridge Holdings, LLC as well as certain key executives from Global Tower Partners. For more information please visit www.verticalbridge.com or call: Traci Clancy at 561-948-6367.</p>\\r\\n\\r\\n<p><strong>About Digital Bridge Holdings, LLC. </strong></p>\\r\\n\\r\\n<p>Digital Bridge Holdings, is a communications infrastructure platform based in Boca Raton, Florida. It was formed in 2013 through a partnership between Ben Jenkins (formerly of The Blackstone Group) and Marc Ganzi (former founder and CEO of Global Tower Partners). Digital Bridge owns interests in a broad range of communications infrastructure companies. It is dedicated to long-term value creation through the active management of its companies and strong alignment with its investor partners. Digital Bridge manages investments on behalf of institutional, corporate, endowment and family offices around the world. More information may be found at www.digitalbridgellc.com.</p>\\r\\n\\r\\n<p><strong>About PT Access Networks</strong></p>\\r\\n\\r\\n<p>PT Access Networks is a tower company operated as a joint venture by Duke Energy Inc. and Palo Alto, California based Odyssey Management Capital (“Odyssey”). PTAN is headquartered in St Petersburg, Florida and has over 18 years experience developing, owning, and operating wireless telecommunications sites collocated on utility-owned infrastructure. It is the largest utility-based tower operator in the southeast U.S with a collocation footprint including over 100,000 utility-owned structures throughout Florida, North Carolina, and South Carolina. For more information please visit www.ptaccess.net.</p>\\r\\n",
            \'summary\' => "<p><strong>Boca Raton, FL., September 5, 2014</strong> - Vertical Bridge Holdings, LLC, a privately owned tower company, today announced that it has completed its acquisition of 269 investment grade tenant leases on 205 wireless attachment sites in the Southeast U.S. from PT Access Networks (“PTAN”), an affiliate of Duke Energy. All of the acquired leases are with major wireless carriers with long term leases.&nbsp; “We welcome the opportunity to work with Duke and PTAN again,” said Alexander L. Gellman, President of Vertical Bridge. “This latest transaction further solidifies our long-standing relationship.”</p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => " <p><span style=\\"font-size: 16px;\\">Premier locations with investment-grade carrier tenants </span></p>\\n<p><strong>Boca Raton, FL., September 5, 2014</strong> - Vertical Bridge Holdings, LLC, a privately owned tower company, today announced that it has completed its acquisition of 269 investment grade tenant leases on 205 wireless attachment sites in the Southeast U.S. from PT Access Networks (“PTAN”), an affiliate of Duke Energy. All of the acquired leases are with major wireless carriers with long term leases.</p>\\n<p>“We welcome the opportunity to work with Duke and PTAN again,” said Alexander L. Gellman, President of Vertical Bridge. “This latest transaction further solidifies our long-standing relationship.”</p>\\n<p>Under the deal, PTAN will continue to manage the sites where the leases are being acquired - providing Vertical Bridge and its carrier customers with maintenance and other site services. “We are very pleased to be working with Vertical Bridge on this portion of our wireless site portfolio,” said Joe Stockwell, President of PTAN. “Together, PTAN and Vertical Bridge will continue to provide our carrier customers with excellent service on the acquired sites.”</p>\\n<p><strong>About Vertical Bridge Holdings, LLC. </strong></p>\\n<p>Vertical Bridge Holdings is a privately-owned tower company in the US headquartered in Boca Raton, Florida. The company focuses on owning, operating, and managing telecommunications towers, rooftops, and site locations across the country. Vertical Bridge was founded in 2014 by Digital Bridge Holdings, LLC as well as certain key executives from Global Tower Partners. For more information please visit <a href=\\"http://www.verticalbridge.com\\">www.verticalbridge.com</a> or call: Traci Clancy at 561-948-6367.</p>\\n<p><strong>About Digital Bridge Holdings, LLC. </strong></p>\\n<p>Digital Bridge Holdings, is a communications infrastructure platform based in Boca Raton, Florida. It was formed in 2013 through a partnership between Ben Jenkins (formerly of The Blackstone Group) and Marc Ganzi (former founder and CEO of Global Tower Partners). Digital Bridge owns interests in a broad range of communications infrastructure companies. It is dedicated to long-term value creation through the active management of its companies and strong alignment with its investor partners. Digital Bridge manages investments on behalf of institutional, corporate, endowment and family offices around the world. More information may be found at <a href=\\"http://www.digitalbridgellc.com\\">www.digitalbridgellc.com</a>.</p>\\n<p><strong>About PT Access Networks</strong></p>\\n<p>PT Access Networks is a tower company operated as a joint venture by Duke Energy Inc. and Palo Alto, California based Odyssey Management Capital (“Odyssey”). PTAN is headquartered in St Petersburg, Florida and has over 18 years experience developing, owning, and operating wireless telecommunications sites collocated on utility-owned infrastructure. It is the largest utility-based tower operator in the southeast U.S with a collocation footprint including over 100,000 utility-owned structures throughout Florida, North Carolina, and South Carolina. For more information please visit <a href=\\"http://www.ptaccess.net\\">www.ptaccess.net</a>.</p>\\n ",
            \'safe_summary\' => " <p><strong>Boca Raton, FL., September 5, 2014</strong> - Vertical Bridge Holdings, LLC, a privately owned tower company, today announced that it has completed its acquisition of 269 investment grade tenant leases on 205 wireless attachment sites in the Southeast U.S. from PT Access Networks (“PTAN”), an affiliate of Duke Energy. All of the acquired leases are with major wireless carriers with long term leases.  “We welcome the opportunity to work with Duke and PTAN again,” said Alexander L. Gellman, President of Vertical Bridge. “This latest transaction further solidifies our long-standing relationship.”</p>\\n ",
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;}\',
      \'field_date\' => array(),
      \'field_external_link\' => array(),
      \'field_internal_header\' => array(),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'0\',
      \'sticky\' => \'0\',
      \'title\' => \'Vertical Bridge Holdings, LLC, Announces Acquisition of 269 Wireless Leases From PT Access Networks\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'press_release\',
      \'uid\' => \'227\',
      \'uuid\' => \'9db7f017-43a1-46d4-8291-be92b4c1f186\',
      \'vid\' => NULL,
      \'vuuid\' => \'a90b148c-3612-436d-aeaf-a513cb29188e\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><img alt=\\"\\" class=\\"media-image attr__typeof__foaf:Image img__fid__27 img__view_mode__media_large attr__format__media_large\\" src=\\"/sites/default/files/Mike%20Belski.jpg\\" style=\\"padding: 5px; width: 180px; margin-right: 5px; float: left;\\" typeof=\\"foaf:Image\\" /></p>\\r\\n\\r\\n<p>Michael Belski is the Co-Founder and Senior Vice President, Leasing &amp; Marketing of Vertical Bridge. He is responsible for creating deep relationships with clients, working with some of the country’s largest carriers to develop leasing contracts.<br />\\r\\n<br />\\r\\nPrior to co-founding Vertical Bridge, Belski was the Senior Vice President of Leasing &amp; Marketing at Global Tower Partners (GTP), where he was responsible for leasing and marketing the company’s portfolio of assets and securing build-to-suit contracts.<br />\\r\\n<br />\\r\\nHe previously held senior positions at Morrison Hershfield Corporation and SBA Communications Corporation.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p><img alt=\\"\\" class=\\"media-image attr__typeof__foaf:Image img__fid__27 img__view_mode__media_large attr__format__media_large\\" src=\\"/sites/default/files/Mike%20Belski.jpg\\" style=\\"padding: 5px; width: 180px; margin-right: 5px; float: left;\\" typeof=\\"foaf:Image\\" /></p>\\n<p>Michael Belski is the Co-Founder and Senior Vice President, Leasing &amp; Marketing of Vertical Bridge. He is responsible for creating deep relationships with clients, working with some of the country’s largest carriers to develop leasing contracts.</p>\\n<p>Prior to co-founding Vertical Bridge, Belski was the Senior Vice President of Leasing &amp; Marketing at Global Tower Partners (GTP), where he was responsible for leasing and marketing the company’s portfolio of assets and securing build-to-suit contracts.</p>\\n<p>He previously held senior positions at Morrison Hershfield Corporation and SBA Communications Corporation.</p>\\n ",
            \'safe_summary\' => \'  \',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'field_internal_header\' => array(),
      \'field_linkedin\' => array(),
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'metatags\' => array(
        \'en\' => array(
          \'title\' => array(
            \'value\' => \'Michael Belski - Senior VP Leasing and Development & Co-Founder| Vertical Bridge\',
          ),
          \'description\' => array(
            \'value\' => \'Michael Belski is the Senior Vice President and co-founder of Vertical Bridge. Prior to joining Vertical Bridge, Michael was the Senior Vice President of Leasing and Marketing at Global Tower Partners where he was responsible for leasing and marketing the GTP Portfolio and securing build-to-suit contracts.\',
          ),
        ),
      ),
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Michael Belski\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'team_member\',
      \'uid\' => \'227\',
      \'uuid\' => \'a05bc99c-caba-4d90-b686-fd52ff180d40\',
      \'vid\' => NULL,
      \'vuuid\' => \'400a359c-5eff-4780-8f6f-59d319ec9c6f\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Sands Expo &amp; Convention Center</p>\\r\\n",
            \'summary\' => "<p>Sands Expo &amp; Convention Center</p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => " <p>Sands Expo &amp; Convention Center</p>\\n ",
            \'safe_summary\' => " <p>Sands Expo &amp; Convention Center</p>\\n ",
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'field_event_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'September 7-9, 2016\',
            \'format\' => NULL,
            \'safe_value\' => \'September 7-9, 2016\',
          ),
        ),
      ),
      \'field_event_location\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Las Vegas, NV\',
            \'format\' => NULL,
            \'safe_value\' => \'Las Vegas, NV\',
          ),
        ),
      ),
      \'field_internal_header\' => array(),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'CTIA Tower & Small Cell Summit\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'events\',
      \'uid\' => \'227\',
      \'uuid\' => \'a24d8aa6-dcf2-4064-91be-bbf47d918477\',
      \'vid\' => NULL,
      \'vuuid\' => \'1487feb6-837a-4a20-bf89-e75934d273b2\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Premier locations with investment-grade carrier tenants</p>\\r\\n\\r\\n<p><strong>Boca Raton, FL., September 5, 2014</strong> - Vertical Bridge Holdings, LLC, a privately owned tower company, today announced that it has completed its acquisition of 269 investment grade tenant leases on 205 wireless attachment sites in the Southeast U.S. from PT Access Networks (“PTAN”), an affiliate of Duke Energy. All of the acquired leases are with major wireless carriers with long term leases.</p>\\r\\n\\r\\n<p>“We welcome the opportunity to work with Duke and PTAN again,” said Alexander L. Gellman, President of Vertical Bridge. “This latest transaction further solidifies our long-standing relationship.”</p>\\r\\n\\r\\n<p>Under the deal, PTAN will continue to manage the sites where the leases are being acquired - providing Vertical Bridge and its carrier customers with maintenance and other site services. “We are very pleased to be working with Vertical Bridge on this portion of our wireless site portfolio,” said Joe Stockwell, President of PTAN. “Together, PTAN and Vertical Bridge will continue to provide our carrier customers with excellent service on the acquired sites.”</p>\\r\\n\\r\\n<p><strong>About Vertical Bridge Holdings, LLC. </strong></p>\\r\\n\\r\\n<p>Vertical Bridge Holdings is a privately-owned tower company in the US headquartered in Boca Raton, Florida. The company focuses on owning, operating, and managing telecommunications towers, rooftops, and site locations across the country. Vertical Bridge was founded in 2014 by Digital Bridge Holdings, LLC as well as certain key executives from Global Tower Partners. For more information please visit www.verticalbridge.com or call: Traci Clancy at 561-948-6367.</p>\\r\\n\\r\\n<p><strong>About Digital Bridge Holdings, LLC. </strong></p>\\r\\n\\r\\n<p>Digital Bridge Holdings, is a communications infrastructure platform based in Boca Raton, Florida. It was formed in 2013 through a partnership between Ben Jenkins (formerly of The Blackstone Group) and Marc Ganzi (former founder and CEO of Global Tower Partners). Digital Bridge owns interests in a broad range of communications infrastructure companies. It is dedicated to long-term value creation through the active management of its companies and strong alignment with its investor partners. Digital Bridge manages investments on behalf of institutional, corporate, endowment and family offices around the world. More information may be found at www.digitalbridgellc.com.</p>\\r\\n\\r\\n<p><strong>About PT Access Networks</strong></p>\\r\\n\\r\\n<p>PT Access Networks is a tower company operated as a joint venture by Duke Energy Inc. and Palo Alto, California based Odyssey Management Capital (“Odyssey”). PTAN is headquartered in St Petersburg, Florida and has over 18 years experience developing, owning, and operating wireless telecommunications sites collocated on utility-owned infrastructure. It is the largest utility-based tower operator in the southeast U.S with a collocation footprint including over 100,000 utility-owned structures throughout Florida, North Carolina, and South Carolina. For more information please visit www.ptaccess.net.</p>\\r\\n",
            \'summary\' => "<p><strong>Boca Raton, FL., September 5, 2014</strong> - Vertical Bridge Holdings, LLC, a privately owned tower company, today announced that it has completed its acquisition of 269 investment grade tenant leases on 205 wireless attachment sites in the Southeast U.S. from PT Access Networks (“PTAN”), an affiliate of Duke Energy. All of the acquired leases are with major wireless carriers with long term leases.&nbsp; “We welcome the opportunity to work with Duke and PTAN again,” said Alexander L. Gellman, President of Vertical Bridge. “This latest transaction further solidifies our long-standing relationship.”</p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => " <p>Premier locations with investment-grade carrier tenants</p>\\n<p><strong>Boca Raton, FL., September 5, 2014</strong> - Vertical Bridge Holdings, LLC, a privately owned tower company, today announced that it has completed its acquisition of 269 investment grade tenant leases on 205 wireless attachment sites in the Southeast U.S. from PT Access Networks (“PTAN”), an affiliate of Duke Energy. All of the acquired leases are with major wireless carriers with long term leases.</p>\\n<p>“We welcome the opportunity to work with Duke and PTAN again,” said Alexander L. Gellman, President of Vertical Bridge. “This latest transaction further solidifies our long-standing relationship.”</p>\\n<p>Under the deal, PTAN will continue to manage the sites where the leases are being acquired - providing Vertical Bridge and its carrier customers with maintenance and other site services. “We are very pleased to be working with Vertical Bridge on this portion of our wireless site portfolio,” said Joe Stockwell, President of PTAN. “Together, PTAN and Vertical Bridge will continue to provide our carrier customers with excellent service on the acquired sites.”</p>\\n<p><strong>About Vertical Bridge Holdings, LLC. </strong></p>\\n<p>Vertical Bridge Holdings is a privately-owned tower company in the US headquartered in Boca Raton, Florida. The company focuses on owning, operating, and managing telecommunications towers, rooftops, and site locations across the country. Vertical Bridge was founded in 2014 by Digital Bridge Holdings, LLC as well as certain key executives from Global Tower Partners. For more information please visit <a href=\\"http://www.verticalbridge.com\\">www.verticalbridge.com</a> or call: Traci Clancy at 561-948-6367.</p>\\n<p><strong>About Digital Bridge Holdings, LLC. </strong></p>\\n<p>Digital Bridge Holdings, is a communications infrastructure platform based in Boca Raton, Florida. It was formed in 2013 through a partnership between Ben Jenkins (formerly of The Blackstone Group) and Marc Ganzi (former founder and CEO of Global Tower Partners). Digital Bridge owns interests in a broad range of communications infrastructure companies. It is dedicated to long-term value creation through the active management of its companies and strong alignment with its investor partners. Digital Bridge manages investments on behalf of institutional, corporate, endowment and family offices around the world. More information may be found at <a href=\\"http://www.digitalbridgellc.com\\">www.digitalbridgellc.com</a>.</p>\\n<p><strong>About PT Access Networks</strong></p>\\n<p>PT Access Networks is a tower company operated as a joint venture by Duke Energy Inc. and Palo Alto, California based Odyssey Management Capital (“Odyssey”). PTAN is headquartered in St Petersburg, Florida and has over 18 years experience developing, owning, and operating wireless telecommunications sites collocated on utility-owned infrastructure. It is the largest utility-based tower operator in the southeast U.S with a collocation footprint including over 100,000 utility-owned structures throughout Florida, North Carolina, and South Carolina. For more information please visit <a href=\\"http://www.ptaccess.net\\">www.ptaccess.net</a>.</p>\\n ",
            \'safe_summary\' => " <p><strong>Boca Raton, FL., September 5, 2014</strong> - Vertical Bridge Holdings, LLC, a privately owned tower company, today announced that it has completed its acquisition of 269 investment grade tenant leases on 205 wireless attachment sites in the Southeast U.S. from PT Access Networks (“PTAN”), an affiliate of Duke Energy. All of the acquired leases are with major wireless carriers with long term leases.  “We welcome the opportunity to work with Duke and PTAN again,” said Alexander L. Gellman, President of Vertical Bridge. “This latest transaction further solidifies our long-standing relationship.”</p>\\n ",
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'field_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-09-05 20:30:00\',
            \'timezone\' => \'America/New_York\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_internal_header\' => array(),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Vertical Bridge Holdings, LLC, Announces Acquisition of 269 Wireless Leases From PT Access Networks\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'press\',
      \'uid\' => \'227\',
      \'uuid\' => \'a3ce7d0a-3cca-4f23-a40a-edd684853587\',
      \'vid\' => NULL,
      \'vuuid\' => \'d57efce2-4744-43ba-9554-ae5b372311dc\',
    ),
  (object) array(
      \'body\' => array(),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;}\',
      \'field_internal_header\' => array(),
      \'field_linkedin\' => array(),
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Suzanne Docobo\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'team_member\',
      \'uid\' => \'227\',
      \'uuid\' => \'a7448e59-31fe-4c31-bbf6-e21baaaf5cbf\',
      \'vid\' => NULL,
      \'vuuid\' => \'95868c19-0132-45f5-9e8d-237684386aaf\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p style=\\"margin: 0in 0in 17.15pt;\\"><span style=\\"color: rgb(103, 103, 103); font-family: &quot;Arial&quot;,&quot;sans-serif&quot;; font-size: 10.5pt;\\">Investors in Vertical Bridge include Digital Bridge Holdings, LLC, The Jordan Company, The Edgewater Funds, Goldman, Sachs &amp; Co, Stonepeak Infrastructure Partners&nbsp;and the Vertical Bridge Management Team.&nbsp;</span></p>\\r\\n\\r\\n<p style=\\"margin: 0in 0in 17.15pt;\\"><span style=\\"color: rgb(103, 103, 103); font-family: &quot;Arial&quot;,&quot;sans-serif&quot;; font-size: 10.5pt;\\">Digital Bridge was formed in 2013 through a partnership between Ben Jenkins of Dering Capital and Marc Ganzi, former CEO and founder of Global Tower Partners.&nbsp; Its main business focus is making returns by providing a diversified range of investment services to its clients.&nbsp;</span><a href=\\"http://www.digitalbridgellc.com/\\"><span style=\\"font-family: &quot;Arial&quot;,&quot;sans-serif&quot;; font-size: 10.5pt;\\"><u><font color=\\"#0563c1\\">www.digitalbridgellc.com</font></u></span></a></p>\\r\\n\\r\\n<p style=\\"margin: 0in 0in 17.15pt;\\"><span style=\\"color: rgb(103, 103, 103); font-family: &quot;Arial&quot;,&quot;sans-serif&quot;; font-size: 10.5pt;\\">The Jordan Company was founded in 1982 and is a leading middle-market private equity firm with more than $8 billion of committed capital assets under management and a 30-year track record of investing in and contributing to the growth of many businesses across a wide range of industries. The Jordan Company is headquartered in New York with offices in Chicago and Shanghai as well. </span><a href=\\"http://www.thejordancompany.com/\\"><span style=\\"font-family: &quot;Arial&quot;,&quot;sans-serif&quot;; font-size: 10.5pt;\\"><u><font color=\\"#0563c1\\">www.thejordancompany.com</font></u></span></a></p>\\r\\n\\r\\n<p style=\\"margin: 0in 0in 17.15pt;\\"><span style=\\"color: rgb(103, 103, 103); font-family: &quot;Arial&quot;,&quot;sans-serif&quot;; font-size: 10.5pt;\\">The Edgewater Funds is a Chicago-based private equity firm with $1.4 billion in committed capital. Edgewater focuses on funding high quality middle market companies where they can add substantial value through capital investment, experience and their broad network. </span><a href=\\"http://www.edgewaterfunds.com/\\"><span style=\\"font-family: &quot;Arial&quot;,&quot;sans-serif&quot;; font-size: 10.5pt;\\"><u><font color=\\"#0563c1\\">www.edgewaterfunds.com</font></u></span></a></p>\\r\\n\\r\\n<p style=\\"margin: 0in 0in 17.15pt;\\"><span style=\\"color: rgb(103, 103, 103); font-family: &quot;Arial&quot;,&quot;sans-serif&quot;; font-size: 10.5pt;\\">The founders and senior managers of Vertical Bridge are the principal former senior officers of Global Tower Partners (GTP), the largest private operator of wireless communication infrastructure in North America prior to its October 2013 sale to American Tower. VB’s senior management team has over 100 years of collective experience in the tower and related sectors.</span></p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p style=\\"margin: 0in 0in 17.15pt;\\"><span style=\\"color: rgb(103, 103, 103); font-family: &quot;Arial&quot;,&quot;sans-serif&quot;; font-size: 10.5pt;\\">Investors in Vertical Bridge include Digital Bridge Holdings, LLC, The Jordan Company, The Edgewater Funds, Goldman, Sachs &amp; Co, Stonepeak Infrastructure Partners and the Vertical Bridge Management Team. </span></p>\\n<p style=\\"margin: 0in 0in 17.15pt;\\"><span style=\\"color: rgb(103, 103, 103); font-family: &quot;Arial&quot;,&quot;sans-serif&quot;; font-size: 10.5pt;\\">Digital Bridge was formed in 2013 through a partnership between Ben Jenkins of Dering Capital and Marc Ganzi, former CEO and founder of Global Tower Partners.  Its main business focus is making returns by providing a diversified range of investment services to its clients. </span><a href=\\"http://www.digitalbridgellc.com/\\"><span style=\\"font-family: &quot;Arial&quot;,&quot;sans-serif&quot;; font-size: 10.5pt;\\"><u><font color=\\"#0563c1\\">www.digitalbridgellc.com</font></u></span></a></p>\\n<p style=\\"margin: 0in 0in 17.15pt;\\"><span style=\\"color: rgb(103, 103, 103); font-family: &quot;Arial&quot;,&quot;sans-serif&quot;; font-size: 10.5pt;\\">The Jordan Company was founded in 1982 and is a leading middle-market private equity firm with more than $8 billion of committed capital assets under management and a 30-year track record of investing in and contributing to the growth of many businesses across a wide range of industries. The Jordan Company is headquartered in New York with offices in Chicago and Shanghai as well. </span><a href=\\"http://www.thejordancompany.com/\\"><span style=\\"font-family: &quot;Arial&quot;,&quot;sans-serif&quot;; font-size: 10.5pt;\\"><u><font color=\\"#0563c1\\">www.thejordancompany.com</font></u></span></a></p>\\n<p style=\\"margin: 0in 0in 17.15pt;\\"><span style=\\"color: rgb(103, 103, 103); font-family: &quot;Arial&quot;,&quot;sans-serif&quot;; font-size: 10.5pt;\\">The Edgewater Funds is a Chicago-based private equity firm with $1.4 billion in committed capital. Edgewater focuses on funding high quality middle market companies where they can add substantial value through capital investment, experience and their broad network. </span><a href=\\"http://www.edgewaterfunds.com/\\"><span style=\\"font-family: &quot;Arial&quot;,&quot;sans-serif&quot;; font-size: 10.5pt;\\"><u><font color=\\"#0563c1\\">www.edgewaterfunds.com</font></u></span></a></p>\\n<p style=\\"margin: 0in 0in 17.15pt;\\"><span style=\\"color: rgb(103, 103, 103); font-family: &quot;Arial&quot;,&quot;sans-serif&quot;; font-size: 10.5pt;\\">The founders and senior managers of Vertical Bridge are the principal former senior officers of Global Tower Partners (GTP), the largest private operator of wireless communication infrastructure in North America prior to its October 2013 sale to American Tower. VB’s senior management team has over 100 years of collective experience in the tower and related sectors.</span></p>\\n ",
            \'safe_summary\' => \'  \',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'field_cta_button\' => array(),
      \'field_cta_content\' => array(),
      \'field_internal_header\' => array(),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'metatags\' => array(
        \'und\' => array(
          \'title\' => array(
            \'value\' => \'Investors | Vertical Bridge\',
          ),
          \'description\' => array(
            \'value\' => \'\',
          ),
        ),
      ),
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Investors-old\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'page\',
      \'uid\' => \'227\',
      \'uuid\' => \'a7e9f62c-8cf4-4d41-96d3-f41859e25650\',
      \'vid\' => NULL,
      \'vuuid\' => \'58531586-59e4-4076-8d62-237bf82d9887\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Building on the successes of the past twenty years……</p>\\r\\n\\r\\n<p>Vertical Bridge has an unparalleled focus on collocating telecom infrastructure on commercial real estate. We market all types of properties including office buildings, hotels, and industrial / flex campuses, self-storage facilities, and retail shopping centers for wireless collocation. Over the past twenty years we have successfully created hundreds of millions of dollars in recurring revenue for our real estate clients by leasing unused or un-leasable portions of their properties. We represent a wide range of real estate clients - from some of the largest real estate owners in the US to owners of individual properties. We successfully lease buildings of all sizes – in every region of the US.</p>\\r\\n\\r\\n<p>At no obligation, our professionals will create a Competitive Market Analysis and prepare a full proposal for your assets that will best describe how we can create value for your portfolio.</p>\\r\\n\\r\\n<p>Please email <strong><a href=\\"mailto:jmcculloch@verticalbridge.com\\">Jim McCulloch</a></strong> for more information. A small investment in your time exploring this opportunity with VB could yield significant long-term value for your properties.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p>Building on the successes of the past twenty years……</p>\\n<p>Vertical Bridge has an unparalleled focus on collocating telecom infrastructure on commercial real estate. We market all types of properties including office buildings, hotels, and industrial / flex campuses, self-storage facilities, and retail shopping centers for wireless collocation. Over the past twenty years we have successfully created hundreds of millions of dollars in recurring revenue for our real estate clients by leasing unused or un-leasable portions of their properties. We represent a wide range of real estate clients - from some of the largest real estate owners in the US to owners of individual properties. We successfully lease buildings of all sizes – in every region of the US.</p>\\n<p>At no obligation, our professionals will create a Competitive Market Analysis and prepare a full proposal for your assets that will best describe how we can create value for your portfolio.</p>\\n<p>Please email <strong><a href=\\"mailto:jmcculloch@verticalbridge.com\\">Jim McCulloch</a></strong> for more information. A small investment in your time exploring this opportunity with VB could yield significant long-term value for your properties.</p>\\n ",
            \'safe_summary\' => \'  \',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'field_cta_button\' => array(),
      \'field_cta_content\' => array(),
      \'field_internal_header\' => array(),
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'metatags\' => array(
        \'en\' => array(
          \'title\' => array(
            \'value\' => \'Building Owners - Cell Tower Lease | Vertical Bridge\',
          ),
          \'description\' => array(
            \'value\' => \'Vertical Bridge has created millions of dollars in recurring revenue over the past twenty years for building owners by leasing unused or un-leasable portions of their properties.\',
          ),
        ),
      ),
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(
        array(
          \'pnid\' => \'6\',
          \'menu_name\' => \'navigation\',
          \'mlid\' => \'641\',
          \'plid\' => \'639\',
          \'link_path\' => \'node/31\',
          \'router_path\' => \'node/%\',
          \'link_title\' => \'Building Owners\',
          \'options\' => array(
            \'attributes\' => array(
              \'title\' => \'\',
            ),
          ),
          \'module\' => \'nodehierarchy\',
          \'hidden\' => \'1\',
          \'external\' => \'0\',
          \'has_children\' => \'0\',
          \'expanded\' => \'0\',
          \'weight\' => \'1\',
          \'depth\' => \'2\',
          \'customized\' => \'0\',
          \'p1\' => \'639\',
          \'p2\' => \'641\',
          \'p3\' => \'0\',
          \'p4\' => \'0\',
          \'p5\' => \'0\',
          \'p6\' => \'0\',
          \'p7\' => \'0\',
          \'p8\' => \'0\',
          \'p9\' => \'0\',
          \'updated\' => \'0\',
          \'language\' => \'und\',
          \'i18n_tsid\' => \'0\',
          \'enabled\' => FALSE,
          \'nid\' => \'31\',
        ),
      ),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Building Owners\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'page\',
      \'uid\' => \'227\',
      \'uuid\' => \'a9b0d37e-2f94-42eb-b769-93448d61622d\',
      \'vid\' => NULL,
      \'vuuid\' => \'93055e2c-db66-4312-9fb6-e57cd43d53b0\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><img align=\\"left\\" alt=\\"\\" border=\\"2\\" class=\\"media-image attr__typeof__foaf:Image img__fid__118 img__view_mode__media_original attr__format__media_original\\" height=\\"220\\" src=\\"http://stage.verticalbridge.com/sites/default/files/B%20Blazek_1.jpg\\" style=\\"margin-right:5px;padding:5px;\\" typeof=\\"foaf:Image\\" width=\\"160\\" /></p>\\r\\n\\r\\n<p>Beth Blazek is the Controller of Vertical Bridge and has over 20 years of experience in accounting and 12 years of experience working in the wireless telecommunications industry. Blazek is responsible for managing the finance department within Vertical Bridge including the company\'s financial statements, general ledger, cost accounting, payroll, accounts payable, accounts receivable, tax compliance, and various special analyses.&nbsp;<br />\\r\\n<br />\\r\\nPrior to joining Vertical Bridge, Blazek was Senior Accounting Manager for Tyco’s North America Installation &amp; Services division where she was responsible for general and administrative accounting. Previously, she was the Senior Audit Manager of Partnership Accounting for AT&amp;T Mobility.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p><img align=\\"left\\" alt=\\"\\" border=\\"2\\" class=\\"media-image attr__typeof__foaf:Image img__fid__118 img__view_mode__media_original attr__format__media_original\\" height=\\"220\\" src=\\"http://stage.verticalbridge.com/sites/default/files/B%20Blazek_1.jpg\\" style=\\"margin-right:5px;padding:5px;\\" typeof=\\"foaf:Image\\" width=\\"160\\" /></p>\\n<p>Beth Blazek is the Controller of Vertical Bridge and has over 20 years of experience in accounting and 12 years of experience working in the wireless telecommunications industry. Blazek is responsible for managing the finance department within Vertical Bridge including the company\'s financial statements, general ledger, cost accounting, payroll, accounts payable, accounts receivable, tax compliance, and various special analyses. </p>\\n<p>Prior to joining Vertical Bridge, Blazek was Senior Accounting Manager for Tyco’s North America Installation &amp; Services division where she was responsible for general and administrative accounting. Previously, she was the Senior Audit Manager of Partnership Accounting for AT&amp;T Mobility.</p>\\n ",
            \'safe_summary\' => \'  \',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'field_internal_header\' => array(),
      \'field_linkedin\' => array(),
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Beth Blazek\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'team_member\',
      \'uid\' => \'227\',
      \'uuid\' => \'aa3cc4e7-900e-44b4-b997-705523ee8b96\',
      \'vid\' => NULL,
      \'vuuid\' => \'306ebe43-dd54-43c2-8bef-51c2d2a7cd6f\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Vertical Bridge Acquires Portfolio of Broadcast Towers from Alpha Media</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p>Vertical Bridge Acquires Portfolio of Broadcast Towers from Alpha Media</p>\\n ",
            \'safe_summary\' => \'  \',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'0\',
      \'sticky\' => \'0\',
      \'title\' => \'Vertical Bridge Acquires Portfolio of Broadcast Towers from Alpha Media\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'news_marquee\',
      \'uid\' => \'227\',
      \'uuid\' => \'acb4417f-d00d-4bde-8097-d9d7ea5a971b\',
      \'vid\' => NULL,
      \'vuuid\' => \'ed4640cb-f433-4715-ac26-1a7e3aa98e50\',
    ),
  (object) array(
      \'body\' => array(),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'field_cta_button\' => array(),
      \'field_cta_content\' => array(),
      \'field_internal_header\' => array(),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'metatags\' => array(
        \'und\' => array(
          \'title\' => array(
            \'value\' => \'Vertical Bridge | Cell Tower Lease & Wireless Telecom Site Management\',
          ),
          \'description\' => array(
            \'value\' => \'Vertical Bridge is a cell tower leasing company in the US. Vertical Bridge owns, manages or master leases wireless telecom sites and leases space on towers to telecommunications carriers.\',
          ),
        ),
      ),
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Home\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'page\',
      \'uid\' => \'227\',
      \'uuid\' => \'adade5ba-2124-48d9-a305-13f52ee0f60d\',
      \'vid\' => NULL,
      \'vuuid\' => \'cfd0b42e-c601-4f2b-b7fe-b70161aba760\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><img align=\\"left\\" alt=\\"\\" border=\\"2\\" class=\\"media-image attr__typeof__foaf:Image img__fid__114 img__view_mode__media_original attr__format__media_original\\" height=\\"240\\" src=\\"http://stage.verticalbridge.com/sites/default/files/DG_1.jpg\\" style=\\"margin-right:5px;padding:5px;\\" typeof=\\"foaf:Image\\" width=\\"160\\" /></p>\\r\\n\\r\\n<p>Daniela Giannoccoli is the Director of Financial Planning and Analysis for Vertical Bridge where she is responsible for Vertical Bridge’s planning and forecasting, and provides crucial financial perspectives to help drive the company forward. Her experience includes more than 15 years of experience in Financial Planning &amp; Analysis as well as 5 years of experience in the wireless telecommunication industry.<br />\\r\\n<br />\\r\\nPrior to joining Vertical Bridge, Giannoccoli was the Manager of Financial Planning and Analysis at Global Tower Partners where she was responsible for overseeing the budget as well as department financial reviews and capital expenditure reporting. Previously, she was the Vice President of Financial Analysis and Reporting for Maritime Telecommunication Network where she oversaw all finance and treasury functions.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p><img align=\\"left\\" alt=\\"\\" border=\\"2\\" class=\\"media-image attr__typeof__foaf:Image img__fid__114 img__view_mode__media_original attr__format__media_original\\" height=\\"240\\" src=\\"http://stage.verticalbridge.com/sites/default/files/DG_1.jpg\\" style=\\"margin-right:5px;padding:5px;\\" typeof=\\"foaf:Image\\" width=\\"160\\" /></p>\\n<p>Daniela Giannoccoli is the Director of Financial Planning and Analysis for Vertical Bridge where she is responsible for Vertical Bridge’s planning and forecasting, and provides crucial financial perspectives to help drive the company forward. Her experience includes more than 15 years of experience in Financial Planning &amp; Analysis as well as 5 years of experience in the wireless telecommunication industry.</p>\\n<p>Prior to joining Vertical Bridge, Giannoccoli was the Manager of Financial Planning and Analysis at Global Tower Partners where she was responsible for overseeing the budget as well as department financial reviews and capital expenditure reporting. Previously, she was the Vice President of Financial Analysis and Reporting for Maritime Telecommunication Network where she oversaw all finance and treasury functions.</p>\\n ",
            \'safe_summary\' => \'  \',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'field_internal_header\' => array(),
      \'field_linkedin\' => array(),
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Daniela Giannoccoli\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'team_member\',
      \'uid\' => \'227\',
      \'uuid\' => \'ae75cc81-f63e-463a-b297-66154dd8e1eb\',
      \'vid\' => NULL,
      \'vuuid\' => \'be61ff14-305b-439d-bfc5-ac57140a103b\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><img alt=\\"\\" class=\\"media-image attr__typeof__foaf:Image img__fid__115 img__view_mode__media_original attr__format__media_original\\" src=\\"/sites/default/files/Mark-Sanfilippo_0.jpg\\" style=\\"margin-right: 5px; padding: 5px; float: left; width: 160px; height: 240px;\\" /> Mark Sanfilippo is the Vice President of Information Technology of Vertical Bridge. He is responsible for the strategic integration of enterprise-wide technology as well as creating and executing automated business processes, collaborative portal and business intelligence solutions.<br />\\r\\n<br />\\r\\nPrior to joining Vertical Bridge, Sanfilippo was the Vice President of IT Solutions at FirstService Residential, the leading residential property management company in North America. While at FirstService, he was responsible for the implementation of technology programs across the country.<br />\\r\\n<br />\\r\\nSanfilippo received his Bachelor of Information Technology from American InterContinental University.&nbsp; He also studied Computer Science and Psychology at Florida International University.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p><img alt=\\"\\" class=\\"media-image attr__typeof__foaf:Image img__fid__115 img__view_mode__media_original attr__format__media_original\\" src=\\"/sites/default/files/Mark-Sanfilippo_0.jpg\\" style=\\"margin-right: 5px; padding: 5px; float: left; width: 160px; height: 240px;\\" /> Mark Sanfilippo is the Vice President of Information Technology of Vertical Bridge. He is responsible for the strategic integration of enterprise-wide technology as well as creating and executing automated business processes, collaborative portal and business intelligence solutions.</p>\\n<p>Prior to joining Vertical Bridge, Sanfilippo was the Vice President of IT Solutions at FirstService Residential, the leading residential property management company in North America. While at FirstService, he was responsible for the implementation of technology programs across the country.</p>\\n<p>Sanfilippo received his Bachelor of Information Technology from American InterContinental University.  He also studied Computer Science and Psychology at Florida International University.</p>\\n ",
            \'safe_summary\' => \'  \',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'field_internal_header\' => array(),
      \'field_linkedin\' => array(),
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Mark Sanfilippo\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'team_member\',
      \'uid\' => \'227\',
      \'uuid\' => \'aeb9a20d-251a-4749-963a-3b1761fc6cec\',
      \'vid\' => NULL,
      \'vuuid\' => \'7d4cae09-7b5c-43d7-a4c7-bf80424d8d51\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><strong>CHICAGO, (December 4, 2014)</strong> — United States Cellular Corporation (NYSE: USM) today announced that it has entered into a definitive agreement with Vertical Bridge Holdings, LLC to sell 595 towers for approximately $159 million. The transaction is expected to close in the first quarter of 2015.</p>\\r\\n\\r\\n<p>“We are very pleased to announce this transaction,” said Kenneth R. Meyers, U.S. Cellular president and CEO. “We will use the proceeds from the sale of these non-strategic assets to invest in other long-term investments that position U.S. Cellular for future growth opportunities.”</p>\\r\\n\\r\\n<p>“Vertical Bridge is excited to acquire this portfolio of core towers in large metropolitan markets,” said Alexander L. Gellman, CEO of Vertical Bridge. “Many of these sites are in locations that would be very difficult to replace. We are also happy to work again with a quality counterparty like U.S. Cellular.”</p>\\r\\n\\r\\n<p>Wells Fargo Securities, LLC and TD Securities (USA) LLC served as financial advisors to U.S. Cellular on this transaction.</p>\\r\\n\\r\\n<p><strong>About U.S. Cellular</strong><br />\\r\\nUnited States Cellular Corporation provides a comprehensive range of wireless products and services, excellent customer support, and a high-quality network to 4.7 million customers in 23 states. The Chicago-based company had 6,500 full- and part-time associates as of Sept. 30, 2014. At the end of the third quarter of 2014, Telephone and Data Systems, Inc. owned 84 percent of U.S. Cellular. For more information about U.S. Cellular, visit uscellular.com.</p>\\r\\n\\r\\n<p>Visit investors.uscellular.com for comprehensive financial information, including earnings releases, quarterly and annual filings, shareholder information, and more. U.S. Cellular: www.uscellular.com</p>\\r\\n\\r\\n<p><strong>About Vertical Bridge Holdings, LLC </strong><br />\\r\\nVertical Bridge Holdings is a privately-owned real estate investment trust focused on the ownership of wireless communication towers in the U.S. The company owns, operates and manages telecommunications towers, rooftops, and site locations across the country. Vertical Bridge was founded in 2014 by Digital Bridge Holdings, LLC as well as certain key executives from Global Tower Partners and is headquartered in Boca Raton, Florida. For more information, please visit www.verticalbridge.com or call Traci Clancy at 561-948-6367.</p>\\r\\n\\r\\n<p><strong>Media Contact </strong><br />\\r\\nJane McCahon, Vice President, Corporate Relations and Corporate Secretary<br />\\r\\n312-592-5379<br />\\r\\njane.mccahon@tdsinc.com</p>\\r\\n\\r\\n<p>Julie Mathews, Investor Relations Manager<br />\\r\\n312-592-5341<br />\\r\\njulie.mathews@tdsinc.com</p>\\r\\n\\r\\n<p><strong>Source </strong><br />\\r\\nU.S. Cellular</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p><strong>CHICAGO, (December 4, 2014)</strong> — United States Cellular Corporation (NYSE: USM) today announced that it has entered into a definitive agreement with Vertical Bridge Holdings, LLC to sell 595 towers for approximately $159 million. The transaction is expected to close in the first quarter of 2015.</p>\\n<p>“We are very pleased to announce this transaction,” said Kenneth R. Meyers, U.S. Cellular president and CEO. “We will use the proceeds from the sale of these non-strategic assets to invest in other long-term investments that position U.S. Cellular for future growth opportunities.”</p>\\n<p>“Vertical Bridge is excited to acquire this portfolio of core towers in large metropolitan markets,” said Alexander L. Gellman, CEO of Vertical Bridge. “Many of these sites are in locations that would be very difficult to replace. We are also happy to work again with a quality counterparty like U.S. Cellular.”</p>\\n<p>Wells Fargo Securities, LLC and TD Securities (USA) LLC served as financial advisors to U.S. Cellular on this transaction.</p>\\n<p><strong>About U.S. Cellular</strong><br />\\nUnited States Cellular Corporation provides a comprehensive range of wireless products and services, excellent customer support, and a high-quality network to 4.7 million customers in 23 states. The Chicago-based company had 6,500 full- and part-time associates as of Sept. 30, 2014. At the end of the third quarter of 2014, Telephone and Data Systems, Inc. owned 84 percent of U.S. Cellular. For more information about U.S. Cellular, visit uscellular.com.</p>\\n<p>Visit investors.uscellular.com for comprehensive financial information, including earnings releases, quarterly and annual filings, shareholder information, and more. U.S. Cellular: <a href=\\"http://www.uscellular.com\\">www.uscellular.com</a></p>\\n<p><strong>About Vertical Bridge Holdings, LLC </strong><br />\\nVertical Bridge Holdings is a privately-owned real estate investment trust focused on the ownership of wireless communication towers in the U.S. The company owns, operates and manages telecommunications towers, rooftops, and site locations across the country. Vertical Bridge was founded in 2014 by Digital Bridge Holdings, LLC as well as certain key executives from Global Tower Partners and is headquartered in Boca Raton, Florida. For more information, please visit <a href=\\"http://www.verticalbridge.com\\">www.verticalbridge.com</a> or call Traci Clancy at 561-948-6367.</p>\\n<p><strong>Media Contact </strong><br />\\nJane McCahon, Vice President, Corporate Relations and Corporate Secretary<br />\\n312-592-5379<br /><a href=\\"mailto:jane.mccahon@tdsinc.com\\">jane.mccahon@tdsinc.com</a></p>\\n<p>Julie Mathews, Investor Relations Manager<br />\\n312-592-5341<br /><a href=\\"mailto:julie.mathews@tdsinc.com\\">julie.mathews@tdsinc.com</a></p>\\n<p><strong>Source </strong><br />\\nU.S. Cellular</p>\\n ",
            \'safe_summary\' => \'  \',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;}\',
      \'field_date\' => array(),
      \'field_external_link\' => array(),
      \'field_internal_header\' => array(),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'0\',
      \'sticky\' => \'0\',
      \'title\' => \'U.S. Cellular Announces Sale of Towers in Divested Markets\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'press_release\',
      \'uid\' => \'227\',
      \'uuid\' => \'affcd669-2a40-4f5c-8129-bf1310581d75\',
      \'vid\' => NULL,
      \'vuuid\' => \'f44d149a-47e2-4af0-9321-1e9196651816\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Our senior leadership team brings over 100 years of experience in the tower and related sectors to Vertical Bridge. Our founders and managers were the principal senior officers of Global Tower Partners (GTP), which they grew to become the largest private owner and manager of wireless communication infrastructure in North America prior to its sale for $4.8 billion in October 2013.&nbsp;</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p>Our senior leadership team brings over 100 years of experience in the tower and related sectors to Vertical Bridge. Our founders and managers were the principal senior officers of Global Tower Partners (GTP), which they grew to become the largest private owner and manager of wireless communication infrastructure in North America prior to its sale for $4.8 billion in October 2013. </p>\\n ",
            \'safe_summary\' => \'  \',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'field_cta_button\' => array(),
      \'field_cta_content\' => array(),
      \'field_internal_header\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'213\',
            \'uid\' => \'227\',
            \'filename\' => \'Vertical-Bridge_Senior-Management-with overlay.jpg\',
            \'uri\' => \'public://Vertical-Bridge_Senior-Management-with overlay.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'199503\',
            \'status\' => \'1\',
            \'timestamp\' => \'1463066366\',
            \'type\' => \'image\',
            \'uuid\' => \'1c019ad0-4b19-4a94-82e4-257d2f3a1235\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'1024\',
              \'height\' => \'242\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'1024\',
            \'height\' => \'242\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'metatags\' => array(
        \'und\' => array(
          \'title\' => array(
            \'value\' => \'Senior Management Team | Vertical Bridge\',
          ),
          \'description\' => array(
            \'value\' => \'\',
          ),
        ),
      ),
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(
        array(
          \'pnid\' => NULL,
          \'menu_name\' => \'navigation\',
          \'mlid\' => \'651\',
          \'plid\' => \'0\',
          \'link_path\' => \'node/2\',
          \'router_path\' => \'node/%\',
          \'link_title\' => \'Senior Management\',
          \'options\' => array(
            \'attributes\' => array(
              \'title\' => \'\',
            ),
          ),
          \'module\' => \'nodehierarchy\',
          \'hidden\' => \'1\',
          \'external\' => \'0\',
          \'has_children\' => \'0\',
          \'expanded\' => \'0\',
          \'weight\' => \'3\',
          \'depth\' => \'1\',
          \'customized\' => \'0\',
          \'p1\' => \'651\',
          \'p2\' => \'0\',
          \'p3\' => \'0\',
          \'p4\' => \'0\',
          \'p5\' => \'0\',
          \'p6\' => \'0\',
          \'p7\' => \'0\',
          \'p8\' => \'0\',
          \'p9\' => \'0\',
          \'updated\' => \'0\',
          \'language\' => \'und\',
          \'i18n_tsid\' => \'0\',
          \'enabled\' => FALSE,
          \'nid\' => \'2\',
        ),
      ),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Senior Management\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'page\',
      \'uid\' => \'227\',
      \'uuid\' => \'b06529f8-d988-4141-8e31-2e2c68702d7f\',
      \'vid\' => NULL,
      \'vuuid\' => \'490b1c6c-6736-4afb-8ff5-547cc28d2b6d\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'\',
            \'summary\' => "<p>RCR Wireless, By Jarad Matula</p>\\r\\n\\r\\n<p>Vertical Bridge and one of its subsidiaries announced this week it will be entering into an agreement to purchase 43 towers from Townsquare Media. The towers are set to be purchased for $22.8 million in cash, subject to closing adjustments.</p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => \'  \',
            \'safe_summary\' => " <p>RCR Wireless, By Jarad Matula</p>\\n<p>Vertical Bridge and one of its subsidiaries announced this week it will be entering into an agreement to purchase 43 towers from Townsquare Media. The towers are set to be purchased for $22.8 million in cash, subject to closing adjustments.</p>\\n ",
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'field_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015-08-07 16:15:00\',
            \'timezone\' => \'America/New_York\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_external_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://www.rcrwireless.com/20150807/cell-tower-news/cell-tower-news-vertical-bridge-increases-towers-rebel-flag-flies-tag8\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_internal_header\' => array(),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Cell Tower News: Vertical Bridge increases tower portfolio\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'press_release\',
      \'uid\' => \'227\',
      \'uuid\' => \'b2aa2769-03fb-452b-bb94-b48f2731c3aa\',
      \'vid\' => NULL,
      \'vuuid\' => \'2937408c-66eb-4e88-be4a-b8fb442807b3\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>VB\'s expedited, efficient and simple approach is best illustrated in our collocation process. We deliver and we do it fast. That is why telecommunications customers come back again and again. We value our long term relationships with our telecommunications tenants.</p>\\r\\n\\r\\n<ul>\\r\\n\\t<li>VB does not charge an application fee</li>\\r\\n\\t<li>VB turns draft leases within 48 hours</li>\\r\\n\\t<li>VB approves plans within one week</li>\\r\\n\\t<li>VB delivers hundreds of tower and rooftop leases every year</li>\\r\\n</ul>\\r\\n\\r\\n<p>Please click <a href=\\"/sites/default/files/VB%20collocation-application-2-2014_0.pdf\\" target=\\"_blank\\"><strong>here</strong></a>&nbsp;to download a PDF version of our <strong><a href=\\"/sites/default/files/VB%20collocation-application-2-2014_0.pdf\\" target=\\"_blank\\">collocation application</a>.</strong>&nbsp; Please click <strong><a href=\\"http://www.verticalbridge.com/sites/default/files/VB-collocation-application-2-2014.docx\\" target=\\"_blank\\">here </a></strong>to download a Word version of our <a href=\\"http://www.verticalbridge.com/sites/default/files/VB-collocation-application-2-2014.docx\\" target=\\"_blank\\"><strong>collocation application</strong></a>.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p>VB\'s expedited, efficient and simple approach is best illustrated in our collocation process. We deliver and we do it fast. That is why telecommunications customers come back again and again. We value our long term relationships with our telecommunications tenants.</p>\\n<ul><li>VB does not charge an application fee</li>\\n<li>VB turns draft leases within 48 hours</li>\\n<li>VB approves plans within one week</li>\\n<li>VB delivers hundreds of tower and rooftop leases every year</li>\\n</ul><p>Please click <a href=\\"/sites/default/files/VB%20collocation-application-2-2014_0.pdf\\" target=\\"_blank\\"><strong>here</strong></a> to download a PDF version of our <strong><a href=\\"/sites/default/files/VB%20collocation-application-2-2014_0.pdf\\" target=\\"_blank\\">collocation application</a>.</strong>  Please click <strong><a href=\\"http://www.verticalbridge.com/sites/default/files/VB-collocation-application-2-2014.docx\\" target=\\"_blank\\">here </a></strong>to download a Word version of our <a href=\\"http://www.verticalbridge.com/sites/default/files/VB-collocation-application-2-2014.docx\\" target=\\"_blank\\"><strong>collocation application</strong></a>.</p>\\n ",
            \'safe_summary\' => \'  \',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'field_cta_button\' => array(),
      \'field_cta_content\' => array(),
      \'field_internal_header\' => array(),
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'metatags\' => array(
        \'en\' => array(
          \'title\' => array(
            \'value\' => \'Cell Tower Colocation Application | Vertical Bridge\',
          ),
          \'description\' => array(
            \'value\' => "VB\'s expedited, efficient and simple approach is best illustrated in our collocation process. We deliver and we do it fast. That is why telecommunications customers come back again and again. We value our long term relationships with our telecommunications tenants.",
          ),
        ),
      ),
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(
        array(
          \'pnid\' => \'5\',
          \'menu_name\' => \'navigation\',
          \'mlid\' => \'636\',
          \'plid\' => \'635\',
          \'link_path\' => \'node/27\',
          \'router_path\' => \'node/%\',
          \'link_title\' => \'Collocation Application\',
          \'options\' => array(
            \'attributes\' => array(
              \'title\' => \'\',
            ),
          ),
          \'module\' => \'nodehierarchy\',
          \'hidden\' => \'1\',
          \'external\' => \'0\',
          \'has_children\' => \'0\',
          \'expanded\' => \'0\',
          \'weight\' => \'0\',
          \'depth\' => \'2\',
          \'customized\' => \'0\',
          \'p1\' => \'635\',
          \'p2\' => \'636\',
          \'p3\' => \'0\',
          \'p4\' => \'0\',
          \'p5\' => \'0\',
          \'p6\' => \'0\',
          \'p7\' => \'0\',
          \'p8\' => \'0\',
          \'p9\' => \'0\',
          \'updated\' => \'0\',
          \'language\' => \'und\',
          \'i18n_tsid\' => \'0\',
          \'enabled\' => FALSE,
          \'nid\' => \'27\',
        ),
      ),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Collocation Application\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'page\',
      \'uid\' => \'227\',
      \'uuid\' => \'b64fc8f9-41df-4a00-a544-03b146e1687f\',
      \'vid\' => NULL,
      \'vuuid\' => \'702b996a-837a-400c-9d5d-7bddb66c2382\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'\',
            \'summary\' => "<p><i>Alaska Journal of Commerce,&nbsp;</i>By DJ Summers</p>\\r\\n\\r\\n<p>Florida-based Vertical Bridge is the largest private owner and manager of communication towers and locations in the U.S, with 45,000 tower, rooftop, billboard, utility attachment and other site locations. GCI’s sale now makes Vertical Bridge the largest tower owner in Alaska, with approximately 300 wireless/broadcast sites.</p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => \'  \',
            \'safe_summary\' => " <p><i>Alaska Journal of Commerce, </i>By DJ Summers</p>\\n<p>Florida-based Vertical Bridge is the largest private owner and manager of communication towers and locations in the U.S, with 45,000 tower, rooftop, billboard, utility attachment and other site locations. GCI’s sale now makes Vertical Bridge the largest tower owner in Alaska, with approximately 300 wireless/broadcast sites.</p>\\n ",
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'field_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2016-05-11 14:45:00\',
            \'timezone\' => \'America/New_York\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_external_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://www.alaskajournal.com/2016-05-11/gci-posts-flat-first-quarter-plans-bolstering-broadband#.Vz3e0_krKUm\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_internal_header\' => array(),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'GCI posts flat first quarter, plans for bolstering broadband \',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'press_release\',
      \'uid\' => \'227\',
      \'uuid\' => \'b673509d-212a-4912-9b58-b0bb3e553d30\',
      \'vid\' => NULL,
      \'vuuid\' => \'73cb9aa4-f524-466b-8229-11bf9a60aa13\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><img align=\\"left\\" alt=\\"\\" border=\\"2\\" class=\\"media-image attr__typeof__foaf:Image img__fid__84 img__view_mode__media_large attr__format__media_large\\" height=\\"252\\" src=\\"http://verticalbridge.com/sites/default/files/styles/large/public/Bert%20Lopez%20180%20pixels_4.jpg?itok=IS_D_Q0H\\" style=\\"margin-right:5px;padding:5px;\\" typeof=\\"foaf:Image\\" width=\\"180\\" /></p>\\r\\n\\r\\n<p>Bert Lopez is the Chief Financial Officer of Vertical Bridge. Lopez, a Certified Public Accountant, is responsible for the finance and accounting functions as well as corporate tax, treasury, investor relations, strategy and business development.<br />\\r\\n<br />\\r\\nPrior to joining Vertical Bridge, Lopez was Chief Financial Officer at a private equity-funded technology products distributor and supply chain company, a publicly traded multi-family REIT, and at several publicly traded banks.<br />\\r\\n<br />\\r\\nLopez was also a Managing Director in the PricewaterhouseCoopers Global Risk Management Services advisory group and began his career in public accounting with KPMG and Ernst &amp; Young.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p><img align=\\"left\\" alt=\\"\\" border=\\"2\\" class=\\"media-image attr__typeof__foaf:Image img__fid__84 img__view_mode__media_large attr__format__media_large\\" height=\\"252\\" src=\\"http://verticalbridge.com/sites/default/files/styles/large/public/Bert%20Lopez%20180%20pixels_4.jpg?itok=IS_D_Q0H\\" style=\\"margin-right:5px;padding:5px;\\" typeof=\\"foaf:Image\\" width=\\"180\\" /></p>\\n<p>Bert Lopez is the Chief Financial Officer of Vertical Bridge. Lopez, a Certified Public Accountant, is responsible for the finance and accounting functions as well as corporate tax, treasury, investor relations, strategy and business development.</p>\\n<p>Prior to joining Vertical Bridge, Lopez was Chief Financial Officer at a private equity-funded technology products distributor and supply chain company, a publicly traded multi-family REIT, and at several publicly traded banks.</p>\\n<p>Lopez was also a Managing Director in the PricewaterhouseCoopers Global Risk Management Services advisory group and began his career in public accounting with KPMG and Ernst &amp; Young.</p>\\n ",
            \'safe_summary\' => \'  \',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;}\',
      \'field_internal_header\' => array(),
      \'field_linkedin\' => array(),
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Bert Lopez\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'team_member\',
      \'uid\' => \'227\',
      \'uuid\' => \'bd90cff1-57cd-49ac-8a4a-12bf22ad2364\',
      \'vid\' => NULL,
      \'vuuid\' => \'78e282be-9983-4b79-b78b-a8274ebd3900\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>We can utilize the extra space on your property to build telecommunication towers that can generate revenue while maintaining the aesthetic appearance of your property.</p>\\r\\n\\r\\n<p>If you own land and are interested in having a VB tower on your parcel, please email <a href=\\"mailto:jcrawford@verticalbridge.com?subject=Vertical%20Bridge%20Web%20Site%20Inquiry%20-%20Land%20Owners\\"><strong>Johnny Crawford&nbsp;</strong></a>for more information.</p>\\r\\n\\r\\n<p>If you are currently a landlord for a Vertical Bridge site and are interested in a long-term lease buy-out or selling your property, please email <a href=\\"mailto:rpaige@verticalbridge.com?subject=Vertical%20Bridge%20Web%20Site%20Inquiry%20-%20Land%20Owners\\"><strong>Robert Paige&nbsp;</strong></a>for more information.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p>We can utilize the extra space on your property to build telecommunication towers that can generate revenue while maintaining the aesthetic appearance of your property.</p>\\n<p>If you own land and are interested in having a VB tower on your parcel, please email <a href=\\"mailto:jcrawford@verticalbridge.com?subject=Vertical%20Bridge%20Web%20Site%20Inquiry%20-%20Land%20Owners\\"><strong>Johnny Crawford </strong></a>for more information.</p>\\n<p>If you are currently a landlord for a Vertical Bridge site and are interested in a long-term lease buy-out or selling your property, please email <a href=\\"mailto:rpaige@verticalbridge.com?subject=Vertical%20Bridge%20Web%20Site%20Inquiry%20-%20Land%20Owners\\"><strong>Robert Paige </strong></a>for more information.</p>\\n ",
            \'safe_summary\' => \'  \',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'field_cta_button\' => array(),
      \'field_cta_content\' => array(),
      \'field_internal_header\' => array(),
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'metatags\' => array(
        \'en\' => array(
          \'title\' => array(
            \'value\' => \'Land Owners - Cell Tower Lease | Vertical Bridge\',
          ),
          \'description\' => array(
            \'value\' => \'We can utilize the extra space on your property to build telecommunication towers that can generate revenue while maintaining the aesthetic appearance of your property. If you own land and are interested in having a tower on your property please contact us!\',
          ),
        ),
      ),
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(
        array(
          \'pnid\' => \'6\',
          \'menu_name\' => \'navigation\',
          \'mlid\' => \'642\',
          \'plid\' => \'639\',
          \'link_path\' => \'node/32\',
          \'router_path\' => \'node/%\',
          \'link_title\' => \'Land Owners\',
          \'options\' => array(
            \'attributes\' => array(
              \'title\' => \'\',
            ),
          ),
          \'module\' => \'nodehierarchy\',
          \'hidden\' => \'1\',
          \'external\' => \'0\',
          \'has_children\' => \'0\',
          \'expanded\' => \'0\',
          \'weight\' => \'2\',
          \'depth\' => \'2\',
          \'customized\' => \'0\',
          \'p1\' => \'639\',
          \'p2\' => \'642\',
          \'p3\' => \'0\',
          \'p4\' => \'0\',
          \'p5\' => \'0\',
          \'p6\' => \'0\',
          \'p7\' => \'0\',
          \'p8\' => \'0\',
          \'p9\' => \'0\',
          \'updated\' => \'0\',
          \'language\' => \'und\',
          \'i18n_tsid\' => \'0\',
          \'enabled\' => FALSE,
          \'nid\' => \'32\',
        ),
      ),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Land Owners\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'page\',
      \'uid\' => \'227\',
      \'uuid\' => \'be6e113b-6432-4c07-b201-b29b65f5cf20\',
      \'vid\' => NULL,
      \'vuuid\' => \'f947c508-1094-4a52-a22d-c8bef4171f6e\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><img alt=\\"\\" class=\\"media-image attr__typeof__foaf:Image img__fid__25 img__view_mode__media_large attr__format__media_large\\" src=\\"/sites/default/files/Alex%20Gellman.jpg\\" style=\\"padding: 5px; width: 180px; margin-right: 5px; border-width: 0px; border-style: solid; float: left;\\" typeof=\\"foaf:Image\\" /></p>\\r\\n\\r\\n<p>Alexander L. Gellman is the Chief Executive Officer of Vertical Bridge, the largest private owner and operator of wireless communications infrastructure in the US.<br />\\r\\n<br />\\r\\nPrior to co-founding Vertical Bridge, Mr. Gellman was President and COO of Global Tower Partners, the largest privately-held tower company in the United States. Mr. Gellman was instrumental in the sale of Global Tower Partners to American Tower Corporation in 2013 for over $4.8 billion. Previously, Mr. Gellman has been involved in a number of successful ventures, including Sonitrol Corporation, a leading provider of verified electronic security in North America where he served as President and COO until its sale to Stanley Works.<br />\\r\\n<br />\\r\\nMr. Gellman also co-founded Apex Site Management, the largest third-party manager of wireless and wireline communications sites in the U.S. Apex merged with SpectraSite Communications to create the largest telecommunications site portfolio in the United States. Following the merger, Mr. Gellman served as President and CEO of SpectraSite-Transco Communications, Ltd., a joint venture between SpectraSite and British Gas to develop tower sites in the United Kingdom.<br />\\r\\n<br />\\r\\nMr. Gellman previously served as Vice President - Development and a co-founder of Horizon Cellular Group, a start-up backed by McCaw Cellular to acquire, develop and operate rural cellular franchises in the eastern United States.<br />\\r\\n<br />\\r\\nMr. Gellman earned an MBA in Finance and Accounting from The Wharton School of the University of Pennsylvania, and a BS in Biology from Tufts University.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p><img alt=\\"\\" class=\\"media-image attr__typeof__foaf:Image img__fid__25 img__view_mode__media_large attr__format__media_large\\" src=\\"/sites/default/files/Alex%20Gellman.jpg\\" style=\\"padding: 5px; width: 180px; margin-right: 5px; border-width: 0px; border-style: solid; float: left;\\" typeof=\\"foaf:Image\\" /></p>\\n<p>Alexander L. Gellman is the Chief Executive Officer of Vertical Bridge, the largest private owner and operator of wireless communications infrastructure in the US.</p>\\n<p>Prior to co-founding Vertical Bridge, Mr. Gellman was President and COO of Global Tower Partners, the largest privately-held tower company in the United States. Mr. Gellman was instrumental in the sale of Global Tower Partners to American Tower Corporation in 2013 for over $4.8 billion. Previously, Mr. Gellman has been involved in a number of successful ventures, including Sonitrol Corporation, a leading provider of verified electronic security in North America where he served as President and COO until its sale to Stanley Works.</p>\\n<p>Mr. Gellman also co-founded Apex Site Management, the largest third-party manager of wireless and wireline communications sites in the U.S. Apex merged with SpectraSite Communications to create the largest telecommunications site portfolio in the United States. Following the merger, Mr. Gellman served as President and CEO of SpectraSite-Transco Communications, Ltd., a joint venture between SpectraSite and British Gas to develop tower sites in the United Kingdom.</p>\\n<p>Mr. Gellman previously served as Vice President - Development and a co-founder of Horizon Cellular Group, a start-up backed by McCaw Cellular to acquire, develop and operate rural cellular franchises in the eastern United States.</p>\\n<p>Mr. Gellman earned an MBA in Finance and Accounting from The Wharton School of the University of Pennsylvania, and a BS in Biology from Tufts University.</p>\\n ",
            \'safe_summary\' => \'  \',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'field_internal_header\' => array(),
      \'field_linkedin\' => array(),
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'metatags\' => array(
        \'en\' => array(
          \'title\' => array(
            \'value\' => \'Alex Gellman - CEO & Cofounder | Vertical Bridge\',
          ),
          \'description\' => array(
            \'value\' => \'Alex Gellman is the Chief Executive Officer and co-founder of Vertical Bridge. Prior to joining Vertical Bridge, Alex was the Chief Operations Officer and President of Global Tower Partners where he directed all leasing, build-to-suit, operations, human resources and information technology.\',
          ),
        ),
      ),
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Alex Gellman\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'team_member\',
      \'uid\' => \'227\',
      \'uuid\' => \'c49cee8d-ebb4-48c2-80e6-84173b2d169c\',
      \'vid\' => NULL,
      \'vuuid\' => \'43674ab7-adf6-4425-a07e-9f4d3c487501\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><img align=\\"left\\" alt=\\"\\" border=\\"2\\" class=\\"media-image attr__typeof__foaf:Image img__fid__86 img__view_mode__media_preview attr__format__media_preview\\" height=\\"180\\" src=\\"http://verticalbridge.com/sites/default/files/styles/square_thumbnail/public/MCG%20Headshot_0.jpg?itok=Vf5QL7_x\\" style=\\"padding: 5px; margin-right: 5px;\\" typeof=\\"foaf:Image\\" width=\\"180\\" /></p>\\r\\n\\r\\n<p>Marc&nbsp;Ganzi is a successful real estate and telecommunications entrepreneur. In addition to serving as Executive Chairman of Vertical Bridge, he is the co-founder and Chief Executive Office&nbsp;of Digital Bridge Holdings, LLC. He previously co-founded Global Tower Partners (GTP), an owner and operator of communications, real estate and related companies, where he played an instrumental role in building the business, which was ultimately sold in 2013 for over $4.8 billion.<br />\\r\\n<br />\\r\\nPrior to GTP, Ganzi was a consulting partner at Deutsche Bank’s DB Capital Partners overseeing the institution\'s radio tower sector investments in Latin and North America. His other earlier experience includes Apex Site Management and the U.S. Department of Commerce\'s Foreign Commercial Service Department.<br />\\r\\n<br />\\r\\nGanzi is a member of Young Presidents\' Organization, a Director of Olympus Media, LLC, and a three time finalist for Ernst &amp; Young Entrepreneur of the Year in Florida. He is a graduate of Wharton School of Business at the University Of Pennsylvania.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p><img align=\\"left\\" alt=\\"\\" border=\\"2\\" class=\\"media-image attr__typeof__foaf:Image img__fid__86 img__view_mode__media_preview attr__format__media_preview\\" height=\\"180\\" src=\\"http://verticalbridge.com/sites/default/files/styles/square_thumbnail/public/MCG%20Headshot_0.jpg?itok=Vf5QL7_x\\" style=\\"padding: 5px; margin-right: 5px;\\" typeof=\\"foaf:Image\\" width=\\"180\\" /></p>\\n<p>Marc Ganzi is a successful real estate and telecommunications entrepreneur. In addition to serving as Executive Chairman of Vertical Bridge, he is the co-founder and Chief Executive Office of Digital Bridge Holdings, LLC. He previously co-founded Global Tower Partners (GTP), an owner and operator of communications, real estate and related companies, where he played an instrumental role in building the business, which was ultimately sold in 2013 for over $4.8 billion.</p>\\n<p>Prior to GTP, Ganzi was a consulting partner at Deutsche Bank’s DB Capital Partners overseeing the institution\'s radio tower sector investments in Latin and North America. His other earlier experience includes Apex Site Management and the U.S. Department of Commerce\'s Foreign Commercial Service Department.</p>\\n<p>Ganzi is a member of Young Presidents\' Organization, a Director of Olympus Media, LLC, and a three time finalist for Ernst &amp; Young Entrepreneur of the Year in Florida. He is a graduate of Wharton School of Business at the University Of Pennsylvania.</p>\\n ",
            \'safe_summary\' => \'  \',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'field_internal_header\' => array(),
      \'field_linkedin\' => array(),
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Marc Ganzi\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'team_member\',
      \'uid\' => \'227\',
      \'uuid\' => \'c6c8690d-e4d0-4dd1-8c64-98e28c152986\',
      \'vid\' => NULL,
      \'vuuid\' => \'aaec711e-4f4e-4fc8-9ca5-12fb3e499275\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><em><span style=\\"font-size: 0.85rem;\\">Under Agreement, Clear Channel’s Portfolio of Out-of-Home Assets in 45 DMAs Will Significantly Enhance Wireless Service for Mobile Customers</span></em></p>\\r\\n\\r\\n<p><strong>September 10, 2015 - Las Vegas, NV -</strong> &nbsp;Vertical Bridge, the largest U.S. private owner and manager of wireless telecommunication infrastructure and Clear Channel Outdoor Holdings, Inc., (NYSE: CCO), a subsidiary of iHeartMedia Inc., today announced the signing of an exclusive multi-year agreement for the management and marketing of wireless deployment on Clear Channel Outdoor America’s (CCOA) billboards and other out-of-home assets in 45 of the top 50 U.S. markets. This agreement, covering more geography and out of home inventory than any similar agreement in the U.S., was announced at The Wireless Association’s CTIA Super Mobility 2015 conference in Las Vegas.</p>\\r\\n\\r\\n<p>Under the terms of the agreement, Vertical Bridge will have exclusive rights to antenna and small cell site deployment across CCOA’s multi-platform footprint. These small cell base stations will significantly improve concentrated bandwidth and enable capacity increases for mobile services, while enhancing the user experience.</p>\\r\\n\\r\\n<p>With the addition of CCOA’s assets, Vertical Bridge will own or manage a portfolio of over 40,000 attractive billboard, tower, rooftop, utility attachments and other site locations that are geographically dispersed across urban, suburban, traffic corridor and rural areas. Financial terms of the transaction were not disclosed.</p>\\r\\n\\r\\n<p>“We are very pleased to broaden our relationship with iHeartMedia through this partnership with Clear Channel Outdoor Americas,” said Alex Gellman, CEO, Vertical Bridge. “Growth in mobile data traffic is driving network demand, and the top U.S. carriers are in the midst of a significant investment cycle to maintain the reliability and performance of their networks. We believe billboards will play an increasingly important role in the deployment of all networks, and CCOA has the best locations for carriers who are looking to enhance services for mobile consumers.”</p>\\r\\n\\r\\n<p>“Clear Channel Outdoor is consistently at the forefront of innovation leveraging our assets to help our partners reach today’s mobile, digital and social media consumers,” said Scott Wells, CEO, Clear Channel Outdoor Americas. “Today’s agreement enables wireless carriers to better serve millions of consumers across Clear Channel’s vast network around the country, and we are always pleased to find win-win opportunities to further monetize our valuable portfolio of assets.”</p>\\r\\n\\r\\n<p><strong>About Clear Channel Outdoor</strong></p>\\r\\n\\r\\n<p>Clear Channel Outdoor Holdings, Inc. (NYSE:CCO) is one of the world’s largest outdoor advertising companies with more than 640,000 displays in over 40 countries across Asia, Australia, Europe, Latin America and North America. Reaching millions of people monthly, including consumers in 45 of the top 50 U.S. markets, Clear Channel Outdoor enables advertisers to engage with consumers through innovative advertising solutions. Clear Channel Outdoor is pioneering the integration of out-of-home with mobile and social platforms, and the company’s digital platform includes over 1,200 digital billboards across 38 markets in North America and over 5,000 digital displays in international markets. More information is available at www.clearchanneloutdoor.com and www.clearchannelinternational.com.</p>\\r\\n\\r\\n<p><strong>About Vertical Bridge </strong></p>\\r\\n\\r\\n<p>Vertical Bridge is the largest private owner and manager of wireless communication infrastructure in the United States. The company owns, operates and manages over 40,000 tower, rooftop, utility attachment and other site locations in support of all wireless network deployments. Based in Boca Raton, Florida, Vertical Bridge was founded in 2014 by key executives from Digital Bridge Holdings, LLC and former senior officers of Global Tower Partners. The senior management team at Vertical Bridge has over 150 years of collective experience in tower infrastructure and related sectors. For more information, please visit www.verticalbridge.com.</p>\\r\\n\\r\\n<p>&nbsp;</p>\\r\\n\\r\\n<p><strong>Contacts:</strong></p>\\r\\n\\r\\n<p><span style=\\"font-size: 13.6px;\\">Vertical Bridge:<br />\\r\\nStanton PR &amp; Marketing&nbsp;<br />\\r\\nCharlyn Lusk<br />\\r\\n646-502-3546<br />\\r\\nclusk@stantonprm.com</span></p>\\r\\n\\r\\n<p><span style=\\"font-size: 0.85rem;\\">Clear Channel Outdoor Holdings, Inc.&nbsp;</span><br />\\r\\n<span style=\\"font-size: 0.85rem;\\">Jason D. King</span><br />\\r\\n<span style=\\"font-size: 0.85rem;\\">212-812-0064&nbsp;</span><br />\\r\\n<span style=\\"font-size: 0.85rem;\\">jasondking@clearchannel.com</span></p>\\r\\n\\r\\n<p><span style=\\"font-size: 0.85rem;\\">or </span></p>\\r\\n\\r\\n<p><span style=\\"font-size: 0.85rem;\\">David Press<br />\\r\\n917-721-7046<br />\\r\\ndavid@feverpress.com </span></p>\\r\\n\\r\\n<p><span style=\\"font-size: 0.85rem;\\">or</span></p>\\r\\n\\r\\n<p><span style=\\"font-size: 0.85rem;\\">Cindy Stoller<br />\\r\\n917-331-0418<br />\\r\\ncindy@feverpress.com &nbsp;&nbsp;</span></p>\\r\\n",
            \'summary\' => "<p style=\\"font-size: 13.6px;\\"><em>Under Agreement, Clear Channel’s Portfolio of Out-of-Home Assets in 45 DMAs Will Significantly Enhance Wireless Service for Mobile Customers</em></p>\\r\\n\\r\\n<p style=\\"font-size: 13.6px;\\"><strong>September 10, 2015 - Las Vegas, NV -</strong>&nbsp;&nbsp;Vertical Bridge, the largest U.S. private owner and manager of wireless telecommunication infrastructure and Clear Channel Outdoor Holdings, Inc., (NYSE: CCO), a subsidiary of iHeartMedia Inc., today announced the signing of an exclusive multi-year agreement for the management and marketing of wireless deployment on Clear Channel Outdoor America’s (CCOA) billboards and other out-of-home assets in 45 of the top 50 U.S. markets.&nbsp;</p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => " <p><em><span style=\\"font-size: 0.85rem;\\">Under Agreement, Clear Channel’s Portfolio of Out-of-Home Assets in 45 DMAs Will Significantly Enhance Wireless Service for Mobile Customers</span></em></p>\\n<p><strong>September 10, 2015 - Las Vegas, NV -</strong>  Vertical Bridge, the largest U.S. private owner and manager of wireless telecommunication infrastructure and Clear Channel Outdoor Holdings, Inc., (NYSE: CCO), a subsidiary of iHeartMedia Inc., today announced the signing of an exclusive multi-year agreement for the management and marketing of wireless deployment on Clear Channel Outdoor America’s (CCOA) billboards and other out-of-home assets in 45 of the top 50 U.S. markets. This agreement, covering more geography and out of home inventory than any similar agreement in the U.S., was announced at The Wireless Association’s CTIA Super Mobility 2015 conference in Las Vegas.</p>\\n<p>Under the terms of the agreement, Vertical Bridge will have exclusive rights to antenna and small cell site deployment across CCOA’s multi-platform footprint. These small cell base stations will significantly improve concentrated bandwidth and enable capacity increases for mobile services, while enhancing the user experience.</p>\\n<p>With the addition of CCOA’s assets, Vertical Bridge will own or manage a portfolio of over 40,000 attractive billboard, tower, rooftop, utility attachments and other site locations that are geographically dispersed across urban, suburban, traffic corridor and rural areas. Financial terms of the transaction were not disclosed.</p>\\n<p>“We are very pleased to broaden our relationship with iHeartMedia through this partnership with Clear Channel Outdoor Americas,” said Alex Gellman, CEO, Vertical Bridge. “Growth in mobile data traffic is driving network demand, and the top U.S. carriers are in the midst of a significant investment cycle to maintain the reliability and performance of their networks. We believe billboards will play an increasingly important role in the deployment of all networks, and CCOA has the best locations for carriers who are looking to enhance services for mobile consumers.”</p>\\n<p>“Clear Channel Outdoor is consistently at the forefront of innovation leveraging our assets to help our partners reach today’s mobile, digital and social media consumers,” said Scott Wells, CEO, Clear Channel Outdoor Americas. “Today’s agreement enables wireless carriers to better serve millions of consumers across Clear Channel’s vast network around the country, and we are always pleased to find win-win opportunities to further monetize our valuable portfolio of assets.”</p>\\n<p><strong>About Clear Channel Outdoor</strong></p>\\n<p>Clear Channel Outdoor Holdings, Inc. (NYSE:CCO) is one of the world’s largest outdoor advertising companies with more than 640,000 displays in over 40 countries across Asia, Australia, Europe, Latin America and North America. Reaching millions of people monthly, including consumers in 45 of the top 50 U.S. markets, Clear Channel Outdoor enables advertisers to engage with consumers through innovative advertising solutions. Clear Channel Outdoor is pioneering the integration of out-of-home with mobile and social platforms, and the company’s digital platform includes over 1,200 digital billboards across 38 markets in North America and over 5,000 digital displays in international markets. More information is available at <a href=\\"http://www.clearchanneloutdoor.com\\">www.clearchanneloutdoor.com</a> and <a href=\\"http://www.clearchannelinternational.com\\">www.clearchannelinternational.com</a>.</p>\\n<p><strong>About Vertical Bridge </strong></p>\\n<p>Vertical Bridge is the largest private owner and manager of wireless communication infrastructure in the United States. The company owns, operates and manages over 40,000 tower, rooftop, utility attachment and other site locations in support of all wireless network deployments. Based in Boca Raton, Florida, Vertical Bridge was founded in 2014 by key executives from Digital Bridge Holdings, LLC and former senior officers of Global Tower Partners. The senior management team at Vertical Bridge has over 150 years of collective experience in tower infrastructure and related sectors. For more information, please visit <a href=\\"http://www.verticalbridge.com\\">www.verticalbridge.com</a>.</p>\\n<p> </p>\\n<p><strong>Contacts:</strong></p>\\n<p><span style=\\"font-size: 13.6px;\\">Vertical Bridge:<br />\\nStanton PR &amp; Marketing <br />\\nCharlyn Lusk<br />\\n646-502-3546<br /><a href=\\"mailto:clusk@stantonprm.com\\">clusk@stantonprm.com</a></span></p>\\n<p><span style=\\"font-size: 0.85rem;\\">Clear Channel Outdoor Holdings, Inc. </span><br /><span style=\\"font-size: 0.85rem;\\">Jason D. King</span><br /><span style=\\"font-size: 0.85rem;\\">212-812-0064 </span><br /><span style=\\"font-size: 0.85rem;\\"><a href=\\"mailto:jasondking@clearchannel.com\\">jasondking@clearchannel.com</a></span></p>\\n<p><span style=\\"font-size: 0.85rem;\\">or </span></p>\\n<p><span style=\\"font-size: 0.85rem;\\">David Press<br />\\n917-721-7046<br /><a href=\\"mailto:david@feverpress.com\\">david@feverpress.com</a> </span></p>\\n<p><span style=\\"font-size: 0.85rem;\\">or</span></p>\\n<p><span style=\\"font-size: 0.85rem;\\">Cindy Stoller<br />\\n917-331-0418<br /><a href=\\"mailto:cindy@feverpress.com\\">cindy@feverpress.com</a>   </span></p>\\n ",
            \'safe_summary\' => " <p style=\\"font-size: 13.6px;\\"><em>Under Agreement, Clear Channel’s Portfolio of Out-of-Home Assets in 45 DMAs Will Significantly Enhance Wireless Service for Mobile Customers</em></p>\\n<p style=\\"font-size: 13.6px;\\"><strong>September 10, 2015 - Las Vegas, NV -</strong>  Vertical Bridge, the largest U.S. private owner and manager of wireless telecommunication infrastructure and Clear Channel Outdoor Holdings, Inc., (NYSE: CCO), a subsidiary of iHeartMedia Inc., today announced the signing of an exclusive multi-year agreement for the management and marketing of wireless deployment on Clear Channel Outdoor America’s (CCOA) billboards and other out-of-home assets in 45 of the top 50 U.S. markets. </p>\\n ",
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'field_date\' => array(),
      \'field_external_link\' => array(),
      \'field_internal_header\' => array(),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'0\',
      \'sticky\' => \'0\',
      \'title\' => \'Clear Channel Outdoor Americas and Vertical Bridge Announce Landmark National Partnership for Wireless Deployment on Billboards\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'press_release\',
      \'uid\' => \'227\',
      \'uuid\' => \'c743c542-98ee-4332-9c3c-5965b30b7a67\',
      \'vid\' => NULL,
      \'vuuid\' => \'505c7760-5a5b-4f2b-9309-57f4d243039f\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><strong>Acceptance of Terms</strong></p>\\r\\n\\r\\n<p>This Web Site is owned and operated by and on behalf of Vertical Bridge and/or its wholly owned affiliates and subsidiaries (collectively \\"VB\\") and is made available to you, subject to these terms of use, for information, education and communication purposes only. By accessing one or more areas of this web site you are agreeing to be bound by these terms of use, and all applicable federal, state, and local laws and regulations. If you do not agree with these terms promptly exit this web site. Any claim relating to the use of this web site is governed by the laws of the state of Florida in the United States.</p>\\r\\n\\r\\n<p><strong>Access</strong></p>\\r\\n\\r\\n<p>You may, subject to these terms of use, access, download or print materials contained on this website for your personal use in planning or managing your specific projects or other purposes as offered from time to time on this web site.</p>\\r\\n\\r\\n<p><strong>Availability</strong></p>\\r\\n\\r\\n<p>VB makes every effort to make this web site continuously available. However, VB does not guarantee that this web site will be available at any given time nor that use of this web site will not be subject to interruption.</p>\\r\\n\\r\\n<p><strong>Conduct</strong></p>\\r\\n\\r\\n<p>You agree not to restrict or inhibit other users from using this web site by any means including by overburdening, damaging, or disabling any VB server on which the web site resides. You agree that you will not attempt to post or transmit any unlawful, fraudulent, threatening, abusive, defamatory, obscene or otherwise inappropriate materials, post or transmit any information or software that contains a virus or other harmful or disruptive component or malware or post or transmit materials in violation of the intellectual or proprietary rights of VB or any third party.</p>\\r\\n\\r\\n<p>You agree not to use the web site or any materials included in or extracted from the web site in any way which is unlawful, or to obtain inventory lists or other proprietary information. You agree that you will not access or attempt to access password protected, secure or non-public areas of the web site and understand that you may be subject to prosecution if you attempt to access prohibited areas of this web site. As requested by VB you agree to provide true and complete user information and to refrain from impersonating or falsely representing your affiliation with any person or entity.</p>\\r\\n\\r\\n<p>You agree that you will not re-publish, re-transmit otherwise incorporate materials from this web site in any document in any medium of publication or provide any such materials to a third party.</p>\\r\\n\\r\\n<p><strong>Change Notice</strong></p>\\r\\n\\r\\n<p>VB may modify, change, update or replace the terms of use in whole or in any part at any time. The most current version of the terms of use is always the version published on this web site</p>\\r\\n\\r\\n<p>Limitation of Liability USE OF THIS WEB SITE IS AT YOUR OWN RISK. VB IS NOT RESPONSIBLE FOR ANY LOSSES, DAMAGES OR CONSEQUENCES TO YOU OR TO ANY THIRD PERSON RELATING DIRECTLY OR INDIRECTLY TO THE USE OF THIS WEB SITE, TO THE USE OF THE MATERIALS MADE AVAILABLE ON THIS WEB SITE OR ANY ACTION OR INACTION THAT YOU TAKE AS A RESULT OF ANY VISIT YOU MAY MAKE TO THIS WEB SITE. IN NO EVENT WILL VB BE LIABILE FRO ANY CONSEQUENTIAL, SPECIAL, OR INDIRECT DAMAGES ARISING OUT OF YOUR USE OF THIS WEB SITE, ANY MATERIALS MADE AVAILABLE TO YOU BY THIS WEB SITE, OR ANY LOST PROFITS OR COST SAVINGS.</p>\\r\\n\\r\\n<p>THIS WEB SITE IS PROVIDED TO YOU ON AN \\"AS IS, WHERE IS, WITH ALL FAULTS\\" BASIS. VB MAKES NOT REPRESENTATION OR WARRANTY OF ANY KIND, AND EXPRESSLY DISCLAIMS ANY IMPLIED OR EXPRESS WARRANTIES OF MERCHANTABILITY OR FITNESS FOR ANY PARTICULAR PURPOSE. VB WILL NOT DEFEND OR HOLD YOU HARMLESS AGAINST SUCH A CLAIM BROUGHT AGAINST YOU BY ANY THIRD PARTY.</p>\\r\\n\\r\\n<p>Copyright Notice Web Site Copyright 2014 by Vertical Bridge, LLC. All rights reserved.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p><strong>Acceptance of Terms</strong></p>\\n<p>This Web Site is owned and operated by and on behalf of Vertical Bridge and/or its wholly owned affiliates and subsidiaries (collectively \\"VB\\") and is made available to you, subject to these terms of use, for information, education and communication purposes only. By accessing one or more areas of this web site you are agreeing to be bound by these terms of use, and all applicable federal, state, and local laws and regulations. If you do not agree with these terms promptly exit this web site. Any claim relating to the use of this web site is governed by the laws of the state of Florida in the United States.</p>\\n<p><strong>Access</strong></p>\\n<p>You may, subject to these terms of use, access, download or print materials contained on this website for your personal use in planning or managing your specific projects or other purposes as offered from time to time on this web site.</p>\\n<p><strong>Availability</strong></p>\\n<p>VB makes every effort to make this web site continuously available. However, VB does not guarantee that this web site will be available at any given time nor that use of this web site will not be subject to interruption.</p>\\n<p><strong>Conduct</strong></p>\\n<p>You agree not to restrict or inhibit other users from using this web site by any means including by overburdening, damaging, or disabling any VB server on which the web site resides. You agree that you will not attempt to post or transmit any unlawful, fraudulent, threatening, abusive, defamatory, obscene or otherwise inappropriate materials, post or transmit any information or software that contains a virus or other harmful or disruptive component or malware or post or transmit materials in violation of the intellectual or proprietary rights of VB or any third party.</p>\\n<p>You agree not to use the web site or any materials included in or extracted from the web site in any way which is unlawful, or to obtain inventory lists or other proprietary information. You agree that you will not access or attempt to access password protected, secure or non-public areas of the web site and understand that you may be subject to prosecution if you attempt to access prohibited areas of this web site. As requested by VB you agree to provide true and complete user information and to refrain from impersonating or falsely representing your affiliation with any person or entity.</p>\\n<p>You agree that you will not re-publish, re-transmit otherwise incorporate materials from this web site in any document in any medium of publication or provide any such materials to a third party.</p>\\n<p><strong>Change Notice</strong></p>\\n<p>VB may modify, change, update or replace the terms of use in whole or in any part at any time. The most current version of the terms of use is always the version published on this web site</p>\\n<p>Limitation of Liability USE OF THIS WEB SITE IS AT YOUR OWN RISK. VB IS NOT RESPONSIBLE FOR ANY LOSSES, DAMAGES OR CONSEQUENCES TO YOU OR TO ANY THIRD PERSON RELATING DIRECTLY OR INDIRECTLY TO THE USE OF THIS WEB SITE, TO THE USE OF THE MATERIALS MADE AVAILABLE ON THIS WEB SITE OR ANY ACTION OR INACTION THAT YOU TAKE AS A RESULT OF ANY VISIT YOU MAY MAKE TO THIS WEB SITE. IN NO EVENT WILL VB BE LIABILE FRO ANY CONSEQUENTIAL, SPECIAL, OR INDIRECT DAMAGES ARISING OUT OF YOUR USE OF THIS WEB SITE, ANY MATERIALS MADE AVAILABLE TO YOU BY THIS WEB SITE, OR ANY LOST PROFITS OR COST SAVINGS.</p>\\n<p>THIS WEB SITE IS PROVIDED TO YOU ON AN \\"AS IS, WHERE IS, WITH ALL FAULTS\\" BASIS. VB MAKES NOT REPRESENTATION OR WARRANTY OF ANY KIND, AND EXPRESSLY DISCLAIMS ANY IMPLIED OR EXPRESS WARRANTIES OF MERCHANTABILITY OR FITNESS FOR ANY PARTICULAR PURPOSE. VB WILL NOT DEFEND OR HOLD YOU HARMLESS AGAINST SUCH A CLAIM BROUGHT AGAINST YOU BY ANY THIRD PARTY.</p>\\n<p>Copyright Notice Web Site Copyright 2014 by Vertical Bridge, LLC. All rights reserved.</p>\\n ",
            \'safe_summary\' => \'  \',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'field_cta_button\' => array(),
      \'field_cta_content\' => array(),
      \'field_internal_header\' => array(),
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'metatags\' => array(
        \'en\' => array(
          \'title\' => array(
            \'value\' => \'Terms of Use | Vertical Bridge\',
          ),
        ),
      ),
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Terms of Use\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'page\',
      \'uid\' => \'227\',
      \'uuid\' => \'cd2078e0-9ff2-4199-9e58-ce3da5bddf14\',
      \'vid\' => NULL,
      \'vuuid\' => \'e4e25b2f-39c5-4886-9a23-7b7398dbfe69\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>We are set up to serve your needs across the county. Get in touch with the regional leasing manager (RLM) or leasing specialist (LS) in your area listed below.</p>\\r\\n\\r\\n<p><img alt=\\"map\\" border=\\"0\\" height=\\"608.53\\" src=\\"/sites/default/files/map-1.jpg\\" style=\\"max-width:100%; height:auto\\" usemap=\\"#Map\\" width=\\"1024\\" /><map id=\\"Map\\" name=\\"Map\\"><area alt=\\"zone1\\" class=\\"zone-id\\" coords=\\"147,19,144,60,166,84,184,81,256,103,269,107,423,129,510,128,518,187,525,255,543,304,444,308,442,370,426,371,424,467,364,464,291,465,183,408,134,445,214,467,169,510,116,451,179,405,151,370,125,283,117,232,136,184,156,136,159,90,130,58,86,76,103,60,96,47,109,39,103,27,113,15,145,19\\" href=\\"#\\" id=\\"West\\" shape=\\"poly\\" /> <area alt=\\"zone2\\" class=\\"zone-id\\" coords=\\"527,127,535,123,547,131,583,138,610,137,583,170,605,165,637,145,634,156,650,160,669,156,687,158,690,173,703,188,699,207,710,197,723,216,720,224,715,246,725,249,753,229,757,278,740,304,705,302,688,324,658,335,643,350,637,377,631,378,631,367,561,378,561,365,443,366,446,308,548,305,527,255,521,188,514,127\\" href=\\"#\\" id=\\"Midwest\\" shape=\\"poly\\" /> <area alt=\\"zone3\\" class=\\"zone-id\\" coords=\\"367,468,401,519,419,530,441,512,473,546,494,582,527,588,522,553,539,537,566,513,611,505,626,507,635,515,662,512,660,486,687,480,716,482,726,489,743,478,760,487,769,498,772,519,805,560,816,565,817,547,834,548,874,545,836,538,817,542,814,514,786,468,786,426,742,376,630,396,638,380,628,379,628,371,560,382,557,369,446,369,433,374,429,468,367,467\\" href=\\"#\\" id=\\"Southeast\\" shape=\\"poly\\" /> <area alt=\\"zone4\\" class=\\"zone-id\\" coords=\\"876,68,889,70,905,97,916,106,895,126,882,165,896,176,868,214,853,242,847,277,842,306,850,330,837,360,788,425,743,375,636,394,646,354,661,338,686,330,700,312,709,307,736,306,753,295,756,229,774,210,769,199,808,181,802,170,813,143,865,120,862,77\\" href=\\"#\\" id=\\"Northeast\\" shape=\\"poly\\" /></map></p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p>We are set up to serve your needs across the county. Get in touch with the regional leasing manager (RLM) or leasing specialist (LS) in your area listed below.</p>\\n<p><img alt=\\"map\\" border=\\"0\\" height=\\"608.53\\" src=\\"/sites/default/files/map-1.jpg\\" style=\\"max-width:100%; height:auto\\" usemap=\\"#Map\\" width=\\"1024\\" /><map id=\\"Map\\" name=\\"Map\\"><area alt=\\"zone1\\" class=\\"zone-id\\" coords=\\"147,19,144,60,166,84,184,81,256,103,269,107,423,129,510,128,518,187,525,255,543,304,444,308,442,370,426,371,424,467,364,464,291,465,183,408,134,445,214,467,169,510,116,451,179,405,151,370,125,283,117,232,136,184,156,136,159,90,130,58,86,76,103,60,96,47,109,39,103,27,113,15,145,19\\" href=\\"#\\" id=\\"West\\" shape=\\"poly\\" /><area alt=\\"zone2\\" class=\\"zone-id\\" coords=\\"527,127,535,123,547,131,583,138,610,137,583,170,605,165,637,145,634,156,650,160,669,156,687,158,690,173,703,188,699,207,710,197,723,216,720,224,715,246,725,249,753,229,757,278,740,304,705,302,688,324,658,335,643,350,637,377,631,378,631,367,561,378,561,365,443,366,446,308,548,305,527,255,521,188,514,127\\" href=\\"#\\" id=\\"Midwest\\" shape=\\"poly\\" /><area alt=\\"zone3\\" class=\\"zone-id\\" coords=\\"367,468,401,519,419,530,441,512,473,546,494,582,527,588,522,553,539,537,566,513,611,505,626,507,635,515,662,512,660,486,687,480,716,482,726,489,743,478,760,487,769,498,772,519,805,560,816,565,817,547,834,548,874,545,836,538,817,542,814,514,786,468,786,426,742,376,630,396,638,380,628,379,628,371,560,382,557,369,446,369,433,374,429,468,367,467\\" href=\\"#\\" id=\\"Southeast\\" shape=\\"poly\\" /><area alt=\\"zone4\\" class=\\"zone-id\\" coords=\\"876,68,889,70,905,97,916,106,895,126,882,165,896,176,868,214,853,242,847,277,842,306,850,330,837,360,788,425,743,375,636,394,646,354,661,338,686,330,700,312,709,307,736,306,753,295,756,229,774,210,769,199,808,181,802,170,813,143,865,120,862,77\\" href=\\"#\\" id=\\"Northeast\\" shape=\\"poly\\" /></map></p>\\n ",
            \'safe_summary\' => \'  \',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'field_address_data\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><strong>Bill Maxwell, Regional Leasing Manager</strong><br />\\r\\n419.779.0343<br />\\r\\n<a href=\\"mailto:bmaxwell@verticalbridge.com\\">bmaxwell@verticalbridge.com</a><br />\\r\\n<br />\\r\\n<strong>Kathryn Campbell Downie, Leasing Specialist</strong><br />\\r\\n561.948.63.62<br />\\r\\n<a href=\\"mailto:kcampbelldownie@verticalbridge.com\\">kcampbelldownie@verticalbridge.com</a></p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p><strong>Bill Maxwell, Regional Leasing Manager</strong><br />\\n419.779.0343<br /><a href=\\"mailto:bmaxwell@verticalbridge.com\\">bmaxwell@verticalbridge.com</a></p>\\n<p><strong>Kathryn Campbell Downie, Leasing Specialist</strong><br />\\n561.948.63.62<br /><a href=\\"mailto:kcampbelldownie@verticalbridge.com\\">kcampbelldownie@verticalbridge.com</a></p>\\n ",
            \'safe_summary\' => \'  \',
          ),
          array(
            \'value\' => "<p><strong>Tiffany McClurg, Regional Leasing Manager</strong><br />\\r\\n206.719.1639<br />\\r\\n<a href=\\"mailto:tmmclurg@verticalbridge.com\\">tmmclurg@verticalbridge.com</a><br />\\r\\n<br />\\r\\n<strong>Mindy Fields, Leasing Specialist</strong><br />\\r\\n561.406.4034<br />\\r\\n<a href=\\"mailto:mfields@verticalbridge.com\\">mfields@verticalbridge.com</a></p>",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p><strong>Tiffany McClurg, Regional Leasing Manager</strong><br />\\n206.719.1639<br /><a href=\\"mailto:tmmclurg@verticalbridge.com\\">tmmclurg@verticalbridge.com</a></p>\\n<p><strong>Mindy Fields, Leasing Specialist</strong><br />\\n561.406.4034<br /><a href=\\"mailto:mfields@verticalbridge.com\\">mfields@verticalbridge.com</a></p>\\n ",
            \'safe_summary\' => \'  \',
          ),
          array(
            \'value\' => "<p><strong>Floyd Jenkins, Regional Leasing Manager</strong><br />\\r\\n301.667.0069<br />\\r\\n<a href=\\"mailto:fjenkins@verticalbridge.com\\">fjenkins@verticalbridge.com</a><br />\\r\\n<br />\\r\\n<strong>Kristen O’Connor, Leasing Specialist</strong><br />\\r\\n561.406.4095<br />\\r\\n<a href=\\"mailto:koconner@verticalbridge.com\\">koconner@verticalbridge.com</a><br />\\r\\n<br />\\r\\n<strong>Mike Belski, Senior Vice President of Leasing &amp; Marketing</strong><br />\\r\\n561.406.4006<br />\\r\\n<a href=\\"mailto:mbelski@verticalbridge.com\\">mbelski@verticalbridge.com</a><br />\\r\\n<br />\\r\\n<strong>Tim Tuck, Director of Leasing</strong><br />\\r\\n561.406.4019<br />\\r\\n<a href=\\"mailto:ttuck@verticalbridge.com\\">ttuck@verticalbridge.com</a></p>",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p><strong>Floyd Jenkins, Regional Leasing Manager</strong><br />\\n301.667.0069<br /><a href=\\"mailto:fjenkins@verticalbridge.com\\">fjenkins@verticalbridge.com</a></p>\\n<p><strong>Kristen O’Connor, Leasing Specialist</strong><br />\\n561.406.4095<br /><a href=\\"mailto:koconner@verticalbridge.com\\">koconner@verticalbridge.com</a></p>\\n<p><strong>Mike Belski, Senior Vice President of Leasing &amp; Marketing</strong><br />\\n561.406.4006<br /><a href=\\"mailto:mbelski@verticalbridge.com\\">mbelski@verticalbridge.com</a></p>\\n<p><strong>Tim Tuck, Director of Leasing</strong><br />\\n561.406.4019<br /><a href=\\"mailto:ttuck@verticalbridge.com\\">ttuck@verticalbridge.com</a></p>\\n ",
            \'safe_summary\' => \'  \',
          ),
          array(
            \'value\' => "<p><strong>Sheryl Stafford, Regional Leasing Manager</strong><br />\\r\\n407.335.1245<br />\\r\\n<a href=\\"mailto:sstafford@verticalbridge.com\\">sstafford@verticalbridge.com</a><br />\\r\\n<br />\\r\\n<strong>Darlene Martin, Leasing Specialist</strong><br />\\r\\n561.251.7017<br />\\r\\n<a href=\\"mailto:dmartin@verticalbridge.com\\">dmartin@verticalbridge.com</a></p>",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p><strong>Sheryl Stafford, Regional Leasing Manager</strong><br />\\n407.335.1245<br /><a href=\\"mailto:sstafford@verticalbridge.com\\">sstafford@verticalbridge.com</a></p>\\n<p><strong>Darlene Martin, Leasing Specialist</strong><br />\\n561.251.7017<br /><a href=\\"mailto:dmartin@verticalbridge.com\\">dmartin@verticalbridge.com</a></p>\\n ",
            \'safe_summary\' => \'  \',
          ),
          array(
            \'value\' => "<p><strong>Gary Hess, VP of Broadcast Towers Leasing</strong><br />\\r\\n772.215.1634<br />\\r\\n<a href=\\"mailto:ghess@verticalbridge.com\\">ghess@verticalbridge.com </a><br />\\r\\n<br />\\r\\n<strong>Mindy Fields, Leasing Specialist</strong><br />\\r\\n561.406.4034<br />\\r\\n<a href=\\"mailto:mfields@verticalbridge.com\\">mfields@verticalbridge.com</a></p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p><strong>Gary Hess, VP of Broadcast Towers Leasing</strong><br />\\n772.215.1634<br /><a href=\\"mailto:ghess@verticalbridge.com\\">ghess@verticalbridge.com </a></p>\\n<p><strong>Mindy Fields, Leasing Specialist</strong><br />\\n561.406.4034<br /><a href=\\"mailto:mfields@verticalbridge.com\\">mfields@verticalbridge.com</a></p>\\n ",
            \'safe_summary\' => \'  \',
          ),
        ),
      ),
      \'field_address_title\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Midwest\',
            \'format\' => NULL,
            \'safe_value\' => \'Midwest\',
          ),
          array(
            \'value\' => \'West\',
            \'format\' => NULL,
            \'safe_value\' => \'West\',
          ),
          array(
            \'value\' => \'Northeast\',
            \'format\' => NULL,
            \'safe_value\' => \'Northeast\',
          ),
          array(
            \'value\' => \'Southeast\',
            \'format\' => NULL,
            \'safe_value\' => \'Southeast\',
          ),
          array(
            \'value\' => \'National Broadcast Tenants\',
            \'format\' => NULL,
            \'safe_value\' => \'National Broadcast Tenants\',
          ),
        ),
      ),
      \'field_cta_button\' => array(),
      \'field_cta_content\' => array(),
      \'field_internal_header\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'212\',
            \'uid\' => \'227\',
            \'filename\' => \'Vertical-Bridge_Leasing-Managers-with overlay.jpg\',
            \'uri\' => \'public://Vertical-Bridge_Leasing-Managers-with overlay.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'143893\',
            \'status\' => \'1\',
            \'timestamp\' => \'1463066331\',
            \'type\' => \'image\',
            \'uuid\' => \'1a094363-988d-4765-bf9f-1373b0919151\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'1024\',
              \'height\' => \'242\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'1024\',
            \'height\' => \'242\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Leasing Managers\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'leasing_agents\',
      \'uid\' => \'227\',
      \'uuid\' => \'cea9e287-66e9-4a78-bfae-bfeefded5f06\',
      \'vid\' => NULL,
      \'vuuid\' => \'17f68d73-852b-4742-84a9-16ef2a2ffd54\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>All types of commercial real estate properties, including land parcels, are great assets for telecommunications income. From some of the largest real estate players in the US to owners of individual properties, Vertical Bridge represents a large variety of asset types and owners. Whether you are a small real estate owner or a large, publicly traded REIT, Vertical Bridge is a proven partner.<br />\\r\\n<br />\\r\\nIf you’d like more information on partnering with Vertical Bridge, <a href=\\"mailto:RealEstate@VerticalBridge.com\\">contact our Real Estate Team</a>.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p>All types of commercial real estate properties, including land parcels, are great assets for telecommunications income. From some of the largest real estate players in the US to owners of individual properties, Vertical Bridge represents a large variety of asset types and owners. Whether you are a small real estate owner or a large, publicly traded REIT, Vertical Bridge is a proven partner.</p>\\n<p>If you’d like more information on partnering with Vertical Bridge, <a href=\\"mailto:RealEstate@VerticalBridge.com\\">contact our Real Estate Team</a>.</p>\\n ",
            \'safe_summary\' => \'  \',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'field_cta_button\' => array(
        \'und\' => array(
          array(
            \'url\' => \'mailto:realestate@verticalbridge.com\',
            \'title\' => \'CLICK HERE\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_cta_content\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Are You a Rooftop, Billboard or Utility Owner?</p>\\r\\n\\r\\n<p>See What We Have To Offer!</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p>Are You a Rooftop, Billboard or Utility Owner?</p>\\n<p>See What We Have To Offer!</p>\\n ",
            \'safe_summary\' => \'  \',
          ),
        ),
      ),
      \'field_internal_header\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'260\',
            \'uid\' => \'227\',
            \'filename\' => \'our-partners.jpg\',
            \'uri\' => \'public://our-partners_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'198184\',
            \'status\' => \'1\',
            \'timestamp\' => \'1464987094\',
            \'type\' => \'image\',
            \'uuid\' => \'55cc93ca-8464-4d9c-9722-e398d5a78f16\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'1024\',
              \'height\' => \'242\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'1024\',
            \'height\' => \'242\',
          ),
        ),
      ),
      \'field_logos\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'292\',
            \'uid\' => \'227\',
            \'filename\' => \'rmr-group-SIZE.jpg\',
            \'uri\' => \'public://rmr-group-SIZE.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'17850\',
            \'status\' => \'1\',
            \'timestamp\' => \'1465413667\',
            \'type\' => \'image\',
            \'uuid\' => \'cdca0d59-eee0-44ad-8f40-2dc30750bdd5\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'63\',
              \'height\' => \'63\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'63\',
            \'height\' => \'63\',
          ),
          array(
            \'fid\' => \'290\',
            \'uid\' => \'227\',
            \'filename\' => \'davis.jpg\',
            \'uri\' => \'public://davis.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'20544\',
            \'status\' => \'1\',
            \'timestamp\' => \'1465413565\',
            \'type\' => \'image\',
            \'uuid\' => \'f80aa26f-8a64-47d8-966d-8e1b72804a85\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'210\',
              \'height\' => \'63\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'210\',
            \'height\' => \'63\',
          ),
          array(
            \'fid\' => \'291\',
            \'uid\' => \'227\',
            \'filename\' => \'townsquare.png\',
            \'uri\' => \'public://townsquare.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'10653\',
            \'status\' => \'1\',
            \'timestamp\' => \'1465413565\',
            \'type\' => \'image\',
            \'uuid\' => \'72acbfe6-a7ff-44ec-87ff-df56b70c75a7\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'153\',
              \'height\' => \'63\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'153\',
            \'height\' => \'63\',
          ),
        ),
      ),
      \'field_tab_content_wysiwyg\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Vertical Bridge has an unparalleled focus on co-locating telecom infrastructure on non-owned assets. We have created hundreds of millions of dollars in recurring revenue for our clients by leasing unused or un-leasable portions of their properties.&nbsp;<br />\\r\\n<br />\\r\\nBuilding owners look to Vertical Bridge to bring income to otherwise unused space on their rooftops. We employ world class systems and workflows, and unlike many of our competitors, our systems are designed from the ground up to accommodate the unique needs of building owners. Our owner\'s portal is a web-site specifically designed for each owner, and it is an up to the last second snapshot of rent roll, pending deals, deals signed, other reports and a document repository.</p>\\r\\n\\r\\n<p>&nbsp;</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p>Vertical Bridge has an unparalleled focus on co-locating telecom infrastructure on non-owned assets. We have created hundreds of millions of dollars in recurring revenue for our clients by leasing unused or un-leasable portions of their properties. </p>\\n<p>Building owners look to Vertical Bridge to bring income to otherwise unused space on their rooftops. We employ world class systems and workflows, and unlike many of our competitors, our systems are designed from the ground up to accommodate the unique needs of building owners. Our owner\'s portal is a web-site specifically designed for each owner, and it is an up to the last second snapshot of rent roll, pending deals, deals signed, other reports and a document repository.</p>\\n<p> </p>\\n ",
            \'safe_summary\' => \'  \',
          ),
          array(
            \'value\' => "<p>As the largest privately held tower owner and operator in the U.S., Vertical Bridge offers tremendous advantages to landowners. Our experience and knowledge allows us to eliminate the middle man so landowners generate more income. Additionally, our national scope and private company structure allow us to find quick and efficient solutions as well as adapt to our landowners\' needs, resulting in greater benefits and customer service.&nbsp;&nbsp;<br />\\r\\n<br />\\r\\nSafety, reliability and limited access to your structures are our number one priority, and our dedicated team of former utility experts is second to none.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p>As the largest privately held tower owner and operator in the U.S., Vertical Bridge offers tremendous advantages to landowners. Our experience and knowledge allows us to eliminate the middle man so landowners generate more income. Additionally, our national scope and private company structure allow us to find quick and efficient solutions as well as adapt to our landowners\' needs, resulting in greater benefits and customer service.  </p>\\n<p>Safety, reliability and limited access to your structures are our number one priority, and our dedicated team of former utility experts is second to none.</p>\\n ",
            \'safe_summary\' => \'  \',
          ),
          array(
            \'value\' => "<p>Vertical Bridge has a proven long term track record of helping utility owners generate revenue from their assets. We work closely with owners to bring them new revenue by adding assets to existing utility structures such as communications and transmission towers, generating facilities, water tanks, and substations. We place assets at the front of carriers’ target lists to maximize income opportunities, and our experienced leadership and knowledge allow&nbsp;us to manage the process for owners, according to their processes, so their employees can stay focused on their businesses.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p>Vertical Bridge has a proven long term track record of helping utility owners generate revenue from their assets. We work closely with owners to bring them new revenue by adding assets to existing utility structures such as communications and transmission towers, generating facilities, water tanks, and substations. We place assets at the front of carriers’ target lists to maximize income opportunities, and our experienced leadership and knowledge allow us to manage the process for owners, according to their processes, so their employees can stay focused on their businesses.</p>\\n ",
            \'safe_summary\' => \'  \',
          ),
          array(
            \'value\' => "<p>At&nbsp;40-80 feet in height, billboards have become an attractive asset class for telecommunications providers. Vertical Bridge can market your billboards to carriers and maximize your revenue opportunity – both short and long term. We can also manage all aspects of the process so your employees can stay focused where they need to: your core business.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p>At 40-80 feet in height, billboards have become an attractive asset class for telecommunications providers. Vertical Bridge can market your billboards to carriers and maximize your revenue opportunity – both short and long term. We can also manage all aspects of the process so your employees can stay focused where they need to: your core business.</p>\\n ",
            \'safe_summary\' => \'  \',
          ),
        ),
      ),
      \'field_tab_title\' => array(
        \'und\' => array(
          array(
            \'value\' => \'REITS and Rooftops\',
            \'format\' => NULL,
            \'safe_value\' => \'REITS and Rooftops\',
          ),
          array(
            \'value\' => \'Landowners\',
            \'format\' => NULL,
            \'safe_value\' => \'Landowners\',
          ),
          array(
            \'value\' => \'Utility Owners\',
            \'format\' => NULL,
            \'safe_value\' => \'Utility Owners\',
          ),
          array(
            \'value\' => \'Billboard Owners\',
            \'format\' => NULL,
            \'safe_value\' => \'Billboard Owners\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Our Partners\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'basic_page_with_tabs\',
      \'uid\' => \'227\',
      \'uuid\' => \'cf6f1335-1e46-464f-9022-56976c111025\',
      \'vid\' => NULL,
      \'vuuid\' => \'d5d0be47-4550-4ca3-9ee2-518cf9c1ed1f\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Boca Raton, FL - June 2014 - Vertical Bridge Holdings announces the completion of two acquisitions in the US. The newly acquired assets provide Vertical Bridge with extremely attractive and in-demand telephony and broadcast sites across several states, including Pennsylvania, New Jersey, Delaware, Florida, Texas, and Georgia. “We are very pleased to add such highly valuable locations and assets to our portfolio which will further strengthen our existing relationships with the national wireless operators,” said Alexander L. Gellman, the CEO and Co-Founder of Vertical Bridge.</p>\\r\\n\\r\\n<p>Industry veterans Alex Gellman, Bernard Borghei, and Michael Belski recently announced the formation of Vertical Bridge Holdings, LLC. Vertical Bridge owns, develops, and manages wireless infrastructure assets including cell towers and rooftops throughout the country. Gellman, Borghei, and Belski were partners and part of the executive team of Global Tower Partners, which was acquired by American Tower in October of 2013.</p>\\r\\n\\r\\n<p><strong>Alex Gellman</strong>, CEO and Co-Founder of Vertical Bridge was the President and Chief Operating Officer of Global Tower Partners where he directed all leasing, build-to-suit, operations, human resources and information technology.</p>\\r\\n\\r\\n<p><strong>Bernard Borghei</strong>, Senior Vice President of Operations and Co-Founder of Vertical Bridge was the Senior Vice President of Operations at Global Tower Partners where he was responsible for all aspects of domestic and international site management, engineering, regulatory compliance, and GTP’s build to suit program.</p>\\r\\n\\r\\n<p><strong>Michael (Mike) Belski</strong>, Senior Vice President of Leasing and Development and Co-Founder of Vertical Bridge was the Senior Vice President of Leasing and Marketing at Global Tower Partners where he was responsible for leasing and marketing the GTP Portfolio and securing build-to-suit contracts.</p>\\r\\n\\r\\n<p>The company also announced that the following executives have joined Vertical Bridge:</p>\\r\\n\\r\\n<p><strong>Robert (Bob) Paige</strong> – Bob has joined Vertical Bridge as its Senior Vice President of Mergers and Acquisitions. Prior to joining Vertical Bridge, Bob was with Brown Brothers Harriman for 8 years specializing in mergers and acquisitions and financial advisory services for companies in the telecommunications industry with a specific focus on the wireline and wireless sector. Previously, Robert served as the Managing Director at Falkenberg Capital Corporation where he completed over 50 transactions for telecommunications companies. Robert began his telecom career at Nortel Networks. He graduated from Franklin and Marshall College and received his MBA from the Cox School of Southern Methodist University.</p>\\r\\n\\r\\n<p><strong>Daniel Marinberg</strong> – Dan has joined Vertical Bridge as its Vice President and General Counsel. Prior to joining Vertical Bridge Dan was a real estate partner in the Miami office of the top international law firm Greenberg Traurig. During his 10 years at Greenberg, he handled virtually all aspects of sophisticated real estate transactions, including acquisitions and dispositions of commercial real estate, financings, leasing, development, and joint venture structuring for individual properties and multi-asset portfolios. He also assisted clients with international issues arising from these transactions. Dan received his Juris Doctorate from Boston University School of Law, and his Bachelor of Science in Foreign Service from Georgetown University. He speaks English, Russian, French, and Spanish. He is the recipient of multiple awards such as Rising Star, Super Lawyers Magazine and was a finalist for the Daily Business Review’s Top Dealmaker of The Year.</p>\\r\\n\\r\\n<p><strong>Johnny Crawford</strong> – Johnny has joined Vertical Bridge as its Vice President of Development. Before joining Vertical Bridge, Johnny was the Vice President of Business Development, Network Services at SBA where he was responsible for sales to SBA’s national customers. Prior to joining SBA, Johnny was the Vice President of Engineering and Operations for Airgate PCS, a Sprint PCS affiliate. Prior to Airgate, Johnny worked for Sprint for 9 years in various engineering capacities, including as the Director of Engineering and Operations, where he launched one of the first PCS markets for Sprint in Milwaukee WI. Johnny also has been the co-owner of Optima Towers, a South Carolina based company that owns towers in the Southeast.</p>\\r\\n\\r\\n<p><strong>Suzanne Docobo</strong> – Suzanne has joined Vertical Bridge as its Vice President and Corporate Controller. Prior to joining Vertical Bridge, Suzanne was the President of Docobo Accounting CPA PA where she was responsible for accounting, payroll, and tax related services for a diverse portfolio of clients. For the past 4 years, she has also served as a tax consultant for Global Tower Partners, responsible for all US tax compliance and planning.</p>\\r\\n\\r\\n<p>From 2007 to 2010, she was the director of Income Tax and Financial Reporting at Global Tower Partners, responsible for financial reporting, budgeting, taxes, due diligence, and assisting IT to develop financial reporting systems. Suzanne has over 15 years of experience in the financial tax arenas in a wide array of industries, specializing in real estate. Suzanne graduated from Florida International University with a Bachelor in Accounting and a Masters in the Science Taxation and also has a CPA license in the state of Florida.</p>\\r\\n\\r\\n<p>“We are excited to have put together this talented and experienced team. The Wireless industry continues to experience unprecedented growth and we are delighted to have the opportunity to start this venture at such exciting times in our industry”, said Alex Gellman.</p>\\r\\n\\r\\n<p><strong>About Vertical Bridge Holdings, LLC.</strong></p>\\r\\n\\r\\n<p>Vertical Bridge Holdings is a privately-owned tower company in the US headquartered in Boca Raton, Florida. The company focuses on owning, operating, and managing telecommunications towers, rooftops, and site locations across the country. For more information please visit <a href=\\"http://www.verticalbridge.com/\\"><u>www.verticalbridge.com</u></a> or call: 561-948-6367.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p>Boca Raton, FL - June 2014 - Vertical Bridge Holdings announces the completion of two acquisitions in the US. The newly acquired assets provide Vertical Bridge with extremely attractive and in-demand telephony and broadcast sites across several states, including Pennsylvania, New Jersey, Delaware, Florida, Texas, and Georgia. “We are very pleased to add such highly valuable locations and assets to our portfolio which will further strengthen our existing relationships with the national wireless operators,” said Alexander L. Gellman, the CEO and Co-Founder of Vertical Bridge.</p>\\n<p>Industry veterans Alex Gellman, Bernard Borghei, and Michael Belski recently announced the formation of Vertical Bridge Holdings, LLC. Vertical Bridge owns, develops, and manages wireless infrastructure assets including cell towers and rooftops throughout the country. Gellman, Borghei, and Belski were partners and part of the executive team of Global Tower Partners, which was acquired by American Tower in October of 2013.</p>\\n<p><strong>Alex Gellman</strong>, CEO and Co-Founder of Vertical Bridge was the President and Chief Operating Officer of Global Tower Partners where he directed all leasing, build-to-suit, operations, human resources and information technology.</p>\\n<p><strong>Bernard Borghei</strong>, Senior Vice President of Operations and Co-Founder of Vertical Bridge was the Senior Vice President of Operations at Global Tower Partners where he was responsible for all aspects of domestic and international site management, engineering, regulatory compliance, and GTP’s build to suit program.</p>\\n<p><strong>Michael (Mike) Belski</strong>, Senior Vice President of Leasing and Development and Co-Founder of Vertical Bridge was the Senior Vice President of Leasing and Marketing at Global Tower Partners where he was responsible for leasing and marketing the GTP Portfolio and securing build-to-suit contracts.</p>\\n<p>The company also announced that the following executives have joined Vertical Bridge:</p>\\n<p><strong>Robert (Bob) Paige</strong> – Bob has joined Vertical Bridge as its Senior Vice President of Mergers and Acquisitions. Prior to joining Vertical Bridge, Bob was with Brown Brothers Harriman for 8 years specializing in mergers and acquisitions and financial advisory services for companies in the telecommunications industry with a specific focus on the wireline and wireless sector. Previously, Robert served as the Managing Director at Falkenberg Capital Corporation where he completed over 50 transactions for telecommunications companies. Robert began his telecom career at Nortel Networks. He graduated from Franklin and Marshall College and received his MBA from the Cox School of Southern Methodist University.</p>\\n<p><strong>Daniel Marinberg</strong> – Dan has joined Vertical Bridge as its Vice President and General Counsel. Prior to joining Vertical Bridge Dan was a real estate partner in the Miami office of the top international law firm Greenberg Traurig. During his 10 years at Greenberg, he handled virtually all aspects of sophisticated real estate transactions, including acquisitions and dispositions of commercial real estate, financings, leasing, development, and joint venture structuring for individual properties and multi-asset portfolios. He also assisted clients with international issues arising from these transactions. Dan received his Juris Doctorate from Boston University School of Law, and his Bachelor of Science in Foreign Service from Georgetown University. He speaks English, Russian, French, and Spanish. He is the recipient of multiple awards such as Rising Star, Super Lawyers Magazine and was a finalist for the Daily Business Review’s Top Dealmaker of The Year.</p>\\n<p><strong>Johnny Crawford</strong> – Johnny has joined Vertical Bridge as its Vice President of Development. Before joining Vertical Bridge, Johnny was the Vice President of Business Development, Network Services at SBA where he was responsible for sales to SBA’s national customers. Prior to joining SBA, Johnny was the Vice President of Engineering and Operations for Airgate PCS, a Sprint PCS affiliate. Prior to Airgate, Johnny worked for Sprint for 9 years in various engineering capacities, including as the Director of Engineering and Operations, where he launched one of the first PCS markets for Sprint in Milwaukee WI. Johnny also has been the co-owner of Optima Towers, a South Carolina based company that owns towers in the Southeast.</p>\\n<p><strong>Suzanne Docobo</strong> – Suzanne has joined Vertical Bridge as its Vice President and Corporate Controller. Prior to joining Vertical Bridge, Suzanne was the President of Docobo Accounting CPA PA where she was responsible for accounting, payroll, and tax related services for a diverse portfolio of clients. For the past 4 years, she has also served as a tax consultant for Global Tower Partners, responsible for all US tax compliance and planning.</p>\\n<p>From 2007 to 2010, she was the director of Income Tax and Financial Reporting at Global Tower Partners, responsible for financial reporting, budgeting, taxes, due diligence, and assisting IT to develop financial reporting systems. Suzanne has over 15 years of experience in the financial tax arenas in a wide array of industries, specializing in real estate. Suzanne graduated from Florida International University with a Bachelor in Accounting and a Masters in the Science Taxation and also has a CPA license in the state of Florida.</p>\\n<p>“We are excited to have put together this talented and experienced team. The Wireless industry continues to experience unprecedented growth and we are delighted to have the opportunity to start this venture at such exciting times in our industry”, said Alex Gellman.</p>\\n<p><strong>About Vertical Bridge Holdings, LLC.</strong></p>\\n<p>Vertical Bridge Holdings is a privately-owned tower company in the US headquartered in Boca Raton, Florida. The company focuses on owning, operating, and managing telecommunications towers, rooftops, and site locations across the country. For more information please visit <a href=\\"http://www.verticalbridge.com/\\"><u>www.verticalbridge.com</u></a> or call: 561-948-6367.</p>\\n ",
            \'safe_summary\' => \'  \',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;}\',
      \'field_date\' => array(),
      \'field_external_link\' => array(),
      \'field_internal_header\' => array(),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'0\',
      \'sticky\' => \'0\',
      \'title\' => \'Vertical Bridge Holdings, LLC, Completes Two Acquisitions in the U.S.\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'press_release\',
      \'uid\' => \'227\',
      \'uuid\' => \'d1fdd8fe-8fb9-46c4-ad06-e27b10c8d74a\',
      \'vid\' => NULL,
      \'vuuid\' => \'c143ec3a-8f54-4f03-8e15-20736733c108\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Omni Nashville Hotel</p>\\r\\n",
            \'summary\' => "<p>Omni Nashville Hotel</p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => " <p>Omni Nashville Hotel</p>\\n ",
            \'safe_summary\' => " <p>Omni Nashville Hotel</p>\\n ",
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'field_event_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'September 21-23, 2016\',
            \'format\' => NULL,
            \'safe_value\' => \'September 21-23, 2016\',
          ),
        ),
      ),
      \'field_event_location\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Nashville, TN\',
            \'format\' => NULL,
            \'safe_value\' => \'Nashville, TN\',
          ),
        ),
      ),
      \'field_internal_header\' => array(),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'NAB and RAB Radio Show\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'events\',
      \'uid\' => \'227\',
      \'uuid\' => \'d376f43b-dd59-46c9-82b5-d559cb95f120\',
      \'vid\' => NULL,
      \'vuuid\' => \'ff8826f8-e27e-46d7-9d14-0b174428ab41\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>At Vertical Bridge, we pride ourselves on being a true partner for wireless operators and broadcasters. We do not have a complicated chain of command for approvals. We work quickly and efficiently so we can offer flexible programs that put the needs of wireless operators and broadcasters first. The leaders of our company are hands-on managers with unmatched knowledge and experience in the industry. We have created an organization with the depth and breadth of talent and experience to create a market leader in the tower and telecom sites space<b>.</b></p>\\r\\n\\r\\n<p>This mindset has helped us grow exponentially since we launched Vertical Bridge less than 3 years ago, and it continues to be one of the key contributors to our success each day. Wireless operators and broadcasters come to us for a seamless user experience, and we give them a reliable, friendly and knowledgeable team on the cutting edge of wireless communications infrastructure.&nbsp;</p>\\r\\n\\r\\n<p>&nbsp;</p>\\r\\n\\r\\n<div class=\\"wwd\\"><a href=\\"/what-we-do\\"><img alt=\\"\\" src=\\"/sites/default/files/what-we-do_2.jpg\\" style=\\"width: 82px; height: 82px; text-align: center;\\" /></a><br />\\r\\n<strong><a href=\\"/what-we-do\\" style=\\"text-align:center\\">What We Do</a></strong></div>\\r\\n\\r\\n<div class=\\"wwd\\"><a href=\\"our-clients\\"><img alt=\\"\\" src=\\"/sites/default/files/our-clients_2.jpg\\" style=\\"width: 82px; height: 82px; text-align: center;\\" /></a><br />\\r\\n<a href=\\"/our-clients\\"><strong>Our Tenants</strong></a></div>\\r\\n\\r\\n<div class=\\"wwd\\"><a href=\\"our-partners\\"><img alt=\\"\\" src=\\"/sites/default/files/our-partners_2.jpg\\" style=\\"width: 82px; height: 82px; text-align: center;\\" /></a><br />\\r\\n<strong><a href=\\"/our-partners\\" style=\\"text-align:center\\">Our Partners</a></strong></div>\\r\\n\\r\\n<div style=\\"clear:both\\">&nbsp;</div>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p>At Vertical Bridge, we pride ourselves on being a true partner for wireless operators and broadcasters. We do not have a complicated chain of command for approvals. We work quickly and efficiently so we can offer flexible programs that put the needs of wireless operators and broadcasters first. The leaders of our company are hands-on managers with unmatched knowledge and experience in the industry. We have created an organization with the depth and breadth of talent and experience to create a market leader in the tower and telecom sites space<b>.</b></p>\\n<p>This mindset has helped us grow exponentially since we launched Vertical Bridge less than 3 years ago, and it continues to be one of the key contributors to our success each day. Wireless operators and broadcasters come to us for a seamless user experience, and we give them a reliable, friendly and knowledgeable team on the cutting edge of wireless communications infrastructure. </p>\\n<p> </p>\\n<div class=\\"wwd\\"><a href=\\"/what-we-do\\"><img alt=\\"\\" src=\\"/sites/default/files/what-we-do_2.jpg\\" style=\\"width: 82px; height: 82px; text-align: center;\\" /></a><br /><strong><a href=\\"/what-we-do\\" style=\\"text-align:center\\">What We Do</a></strong></div>\\n<div class=\\"wwd\\"><a href=\\"our-clients\\"><img alt=\\"\\" src=\\"/sites/default/files/our-clients_2.jpg\\" style=\\"width: 82px; height: 82px; text-align: center;\\" /></a><br /><a href=\\"/our-clients\\"><strong>Our Tenants</strong></a></div>\\n<div class=\\"wwd\\"><a href=\\"our-partners\\"><img alt=\\"\\" src=\\"/sites/default/files/our-partners_2.jpg\\" style=\\"width: 82px; height: 82px; text-align: center;\\" /></a><br /><strong><a href=\\"/our-partners\\" style=\\"text-align:center\\">Our Partners</a></strong></div>\\n<div style=\\"clear:both\\"> </div>\\n ",
            \'safe_summary\' => \'  \',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'field_bottom_logos\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0\',
          ),
        ),
      ),
      \'field_cta_button\' => array(
        \'und\' => array(
          array(
            \'url\' => \'contact-us\',
            \'title\' => \'CLICK HERE\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_cta_content\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Contact Us Today to Experience the Vertical Bridge difference.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p>Contact Us Today to Experience the Vertical Bridge difference.</p>\\n ",
            \'safe_summary\' => \'  \',
          ),
        ),
      ),
      \'field_internal_header\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'236\',
            \'uid\' => \'227\',
            \'filename\' => \'Vertical-Bridge_What-We-Do.jpg\',
            \'uri\' => \'public://Vertical-Bridge_What-We-Do_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'393163\',
            \'status\' => \'1\',
            \'timestamp\' => \'1463688122\',
            \'type\' => \'image\',
            \'uuid\' => \'34ba7274-43af-4af9-b0c3-08d563e9a4e8\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'1024\',
              \'height\' => \'242\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'1024\',
            \'height\' => \'242\',
          ),
        ),
      ),
      \'field_logos\' => array(),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Our Work\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'basic_page_with_images\',
      \'uid\' => \'227\',
      \'uuid\' => \'d5ff298e-c098-457a-947d-dc482bab48ef\',
      \'vid\' => NULL,
      \'vuuid\' => \'c02c7197-3a44-4d28-8e9d-d93467cc7e55\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Vertical Bridge\'s expedited and efficient approach is best illustrated by our co-location process. We deliver, and we do it fast. That’s why telecommunications customers come back again and again. We value our long term relationships with our telecommunications tenants.&nbsp;</p>\\r\\n\\r\\n<center><span class=\\"button standard\\"><a href=\\"/sites/default/files/VB%20Collo%20App%20Form%205-14-2015%20final%20form.pdf\\" target=\\"_blank\\">DOWNLOAD A BROADband Tenant&nbsp;APPLICATION</a></span><a href=\\"/sites/default/files/Broadcast%20VB%20Colo%20App_V42816.pdf\\" target=\\"_blank\\"><span class=\\"button standard\\">DOWNLOAD A BROADCAST Tenant APPLICATION</span></a></center>\\r\\n\\r\\n<p>&nbsp;</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p>Vertical Bridge\'s expedited and efficient approach is best illustrated by our co-location process. We deliver, and we do it fast. That’s why telecommunications customers come back again and again. We value our long term relationships with our telecommunications tenants. </p>\\n<p></p><center><span class=\\"button standard\\"><a href=\\"/sites/default/files/VB%20Collo%20App%20Form%205-14-2015%20final%20form.pdf\\" target=\\"_blank\\">DOWNLOAD A BROADband Tenant APPLICATION</a></span><a href=\\"/sites/default/files/Broadcast%20VB%20Colo%20App_V42816.pdf\\" target=\\"_blank\\"><span class=\\"button standard\\">DOWNLOAD A BROADCAST Tenant APPLICATION</span></a></center>\\n<p> </p>\\n ",
            \'safe_summary\' => \'  \',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'field_cta_button\' => array(),
      \'field_cta_content\' => array(),
      \'field_internal_header\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'240\',
            \'uid\' => \'227\',
            \'filename\' => \'Vertical-Bridge_Work-With-Us2.jpg\',
            \'uri\' => \'public://Vertical-Bridge_Work-With-Us2.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'126992\',
            \'status\' => \'1\',
            \'timestamp\' => \'1464096736\',
            \'type\' => \'image\',
            \'uuid\' => \'3e596c29-4783-40cd-89e4-dff7cdb16295\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'1024\',
              \'height\' => \'242\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'1024\',
            \'height\' => \'242\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Co-location Application\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'page\',
      \'uid\' => \'227\',
      \'uuid\' => \'da483458-076b-4c44-b744-e41c8c5b1d2c\',
      \'vid\' => NULL,
      \'vuuid\' => \'526569cb-e2a2-4b15-88da-5d57153f5d99\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Boca Raton, FL - July 2014 - Vertical Bridge Holdings, LLC announced the completion of four more acquisitions in the US. The majority of these newly acquired assets were built by proven tower developers who are now partnering with Vertical Bridge to build dozens of additional towers in the Eastern US over a multi-year period. The towers are all anchored by investment grade carriers and each tower has the capacity to add at least three additional tenants. “We continue to expand our tower portfolio with high capacity assets that have broadband tenants, while securing our future pipeline with attractive assets in high-demand locations. All of the sites in our pipeline are currently under development and will be completed over the next 18 months. We are thrilled that experienced and successful developers continue to choose to partner with Vertical Bridge for their development pipeline,” said Alexander L. Gellman, the CEO and Co-Founder of Vertical Bridge.</p>\\r\\n\\r\\n<p><strong>About Vertical Bridge Holdings, LLC. </strong></p>\\r\\n\\r\\n<p>Vertical Bridge Holdings is a privately-owned tower company in the US headquartered in Boca Raton, Florida. The company focuses on owning, operating, and managing telecommunications towers, rooftops, and site locations across the country. For more information please visit www.verticalbridge.com or call: 561-948-6367.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p>Boca Raton, FL - July 2014 - Vertical Bridge Holdings, LLC announced the completion of four more acquisitions in the US. The majority of these newly acquired assets were built by proven tower developers who are now partnering with Vertical Bridge to build dozens of additional towers in the Eastern US over a multi-year period. The towers are all anchored by investment grade carriers and each tower has the capacity to add at least three additional tenants. “We continue to expand our tower portfolio with high capacity assets that have broadband tenants, while securing our future pipeline with attractive assets in high-demand locations. All of the sites in our pipeline are currently under development and will be completed over the next 18 months. We are thrilled that experienced and successful developers continue to choose to partner with Vertical Bridge for their development pipeline,” said Alexander L. Gellman, the CEO and Co-Founder of Vertical Bridge.</p>\\n<p><strong>About Vertical Bridge Holdings, LLC. </strong></p>\\n<p>Vertical Bridge Holdings is a privately-owned tower company in the US headquartered in Boca Raton, Florida. The company focuses on owning, operating, and managing telecommunications towers, rooftops, and site locations across the country. For more information please visit <a href=\\"http://www.verticalbridge.com\\">www.verticalbridge.com</a> or call: 561-948-6367.</p>\\n ",
            \'safe_summary\' => \'  \',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;}\',
      \'field_date\' => array(),
      \'field_external_link\' => array(),
      \'field_internal_header\' => array(),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'0\',
      \'sticky\' => \'0\',
      \'title\' => \'Vertical Bridge Holdings, LLC, Expands Its Portfolio with the Completion of Four More Acquisitions in the U.S.\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'press_release\',
      \'uid\' => \'227\',
      \'uuid\' => \'df878384-6771-4578-aec9-b023b9cb5e3c\',
      \'vid\' => NULL,
      \'vuuid\' => \'53856e54-cee9-4897-ae2f-81ac4c39f480\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><strong>CHICAGO, (December 4, 2014)</strong> — United States Cellular Corporation (NYSE: USM) today announced that it has entered into a definitive agreement with Vertical Bridge Holdings, LLC to sell 595 towers for approximately $159 million. The transaction is expected to close in the first quarter of 2015.</p>\\r\\n\\r\\n<p>“We are very pleased to announce this transaction,” said Kenneth R. Meyers, U.S. Cellular president and CEO. “We will use the proceeds from the sale of these non-strategic assets to invest in other long-term investments that position U.S. Cellular for future growth opportunities.”</p>\\r\\n\\r\\n<p>“Vertical Bridge is excited to acquire this portfolio of core towers in large metropolitan markets,” said Alexander L. Gellman, CEO of Vertical Bridge. “Many of these sites are in locations that would be very difficult to replace. We are also happy to work again with a quality counterparty like U.S. Cellular.”</p>\\r\\n\\r\\n<p>Wells Fargo Securities, LLC and TD Securities (USA) LLC served as financial advisors to U.S. Cellular on this transaction.</p>\\r\\n\\r\\n<p><strong>About U.S. Cellular</strong><br />\\r\\nUnited States Cellular Corporation provides a comprehensive range of wireless products and services, excellent customer support, and a high-quality network to 4.7 million customers in 23 states. The Chicago-based company had 6,500 full- and part-time associates as of Sept. 30, 2014. At the end of the third quarter of 2014, Telephone and Data Systems, Inc. owned 84 percent of U.S. Cellular. For more information about U.S. Cellular, visit uscellular.com.</p>\\r\\n\\r\\n<p>Visit investors.uscellular.com for comprehensive financial information, including earnings releases, quarterly and annual filings, shareholder information, and more. U.S. Cellular: www.uscellular.com</p>\\r\\n\\r\\n<p><strong>About Vertical Bridge Holdings, LLC </strong><br />\\r\\nVertical Bridge Holdings is a privately-owned real estate investment trust focused on the ownership of wireless communication towers in the U.S. The company owns, operates and manages telecommunications towers, rooftops, and site locations across the country. Vertical Bridge was founded in 2014 by Digital Bridge Holdings, LLC as well as certain key executives from Global Tower Partners and is headquartered in Boca Raton, Florida. For more information, please visit www.verticalbridge.com or call Traci Clancy at 561-948-6367.</p>\\r\\n\\r\\n<p><strong>Media Contact </strong><br />\\r\\nJane McCahon, Vice President, Corporate Relations and Corporate Secretary<br />\\r\\n312-592-5379<br />\\r\\njane.mccahon@tdsinc.com</p>\\r\\n\\r\\n<p>Julie Mathews, Investor Relations Manager<br />\\r\\n312-592-5341<br />\\r\\njulie.mathews@tdsinc.com</p>\\r\\n\\r\\n<p><strong>Source </strong><br />\\r\\nU.S. Cellular</p>\\r\\n",
            \'summary\' => "<p>CHICAGO, (December 4, 2014) — United States Cellular Corporation (NYSE: USM) today announced that it has entered into a definitive agreement with Vertical Bridge Holdings, LLC to sell 595 towers for approximately $159 million. The transaction is expected to close in the first quarter of 2015.</p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => " <p><strong>CHICAGO, (December 4, 2014)</strong> — United States Cellular Corporation (NYSE: USM) today announced that it has entered into a definitive agreement with Vertical Bridge Holdings, LLC to sell 595 towers for approximately $159 million. The transaction is expected to close in the first quarter of 2015.</p>\\n<p>“We are very pleased to announce this transaction,” said Kenneth R. Meyers, U.S. Cellular president and CEO. “We will use the proceeds from the sale of these non-strategic assets to invest in other long-term investments that position U.S. Cellular for future growth opportunities.”</p>\\n<p>“Vertical Bridge is excited to acquire this portfolio of core towers in large metropolitan markets,” said Alexander L. Gellman, CEO of Vertical Bridge. “Many of these sites are in locations that would be very difficult to replace. We are also happy to work again with a quality counterparty like U.S. Cellular.”</p>\\n<p>Wells Fargo Securities, LLC and TD Securities (USA) LLC served as financial advisors to U.S. Cellular on this transaction.</p>\\n<p><strong>About U.S. Cellular</strong><br />\\nUnited States Cellular Corporation provides a comprehensive range of wireless products and services, excellent customer support, and a high-quality network to 4.7 million customers in 23 states. The Chicago-based company had 6,500 full- and part-time associates as of Sept. 30, 2014. At the end of the third quarter of 2014, Telephone and Data Systems, Inc. owned 84 percent of U.S. Cellular. For more information about U.S. Cellular, visit uscellular.com.</p>\\n<p>Visit investors.uscellular.com for comprehensive financial information, including earnings releases, quarterly and annual filings, shareholder information, and more. U.S. Cellular: <a href=\\"http://www.uscellular.com\\">www.uscellular.com</a></p>\\n<p><strong>About Vertical Bridge Holdings, LLC </strong><br />\\nVertical Bridge Holdings is a privately-owned real estate investment trust focused on the ownership of wireless communication towers in the U.S. The company owns, operates and manages telecommunications towers, rooftops, and site locations across the country. Vertical Bridge was founded in 2014 by Digital Bridge Holdings, LLC as well as certain key executives from Global Tower Partners and is headquartered in Boca Raton, Florida. For more information, please visit <a href=\\"http://www.verticalbridge.com\\">www.verticalbridge.com</a> or call Traci Clancy at 561-948-6367.</p>\\n<p><strong>Media Contact </strong><br />\\nJane McCahon, Vice President, Corporate Relations and Corporate Secretary<br />\\n312-592-5379<br /><a href=\\"mailto:jane.mccahon@tdsinc.com\\">jane.mccahon@tdsinc.com</a></p>\\n<p>Julie Mathews, Investor Relations Manager<br />\\n312-592-5341<br /><a href=\\"mailto:julie.mathews@tdsinc.com\\">julie.mathews@tdsinc.com</a></p>\\n<p><strong>Source </strong><br />\\nU.S. Cellular</p>\\n ",
            \'safe_summary\' => " <p>CHICAGO, (December 4, 2014) — United States Cellular Corporation (NYSE: USM) today announced that it has entered into a definitive agreement with Vertical Bridge Holdings, LLC to sell 595 towers for approximately $159 million. The transaction is expected to close in the first quarter of 2015.</p>\\n ",
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'field_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-12-11 19:15:00\',
            \'timezone\' => \'America/New_York\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_internal_header\' => array(),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'U.S. Cellular Announces Sale of Towers in Divested Markets\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'press\',
      \'uid\' => \'227\',
      \'uuid\' => \'e1f16779-bede-426d-9a63-eae0fa3938c4\',
      \'vid\' => NULL,
      \'vuuid\' => \'3a9b67bd-a76a-40ed-98b2-c769a0b00e24\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<ul>\\r\\n\\t<li>Acquisitions marks tenth transaction in less than three months</li>\\r\\n\\t<li>Industry veteran Jim McCulloch to lead real estate division</li>\\r\\n</ul>\\r\\n\\r\\n<p><strong>Boca Raton, FL., August, 2014</strong> - Vertical Bridge Holdings, LLC., a privately owned tower company in the U.S., today announced that it has completed its acquisition of four tower portfolios.&nbsp; The portfolios further strengthen Vertical Bridge’s footprint in key regions of the Eastern United States.</p>\\r\\n\\r\\n<p>“We are pleased to announce another acquisition of tower portfolios,” said Alexander L. Gellman, CEO and Co-Founder, Vertical Bridge. “The Eastern U.S. is an attractive market for towers given its heavily congested metropolitan areas and the need for cell site densification. We have acquired four more portfolios of strategically located towers.&nbsp; We expect to continue to build upon this acquisition momentum and see a number of opportunities as we continue to pursue strategic portfolio acquisitions,” said Mr. Gellman.</p>\\r\\n\\r\\n<p>Vertical Bridge now owns or has exclusive leasing rights to 320 towers and rooftops across the U.S.</p>\\r\\n\\r\\n<p>Vertical Bridge also announced today the appointment of telecom industry veteran, Jim McCulloch, who has joined Vertical Bridge as Vice President of its Real Estate division. In this role, Mr. McCullough will lead the development and expansion of Vertical Bridge’s real estate portfolio.&nbsp; With over 20 years of experience, Mr. McCulloch has enjoyed a successful career in telecommunications and technology. Mr. McCulloch was most recently at Global Tower Partners (GTP), where he served as the Vice President of Real Estate responsible for GTP’s Real Estate Department.&nbsp; In that role he helped to develop GTP’s real estate portfolio, and expand existing landlord relationships. Prior to GTP, he was a partner in DGP Development, a leading provider of Distributed Antenna Systems (DAS) to hotels and sports stadiums. Mr. McCulloch previously served as Vice President of Information Technology for Destination Hotels and Resorts.</p>\\r\\n\\r\\n<p>“We are delighted that an experienced executive such as Jim has joined our team to lead our real estate division, which is a key focus area of our business strategy and growth at Vertical Bridge,” added Mr. Gellman.</p>\\r\\n\\r\\n<p><strong>About Vertical Bridge Holdings, LLC.</strong></p>\\r\\n\\r\\n<p>Vertical Bridge Holdings is a privately-owned tower company in the US headquartered in Boca Raton, Florida. The company focuses on owning, operating, and managing telecommunications towers, rooftops, and site locations across the country. Vertical Bridge was founded in 2014 by Digital Bridge Holdings, LLC as well as certain key executives from Global Tower Partners.&nbsp; For more information please visit <a href=\\"http://www.verticalbridge.com/\\"><u>www.verticalbridge.com</u></a> or call: Traci Clancy at 561-948-6367.</p>\\r\\n\\r\\n<p><strong>About Digital Bridge Holdings, LLC.</strong></p>\\r\\n\\r\\n<p>Digital Bridge Holdings, is a communications infrastructure platform based in Boca Raton, Florida. It was formed in 2013 through a partnership between Ben Jenkins (formerly of The Blackstone Group) and Marc Ganzi (former founder and CEO of Global Tower Partners). Digital Bridge owns interests in a broad range of communications infrastructure companies. It is dedicated to long-term value creation through the active management of its companies and strong alignment with its investor partners. Digital Bridge manages investments on behalf of institutional, corporate, endowment and family offices around the world.&nbsp; More information may be found at <a href=\\"http://www.digitalbridgellc.com/\\"><u>www.digitalbridgellc.com</u></a>.</p>\\r\\n",
            \'summary\' => "<p><strong>Boca Raton, FL., August, 2014</strong> - Vertical Bridge Holdings, LLC., a privately owned tower company in the U.S., today announced that it has completed its acquisition of four tower portfolios.&nbsp; The portfolios further strengthen Vertical Bridge’s footprint in key regions of the Eastern United States.</p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => " <ul><li>Acquisitions marks tenth transaction in less than three months</li>\\n<li>Industry veteran Jim McCulloch to lead real estate division</li>\\n</ul><p><strong>Boca Raton, FL., August, 2014</strong> - Vertical Bridge Holdings, LLC., a privately owned tower company in the U.S., today announced that it has completed its acquisition of four tower portfolios.  The portfolios further strengthen Vertical Bridge’s footprint in key regions of the Eastern United States.</p>\\n<p>“We are pleased to announce another acquisition of tower portfolios,” said Alexander L. Gellman, CEO and Co-Founder, Vertical Bridge. “The Eastern U.S. is an attractive market for towers given its heavily congested metropolitan areas and the need for cell site densification. We have acquired four more portfolios of strategically located towers.  We expect to continue to build upon this acquisition momentum and see a number of opportunities as we continue to pursue strategic portfolio acquisitions,” said Mr. Gellman.</p>\\n<p>Vertical Bridge now owns or has exclusive leasing rights to 320 towers and rooftops across the U.S.</p>\\n<p>Vertical Bridge also announced today the appointment of telecom industry veteran, Jim McCulloch, who has joined Vertical Bridge as Vice President of its Real Estate division. In this role, Mr. McCullough will lead the development and expansion of Vertical Bridge’s real estate portfolio.  With over 20 years of experience, Mr. McCulloch has enjoyed a successful career in telecommunications and technology. Mr. McCulloch was most recently at Global Tower Partners (GTP), where he served as the Vice President of Real Estate responsible for GTP’s Real Estate Department.  In that role he helped to develop GTP’s real estate portfolio, and expand existing landlord relationships. Prior to GTP, he was a partner in DGP Development, a leading provider of Distributed Antenna Systems (DAS) to hotels and sports stadiums. Mr. McCulloch previously served as Vice President of Information Technology for Destination Hotels and Resorts.</p>\\n<p>“We are delighted that an experienced executive such as Jim has joined our team to lead our real estate division, which is a key focus area of our business strategy and growth at Vertical Bridge,” added Mr. Gellman.</p>\\n<p><strong>About Vertical Bridge Holdings, LLC.</strong></p>\\n<p>Vertical Bridge Holdings is a privately-owned tower company in the US headquartered in Boca Raton, Florida. The company focuses on owning, operating, and managing telecommunications towers, rooftops, and site locations across the country. Vertical Bridge was founded in 2014 by Digital Bridge Holdings, LLC as well as certain key executives from Global Tower Partners.  For more information please visit <a href=\\"http://www.verticalbridge.com/\\"><u>www.verticalbridge.com</u></a> or call: Traci Clancy at 561-948-6367.</p>\\n<p><strong>About Digital Bridge Holdings, LLC.</strong></p>\\n<p>Digital Bridge Holdings, is a communications infrastructure platform based in Boca Raton, Florida. It was formed in 2013 through a partnership between Ben Jenkins (formerly of The Blackstone Group) and Marc Ganzi (former founder and CEO of Global Tower Partners). Digital Bridge owns interests in a broad range of communications infrastructure companies. It is dedicated to long-term value creation through the active management of its companies and strong alignment with its investor partners. Digital Bridge manages investments on behalf of institutional, corporate, endowment and family offices around the world.  More information may be found at <a href=\\"http://www.digitalbridgellc.com/\\"><u>www.digitalbridgellc.com</u></a>.</p>\\n ",
            \'safe_summary\' => " <p><strong>Boca Raton, FL., August, 2014</strong> - Vertical Bridge Holdings, LLC., a privately owned tower company in the U.S., today announced that it has completed its acquisition of four tower portfolios.  The portfolios further strengthen Vertical Bridge’s footprint in key regions of the Eastern United States.</p>\\n ",
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'field_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-08-05 20:30:00\',
            \'timezone\' => \'America/New_York\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_internal_header\' => array(),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Vertical Bridge Holdings, LLC. Continues Portfolio Expansion; Appoints New Head of Real Estate\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'press\',
      \'uid\' => \'227\',
      \'uuid\' => \'e517e618-c016-4f71-8bb5-d2418e2199ac\',
      \'vid\' => NULL,
      \'vuuid\' => \'62688a7b-aa9d-40c4-88dd-ce16cba0cd6a\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><em>Portfolio Includes Nearly 200 Towers on More Than 100 Sites in Key Markets&nbsp;</em></p>\\r\\n\\r\\n<p><strong>BOCA RATON, FL – March 2, 2016</strong> – Vertical Bridge, the largest private owner and manager of wireless communication infrastructure in the U.S., today announced that it has completed the acquisition of nearly 200 radio broadcast towers in a two part transaction with Alpha Media. The portfolio of assets acquired includes 64 sites from Alpha Media’s existing portfolio and 49 sites which Alpha Media recently acquired as part of its purchase of radio stations from Digity, LLC. Financial terms of the transaction were not disclosed.&nbsp;</p>\\r\\n\\r\\n<p>With this acquisition, Vertical Bridge now has a total portfolio of over 42,000 towers, rooftop locations, billboards, utility infrastructure and other site locations that it owns, operates or manages. The company’s geographic presence in key markets across the U.S. has also expanded significantly.&nbsp;</p>\\r\\n\\r\\n<p>“We are thrilled to partner with Larry Wilson and Alpha Media, which owns and operates an admirable portfolio of assets in prime locations across top markets,” said Alex Gellman, Chief Executive Officer of Vertical Bridge. “It would be challenging to site these towers today, and we feel fortunate to expand our portfolio into these areas and further strengthen Vertical Bridge’s offering to our partners. Since these towers have not yet been marketed to wireless carriers, they offer attractive new collocation opportunities. Our broadcast partners will also benefit from the height of these towers as they will provide good relocation options relative to the 600MHz auction repacking process.”&nbsp;</p>\\r\\n\\r\\n<p>Alpha Media Chairman, Larry Wilson commented on the announcement, “We could not have done this without the hard work and determination from the great team at Vertical Bridge. We’re proud to call them a partner of the Alpha Media family.”&nbsp;</p>\\r\\n\\r\\n<p>George Reed of Media Services Group is the broker for Alpha Media.&nbsp;</p>\\r\\n\\r\\n<p><strong>About Vertical Bridge&nbsp;</strong><br />\\r\\n<span>Vertical Bridge is the largest private owner and manager of wireless communication infrastructure in the United States. The company owns, operates and manages over 42,000 tower, rooftop, billboard, utility attachment and other site locations in support of all wireless network deployments. Based in Boca Raton, Florida, Vertical Bridge was founded in 2014 by key executives from Digital Bridge Holdings, LLC and former senior officers of Global Tower Partners. The senior management team at Vertical Bridge has over 150 years of collective experience in tower infrastructure and related sectors. For more information, please visit http://www.verticalbridge.com.&nbsp;</span></p>\\r\\n\\r\\n<p><strong>About Alpha Media&nbsp;</strong><br />\\r\\nAlpha Media is a radio broadcast media company that is the third largest broadcast tower company in the U.S. Headquartered in Portland, Oregon and formed by veteran radio executive, Larry Wilson, in 2009, Alpha Media owns and operates over 250 radio stations within 53 markets across the United States covering all formats including Top 40, Adult Contemporary, Spanish, Urban, News Talk, Sports, Rock, Country and more. In addition to these radio stations, Alpha Media owns the intimate performance venues, Skype Live Studio in Portland, Oregon and Alamo Lounge in San Antonio, Texas. For more information, please visit www.alphamediausa.com.&nbsp;</p>\\r\\n",
            \'summary\' => "<p>Vertical Bridge has completed the acquisition of 200 radio broadcast towers in a two part transaction with Alpha Media.&nbsp;The portfolio of assets acquired includes 64 sites from Alpha Media’s existing portfolio and 49 sites which Alpha Media recently acquired as part of its purchase of radio stations from Digity, LLC.</p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => " <p><em>Portfolio Includes Nearly 200 Towers on More Than 100 Sites in Key Markets </em></p>\\n<p><strong>BOCA RATON, FL – March 2, 2016</strong> – Vertical Bridge, the largest private owner and manager of wireless communication infrastructure in the U.S., today announced that it has completed the acquisition of nearly 200 radio broadcast towers in a two part transaction with Alpha Media. The portfolio of assets acquired includes 64 sites from Alpha Media’s existing portfolio and 49 sites which Alpha Media recently acquired as part of its purchase of radio stations from Digity, LLC. Financial terms of the transaction were not disclosed. </p>\\n<p>With this acquisition, Vertical Bridge now has a total portfolio of over 42,000 towers, rooftop locations, billboards, utility infrastructure and other site locations that it owns, operates or manages. The company’s geographic presence in key markets across the U.S. has also expanded significantly. </p>\\n<p>“We are thrilled to partner with Larry Wilson and Alpha Media, which owns and operates an admirable portfolio of assets in prime locations across top markets,” said Alex Gellman, Chief Executive Officer of Vertical Bridge. “It would be challenging to site these towers today, and we feel fortunate to expand our portfolio into these areas and further strengthen Vertical Bridge’s offering to our partners. Since these towers have not yet been marketed to wireless carriers, they offer attractive new collocation opportunities. Our broadcast partners will also benefit from the height of these towers as they will provide good relocation options relative to the 600MHz auction repacking process.” </p>\\n<p>Alpha Media Chairman, Larry Wilson commented on the announcement, “We could not have done this without the hard work and determination from the great team at Vertical Bridge. We’re proud to call them a partner of the Alpha Media family.” </p>\\n<p>George Reed of Media Services Group is the broker for Alpha Media. </p>\\n<p><strong>About Vertical Bridge </strong><br /><span>Vertical Bridge is the largest private owner and manager of wireless communication infrastructure in the United States. The company owns, operates and manages over 42,000 tower, rooftop, billboard, utility attachment and other site locations in support of all wireless network deployments. Based in Boca Raton, Florida, Vertical Bridge was founded in 2014 by key executives from Digital Bridge Holdings, LLC and former senior officers of Global Tower Partners. The senior management team at Vertical Bridge has over 150 years of collective experience in tower infrastructure and related sectors. For more information, please visit <a href=\\"http://www.verticalbridge.com. \\">http://www.verticalbridge.com. </a></span></p>\\n<p><strong>About Alpha Media </strong><br />\\nAlpha Media is a radio broadcast media company that is the third largest broadcast tower company in the U.S. Headquartered in Portland, Oregon and formed by veteran radio executive, Larry Wilson, in 2009, Alpha Media owns and operates over 250 radio stations within 53 markets across the United States covering all formats including Top 40, Adult Contemporary, Spanish, Urban, News Talk, Sports, Rock, Country and more. In addition to these radio stations, Alpha Media owns the intimate performance venues, Skype Live Studio in Portland, Oregon and Alamo Lounge in San Antonio, Texas. For more information, please visit <a href=\\"http://www.alphamediausa.com. \\">www.alphamediausa.com. </a></p>\\n ",
            \'safe_summary\' => " <p>Vertical Bridge has completed the acquisition of 200 radio broadcast towers in a two part transaction with Alpha Media. The portfolio of assets acquired includes 64 sites from Alpha Media’s existing portfolio and 49 sites which Alpha Media recently acquired as part of its purchase of radio stations from Digity, LLC.</p>\\n ",
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'field_date\' => array(),
      \'field_external_link\' => array(),
      \'field_internal_header\' => array(),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'0\',
      \'sticky\' => \'0\',
      \'title\' => \'Vertical Bridge Acquires Portfolio of Broadcast Towers from Alpha Media\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'press_release\',
      \'uid\' => \'227\',
      \'uuid\' => \'e985d29f-707c-4500-804c-118b442d64bb\',
      \'vid\' => NULL,
      \'vuuid\' => \'4ce62077-06e9-46a0-9e90-1a2d720cf78a\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'\',
            \'summary\' => "<p><i>RCR Wireless</i>, By Jarad Matula,&nbsp;</p>\\r\\n\\r\\n<p>Vertical Bridge, the largest private owner and manager of communication towers and locations in the United States with more than 45,000 tower, rooftop, billboard, utility attachment and other site locations, locked in another acquisition this week. The company signed a definitive agreement to acquire 275 sites from General Communication’s wholly owned subsidiary Alaska Wireless Network.</p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => \'  \',
            \'safe_summary\' => " <p><i>RCR Wireless</i>, By Jarad Matula, </p>\\n<p>Vertical Bridge, the largest private owner and manager of communication towers and locations in the United States with more than 45,000 tower, rooftop, billboard, utility attachment and other site locations, locked in another acquisition this week. The company signed a definitive agreement to acquire 275 sites from General Communication’s wholly owned subsidiary Alaska Wireless Network.</p>\\n ",
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'field_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2016-05-06 15:45:00\',
            \'timezone\' => \'America/New_York\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_external_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://www.rcrwireless.com/20160506/cell-tower-news/federal-tower-case-consolidation-vertical-bridge-buys-towers-tag8\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_internal_header\' => array(),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => "Vertical Bridge\'s Latest Acquisition",
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'press_release\',
      \'uid\' => \'227\',
      \'uuid\' => \'ec70a949-f512-4b12-b2a1-c5b7de00a5e1\',
      \'vid\' => NULL,
      \'vuuid\' => \'9d027ea9-4189-499d-b190-91c4b87eb0dc\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><em>Vertical Bridge will gain exclusive rights to over 200 towers </em></p>\\r\\n\\r\\n<p><strong>BOCA RATON, FL NOVEMBER 06, 2015</strong>&nbsp;- Vertical Bridge, the largest private owner and manager of wireless communication infrastructure in the U.S., today announced it has closed a transaction to acquire the rights to over 200 wireless communications towers from Nsight Tower Holdings, LLC (“Nsight”), a major telecommunication service provider in the Midwest. Vertical Bridge will have the exclusive rights to lease and operate the portfolio of Nsight towers for a weighted average term of approximately 31 years. Vertical Bridge will also have fixed price purchase options to acquire the towers based on their anticipated fair market values at the end of the lease terms. Financial terms of the private transaction were not disclosed.</p>\\r\\n\\r\\n<p>“Vertical Bridge is very pleased to have earned the opportunity to become a long-term partner with Nsight,” stated Alex Gellman, Chief Executive Officer and Co-Founder of Vertical Bridge. “These unique, high quality, fiber-ready towers are built in prime locations, and Nsight will be the anchor tenant on all of the sites. By acquiring access to this portfolio of concentrated assets, Vertical Bridge will enhance its ability to provide improved regional coverage in Northern Wisconsin while capturing incremental leasing opportunities.”</p>\\r\\n\\r\\n<p>“We view this as an opportune time to transition management and operation of Nsight’s owned tower portfolio to a trusted partner,” said Patrick Riordan, Nsight’s Chief Executive Officer. “We have known and worked extensively with members of Vertical Bridge’s executive team and are comfortable with them as our long-term landlord. Nsight will use the proceeds from this transaction to continue to build out our LTE network and acquire additional spectrum in key markets.”</p>\\r\\n\\r\\n<p>Vertical Bridge now has almost 3,000 owned towers in its portfolio, and over 42,000 total sites. The portfolio is uniquely positioned to capitalize on the nationwide proliferation of advanced mobile communication and broadband services.</p>\\r\\n\\r\\n<p><strong>About Vertical Bridge</strong></p>\\r\\n\\r\\n<p>Vertical Bridge is the largest private owner and manager of wireless communication infrastructure in the United States. The company owns, operates and manages over 42,000 tower, rooftop, billboard, utility attachment and other site locations in support of all wireless network deployments. Based in Boca Raton, Florida, Vertical Bridge was founded in 2014 by key executives from Digital Bridge Holdings, LLC and former senior officers of Global Tower Partners. The senior management team at Vertical Bridge has over 150 years of collective experience in tower infrastructure and related sectors. For more information, please visit http://www.verticalbridge.com.</p>\\r\\n\\r\\n<p><strong>About Nsight</strong></p>\\r\\n\\r\\n<p>Nsight is the parent company of Cellcom, Nsight Telservices and Nsight Tower. The family of companies provides wireless, telecommunication and broadband services to residential and business customers, along with tower erection and maintenance services in Wisconsin and Michigan’s Upper Peninsula.</p>\\r\\n",
            \'summary\' => "<p>Vertical Bridge will gain exclusive rights to over 200 towers Vertical Bridge will have the exclusive rights to lease and operate the portfolio of Nsight towers for a weighted average term of approximately 31 years. Vertical Bridge will also have fixed price purchase options to acquire the towers based on their anticipated fair market values at the end of the lease terms.</p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => " <p><em>Vertical Bridge will gain exclusive rights to over 200 towers </em></p>\\n<p><strong>BOCA RATON, FL NOVEMBER 06, 2015</strong> - Vertical Bridge, the largest private owner and manager of wireless communication infrastructure in the U.S., today announced it has closed a transaction to acquire the rights to over 200 wireless communications towers from Nsight Tower Holdings, LLC (“Nsight”), a major telecommunication service provider in the Midwest. Vertical Bridge will have the exclusive rights to lease and operate the portfolio of Nsight towers for a weighted average term of approximately 31 years. Vertical Bridge will also have fixed price purchase options to acquire the towers based on their anticipated fair market values at the end of the lease terms. Financial terms of the private transaction were not disclosed.</p>\\n<p>“Vertical Bridge is very pleased to have earned the opportunity to become a long-term partner with Nsight,” stated Alex Gellman, Chief Executive Officer and Co-Founder of Vertical Bridge. “These unique, high quality, fiber-ready towers are built in prime locations, and Nsight will be the anchor tenant on all of the sites. By acquiring access to this portfolio of concentrated assets, Vertical Bridge will enhance its ability to provide improved regional coverage in Northern Wisconsin while capturing incremental leasing opportunities.”</p>\\n<p>“We view this as an opportune time to transition management and operation of Nsight’s owned tower portfolio to a trusted partner,” said Patrick Riordan, Nsight’s Chief Executive Officer. “We have known and worked extensively with members of Vertical Bridge’s executive team and are comfortable with them as our long-term landlord. Nsight will use the proceeds from this transaction to continue to build out our LTE network and acquire additional spectrum in key markets.”</p>\\n<p>Vertical Bridge now has almost 3,000 owned towers in its portfolio, and over 42,000 total sites. The portfolio is uniquely positioned to capitalize on the nationwide proliferation of advanced mobile communication and broadband services.</p>\\n<p><strong>About Vertical Bridge</strong></p>\\n<p>Vertical Bridge is the largest private owner and manager of wireless communication infrastructure in the United States. The company owns, operates and manages over 42,000 tower, rooftop, billboard, utility attachment and other site locations in support of all wireless network deployments. Based in Boca Raton, Florida, Vertical Bridge was founded in 2014 by key executives from Digital Bridge Holdings, LLC and former senior officers of Global Tower Partners. The senior management team at Vertical Bridge has over 150 years of collective experience in tower infrastructure and related sectors. For more information, please visit <a href=\\"http://www.verticalbridge.com\\">http://www.verticalbridge.com</a>.</p>\\n<p><strong>About Nsight</strong></p>\\n<p>Nsight is the parent company of Cellcom, Nsight Telservices and Nsight Tower. The family of companies provides wireless, telecommunication and broadband services to residential and business customers, along with tower erection and maintenance services in Wisconsin and Michigan’s Upper Peninsula.</p>\\n ",
            \'safe_summary\' => " <p>Vertical Bridge will gain exclusive rights to over 200 towers Vertical Bridge will have the exclusive rights to lease and operate the portfolio of Nsight towers for a weighted average term of approximately 31 years. Vertical Bridge will also have fixed price purchase options to acquire the towers based on their anticipated fair market values at the end of the lease terms.</p>\\n ",
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'field_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2015-11-09 18:45:00\',
            \'timezone\' => \'America/New_York\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_internal_header\' => array(),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Vertical Bridge Acquires Rights to a Portfolio of Towers from Nsight Tower Holdings\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'press\',
      \'uid\' => \'227\',
      \'uuid\' => \'ecee4697-c176-4c2d-8400-5c2999a2a8d4\',
      \'vid\' => NULL,
      \'vuuid\' => \'e4e7ed73-be22-409f-a114-9876d118d265\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Please contact Bill Maxwell either by email at <strong><a href=\\"mailto:bmaxwell@verticalbridge.com\\">bmaxwell@verticalbridge.com</a></strong> or by calling 419.779.0343.</p>\\r\\n\\r\\n<p>Bill Maxwell<br />\\r\\n<strong>Regional Leasing Manager</strong><br />\\r\\nVertical Bridge Holdings, LLC<br />\\r\\n<span style=\\"font-size: 0.85rem;\\">750 Park of Commerce Drive, Suite 200</span><br />\\r\\n<span style=\\"font-size: 0.85rem;\\">Boca Raton, Florida 33487</span></p>\\r\\n\\r\\n<p><a href=\\"mailto:bmaxwell@verticalbridge.com\\">bmaxwell@verticalbridge.com</a><br />\\r\\nM: 419.779.0343</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p>Please contact Bill Maxwell either by email at <strong><a href=\\"mailto:bmaxwell@verticalbridge.com\\">bmaxwell@verticalbridge.com</a></strong> or by calling 419.779.0343.</p>\\n<p>Bill Maxwell<br /><strong>Regional Leasing Manager</strong><br />\\nVertical Bridge Holdings, LLC<br /><span style=\\"font-size: 0.85rem;\\">750 Park of Commerce Drive, Suite 200</span><br /><span style=\\"font-size: 0.85rem;\\">Boca Raton, Florida 33487</span></p>\\n<p><a href=\\"mailto:bmaxwell@verticalbridge.com\\">bmaxwell@verticalbridge.com</a><br />\\nM: 419.779.0343</p>\\n ",
            \'safe_summary\' => \'  \',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'field_cta_button\' => array(),
      \'field_cta_content\' => array(),
      \'field_internal_header\' => array(),
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'metatags\' => array(
        \'en\' => array(
          \'title\' => array(
            \'value\' => \'Leasing Managers | Vertical Bridge\',
          ),
          \'description\' => array(
            \'value\' => \'\',
          ),
        ),
      ),
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(
        array(
          \'pnid\' => \'2\',
          \'menu_name\' => \'navigation\',
          \'mlid\' => \'652\',
          \'plid\' => \'651\',
          \'link_path\' => \'node/33\',
          \'router_path\' => \'node/%\',
          \'link_title\' => \'Leasing Managers\',
          \'options\' => array(
            \'attributes\' => array(
              \'title\' => \'\',
            ),
          ),
          \'module\' => \'nodehierarchy\',
          \'hidden\' => \'1\',
          \'external\' => \'0\',
          \'has_children\' => \'0\',
          \'expanded\' => \'0\',
          \'weight\' => \'0\',
          \'depth\' => \'2\',
          \'customized\' => \'0\',
          \'p1\' => \'651\',
          \'p2\' => \'652\',
          \'p3\' => \'0\',
          \'p4\' => \'0\',
          \'p5\' => \'0\',
          \'p6\' => \'0\',
          \'p7\' => \'0\',
          \'p8\' => \'0\',
          \'p9\' => \'0\',
          \'updated\' => \'0\',
          \'language\' => \'und\',
          \'i18n_tsid\' => \'0\',
          \'enabled\' => FALSE,
          \'nid\' => \'33\',
        ),
      ),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Leasing Managers\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'page\',
      \'uid\' => \'227\',
      \'uuid\' => \'f0f18c9f-eb93-49a2-bab7-2a0f2bc43393\',
      \'vid\' => NULL,
      \'vuuid\' => \'d24f1829-49ce-4ef2-a93e-4772242a17fb\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><img alt=\\"\\" class=\\"media-image attr__typeof__foaf:Image img__fid__77 img__view_mode__media_large attr__format__media_large\\" src=\\"http://www.verticalbridge.com/sites/default/files/styles/large/public/Jim%20McCulloch%202_2.jpg?itok=5bCycEhU\\" style=\\"width: 170px; height: 246px; float: left; margin-left: 10px; margin-right: 10px;\\" typeof=\\"foaf:Image\\" /></p>\\r\\n\\r\\n<p>Jim McCulloch is the Vice President of Real Estate of Vertical Bridge. McCulloch is responsible for the development and expansion of Vertical Bridge’s real estate portfolio.<br />\\r\\n<br />\\r\\nPrior to joining Vertical Bridge, McCulloch was Vice President of Real Estate for Global Tower Partners (GTP) where he developed the company’s real estate portfolio, and expanded existing landlord relationships.<br />\\r\\n<br />\\r\\nHis experience also includes serving as partner at DGP Development, a leading provider of Distributed Antenna Systems to hotels and sports stadiums and a successful consulting practice advising buyers, sellers, and owners of commercial real estate on a variety of technology and financial matters. Additionally, he was vice president of Information Technology for Destination Hotels and Resorts.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p><img alt=\\"\\" class=\\"media-image attr__typeof__foaf:Image img__fid__77 img__view_mode__media_large attr__format__media_large\\" src=\\"http://www.verticalbridge.com/sites/default/files/styles/large/public/Jim%20McCulloch%202_2.jpg?itok=5bCycEhU\\" style=\\"width: 170px; height: 246px; float: left; margin-left: 10px; margin-right: 10px;\\" typeof=\\"foaf:Image\\" /></p>\\n<p>Jim McCulloch is the Vice President of Real Estate of Vertical Bridge. McCulloch is responsible for the development and expansion of Vertical Bridge’s real estate portfolio.</p>\\n<p>Prior to joining Vertical Bridge, McCulloch was Vice President of Real Estate for Global Tower Partners (GTP) where he developed the company’s real estate portfolio, and expanded existing landlord relationships.</p>\\n<p>His experience also includes serving as partner at DGP Development, a leading provider of Distributed Antenna Systems to hotels and sports stadiums and a successful consulting practice advising buyers, sellers, and owners of commercial real estate on a variety of technology and financial matters. Additionally, he was vice president of Information Technology for Destination Hotels and Resorts.</p>\\n ",
            \'safe_summary\' => \'  \',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;}\',
      \'field_internal_header\' => array(),
      \'field_linkedin\' => array(),
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Jim McCulloch\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'team_member\',
      \'uid\' => \'227\',
      \'uuid\' => \'f36b8a36-055b-4c76-bde7-6d3e5926e71d\',
      \'vid\' => NULL,
      \'vuuid\' => \'2c429fb4-cb9b-49e7-b6be-83b3e4bffdac\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Vertical Bridge partners with billboard owners to generate wireless communications revenue. As the wireless industry evolves, and incorporates small cell technology, billboards are increasingly attractive as antenna locations. VB will ensure your billboards are considered by potential tenant and structure relationships that allow the billboards to generate a high quality wireless revenue stream without impacting core outdoor advertising functions.</p>\\r\\n\\r\\n<p>With wireless site locations dropping in height to 40-80 feet, billboards have an immediate and substantial opportunity. But, at those heights, billboards face significant competition, e.g., telephone poles and municipal structures. Carriers will lease sites with the optimal combination of rent, location and speed of deployment.</p>\\r\\n\\r\\n<p>VB puts your billboards at the front of the carriers’ target lots and will maximize your opportunity in the long run. We also manage all aspects of the process so your employees can stay focused on your core business.</p>\\r\\n\\r\\n<p>For more information, please contact <strong style=\\"font-size: 13.6px;\\"><a href=\\"mailto:cfelder@verticalbridge.com?subject=Vertical%20Bridge%20Web%20Site%20Inquiry%20-%20Billboard%20Owners\\" style=\\"font-size: 13.6px;\\">Chris Felder</a>&nbsp;</strong>at (214) 454-6604, and check out Billboard Insider\'s <strong><a href=\\"http://billboardinsider.com/business/billboard-insider-interview-with-vertical-bridge-ceo-alex-gellman/\\">interview</a></strong> with Alex Gellman to learn more about leasing space on your billobards.&nbsp;</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p>Vertical Bridge partners with billboard owners to generate wireless communications revenue. As the wireless industry evolves, and incorporates small cell technology, billboards are increasingly attractive as antenna locations. VB will ensure your billboards are considered by potential tenant and structure relationships that allow the billboards to generate a high quality wireless revenue stream without impacting core outdoor advertising functions.</p>\\n<p>With wireless site locations dropping in height to 40-80 feet, billboards have an immediate and substantial opportunity. But, at those heights, billboards face significant competition, e.g., telephone poles and municipal structures. Carriers will lease sites with the optimal combination of rent, location and speed of deployment.</p>\\n<p>VB puts your billboards at the front of the carriers’ target lots and will maximize your opportunity in the long run. We also manage all aspects of the process so your employees can stay focused on your core business.</p>\\n<p>For more information, please contact <strong style=\\"font-size: 13.6px;\\"><a href=\\"mailto:cfelder@verticalbridge.com?subject=Vertical%20Bridge%20Web%20Site%20Inquiry%20-%20Billboard%20Owners\\" style=\\"font-size: 13.6px;\\">Chris Felder</a> </strong>at (214) 454-6604, and check out Billboard Insider\'s <strong><a href=\\"http://billboardinsider.com/business/billboard-insider-interview-with-vertical-bridge-ceo-alex-gellman/\\">interview</a></strong> with Alex Gellman to learn more about leasing space on your billobards. </p>\\n ",
            \'safe_summary\' => \'  \',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'field_cta_button\' => array(),
      \'field_cta_content\' => array(),
      \'field_internal_header\' => array(),
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'metatags\' => array(
        \'en\' => array(
          \'title\' => array(
            \'value\' => \'Billboard Owners - Billboard Leasing | Vertical Bridge\',
          ),
          \'description\' => array(
            \'value\' => \'Vertical Bridge has experience and the industry reputation for closing deals on time, for the price envisioned, and with as little hassles as possible to sellers. If you are a billboard owner looking to maximize the value of your billboards, contact us.\',
          ),
        ),
      ),
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(
        array(
          \'pnid\' => \'6\',
          \'menu_name\' => \'navigation\',
          \'mlid\' => \'783\',
          \'plid\' => \'639\',
          \'link_path\' => \'node/15378\',
          \'router_path\' => \'node/%\',
          \'link_title\' => \'Billboard Owners\',
          \'options\' => array(
            \'attributes\' => array(
              \'title\' => \'\',
            ),
          ),
          \'module\' => \'nodehierarchy\',
          \'hidden\' => \'1\',
          \'external\' => \'0\',
          \'has_children\' => \'0\',
          \'expanded\' => \'0\',
          \'weight\' => \'3\',
          \'depth\' => \'2\',
          \'customized\' => \'0\',
          \'p1\' => \'639\',
          \'p2\' => \'783\',
          \'p3\' => \'0\',
          \'p4\' => \'0\',
          \'p5\' => \'0\',
          \'p6\' => \'0\',
          \'p7\' => \'0\',
          \'p8\' => \'0\',
          \'p9\' => \'0\',
          \'updated\' => \'0\',
          \'language\' => \'und\',
          \'i18n_tsid\' => \'0\',
          \'enabled\' => FALSE,
          \'nid\' => \'15378\',
        ),
      ),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Billboard Owners\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'page\',
      \'uid\' => \'227\',
      \'uuid\' => \'f5d04b7f-5162-41a2-a3d1-5851b785bc23\',
      \'vid\' => NULL,
      \'vuuid\' => \'9929e220-93bd-4b51-ac89-4ee11e29d6b4\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'\',
            \'summary\' => "<p>Sun Sentinel, By Paul Owers</p>\\r\\n\\r\\n<p>Vertical Bridge, an owner and manager of cell phone towers, is a privately held firm. And that\'s probably the biggest advantage it has, co-founder Bernard Borghei says.</p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => \'  \',
            \'safe_summary\' => " <p>Sun Sentinel, By Paul Owers</p>\\n<p>Vertical Bridge, an owner and manager of cell phone towers, is a privately held firm. And that\'s probably the biggest advantage it has, co-founder Bernard Borghei says.</p>\\n ",
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'field_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2016-04-29 15:45:00\',
            \'timezone\' => \'America/New_York\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_external_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://www.sun-sentinel.com/business/careers/fl-top-workplaces-vertical-bridge-20160429-story.html\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_internal_header\' => array(),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'The Youngest Top Workplace\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'press_release\',
      \'uid\' => \'227\',
      \'uuid\' => \'f71560fa-00b1-4412-b44f-c95b6524e16c\',
      \'vid\' => NULL,
      \'vuuid\' => \'f5ec0970-4947-499a-a67e-914d4c240a41\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><em>Portfolio of more than 42,000 site locations in support of wireless network deployment in the U.S.</em></p>\\r\\n\\r\\n<p><strong>Boca Raton, FL (PRWEB) January 19, 2016 -</strong> Vertical Bridge, the largest private owner and manager of wireless communication infrastructure in the U.S., today announced it has entered into an agreement to manage and market wireless deployment sites at 250 medical office buildings owned by Welltower Inc. Terms of the transaction were not disclosed.</p>\\r\\n\\r\\n<p>Since January 2015, Vertical Bridge has entered into partnership agreements with leading media and real estate companies such as Hudson Pacific, Love’s, iHeartMedia, Inc., Clear Channel Outdoor Americas, Townsquare Media, CiG Wireless Corp., U.S. Cellular and Nsight Tower Holdings, LLC.</p>\\r\\n\\r\\n<p>Vertical Bridge has a portfolio of more than 42,000 owned and/or managed sites including billboard, tower, rooftop, utility attachments and other site locations. These locations are geographically dispersed across urban, suburban, traffic corridor and rural areas to enable capacity increases for mobile services and enhance the user experience.</p>\\r\\n\\r\\n<p>“The attractive Welltower sites offer numerous possibilities for small cells, macro sites, rooftop installations and some possible tower opportunities,” said Alex Gellman, Chief Executive Officer of Vertical Bridge. “We admire their investment and portfolio strategy, and feel fortunate to partner with them to enhance wireless communication infrastructure in the areas surrounding their properties. We continue to seek opportunities to expand our portfolio, and to help our partners leverage their assets while meeting the evolving needs of today’s mobile, digital and social media consumers.”</p>\\r\\n\\r\\n<p><strong>About Vertical Bridge&nbsp;</strong></p>\\r\\n\\r\\n<p><span style=\\"font-size: 0.85rem;\\">Vertical Bridge is the largest private owner and manager of wireless communication infrastructure in the United States. The company owns, operates and manages over 42,000 tower, rooftop, billboard, utility attachment and other site locations in support of all wireless network deployments. Based in Boca Raton, Florida, Vertical Bridge was founded in 2014 by key executives from Digital Bridge Holdings, LLC and former senior officers of Global Tower Partners. The senior management team at Vertical Bridge has over 150 years of collective experience in tower infrastructure and related sectors. For more information, please visit http://www.verticalbridge.com. </span></p>\\r\\n\\r\\n<p><span style=\\"font-size: 0.85rem;\\"><strong>About Welltower</strong></span></p>\\r\\n\\r\\n<p><span style=\\"font-size: 0.85rem;\\">Welltower Inc., an S&amp;P 500 company headquartered in Toledo, Ohio, is driving the transformation of health care infrastructure. The company invests with leading seniors housing operators, post-acute providers and health systems to fund the real estate infrastructure needed to scale innovative care delivery models and improve people\'s wellness and overall health care experience. Welltower™, a real estate investment trust (REIT), owns more than 1,400 properties in major, high-growth markets in the United States, Canada and the United Kingdom, consisting of seniors housing and post-acute communities and outpatient medical properties. More information is available at http://www.welltower.com.</span></p>\\r\\n",
            \'summary\' => "<p><span style=\\"font-size: 13.6px;\\">Vertical Bridge, the largest private owner and manager of wireless communication infrastructure in the U.S., today announced it has entered into an agreement to manage and market wireless deployment sites at 250 medical office buildings owned by Welltower Inc.</span></p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => " <p><em>Portfolio of more than 42,000 site locations in support of wireless network deployment in the U.S.</em></p>\\n<p><strong>Boca Raton, FL (PRWEB) January 19, 2016 -</strong> Vertical Bridge, the largest private owner and manager of wireless communication infrastructure in the U.S., today announced it has entered into an agreement to manage and market wireless deployment sites at 250 medical office buildings owned by Welltower Inc. Terms of the transaction were not disclosed.</p>\\n<p>Since January 2015, Vertical Bridge has entered into partnership agreements with leading media and real estate companies such as Hudson Pacific, Love’s, iHeartMedia, Inc., Clear Channel Outdoor Americas, Townsquare Media, CiG Wireless Corp., U.S. Cellular and Nsight Tower Holdings, LLC.</p>\\n<p>Vertical Bridge has a portfolio of more than 42,000 owned and/or managed sites including billboard, tower, rooftop, utility attachments and other site locations. These locations are geographically dispersed across urban, suburban, traffic corridor and rural areas to enable capacity increases for mobile services and enhance the user experience.</p>\\n<p>“The attractive Welltower sites offer numerous possibilities for small cells, macro sites, rooftop installations and some possible tower opportunities,” said Alex Gellman, Chief Executive Officer of Vertical Bridge. “We admire their investment and portfolio strategy, and feel fortunate to partner with them to enhance wireless communication infrastructure in the areas surrounding their properties. We continue to seek opportunities to expand our portfolio, and to help our partners leverage their assets while meeting the evolving needs of today’s mobile, digital and social media consumers.”</p>\\n<p><strong>About Vertical Bridge </strong></p>\\n<p><span style=\\"font-size: 0.85rem;\\">Vertical Bridge is the largest private owner and manager of wireless communication infrastructure in the United States. The company owns, operates and manages over 42,000 tower, rooftop, billboard, utility attachment and other site locations in support of all wireless network deployments. Based in Boca Raton, Florida, Vertical Bridge was founded in 2014 by key executives from Digital Bridge Holdings, LLC and former senior officers of Global Tower Partners. The senior management team at Vertical Bridge has over 150 years of collective experience in tower infrastructure and related sectors. For more information, please visit <a href=\\"http://www.verticalbridge.com\\">http://www.verticalbridge.com</a>. </span></p>\\n<p><span style=\\"font-size: 0.85rem;\\"><strong>About Welltower</strong></span></p>\\n<p><span style=\\"font-size: 0.85rem;\\">Welltower Inc., an S&amp;P 500 company headquartered in Toledo, Ohio, is driving the transformation of health care infrastructure. The company invests with leading seniors housing operators, post-acute providers and health systems to fund the real estate infrastructure needed to scale innovative care delivery models and improve people\'s wellness and overall health care experience. Welltower™, a real estate investment trust (REIT), owns more than 1,400 properties in major, high-growth markets in the United States, Canada and the United Kingdom, consisting of seniors housing and post-acute communities and outpatient medical properties. More information is available at <a href=\\"http://www.welltower.com\\">http://www.welltower.com</a>.</span></p>\\n ",
            \'safe_summary\' => " <p><span style=\\"font-size: 13.6px;\\">Vertical Bridge, the largest private owner and manager of wireless communication infrastructure in the U.S., today announced it has entered into an agreement to manage and market wireless deployment sites at 250 medical office buildings owned by Welltower Inc.</span></p>\\n ",
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'field_date\' => array(),
      \'field_external_link\' => array(),
      \'field_internal_header\' => array(),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'0\',
      \'sticky\' => \'0\',
      \'title\' => \'Vertical Bridge Reaches Agreement with Welltower To Add Medical Office Building Sites to Managed Portfolio\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'press_release\',
      \'uid\' => \'227\',
      \'uuid\' => \'f7b0941c-ac76-421b-aa91-2529e055ca9f\',
      \'vid\' => NULL,
      \'vuuid\' => \'972efc47-50fe-41ce-946b-f1672eed36fa\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<ul>\\r\\n\\t<li>Vertical Bridge to market collocation on more than 1,000 existing Conterra Broadband sites.</li>\\r\\n\\t<li>Both companies join forces to develop new turnkey “build-to-haul” towers.</li>\\r\\n</ul>\\r\\n\\r\\n<p>Boca Raton, FL., September, 2014 - Vertical Bridge Holdings and Conterra Ultra Broadband Holdings announced today that Vertical Bridge will have exclusive rights to market collocation opportunities on authorized Conterra infrastructure sites. Conterra owns and operates more than 1,000 communication towers and rooftop locations in 23 states. The two companies also announced the formation of a joint venture that will focus on developing build-to-suit towers and new “build-to-haul” sites that bundle build-to-suit towers and fiber-quality backhaul services to improve wireless carriers’ time to market and operating costs.</p>\\r\\n\\r\\n<p>“Conterra’s fiber quality backhaul solutions provide proven value-add opportunity for our carrier tenants, allowing for quick and efficient access to broadband level of backhaul services on the towers that we will develop with Conterra” said Alexander L. Gellman, CEO and Co-Founder of Vertical Bridge.</p>\\r\\n\\r\\n<p>Stephen R. Leeolou, Chairman and CEO of Conterra, added: “In looking for the right partner to market and fully develop the growth potential of our existing assets and utilizing our best-in-class broadband solutions for new tower builds, we selected the Vertical Bridge team because of their successful and proven track records with these types of opportunities. Their approach and execution capabilities fit the profile of the partner that will enable us to meet our strategic objectives for our existing and future tower locations.”</p>\\r\\n\\r\\n<p><strong>About Vertical Bridge Holdings, LLC. </strong></p>\\r\\n\\r\\n<p>Vertical Bridge Holdings is a privately-owned tower company in the US headquartered in Boca Raton, Florida. The company focuses on owning, operating, and managing telecommunications towers, rooftops, and site locations across the country. Vertical Bridge was founded in 2014 by Digital Bridge Holdings, LLC as well as certain key executives from Global Tower Partners. For more information please visit www.verticalbridge.com or call: Traci Clancy at 561-948-6367</p>\\r\\n\\r\\n<p><strong>About Digital Bridge Holdings, LLC. </strong></p>\\r\\n\\r\\n<p>Digital Bridge Holdings, is a communications infrastructure platform based in Boca Raton, Florida. It was formed in 2013 through a partnership between Ben Jenkins (formerly of The Blackstone Group) and Marc Ganzi (former founder and CEO of Global Tower Partners). Digital Bridge owns interests in a broad range of communications infrastructure companies. It is dedicated to long-term value creation through the active management of its companies and strong alignment with its investor partners. Digital Bridge manages investments on behalf of institutional, corporate, endowment and family offices around the world. More information may be found at www.digitalbridgellc.com.</p>\\r\\n\\r\\n<p><strong>About Conterra</strong></p>\\r\\n\\r\\n<p>Conterra is a nationwide provider of bandwidth infrastructure services, specializing in the design, deployment and operation of customized networks, largely in underserved areas. During the last decade the company has connected thousands of customers in 25 states, bringing high-capacity middle and last-mile services primarily to the wireless carriers, education, healthcare and municipal government sectors. As a result, today Conterra is among the largest and most experienced suburban and rural broadband services providers in the US. For more information about Conterra please visit www.conterra.com</p>\\r\\n",
            \'summary\' => "<p>Boca Raton, FL., September, 2014 - Vertical Bridge Holdings and Conterra Ultra Broadband Holdings announced today that Vertical Bridge will have exclusive rights to market collocation opportunities on authorized Conterra infrastructure sites. Conterra owns and operates more than 1,000 communication towers and rooftop locations in 23 states. The two companies also announced the formation of a joint venture that will focus on developing build-to-suit towers and new “build-to-haul” sites that bundle build-to-suit towers and fiber-quality backhaul services to improve wireless carriers’ time to market and operating costs.</p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => " <ul><li>Vertical Bridge to market collocation on more than 1,000 existing Conterra Broadband sites.</li>\\n<li>Both companies join forces to develop new turnkey “build-to-haul” towers.</li>\\n</ul><p>Boca Raton, FL., September, 2014 - Vertical Bridge Holdings and Conterra Ultra Broadband Holdings announced today that Vertical Bridge will have exclusive rights to market collocation opportunities on authorized Conterra infrastructure sites. Conterra owns and operates more than 1,000 communication towers and rooftop locations in 23 states. The two companies also announced the formation of a joint venture that will focus on developing build-to-suit towers and new “build-to-haul” sites that bundle build-to-suit towers and fiber-quality backhaul services to improve wireless carriers’ time to market and operating costs.</p>\\n<p>“Conterra’s fiber quality backhaul solutions provide proven value-add opportunity for our carrier tenants, allowing for quick and efficient access to broadband level of backhaul services on the towers that we will develop with Conterra” said Alexander L. Gellman, CEO and Co-Founder of Vertical Bridge.</p>\\n<p>Stephen R. Leeolou, Chairman and CEO of Conterra, added: “In looking for the right partner to market and fully develop the growth potential of our existing assets and utilizing our best-in-class broadband solutions for new tower builds, we selected the Vertical Bridge team because of their successful and proven track records with these types of opportunities. Their approach and execution capabilities fit the profile of the partner that will enable us to meet our strategic objectives for our existing and future tower locations.”</p>\\n<p><strong>About Vertical Bridge Holdings, LLC. </strong></p>\\n<p>Vertical Bridge Holdings is a privately-owned tower company in the US headquartered in Boca Raton, Florida. The company focuses on owning, operating, and managing telecommunications towers, rooftops, and site locations across the country. Vertical Bridge was founded in 2014 by Digital Bridge Holdings, LLC as well as certain key executives from Global Tower Partners. For more information please visit <a href=\\"http://www.verticalbridge.com\\">www.verticalbridge.com</a> or call: Traci Clancy at 561-948-6367</p>\\n<p><strong>About Digital Bridge Holdings, LLC. </strong></p>\\n<p>Digital Bridge Holdings, is a communications infrastructure platform based in Boca Raton, Florida. It was formed in 2013 through a partnership between Ben Jenkins (formerly of The Blackstone Group) and Marc Ganzi (former founder and CEO of Global Tower Partners). Digital Bridge owns interests in a broad range of communications infrastructure companies. It is dedicated to long-term value creation through the active management of its companies and strong alignment with its investor partners. Digital Bridge manages investments on behalf of institutional, corporate, endowment and family offices around the world. More information may be found at <a href=\\"http://www.digitalbridgellc.com\\">www.digitalbridgellc.com</a>.</p>\\n<p><strong>About Conterra</strong></p>\\n<p>Conterra is a nationwide provider of bandwidth infrastructure services, specializing in the design, deployment and operation of customized networks, largely in underserved areas. During the last decade the company has connected thousands of customers in 25 states, bringing high-capacity middle and last-mile services primarily to the wireless carriers, education, healthcare and municipal government sectors. As a result, today Conterra is among the largest and most experienced suburban and rural broadband services providers in the US. For more information about Conterra please visit <a href=\\"http://www.conterra.com\\">www.conterra.com</a></p>\\n ",
            \'safe_summary\' => " <p>Boca Raton, FL., September, 2014 - Vertical Bridge Holdings and Conterra Ultra Broadband Holdings announced today that Vertical Bridge will have exclusive rights to market collocation opportunities on authorized Conterra infrastructure sites. Conterra owns and operates more than 1,000 communication towers and rooftop locations in 23 states. The two companies also announced the formation of a joint venture that will focus on developing build-to-suit towers and new “build-to-haul” sites that bundle build-to-suit towers and fiber-quality backhaul services to improve wireless carriers’ time to market and operating costs.</p>\\n ",
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;}\',
      \'field_date\' => array(),
      \'field_external_link\' => array(),
      \'field_internal_header\' => array(),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'0\',
      \'sticky\' => \'0\',
      \'title\' => \'Vertical Bridge Holdings, LLC. and Conterra Ultra Broadband Holdings, Inc. Establish Marketing Agreement and Form Joint Venture For New Tower Development\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'press_release\',
      \'uid\' => \'227\',
      \'uuid\' => \'f7ba2599-9fd9-4a68-b2f7-a6ef014a472a\',
      \'vid\' => NULL,
      \'vuuid\' => \'7b5aa875-dfa2-4282-aa2c-ad83a66e22a7\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><em>Tower Sale Harvests Capital from Non-Strategic Asset</em>s</p>\\r\\n\\r\\n<p><strong>August 5,2015 - Greenwhich, Connecticut -</strong> Townsquare Media, Inc. (NYSE:TSQ) (the “Company”) today announced that it has entered into an agreement to sell 43 towers to a subsidiary of Vertical Bridge Holdings, LLC for approximately $22.8 million in cash, subject to closing adjustments (the “Tower Sale”). The Company will retain ownership of more than 250 towers following the Tower Sale.</p>\\r\\n\\r\\n<p>“We are very excited to complete this transaction which will allow us to unlock capital sequestered in non-strategic tower assets at an attractive valuation level,” commented Townsquare Chairman and Chief Executive Officer Steven Price.</p>\\r\\n\\r\\n<p>The 43 towers being divested are located on 41 sites in 28 markets and presently house antenna which broadcast certain of the Company’s radio stations, together with third party tenants who pay rent for similar space on such towers. For a period of 35 years following the closing, including an initial term of twenty years and three optional five-year renewal periods, the Company will pay $41 of rent per annum ($1 per site per annum) to Vertical Bridge for the right to house its existing antenna on the divested towers. The Company has also entered into an agreement with Vertical Bridge whereby Vertical Bridge will serve as the exclusive marketing agent for the towers retained by the Company. The Tower Sale will reduce the Company’s annual net revenue and Adjusted EBITDA by approximately $1.5 million and $1.3 million, respectively.</p>\\r\\n\\r\\n<p>Alex Gellman, Vertical Bridge Chief Executive Officer commented: “We are excited to be working again with the team at Townsquare Media. With over 250 managed sites and 43 owned towers, this transaction adds over 300 high quality towers in great locations to our growing portfolio of owned and managed towers, including a strong rent roll of third party tenants.”</p>\\r\\n\\r\\n<p><strong>About Townsquare Media, Inc.&nbsp;</strong></p>\\r\\n\\r\\n<p><span style=\\"font-size: 0.85rem;\\">Townsquare Media, Inc. is an integrated and diversified media and entertainment and digital marketing services company that owns and operates market leading radio stations, digital and social properties and live events in small and mid-sized markets across the United States, delivering national scale and expertise to the communities it serves on a local level. The Company owns and operates 310 radio stations, over 325 search engine and mobile-optimized local websites and approximately 500 live events in 66 small and mid-sized U.S. markets, making Townsquare Media the third largest owner of radio stations in the United States by number of radio stations owned. The Company supplements its local offerings with the nationwide reach of our owned, operated and affiliated music and entertainment websites, which, on a combined basis, attracted the largest audience among music focused digital advertising networks as of June 2015 as well as certain large scale live events. For more information, please visit www.townsquaremedia.com. </span></p>\\r\\n\\r\\n<p><strong><span style=\\"font-size: 0.85rem;\\">About Vertical Bridge Holdings, LLC </span></strong></p>\\r\\n\\r\\n<p><span style=\\"font-size: 0.85rem;\\">Vertical Bridge Holdings, LLC is a privately-owned real estate investment trust focused on the ownership of wireless communication towers in the U.S. The company owns, operates and manages telecommunications towers, rooftops, and site locations across the country. Vertical Bridge was founded in 2014 by Digital Bridge Holdings, LLC as well as certain key executives from Global Tower Partners, and is headquartered in Boca Raton, Florida. For more information, please visit www.verticalbridge.com or contact Erica Robertson at: 561-406-4032. </span></p>\\r\\n\\r\\n<p><strong><span style=\\"font-size: 0.85rem;\\">Forward Looking Statements </span></strong></p>\\r\\n\\r\\n<p><span style=\\"font-size: 0.85rem;\\">Statements in this press release that are not historical are forward-looking statements within the meaning of the safe harbor provisions of the U.S. Private Securities Litigation Reform Act of 1995. These forward-looking statements are based upon management’s current beliefs and expectations and are subject to uncertainty and changes in circumstances. They contain words such as “believe,” “intend,” “expect” and “anticipate” and include statements about expectations for the Company’s operations, markets, products, services, financial results and other risk factors discussed in the Company’s filings with the Securities and Exchange Commission (the “SEC”), including under the “Risk Factors” section in the Company’s most recent Form 10-K and other SEC filings. Unless otherwise required by applicable laws, the Company undertakes no obligation to update or revise any forward-looking statements, whether as a result of new information or future developments.</span></p>\\r\\n\\r\\n<p><strong><span style=\\"font-size: 0.85rem;\\">Contacts: </span></strong></p>\\r\\n\\r\\n<p>Vertical Bridge<br />\\r\\n<span style=\\"font-size: 0.85rem;\\">Erica Robertson</span><br />\\r\\n<span style=\\"font-size: 0.85rem;\\">(561) 406-4032</span><br />\\r\\n<span style=\\"font-size: 0.85rem;\\">ERobertson@VerticalBridge.com</span></p>\\r\\n\\r\\n<p><span style=\\"font-size: 0.85rem;\\">Investor Relations</span><br />\\r\\n<span style=\\"font-size: 0.85rem;\\">Townsquare Media, Inc.</span><br />\\r\\n<span style=\\"font-size: 0.85rem;\\">Claire Yenicay (Messner)<br />\\r\\n2</span><span style=\\"font-size: 0.85rem;\\">03-900-5555</span><br />\\r\\n<span style=\\"font-size: 0.85rem;\\">investors@townsquaremedia.com</span></p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p><em>Tower Sale Harvests Capital from Non-Strategic Asset</em>s</p>\\n<p><strong>August 5,2015 - Greenwhich, Connecticut -</strong> Townsquare Media, Inc. (NYSE:TSQ) (the “Company”) today announced that it has entered into an agreement to sell 43 towers to a subsidiary of Vertical Bridge Holdings, LLC for approximately $22.8 million in cash, subject to closing adjustments (the “Tower Sale”). The Company will retain ownership of more than 250 towers following the Tower Sale.</p>\\n<p>“We are very excited to complete this transaction which will allow us to unlock capital sequestered in non-strategic tower assets at an attractive valuation level,” commented Townsquare Chairman and Chief Executive Officer Steven Price.</p>\\n<p>The 43 towers being divested are located on 41 sites in 28 markets and presently house antenna which broadcast certain of the Company’s radio stations, together with third party tenants who pay rent for similar space on such towers. For a period of 35 years following the closing, including an initial term of twenty years and three optional five-year renewal periods, the Company will pay $41 of rent per annum ($1 per site per annum) to Vertical Bridge for the right to house its existing antenna on the divested towers. The Company has also entered into an agreement with Vertical Bridge whereby Vertical Bridge will serve as the exclusive marketing agent for the towers retained by the Company. The Tower Sale will reduce the Company’s annual net revenue and Adjusted EBITDA by approximately $1.5 million and $1.3 million, respectively.</p>\\n<p>Alex Gellman, Vertical Bridge Chief Executive Officer commented: “We are excited to be working again with the team at Townsquare Media. With over 250 managed sites and 43 owned towers, this transaction adds over 300 high quality towers in great locations to our growing portfolio of owned and managed towers, including a strong rent roll of third party tenants.”</p>\\n<p><strong>About Townsquare Media, Inc. </strong></p>\\n<p><span style=\\"font-size: 0.85rem;\\">Townsquare Media, Inc. is an integrated and diversified media and entertainment and digital marketing services company that owns and operates market leading radio stations, digital and social properties and live events in small and mid-sized markets across the United States, delivering national scale and expertise to the communities it serves on a local level. The Company owns and operates 310 radio stations, over 325 search engine and mobile-optimized local websites and approximately 500 live events in 66 small and mid-sized U.S. markets, making Townsquare Media the third largest owner of radio stations in the United States by number of radio stations owned. The Company supplements its local offerings with the nationwide reach of our owned, operated and affiliated music and entertainment websites, which, on a combined basis, attracted the largest audience among music focused digital advertising networks as of June 2015 as well as certain large scale live events. For more information, please visit <a href=\\"http://www.townsquaremedia.com\\">www.townsquaremedia.com</a>. </span></p>\\n<p><strong><span style=\\"font-size: 0.85rem;\\">About Vertical Bridge Holdings, LLC </span></strong></p>\\n<p><span style=\\"font-size: 0.85rem;\\">Vertical Bridge Holdings, LLC is a privately-owned real estate investment trust focused on the ownership of wireless communication towers in the U.S. The company owns, operates and manages telecommunications towers, rooftops, and site locations across the country. Vertical Bridge was founded in 2014 by Digital Bridge Holdings, LLC as well as certain key executives from Global Tower Partners, and is headquartered in Boca Raton, Florida. For more information, please visit <a href=\\"http://www.verticalbridge.com\\">www.verticalbridge.com</a> or contact Erica Robertson at: 561-406-4032. </span></p>\\n<p><strong><span style=\\"font-size: 0.85rem;\\">Forward Looking Statements </span></strong></p>\\n<p><span style=\\"font-size: 0.85rem;\\">Statements in this press release that are not historical are forward-looking statements within the meaning of the safe harbor provisions of the U.S. Private Securities Litigation Reform Act of 1995. These forward-looking statements are based upon management’s current beliefs and expectations and are subject to uncertainty and changes in circumstances. They contain words such as “believe,” “intend,” “expect” and “anticipate” and include statements about expectations for the Company’s operations, markets, products, services, financial results and other risk factors discussed in the Company’s filings with the Securities and Exchange Commission (the “SEC”), including under the “Risk Factors” section in the Company’s most recent Form 10-K and other SEC filings. Unless otherwise required by applicable laws, the Company undertakes no obligation to update or revise any forward-looking statements, whether as a result of new information or future developments.</span></p>\\n<p><strong><span style=\\"font-size: 0.85rem;\\">Contacts: </span></strong></p>\\n<p>Vertical Bridge<br /><span style=\\"font-size: 0.85rem;\\">Erica Robertson</span><br /><span style=\\"font-size: 0.85rem;\\">(561) 406-4032</span><br /><span style=\\"font-size: 0.85rem;\\"><a href=\\"mailto:ERobertson@VerticalBridge.com\\">ERobertson@VerticalBridge.com</a></span></p>\\n<p><span style=\\"font-size: 0.85rem;\\">Investor Relations</span><br /><span style=\\"font-size: 0.85rem;\\">Townsquare Media, Inc.</span><br /><span style=\\"font-size: 0.85rem;\\">Claire Yenicay (Messner)<br />\\n2</span><span style=\\"font-size: 0.85rem;\\">03-900-5555</span><br /><span style=\\"font-size: 0.85rem;\\"><a href=\\"mailto:investors@townsquaremedia.com\\">investors@townsquaremedia.com</a></span></p>\\n ",
            \'safe_summary\' => \'  \',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'field_date\' => array(),
      \'field_external_link\' => array(),
      \'field_internal_header\' => array(),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'0\',
      \'sticky\' => \'0\',
      \'title\' => \'Townsquare Media Announces Sale of 43 Towers\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'press_release\',
      \'uid\' => \'227\',
      \'uuid\' => \'f879b224-3694-4c57-a9ee-2437b85a5b30\',
      \'vid\' => NULL,
      \'vuuid\' => \'c14f1305-33c0-4b1b-9280-b90b67716a5b\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Since our company was founded in 2014, Vertical Bridge has quickly emerged as the largest private owner and manager of communications infrastructure United States, dedicated to providing our customers with superior service in a dynamic communications market. Vertical Bridge currently has more than 44,000 sites nationwide, including more than 37,000 billboards and over 3,400 wireless and broadcast towers assembled through more than <strong>XX</strong> asset acquisitions and <strong>XX</strong> real estate portfolios. Vertical Bridge also has the largest broadcast tower portfolio in the U.S.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p>Since our company was founded in 2014, Vertical Bridge has quickly emerged as the largest private owner and manager of communications infrastructure United States, dedicated to providing our customers with superior service in a dynamic communications market. Vertical Bridge currently has more than 44,000 sites nationwide, including more than 37,000 billboards and over 3,400 wireless and broadcast towers assembled through more than <strong>XX</strong> asset acquisitions and <strong>XX</strong> real estate portfolios. Vertical Bridge also has the largest broadcast tower portfolio in the U.S.</p>\\n ",
            \'safe_summary\' => \'  \',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'field_cta_button\' => array(),
      \'field_cta_content\' => array(),
      \'field_internal_header\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'211\',
            \'uid\' => \'227\',
            \'filename\' => \'Vertical-Bridge_History-with overlay.jpg\',
            \'uri\' => \'public://Vertical-Bridge_History-with overlay.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'134828\',
            \'status\' => \'1\',
            \'timestamp\' => \'1463066298\',
            \'type\' => \'image\',
            \'uuid\' => \'325fb68b-7c71-4991-bfe9-bd061d7cfe93\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'1024\',
              \'height\' => \'242\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'1024\',
            \'height\' => \'242\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'metatags\' => array(
        \'en\' => array(
          \'title\' => array(
            \'value\' => \'History | Vertical Bridge\',
          ),
          \'description\' => array(
            \'value\' => "Vertical Bridge consists of a group of former executives and partners at Global Tower Partners (GTP) – which was the largest privately held tower company in the US with operations in the LATAM region as well. GTP was successfully acquired by American Towers in late 2013 after 10 continuous years of growth and recording breaking financial results in the industry.\\r\\n",
          ),
        ),
      ),
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(
        array(
          \'pnid\' => \'1\',
          \'menu_name\' => \'navigation\',
          \'mlid\' => \'616\',
          \'plid\' => \'498\',
          \'link_path\' => \'node/19\',
          \'router_path\' => \'node/%\',
          \'link_title\' => \'History\',
          \'options\' => array(
            \'attributes\' => array(
              \'title\' => \'\',
            ),
          ),
          \'module\' => \'nodehierarchy\',
          \'hidden\' => \'1\',
          \'external\' => \'0\',
          \'has_children\' => \'0\',
          \'expanded\' => \'0\',
          \'weight\' => \'1\',
          \'depth\' => \'2\',
          \'customized\' => \'0\',
          \'p1\' => \'498\',
          \'p2\' => \'616\',
          \'p3\' => \'0\',
          \'p4\' => \'0\',
          \'p5\' => \'0\',
          \'p6\' => \'0\',
          \'p7\' => \'0\',
          \'p8\' => \'0\',
          \'p9\' => \'0\',
          \'updated\' => \'0\',
          \'language\' => \'und\',
          \'i18n_tsid\' => \'0\',
          \'enabled\' => FALSE,
          \'nid\' => \'19\',
        ),
      ),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'0\',
      \'sticky\' => \'0\',
      \'title\' => \'History\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'page\',
      \'uid\' => \'227\',
      \'uuid\' => \'fb337c6c-d5fb-4662-a11d-57f0cd65f6f8\',
      \'vid\' => NULL,
      \'vuuid\' => \'a2252cad-613b-484c-9d9c-bf6f5fcace72\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Vertical Bridge is the largest private owner and manager of communication infrastructure in the U.S.&nbsp; We own or master lease towers, rooftops, billboards, utility attachments and other site location assets, and we lease them to telecommunications carriers and other users of wireless technology.&nbsp;<br />\\r\\n<br />\\r\\nVertical Bridge sites and assets are located in hard-to-zone areas, and offer significant opportunities to our clients to enhance their subscribers’ experience via improved network performance.&nbsp;<br />\\r\\n<br />\\r\\nVertical Bridge offers some of the best solutions in the industry because we are:&nbsp;</p>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Geographically dispersed including urban, suburban, traffic corridor and rural locations</li>\\r\\n\\t<li>Frequently located in areas with no other competing or available structures</li>\\r\\n\\t<li>Built for capacity, which allows for more additional communications tenants in the future&nbsp;</li>\\r\\n\\t<li>Provide large ground space, which allows carriers room to place on-the-ground equipment, including C-RAN hubs</li>\\r\\n\\t<li>Constructed to meet or exceed applicable standards</li>\\r\\n</ul>\\r\\n\\r\\n<hr />\\r\\n<p><span class=\\"green_bold\\"><strong>History</strong></span><br />\\r\\n<br />\\r\\nSince our company was founded in 2014, Vertical Bridge has quickly emerged as the largest private owner and manager of communications infrastructure in the United States, dedicated to providing our customers with superior service in a dynamic communications market. Vertical Bridge currently has more than 45,000 sites nationwide, including 3,500 owned wireless and broadcast towers, 4,000 master lease rooftop and towers and 39,000 billboards. These assets have been assembled through more than 80 asset acquisitions and 60 real estate portfolios. Vertical Bridge also has the largest broadcast tower portfolio in the U.S.<b> </b>and on average the tallest tower portfolio in the US.<b> </b>&nbsp;</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p>Vertical Bridge is the largest private owner and manager of communication infrastructure in the U.S.  We own or master lease towers, rooftops, billboards, utility attachments and other site location assets, and we lease them to telecommunications carriers and other users of wireless technology. </p>\\n<p>Vertical Bridge sites and assets are located in hard-to-zone areas, and offer significant opportunities to our clients to enhance their subscribers’ experience via improved network performance. </p>\\n<p>Vertical Bridge offers some of the best solutions in the industry because we are: </p>\\n<ul><li>Geographically dispersed including urban, suburban, traffic corridor and rural locations</li>\\n<li>Frequently located in areas with no other competing or available structures</li>\\n<li>Built for capacity, which allows for more additional communications tenants in the future </li>\\n<li>Provide large ground space, which allows carriers room to place on-the-ground equipment, including C-RAN hubs</li>\\n<li>Constructed to meet or exceed applicable standards</li>\\n</ul><hr /><p><span class=\\"green_bold\\"><strong>History</strong></span></p>\\n<p>Since our company was founded in 2014, Vertical Bridge has quickly emerged as the largest private owner and manager of communications infrastructure in the United States, dedicated to providing our customers with superior service in a dynamic communications market. Vertical Bridge currently has more than 45,000 sites nationwide, including 3,500 owned wireless and broadcast towers, 4,000 master lease rooftop and towers and 39,000 billboards. These assets have been assembled through more than 80 asset acquisitions and 60 real estate portfolios. Vertical Bridge also has the largest broadcast tower portfolio in the U.S.<b> </b>and on average the tallest tower portfolio in the US.<b> </b> </p>\\n ",
            \'safe_summary\' => \'  \',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'field_cta_button\' => array(
        \'und\' => array(
          array(
            \'url\' => \'what-we-do\',
            \'title\' => \'CLICK HERE\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_cta_content\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Find Out More About Vertical Bridge</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p>Find Out More About Vertical Bridge</p>\\n ",
            \'safe_summary\' => \'  \',
          ),
        ),
      ),
      \'field_internal_header\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'257\',
            \'uid\' => \'227\',
            \'filename\' => \'about-us.jpg\',
            \'uri\' => \'public://about-us.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'284706\',
            \'status\' => \'1\',
            \'timestamp\' => \'1464986952\',
            \'type\' => \'image\',
            \'uuid\' => \'d0692c0f-8f7e-49f5-bea2-33dda1268494\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'1024\',
              \'height\' => \'242\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'1024\',
            \'height\' => \'242\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'metatags\' => array(
        \'und\' => array(
          \'title\' => array(
            \'value\' => \'Cell Tower & Wireless Telecom Lease Company | Vertical Bridge\',
          ),
          \'description\' => array(
            \'value\' => \'Vertical Bridge Holdings (VB) is a privately owned tower company in the US. Vertical Bridge owns, manages or master leases wireless telecom sites and leases space on towers to telecommunications carriers.\',
          ),
        ),
      ),
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(
        array(
          \'pnid\' => NULL,
          \'menu_name\' => \'navigation\',
          \'mlid\' => \'498\',
          \'plid\' => \'0\',
          \'link_path\' => \'node/1\',
          \'router_path\' => \'node/%\',
          \'link_title\' => \'About Us\',
          \'options\' => array(
            \'attributes\' => array(
              \'title\' => \'\',
            ),
          ),
          \'module\' => \'nodehierarchy\',
          \'hidden\' => \'1\',
          \'external\' => \'0\',
          \'has_children\' => \'0\',
          \'expanded\' => \'0\',
          \'weight\' => \'0\',
          \'depth\' => \'1\',
          \'customized\' => \'0\',
          \'p1\' => \'498\',
          \'p2\' => \'0\',
          \'p3\' => \'0\',
          \'p4\' => \'0\',
          \'p5\' => \'0\',
          \'p6\' => \'0\',
          \'p7\' => \'0\',
          \'p8\' => \'0\',
          \'p9\' => \'0\',
          \'updated\' => \'0\',
          \'language\' => \'und\',
          \'i18n_tsid\' => \'0\',
          \'enabled\' => FALSE,
          \'nid\' => \'1\',
        ),
      ),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'About Us\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'page\',
      \'uid\' => \'227\',
      \'uuid\' => \'fd1de95b-a4d2-46b6-9c9f-f17671b03664\',
      \'vid\' => NULL,
      \'vuuid\' => \'f8990d3f-68ba-4ea1-9dba-994383aba1b0\',
    ),
  (object) array(
      \'body\' => array(),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'field_cta_button\' => array(),
      \'field_cta_content\' => array(),
      \'field_internal_header\' => array(),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'metatags\' => array(
        \'und\' => array(
          \'title\' => array(
            \'value\' => \'Privacy Policy | Vertical Bridge\',
          ),
        ),
      ),
      \'name\' => \'erobertson\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'nodehierarchy_menu_links\' => array(),
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'227\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Privacy Policy\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'page\',
      \'uid\' => \'227\',
      \'uuid\' => \'fdf43af5-73cf-49b5-8be6-28a95af4e0df\',
      \'vid\' => NULL,
      \'vuuid\' => \'00948a61-bf53-484b-8a3f-fe128d30078c\',
    ),
)',
);
  return $node_export;
}
