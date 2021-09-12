#include <stdio.h>

int main(void) {
  int a, i, j, k, h, w, n, l, d;
  scanf("%d %d", &h, &w);
  int arr[100][100] = {};
  scanf("%d", &n);
  int x, y;
  for(a=0; a<n; a++){
    scanf("%d %d %d %d", &l, &d, &x, &y);
    for(i=1; i<=w; i++){
      for(j=1; j<=h; j++){
        if(d == 1){
          for(k = 0; k<l; k++){
            arr[x+k][y] = 1;
          }
        }
        else{
          for(k = 0; k<l; k++){
            arr[x][y+k] = 1;
          }
        }
      }
    }
  }
  for(i=1; i<=h; i++){
    for(j=1; j<=w; j++){
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
}
