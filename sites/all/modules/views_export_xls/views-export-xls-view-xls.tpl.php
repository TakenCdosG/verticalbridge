<?php

/**
 * @file views-export-xls-view-xls.tpl.php
 * Template to display a view as an xls file.
 *
 * - $title : The title of this group of rows.  May be empty.
 * - $rows: An array of row items. Each row is an array of content
 *   keyed by field ID.
 * - $header: an array of haeaders(labels) for fields.
 * - $themed_rows: a array of rows with themed fields.
 * @ingroup views_templates
 */

$path = drupal_get_path('module', 'views_export_xls');

if (!isset($filename) || empty($filename)) {
$filename = $view->name . '.xlsx';
}
$excelpath = './' . $path . '/libs/PHPExcel.php';
//exit($excelpath);
require_once $path . '/libs/PHPExcel.php';

$objPHPExcel = new PHPExcel();

// Set document properties
$objPHPExcel->getProperties()->setCreator("MTP Sites")
							 ->setLastModifiedBy("MTP Sites")
							 ->setTitle("MTP Sites Export")
							 ->setSubject("MTP Sites Export")
							 ->setDescription("MTP Sites Export.")
							 ->setKeywords("mtp sites export")
							 ->setCategory("mtp sites export");
							
$letter = 'A';
// set labels							
$objPHPExcel->setActiveSheetIndex(0);
$index = 1;
foreach ($header as $label) {
	$objPHPExcel->getActiveSheet()->setCellValue($letter . $index, $label);
	$letter++;
}

$letter = 'A';
$index = 2;
foreach ($themed_rows as $row) {
	foreach ($row as $col) {
		$objPHPExcel->getActiveSheet()->setCellValue($letter . $index, $col);
		$letter++;
	}
	$index++;
	$letter = 'A';
}

// Redirect output to a client’s web browser (Excel5)
header('Content-Type: application/vnd.ms-excel');
header('Content-Disposition: attachment;filename="'.$filename.'"');
header('Cache-Control: max-age=0');
// If you're serving to IE 9, then the following may be needed
header('Cache-Control: max-age=1');

// If you're serving to IE over SSL, then the following may be needed
header ('Expires: Mon, 26 Jul 1997 05:00:00 GMT'); // Date in the past
header ('Last-Modified: '.gmdate('D, d M Y H:i:s').' GMT'); // always modified
header ('Cache-Control: cache, must-revalidate'); // HTTP/1.1
header ('Pragma: public'); // HTTP/1.0

$objWriter = new PHPExcel_Writer_Excel2007($objPHPExcel);//PHPExcel_IOFactory::createWriter($objPHPExcel, 'Excel5');
$objWriter->save('php://output');
exit;

// include xls generatator class
//require_once './' . $path . '/libs/php-excel.class.php';


/*$xls = new Excel_XML('UTF-8', false, $view->name);
$themed_rows = array_merge(array($header), $themed_rows);
$xls->addArray($themed_rows);
$xls->generateXML($file_name, true);*/
