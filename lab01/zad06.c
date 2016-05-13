//Sprawdzić i wyjaśnić działanie następujących fragmentów programów:
//a = b = c = d = 0;
//for (i=0; i<N; a[i++]=i);
//for (i=0; i<N; a[++i]=i);
//i=1; while ((i*=2)<N);


#include <stdio.h>

int main()
{
  int a, b, c, d;


  a = b = c = d = 0;//najpierw do d przypisze 0 do c do b i na koncu
  printf("%i %i %i %i \n",a,b,c,d);

  int i,N=7;
  int tab[7]={0,1,2,3,4,5,6};

  for( i=0 ; i<N ; tab[i++]=i )
    printf("%d ",tab[i]);
  printf("\n");
  for( i=0 ; i<N ; tab[++i]=i )
    printf("%d ",tab[i]);
  i=1;
  while ((i*=2)<N);//i jest mnozone razy 2 puki jest mniejsze od N

  
}
