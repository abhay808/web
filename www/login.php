<?php 
	$conn=mysqli_connect("localhost","root","","web");



?>



<!DOCTYPE html>
<html>
<head>
	<title></title>
</head>
<body>

<?php 

	if (isset($_POST['login'])) {
		
		extract($_POST);

		$query="select * from reg where Email='$email' AND Password='$password'";



		$run_query=mysqli_query($conn,$query);
		if ($run_query) {
			if (mysqli_num_rows($run_query)>0) {
				$_SESSION['Email']=$email;
				$_SESSION['Password']=$password;

				header("location:https://abhay808.github.io/web");
			}
			else {
				echo "<div class='alert alert-warning'><strong>warning!</strong>login not successfull...</div>";
	
			}


		}




	}


?>

	<center>
		Login Form
	</center>
	<form action="" method="post">
		<table align="center">
			<tr>
				<th align="center">
					Login Form
				</th>
			</tr>
		
			<tr>
				<td>
					E-mail
				</td>
				<td>
					<input type="email" placeholder="E-mail" name="email">
				</td>
			</tr>
			<tr>
				<td>
					Password
				</td>
				<td>
					<input type="pass" placeholder="Password" name="password">
				</td>
			</tr>
			<tr>
				<td colspan="2" align="center">
					<input type="submit" value="Login" name="login">
				</td>
			</tr>
		</table>
	</form>

</body>
</html>