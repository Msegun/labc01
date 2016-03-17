#include <stdio.h>
#include <limits.h>
#include <float.h>

// Sprawdzić, wykonując odpowiednie testy, jak działają operacje rzutowania z typów
// ,,mniejszych'' do ,,większych'' i odwrotnie. Na przykład, czemu są równe:
//    (int)FLT_MAX
//    (int)DBL_MAX
//    (double)LDBL_MAX

int main() {
  printf("Rzutowanie FLT_MAX do (int)FLT_MAX: '%e' do '%i'\n", FLT_MAX, (int)FLT_MAX);
  //Wypisze liczbe najbliższą zadanemu floatowi w innym typie int. W tym wypadku otrzymamy maksymalny int
  printf("Rzutowanie DBM_MAX do (int)DBL_MAX: '%e' do '%i'\n", DBL_MAX, (int)DBL_MAX);
  //Tutaj podobnie otrzymamy maksymalny int. Double jest wieksze od float
  printf("Rzutowanie LDBL_MAX do (double)LDBL_MAX: '%Le' do '%e'\n", LDBL_MAX, (double)LDBL_MAX);
  //trzymany wynik 'inf' prawdopodobnie świadczy o tym ze różnica miedzy LDBL_MAX a DBL_MAX
  //jest tak gigantyczna ze kompilator upraszcza wypisując infinity
  printf("Rzutowanie INT_MAX do (float)FLT_MAX: '%i' do '%e'\n", INT_MAX, (float)INT_MAX);
  //Pokaże nam odpowiednik INT_MAX po rzutowaniu na float ponieważ float>int dodatkowo pokaże ja z dana potęgą po przecinku
  printf("Rzutowanie LLONG_MAX do (double)LLONG_MAX: '%lli' do '%18.1lf'\n", LLONG_MAX, (double)LLONG_MAX);
  //Reprezentacja LLONG_MAX przerobione do typu double

}
