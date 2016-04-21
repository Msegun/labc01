#include <stdio.h>
#define MAX_DL_IM 11
#define MAX_DL_NA 17

typedef  struct
{
  char imie[MAX_DL_IM];
  char nazwisko[MAX_DL_NA];
  int pensja;
}  osoba;

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


int main (int arg_num, char* arg[])
{ int ile;
  if (arg_num == 3)
  {
    ile=czytanie(arg[1]);
    if(ile>0)
    {
      osoba tabl[ile];
      utworz_spis(arg[1]);
    }
    printf("%i", ile);
  }
  else
    printf("\n Niepoprawne wywolanie: './porzadkuj baza_danych.txt posortowane.txt'\n\n");
  return 0;
}
