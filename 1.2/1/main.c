#include<stdio.h>
#include<math.h>
int main(void )
{
  int i;
  double j=0;
  if (1==scanf("%d", &i))
  {
    printf("Ett tal!");
    i *=i;
    printf("%d \n", i);
    while(pow(10,++j)<i);
    {;}
    printf("%.0f",j);
  }
  else
  {
    printf("Inte ett tal!");
  }

  return 0;
}
