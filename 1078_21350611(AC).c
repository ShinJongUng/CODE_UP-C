#include <stdio.h>

int main(void) {
  int n;
  int d = 0;
  scanf("%d", &n);
  for(int i=0; i<=n; i++){
    if(i%2 == 0){
      d += i;
    }
  }
  printf("%d", d);
}
