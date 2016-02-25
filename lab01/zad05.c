#include <stdio.h>

int main()
{
  int a, b;
  a=2; b=4;
  if ((a=2) & (b=4))//wypisze "Tak" jesli bedzie && zamias &
    printf(" TAK\n");
  else
    printf(" NIE\n");//wypisze "Nie"

}
