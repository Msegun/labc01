// codeschool.com
// github markdowns table
//Napisać program, który bada poznane typy liczbowe w C; t.zn. ustala
//ilość bajtów, przeznaczonych na zmienną (operator sizeof),
//największą i najmniejszą wartość liczby,
//,,ziarno'', czyli najmniejszą taką liczbę x, że 1.0+x≠1.0 ,
//,,precyzję'', czyli maksymalną liczbę cyfr dziesiętnych po kropce 
//dla następujących typów: SHORT, INT, LONG, LONG LONG, FLOAT, DOUBLE, LONG DOUBLE.
//Dla znalezienia wartości tych stałych należy użyć plików nagłówkowych 
//dla typów całkowitych -- limits.h ,
//dla typów rzeczywistych -- float.h . 
//Postarać się o czytelny i ładny wydruk tych informacji przez program (np. w postaci dobrze przemyślanej tabelki).
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
  printf("|%11s|%21s|%21s|%13s|%10s|%11s|\n", "TYP", "MINIMUM", "Maksimum", "ZIARNO", "PRECYZJA", "WE/WY");
  printf("|-----------|---------------------|---------------------|-------------|----------|-----------|\n");
  printf("|%11s|%21i|%21i|%13c|%10c|%11s|\n", "short", SHRT_MIN, SHRT_MAX, ' ', ' ', "i");
  printf("|%11s|%21i|%21i|%13c|%10c|%11s|\n", "int", INT_MIN, INT_MAX, ' ', ' ', "i");
  printf("|%11s|%21li|%21li|%13c|%10c|%11s|\n", "long", LONG_MIN, LONG_MAX, ' ', ' ', "li");
  printf("|%11s|%21lli|%21lli|%13c|%10c|%11s|\n", "long long", LLONG_MIN, LLONG_MAX, ' ', ' ', "lli");
  printf("|%11s|%21e|%21e|%13e|%10i|%11s|\n", "float", FLT_MIN, FLT_MAX, FLT_EPSILON, FLT_DIG, "e, f");
  printf("|%11s|%21le|%21le|%13e|%10i|%11s|\n", "double", DBL_MIN, DBL_MAX, DBL_EPSILON, DBL_DIG, "le, lf");
  printf("|%11s|%21Le|%21Le|%13Le|%10i|%11s|\n", "long double", LDBL_MIN, LDBL_MAX, LDBL_EPSILON, LDBL_DIG, "Le, Lf");
}
