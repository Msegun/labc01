// codeschool.com
// github markdowns table

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
  printf("|TYP     |     wartosc dolna|      wartosc gorna|      ziarno|     precyzja|     format we/wy|\n");
  printf("|--------|------------------|-------------------|------------|-------------|----------------------|\n");
  printf("|Short   |                %i|                 %i|            |             |     i|\n", SHRT_MIN, SHRT_MAX);
  printf("|Int     |     %i|     %i|     |     |     i|\n", INT_MIN, INT_MAX);
  printf("|Long    |     %li|     %li|     |     |     li|\n", LONG_MIN, LONG_MAX);
  printf("|Long long    |     %lli|     %lli|     |     |     lli|\n", LLONG_MIN, LLONG_MAX);
  printf("|Float    |     %e|     %e|     %e|     %i|     e f|\n", FLT_MIN, FLT_MAX, FLT_EPSILON, FLT_DIG);
  printf("|Double    |     %le|     %le|     %le|     %i|     le lf|\n", DBL_MIN, DBL_MAX, DBL_EPSILON, DBL_DIG);
  printf("|Long double    |     %Le|     %Le|     %Le|     %i|     le lf|\n", LDBL_MIN, LDBL_MAX, LDBL_EPSILON, LDBL_DIG);
}
