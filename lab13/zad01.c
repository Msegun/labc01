/*
 Napisać program, który:
 * wczytuje dwie liczby całkowite n i k;
 * deklaruje dwie tablice rzeczywiste 1-wymiarowe a i b o długości n·k;
 * ,,udaje'', że obie tablice są 2-wymiarowe -- że tablica a jest 2-wymiarowa n×k, i że tablica b jest 2-wymiarowa k×n;
 * wczytuje n·k liczb do tablicy a;
 * wykonuje transpozycję macierzy a do tablicy b;
 * drukuje tablicę b w k wierszach po n liczb.
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
  int wiersze, kolumny, i, j;
  printf("Podaj ilosc wierszy :\n");
  scanf("%i", &wiersze);
  printf("Podaj ilosc kolumn :\n");
  scanf("%i", &kolumny);
  int papierz[wiersze][kolumny];  //Takie tam żarciki macierzowe
  int papierz_transponowany[kolumny][wiersze];

  printf("Uzupełnimy macierz randomowymi liczbami\n");
  for(i=0; i<wiersze; i++)
    for(j=0; j<kolumny; j++)
    {
      papierz[i][j] = rand()%10;
      papierz_transponowany[j][i] = papierz[i][j];
    }
  for(i=0; i<wiersze; i++)
  {
    for(j=0; j<kolumny; j++)
    {
        printf("%i",papierz[i][j]);
    }
    printf("\n");
  }

  printf("Transpozycja :\n");

  for(i=0; i<wiersze; i++)
  {
    for(j=0; j<kolumny; j++)
    {
      printf("%i",papierz_transponowany[i][j]);
    }
    printf("\n");
  }


 }
