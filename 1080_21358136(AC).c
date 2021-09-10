#include <stdio.h>

int main(void) {
  int n, value = 0;
  scanf("%d", &n);
  int i = 0;
 while(n >= value){
   i++;
   value += i;
   if(n == value){
     i--;
   }
 }
 printf("%d", i);
}
