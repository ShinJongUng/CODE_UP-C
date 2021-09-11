#include <stdio.h>

int main(void) {
  int n, m, k, cnt=0;
  scanf("%d %d %d", &n, &m, &k);
  int i;
  for(i =n;; i+=m){
    cnt++;
    if(k == cnt){
      break;
    }
  }
  printf("%d", i);
}

