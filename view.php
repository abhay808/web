<!-- view -->
<!DOCTYPE html>
<html>
<head>
	<title></title>
</head>
<body>
	<div style="position: fixed; bottom: 0; left: 0;">
		<?php
			$count = fopen("view\count.txt","r");
			$counter = (int) fread($count,20);
			fclose($count);
			$counter++;
			$count = fopen("view\count.txt","w");
			fwrite($count,$counter);
			echo "Views... ".$counter;
		?>
	</div>
</body>
</html>