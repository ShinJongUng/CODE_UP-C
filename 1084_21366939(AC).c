#include <stdio.h>

int main(void) {
  int n, m, k, cnt=0;
  scanf("%d %d %d", &n, &m, &k); 
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      for(int s=0; s<k; s++){
        printf("%d %d %d\n", i, j, s);
        cnt++;
      }
    }
  }
  printf("%d", cnt);
}

