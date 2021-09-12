#include <stdio.h>

int main(void) {
  int n, i , min=23;
  int a[10000]={};
  scanf("%d", &n); 
  for(i=1; i<=n; i++) 
  {
    scanf("%d", &a[i]);
  }
  for(i=1; i<=n; i++)
  {
    if(min >= a[i])
      min = a[i];
  }
  printf("%d", min);
}
