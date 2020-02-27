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

		$write = fopen("com\com.txt", "a+");
		fwrite($write, "<u><B><BR>$name</B></U><BR>$text<BR>");
		fclose($write);

		$read = fopen("com\com.txt", "r+t");
		echo "ALL Comments:";

		while(!feof($read))
		{
			echo fread($read,1024);
		}
		fclose($read);
	}
	else
	{
		$read = fopen("com\com.txt", "r+t");
		echo "ALL Comments:";

		while(!feof($read))
		{
			echo fread($read,1024);
		}
		fclose($read);	
	}

?>	
