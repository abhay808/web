<!DOCTYPE html>
<html>
<head>
	<title>Calculator</title>
	<link rel="stylesheet" type="text/css" href="style.css">
</head>
<body>
	<center>
		<table>
			<form method="post">
				<tr>
					<td>
						<?php 
							if (isset($_POST['submit']))
							{
								$no1=$_POST['fn'];
								$op=$_POST['operation'];
								$no2=$_POST['sn'];
								$error='Error';

								switch ($op) {
									case '+':
										$ans=$no1+$no2;
										break;

									case '-':
										$ans=$no1-$no2;
										break;

									case '*':
										$ans=$no1*$no2;
										break;

									case '/':
										$ans=$no1/$no2;
										break;

									default:
										$ans=$error;
										break;
							}

								echo "<input type='text' value='$ans'>";
							}
						?>
					</td>
				</tr>
				<tr>
					<td>
						<input type="text" placeholder="Enter First Number" name="fn">
					</td>
				</tr>
				<tr>
					<td>
						<input type="text" placeholder="Enter Operation Sign + - * /" name="operation">
					</td>
				</tr>
				<tr>
					<td>
						<input type="text" placeholder="Enter Second Number" name="sn">
					</td>
				</tr>
				<tr>
					<td align="center">
						<input type="submit" placeholder="Submit" name="submit">
						<input type="reset" placeholder="Reset" onclick="window.location.href='Calculator.php'" name="">
					</td>
				</tr>
			</form>
		</table>
	</center>
</body>
</html>