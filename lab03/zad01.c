//codeschool.com
//github markdowns table
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
  FILE *plik;
  if ((plik = fopen("tabela.txt", "w" )) == NULL )
  {
      printf("Blad otwarcia pliku");
      return 0;
  }
  fprintf( plik , "|TYP     |     wartosc dolna|      wartosc gorna|      ziarno|     precyzja|     format we/wy|\n" );
  fprintf( plik , "|--------|------------------|-------------------|------------|-------------|----------------------|\n" );
  fprintf( plik , "|Short   |     %i|     %i|     |     |     i|\n",SHRT_MIN , SHRT_MAX );
  fprintf( plik , "|Int     |     %i|     %i|     |     |     i|\n", INT_MIN , INT_MAX );
  fprintf( plik , "|Long    |     %li|     %li|     |     |     li|\n", LONG_MIN , LONG_MAX );
  fprintf( plik , "|Long long    |     %lli|     %lli|     |     |     lli|\n", LLONG_MIN , LLONG_MAX );
  fprintf( plik , "|Float    |     %e|     %e|     %e|     %i|     e f|\n", FLT_MIN , FLT_MAX , FLT_EPSILON , FLT_DIG  );
  fprintf( plik , "|Double    |     %le|     %le|     %le|     %i|     le lf|\n", DBL_MIN , DBL_MAX , DBL_EPSILON , DBL_DIG  );
  fprintf( plik , "|Long double    |     %Le|     %Le|     %Le|     %i|     le lf|\n", LDBL_MIN , LDBL_MAX , LDBL_EPSILON , LDBL_DIG  );
  fclose(plik);

  return 0;
}
