#include <stdio.h>

void fp5(int n, int k, int *q, int *r){
  *q = n / k;
  *r = n % k;
}

int main(){

  int lp1, lp2, iloraz, reszta;
  scanf("%d", &lp1);
  scanf("%d", &lp2);
  printf("wyniki\n");
  fp5(lp1, lp2, &iloraz, &reszta);
  printf("Iloraz calkowiy %d, reszta z dzielenie %d\n", iloraz, reszta);

}
