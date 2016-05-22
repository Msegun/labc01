#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define MAX_DL_IM 11
#define MAX_DL_NA 17
#define IL_OSOB 10000
typedef  struct
{
  char imie[MAX_DL_IM];
  char nazwisko[MAX_DL_NA];
  int pensja;
}  osoba;
osoba spis[IL_OSOB];
int czytanie(char *nazwapliku)
{
  int i=0;
  char znak;
  FILE* baza = fopen(nazwapliku, "r");
  if(baza==NULL) printf("\n ZLE\n\n");
  while((znak=getc(baza)) != EOF )
  {
    if(znak == '\n')
      i++;
  }
  fclose(baza);
  return i;
}

void utworz_spis(char *nazwapliku, int ile)
{
  FILE* baza = fopen(nazwapliku, "r");
  if(baza==NULL) printf("\n ZLE\n\n");
  for(int i=0;i<ile;i++)
  {
    fscanf(baza, "%s", spis[i].imie);
    fscanf(baza, "%s", spis[i].nazwisko);
    fscanf(baza, "%i", &spis[i].pensja);
  }
  fclose(baza);
}

int porownanie(const void  * a, const void * b)
{

  osoba *osoba_a  = (osoba *) a;
  osoba *osoba_b  = (osoba *) b;

  if(strcmp(osoba_a->nazwisko, osoba_b->nazwisko)==0)
    return strcmp(osoba_a->imie, osoba_b->imie);
  else
    return strcmp(osoba_a->nazwisko, osoba_b->nazwisko);
}


void sortuj_spis(int ile)
{
  /* sortuje  spis  alfabetycznie wg nazwisk,
     a w przypadku rownych nazwisk wg imion */
     //zerknij do jentszeja
     //coderay
     qsort(spis, ile, sizeof(osoba), porownanie);
     FILE *baza = fopen("posortowane.txt", "w");
     int i;
     for(i = 0; i < ile ; i++)
     {
       fprintf(baza, "%20s", spis[i].imie);
       fprintf(baza, "%20s", spis[i].nazwisko);
       fprintf(baza, "%20i\n", spis[i].pensja);
     }
    fclose(baza);
}

void bubble_sort(int ile)
{
  int i, j;
  char temp[MAX_DL_NA+1];
  for(i = 1; i <= ile; i++)
  {
    for(j = i;j < ile; j++)
    {
      if(strcmp(spis[j-1].nazwisko, spis[j].nazwisko) > 0)
      {
        strcpy(temp, spis[j-1].nazwisko);
        strcpy(spis[j-1].nazwisko, spis[j].nazwisko);
        strcpy(spis[j].nazwisko, temp);
      }
      else if(strcmp(spis[j-1].nazwisko, spis[j].nazwisko) == 0)
      {
        strcpy(temp, spis[j-1].imie);
        strcpy(spis[j-1].imie, spis[j].imie);
        strcpy(spis[j].imie, temp);
      }
    }
  }
  FILE* baza_b = fopen("bubblesort.txt", "w");
  for(i = 0; i < ile; i++)
  {
    fprintf(baza_b, "%20s ", spis[i].imie);
    fprintf(baza_b, "%20s ", spis[i].nazwisko);
    fprintf(baza_b, "%20i\n", spis[i].pensja);
  }
  fclose(baza_b);
  }

int main (int arg_num, char* arg[])
{ int ile;
  if (arg_num == 3)
  {
    ile=czytanie(arg[1]);
    if(ile>0)
    {
      utworz_spis(arg[1], ile);
      printf("Ilosc lini w bazie wynosi %i\n", ile);
      clock_t  pocz1 = clock();
      sortuj_spis(ile);
      clock_t  koniec1 = clock();
      clock_t  pocz2 = clock();
      bubble_sort(ile);
      clock_t  koniec2 = clock();
      printf("|%10s|%10s|\n", "QSORT", "BUBBLESORT");
      printf("|----------|----------|\n");
      printf("|%10lf|%10lf|\n", (double)(koniec1-pocz1) / CLOCKS_PER_SEC, (double)(koniec2-pocz2) / CLOCKS_PER_SEC);
    }
  }
  else
    printf("\n Niepoprawne wywolanie: './porzadkuj baza_danych.txt posortowane.txt'\n\n");
  return 0;
}
