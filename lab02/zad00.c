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

  printf(" Wynik 5&3  wynosi  %i \n", 5 & 3);//koniunkcja bitowa da wynik 1
  printf(" Wynik 5|3  wynosi  %i \n", 5 | 3);//Gdyby bylo 5||3 to wynik 1
  printf(" Wynik 7<<2&7  wynosi  %i \n", 7 << 2 & 7);//koniunkcja da wynik 2 i przesunie 111 na 100
  printf(" Wynik 7<<(2&7)  wynosi  %i \n", 7 << (2 & 7));
  printf(" Wynik ((-1)<<8)>>16  wynosi  %i \n", ((-1) << 8) >> 16);
  printf(" Wynik 13 ^ 9  wynosi  %i \n", 13 ^ 9);


  return 0;

}
