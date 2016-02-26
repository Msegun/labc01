#include <stdio.h>
//napisac ten program bez dodatkowych zmiennych
int main ()
{
  char z;
  while( ( z=getchar() ) != EOF )
    printf("%c",z);
  return 0;

}
