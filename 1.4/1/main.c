#include<stdio.h>

void dubblera(int x)
{
  x *=2;
}
void dubblera2(int *x)
{
  *x *=2;
}
int main(){
  int x;
  int *y=&x;
  printf("Skriv in ditt tal: \n");
  if (1==scanf("%d",y))
  {

      dubblera(x);
      printf("funktion dubblera: %d \n",x);
      dubblera2(y);
      printf("funktion dubblera2: %d \n", x);
  }


}
