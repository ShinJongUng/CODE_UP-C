#include <stdio.h>

int main(void) {
  int n;
  scanf("%d", &n);
  int i = 0, cnt = 0;
  while(n >= i){
    if(n==i)
    break;
    cnt++;
    i += cnt;
  }
  printf("%d", i);
}

