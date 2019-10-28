#include<stdio.h>
#include"nod.h"

int main()
{
  double float;
  printf("Ge data för första nod!");
  if (scanf("%f",&float)==1)
  {}
  else
  {
  printf("Det där är inte ett tal! Det får standardvärdet noll istället!")
  float=0;
  }
  struct node rot{float, NULL, NULL};
  struct node *pointer;



  return 0;
}
