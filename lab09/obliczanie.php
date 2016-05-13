<!DOCTYPE HTML>
<html lang="pl">
<head>
	<title>Obliczenie</title>
</head>

<body>
<?php
	$argument1 = $_POST["argument1"];
	$argument2 = $_POST["argument2"];
	$operator = $_POST["operator"];
	
	if(isset($argument1) AND isset($operator) AND isset($argument2))
	{
		if ($operator == "+")
		{
			$wyliczenie = $argument1 + $argument2;
			echo "Suma : $wyliczenie";
		}
		
		if ($operator == "-")
		{
			$wyliczenie = $argument1 - $argument2;
			echo "Ró¿nica : $wyliczenie";
		}

		if ($operator == "*")
		{
			$wyliczenie = $argument1 * $argument2;
			echo "Mno¿enie : $wyliczenie";
		}

		if ($operator == "/")
		{
			$wyliczenie = $argument1 / $argument2;
			echo "Dzielenie : $wyliczenie";
		}
		
	}
	
	else 
		echo "Jakis argument nie zosta³ wpisany lub nie zaznaczono opcji obliczenia"
?>	
</body>

</html>