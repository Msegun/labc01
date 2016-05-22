<?php

function wyswietl()
{
  $file = @fopen("liczenie.txt", "c+");
  fscanf($file, "%d", $liczba);
  rewind($file);
  fclose($file);
  echo $liczba;
}

function plusjeden()
{
    $file = @fopen("liczenie.txt", "c+");
    fscanf($file, "%d", $liczba);
    $liczba = $liczba + 1;
    rewind($file);
    fputs($file, $liczba);
    fclose($file);
}

?>

<!DOCTYPE HTML>
<html lang="pl">

<head>
  <title>Licznik</title>
</head>

<body>
<h3>
  <form action="" method="post">
	   <input type="submit" value="Chcesz kupic faworka?" name="guzik"><br>
  </form>


  <?php
      //http://sigma.inf.ug.edu.pl/~kborawski/zad04.php
      if (isset($_POST["guzik"]) AND isset($_COOKIE["ciastko"]))
  	  {
  		    wyswietl();
  		    echo "\r\nJuz dzisiaj kliknales!";
  	  }

  	  elseif (isset($_POST["guzik"]))
  	  {
  		    setcookie("ciastko", $_POST["guzik"], time() + 86400, "/");
  		    plusjeden();
  		    wyswietl();
  	  }

  ?>
</h3>
</body>
</html>
