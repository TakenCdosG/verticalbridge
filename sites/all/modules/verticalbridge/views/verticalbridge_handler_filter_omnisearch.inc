<?php

class verticalbridge_handler_filter_omnisearch extends views_handler_filter_string
{

    function operators()
    {
        $operators = parent::operators();
        $contains['contains'] = $operators['contains'];
        return $contains;
    }

    
    function op_contains($field) {
        $this->query->add_field('field_data_field_site_number', 'field_site_number_value');
        $this->query->add_field('field_data_field_address', 'field_address_locality');
        $this->query->add_field('field_data_field_address', 'field_address_postal_code');
        $this->query->add_field('field_data_field_address', 'field_address_administrative_area');
        $this->query->add_field('field_data_field_county', 'field_county_value');
        
        $this->query->add_where(
                $this->options['group'], 
                db_or()
                ->condition('field_address_locality','%' . db_like($this->value) . '%', 'LIKE')
                ->condition('field_address_administrative_area','%' . db_like($this->value) . '%', 'LIKE')
                ->condition('field_address_postal_code','%' . db_like($this->value) . '%', 'LIKE')
                ->condition('field_site_number_value','%' . db_like($this->value) . '%', 'LIKE')
                ->condition('field_county_value','%' . db_like($this->value) . '%', 'LIKE')
                );
/*        print_r($this->query);
        die();
 * 
 */
    }

}
