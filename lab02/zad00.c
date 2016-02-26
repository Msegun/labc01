//Jakie będą wyniki następujących działań?

  //  5&3
  //  5|3
  //  7<<2&7
  //  7<<(2&7)
  //  ((-1)<<8)>>16
  //  13^9

#include <stdio.h>

int main ()
{

  int wynik;

  wynik = 5 & 3;
  printf(" Wynik 5&3  wynosi  %i \n", wynik);//koniunkcja bitowa da wynik 1
  wynik = 5 | 3;
  printf(" Wynik 5|3  wynosi  %i \n", wynik);//Gdyby bylo 5||3 to wynik 1
  wynik = 7 << 2 & 7;
  printf(" Wynik 7<<2&7  wynosi  %i \n", wynik);//koniunkcja da wynik 2 i przesunie 111 na 100
  wynik = 7 << (2 & 7);
  printf(" Wynik 7<<(2&7)  wynosi  %i \n", wynik);
  wynik = ((-1) << 8) >> 16;
  printf(" Wynik ((-1)<<8)>>16  wynosi  %i \n", wynik);
  wynik = 13 ^ 9;
  printf(" Wynik 13 ^ 9  wynosi  %i \n", wynik);


  return 0;

}
