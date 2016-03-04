//codeschool.com
//github markdowns table
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{

  printf("SHORT_MIN :  '%i' SHORT_MAX : '%i' \n", SHRT_MIN , SHRT_MAX );
  printf("INT_MIN :  '%i' INT_MAX : '%i' \n", INT_MIN , INT_MAX );
  printf("LONG_MIN :  '%li' LONG_MAX : '%li' \n", LONG_MIN , LONG_MAX );
  printf("LLONG_MIN :  '%lli' LLONG_MAX : '%lli' \n", LLONG_MIN , LLONG_MAX  );
  printf("FLT_MIN:  '%e' FLT_MAX : '%e' FLT_EPSILON : '%e' FLT_DIG '%i'\n", FLT_MIN , FLT_MAX , FLT_EPSILON , FLT_DIG  );
  printf("DBL_MIN:  '%le' DBL_MAX : '%le' DBL_EPSILON : '%e' DBL_DIG : '%i' \n", DBL_MIN , DBL_MAX , DBL_EPSILON , DBL_DIG);
  printf("LDBL_MIN:  '%Le' LDBL_MAX : '%Le' LDBL_EPSILON: '%Le' LDBL_DIG: '%i'\n", LDBL_MIN , LDBL_MAX , LDBL_EPSILON , LDBL_DIG);
  return 0;
}
