#include <stdio.h>

int main ()
{
  int y,x;
  printf("Podaj x: ");
  scanf("%i",&x);
  printf("wartosc x : %i\n",x);
  y = (x += 2);//przypisze wartosc x+2 do y i jednoczesnie przypisze x=x+2
  printf("wynik dzialania wynosi %i \na wartosc x : %i\n",y,x);
  //zrobic dodatkowo inne efekty uboczne
  return 0;
}
