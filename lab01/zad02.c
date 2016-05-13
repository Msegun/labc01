//for ( ; (z=getchar())!=EOF; printf("%c",z));
//Napisać ,,czysty'' program, czyli bez efektów ubocznych, działający tak samo jak powyższa pętla for.
#include <stdio.h>

//napisac ten program bez dodatkowych zmiennych
int main ()
{
  char z;
  while( ( z=getchar() ) != EOF )
    printf("%c",z);


}
