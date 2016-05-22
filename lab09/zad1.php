<!DOCTYPE HTML>
<html lang="pl">

<head>
	<title>Kalkulator</title>
</head>

<body>
	<form action="obliczanie.php" method="post">
	<table bgcolor="yellow" border=5>
		<tr>
		<td>
			<b><center>Pierwszy arg.</center></b>
			<input type="number" name="argument1"/>
		</td>
		<td>
			<b>+</b><input type="radio" name="operator" value="+">
			<b>-</b><input type="radio" name="operator" value="-">
			<b>*</b><input type="radio" name="operator" value="*">
			<b>/</b><input type="radio" name="operator" value="/">
		</td>
		<td>
			<b><center>Drugi arg.</center></b>
			<input type="number" name="argument2"/>
		</td>
		<td>
			<input type="submit" value="==">
		</td>
		</tr>
	</table>
</body>

</html>
