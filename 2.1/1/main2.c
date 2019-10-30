/*Temporary file for playing with files */
#include"dmatrix.h"
#include<stdio.h>



int main(){
FILE *utfil;
char filnamn[30];
printf("What's the name of your file? Max 30 letters\n");


if (scanf("%s",filnamn)!=1)
{
  printf("Wrong format! Closing program");
  return 0;
}
utfil=fopen(filnamn,"rb+");
struct data D[4];
struct data d1={0,0,1,0}; /*Y: X: SIGN: LINE: */
struct data d2={0,1,1,1};
struct data d3={0,1,0,0 };
struct data d4={0,0,1 ,1};
D[0]=d1;
D[1]=d2;
D[2]=d3;
D[3]=d4;
struct data *p = D;
while(p<&D[4])
{
  if (p->line==0)
  {
    if(p->sign==1)
    {
      printf("%d.%d ", p->X, p->Y);
    }
    else
    {
      printf("-%d.%d ", p->X, p->Y);
    }
  }
  else
  {
    if(p->sign==1)
    {
      printf("%d.%d\n", p->X, p->Y);
    }
    else
    {
      printf("-%d.%d\n", p->X, p->Y);
    }
  }
p++;
}

return 0;
}
