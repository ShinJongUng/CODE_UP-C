#include <stdio.h>

int main(void) {
  double n, m, k;
  scanf("%lf %lf %lf", &n, &m, &k); 
  printf("%.2lf MB", n*m*k/(8388608));
}

