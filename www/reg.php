<?php 
	$conn=mysqli_connect("localhost","root","","web");



?>
















<!DOCTYPE html>
<html>
<head>
	<title>Reg</title>
</head>
<body>

<?php 
	if (isset($_POST['submit'])) {
		$firstname=$_POST['Firstname'];
		$email=$_POST['email'];
		$password=$_POST['password'];
	

		$query="insert into reg(Firstname, Email,Password)values('$firstname','$email','$password')";
		$run=mysqli_query($conn,$query);


		if ($run) {
			header("location:login.php");
		}
		else{
			echo "error:".mysqli_error($conn);
		}







	}












?>


























	<center>
		Reg Form
	</center>
	<form action="" method="post">
		<table align="center">
			<tr>
				<th align="center">
					Reg Form
				</th>
			</tr>
			<tr>
				<td>
					First Name
				</td>
				<td>
					<input type="text" placeholder="First Name" name="Firstname" required>
				</td>
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
					<input type="submit" value="submit" name="submit">
				</td>
			</tr>
		</table>
	</form>

</body>
</html>