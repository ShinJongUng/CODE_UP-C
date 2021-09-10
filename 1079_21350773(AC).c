#include <stdio.h>

int main(void) {
  char n;
  search:
  scanf("%c", &n);
  printf("%c", n);
  if(n != 'q'){
    goto search;
  }
}
