//Napisać program, który wczytuje tekst aż do EOF, a następnie drukuje bitowe obrazy wczytanych znaków. 

#include <stdio.h>

void forma_binarna_znaku(char f);

int main ()
{
  char z;
  z = getchar();

  while( z != EOF )
  {

      if(z != '\n')
      {
        printf("wartosc znaku %c wynosi %i ",z,z);
        forma_binarna_znaku(z);
      }
      z = getchar();
  }

  return 0;
}

void forma_binarna_znaku(char f)
{
  int tab[8];
  int i=0;
  while(f != 0)
  {
    tab[i]=f%2;
    i++;
    f=f/2;
  }

  while(i>0)
  {
    i--;
    printf("%i", tab[i]);
  }
}
