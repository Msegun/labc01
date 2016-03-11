#include <stdio.h>

int main()
{

  float x = 1.0;
  int i = 1 ;
  printf("Float \n");
  while (1.0+x > 1.0)
  {
      x = x/2.0;
      printf ("%i. '%f' do '%e' \n",i,x,x);
      i++;
  }
  i = 0;
  double z = 1.0;
  printf("Double \n");
  while (1.0+z > 1.0)
  {
      z = z/2.0;
      printf ("%i. '%lf' do '%le' \n",i,z,z);
      i++;
  }
  long double c = 1.0;
  printf("Long double \n");
  while (1.0+c > 1.0)
  {
      c = c/2.0;
      printf ("%i. '%Lf' do '%Le' \n",i, c, c);
      i++;
  }
  
}
