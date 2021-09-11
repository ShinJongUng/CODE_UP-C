#include <stdio.h>

int main(void) {
  long long int n, m, k, cnt=0;
  scanf("%lld %lld %lld", &n, &m, &k);
  long long int i;
  for(i =n;; i*=m){
    cnt++;
    if(k == cnt){
      break;
    }
  }
  printf("%lld", i);
}

