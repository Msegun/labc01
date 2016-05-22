/*
Napisać program, który
* wczytuje trzy liczby całkowite n, m i k;
* deklaruje trzy duże tablice rzeczywiste 1-wymiarowe a, b i c;
* ,,udaje'', że tablice a, b i c są 2-wymiarowe, o wymiarach n×m, m×k i n×k;
* wczytuje n·m liczb do tablicy a oraz m·k liczb do tablicy b;
* wykonuje mnożenie macierzowe c=a×b;
* drukuje wynik w n wierszach po k liczb.
 Komentarz :
 Wykonane bez
 typ nazwa[n][k]; 	  →   	typ nazwa[n·k]
...nazwa[i][j]... 	  →   	...nazwa[i·k+j]...
 */


 #include<stdio.h>
 #include<stdlib.h>
 #include<time.h>

 int main(){

   srand(time(NULL));//Po co się kłopotac z wypisywaniem tablicy wiekszej od [3][3]
   int wiersze, kolumny, wiersze2, kolumny2, i, j, z, suma = 0;
   printf("Podaj ilosc wierszy :\n");
   scanf("%i", &wiersze);
   printf("Podaj ilosc kolumn :\n");
   scanf("%i", &kolumny);
   printf("Podaj ilosc wierszy macierzy2 :\n");
   scanf("%i", &wiersze2);
   printf("Podaj ilosc kolumn macierzy2:\n");
   scanf("%i", &kolumny2);
   int papierz[wiersze][kolumny];  //Takie tam żarciki macierzowe
   int papierz2[wiersze2][kolumny2];  //Tym razem bedziemy mnożyć papierze. Tak w moim świecie może istnieć więcej niż jeden papierz.
   int papierz_mnozony[wiersze][kolumny2];
   printf("Uzupełnimy macierze randomowymi liczbami\n");
   for(i=0; i<wiersze; i++)
     for(j=0; j<kolumny; j++)
     {
       papierz[i][j] = rand()%10;
     }
   //Wstawienie wartosci 0-9 do tabeli 2
   for(i=0; i<wiersze2; i++)
      for(j=0; j<kolumny2; j++)
      {
        papierz2[i][j] = rand()%10;
      }
  //wypisanie tabeli 1
   for(i=0; i<wiersze; i++)
   {
      for(j=0; j<kolumny; j++)
      {
        printf("%i",papierz[i][j]);
      }
      printf("\n");
   }
   printf("\n");
   //wypisanie tabeli 2
   for(i=0; i<wiersze2; i++)
   {
     for(j=0; j<kolumny2; j++)
     {
       printf("%i",papierz2[i][j]);
     }
     printf("\n");
   }
   //sprawdzenie czy papierze da sie pomnożyć
   if(kolumny != wiersze2)
   {
     printf("Macierze nie moga byc pomnozone");

   }
  else
  {
    for (i = 0; i < wiersze; i++)
    {
      for (j = 0; j < kolumny2; j++)
      {
        for (z = 0; z < wiersze2; z++)
        {
            suma = suma + papierz[i][z]*papierz2[z][j];
        }
        papierz_mnozony[i][j] = suma;
        suma = 0;
      }
    }
    printf("\n");
    for(i=0; i<wiersze; i++)
    {
      for(j=0; j<kolumny2; j++)
      {
        printf(" %i ",papierz_mnozony[i][j]);
      }
      printf("\n");
    }
  }
/*Zeby nie bylo ze nie sprawdzilem wynikow
  Pomnożenie macierzy |1 1 7|  *  |4 4| = |24 27|
                      |4 2 2|     |6 9|   |32 38| Co jest wynikiem poprawnym
                                  |2 2|
*/


}
