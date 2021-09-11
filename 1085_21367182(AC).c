#include <stdio.h>

int main(void) {
  double n, m, k, j;
  scanf("%lf %lf %lf %lf", &n, &m, &k, &j); 
  printf("%.1lf MB", n*m*k*j/(8388608));
}


