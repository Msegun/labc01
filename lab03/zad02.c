#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
  short wynik;
  int wynik2;
  wynik = SHRT_MAX + 1; // 32767+1 w teorii = 32776
  printf("SHORT  %i + 1 = %i\n", SHRT_MAX, wynik); // ale jednak NIEEEE PRZYPADEK ?
  wynik2 = INT_MAX + 1; // 2147483647 + 1 = 2147483648
  printf("INT %i + 10 = %i\n", INT_MAX, wynik2);
  long wynik3;
  wynik3 = LONG_MAX + 100;
  printf("LONG %li + 100 = %li\n", LONG_MAX, wynik3);
  long long wynik4;
  wynik4 = LLONG_MAX + 100;
  printf("lONG LONG %lli + 100 = %lli\n", LLONG_MAX, wynik4);
  float wynik5;
  wynik5 = 0.000001/2.0; // w teorii powinno byc 0.0000005
  printf("FLOAT 0.000001/2.0 = %f\n", wynik5); // FLT_MIN=0.000000
  double wynik6;
  wynik6 = 0.000003/4.0; // w teorii 0.00000075
  printf("DOUBLE 0.000007/4.0 = %lf\n", wynik6); // DBL_MIN=0.000000
  long double wynik7;
  wynik7 = 0.00000000000000001/2.0;
  printf("LONG DOUBLE 0.00000000000000001/2.0 = %Lf\n", wynik7); // LDBL_MIN =0.000000
  return 0;
}
