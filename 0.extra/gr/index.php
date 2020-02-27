<!-- Comment Box -->
<!DOCTYPE html>
<html>
<head>
	<title></title>
</head>
<body>
	<form action="" method="post">
		<label> 
			Name: <br>
			<input type="text"  name="name">
		</label>
		<br>
		<label>
			Message: <br>
			<textarea cols="45" rows="5" name="mes"></textarea>
		</label>
		<br>
		<input type="submit" value="Post" name="post">
	</form>
</body>
</html>
<?php
	 
	if (isset($_POST['post'])) 
	{
		 $name = $_POST['name'];
	 $text = $_POST['mes'];
	 $post = $_POST['post'];

		$write = fopen("com.txt", "a+");
		fwrite($write, "<u><B><BR>$name</B></U><BR>$text<BR>");
		fclose($write);

		$read = fopen("com.txt", "r+t");
		echo "ALL Comments:";

		while(!feof($read))
		{
			echo fread($read,1024);
		}
		fclose($read);
	}
	else
	{
		$read = fopen("com.txt", "r+t");
		echo "ALL Comments:";

		while(!feof($read))
		{
			echo fread($read,1024);
		}
		fclose($read);	
	}

?>	
<!-- view -->
<!DOCTYPE html>
<html>
<head>
	<title></title>
</head>
<body>
	<div style="position: fixed; bottom: 0; left: 0;">
		<?php
			$count = fopen("count.txt","r");
			$counter = (int) fread($count,20);
			fclose($count);
			$counter++;
			$count = fopen("count.txt","w");
			fwrite($count,$counter);
			echo "Views... ".$counter;
		?>
	</div>
</body>
</html>