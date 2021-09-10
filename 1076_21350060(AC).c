#include <stdio.h>

int main(void) {
  char n;
  scanf("%c", &n);
  char i = 'a';
  while(i != n + 1){
    printf("%c ", i);
    i++;
  }
}
