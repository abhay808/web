<?php
	$count = fopen("count.txt","r");
	$counter = (int) fread($count,20);
	fclose($count);
	$counter++;
	$count = fopen("count.txt","w");
	fwrite($count,$counter);
	echo "Visitor count ==>>".$counter;
?>