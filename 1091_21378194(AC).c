#include <stdio.h>

int main(void) {
  int n, m, k, c, cnt = 0;
  scanf("%d %d %d %d", &n, &m, &k, &c);
  long long int i;
  for(i =n;; i = i * m + k){
      cnt++;
      if(c == cnt){
        break;
      }
    }
    printf("%lld", i);
  }
  

