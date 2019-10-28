#include<stdio.h>
#include<limits.h>

int main(){
  int i = sizeof(int)*CHAR_BIT;
  printf("%d bits", i);
  return 0;
}
