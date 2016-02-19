//Napisać  program, który wczytuje liczbę naturalną i przekazuje systemowi
// operacyjnemu (przez return w main-ie) resztę z dzielenia tej liczby przez 3;
//skrypt bashowy, który uruchamia powyższy program, przechwytuje wartość
//przekazaną systemowi i drukuje ją.

#include <stdio.h>

int main ()
{
  int x,n;
  scanf("%d",&n);

  printf("%d\n",n);
  x=n%3;
  return x;

}
