<html>
<head>
</head>
<body>
        <b>Licznik klikniec: </b>
                <?php session_start();
                //http://sigma.inf.ug.edu.pl/~kborawski/zad01.php
                $file = @fopen("ilosc.txt","c+");
                fscanf($file,"%d",$count);
                if(!isset($SESSION['hasVisited'])) {
                        $SESSION['hasVisited']="yes";
                        $count++;
                        rewind($file);
                        fputs($file,$count);
                }
                fclose($file);

                echo $count;
                ?>

</body>

</html>
