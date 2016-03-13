//Napisałem program, który 
//wczytuje dzień (między 1 a 31), miesiąc (między 1 a 12) i rok (liczbę całkowitą dodatnią, niewiększą niż 223−1), 
//wszystkie trzy dane pakuje do jednej 32-bitowej liczby całkowitej, jak na poniższym rysunku
//drukuje tą liczbę. 
//Program wydrukował liczbę 1032225. Co to była za data? (2016.01.01)
//Napisać program, który potrafi odczytać datę z każdej liczby, zestawionej w podany wyżej sposób. 
#include <stdio.h>
#include <math.h>

void data(int p);

int main ()
{
  int liczba;
  printf("Podaj liczbe :\n");
  scanf("%i",&liczba);
  data(liczba);

  return 0;
}

void data(int p)
{
  int tab[32];
  int i=0,f=0,k,j=0,l=0,dzien=0,miesiac=0,rok=0;
  while( p != 0)
  {
    tab[f]=p%2;
    p=p/2;
    f++;
  }
  k = f;
  while(f>0)
  {
    f--;
    printf("%i", tab[f]);//postac binarna
  }
  for( i = 0 ; i < 5 ; i++ )
  {
    dzien += tab[i] * pow( 2 , i );
  }
  for( i = 5 ; i < 9 ; i++ )
  {
    miesiac += tab[i] * pow( 2 , j );
    j++;
  }
  for( i = 9 ; i < k ; i++ )
  {
    rok += tab[i] * pow( 2 , l );
    l++;
  }
  printf("Data to %i.%i.%i\n",rok,miesiac,dzien);
}
