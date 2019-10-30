/*Temporary file for playing with files */
#include"dmatrix.h"
#include<stdio.h>
#include<stdlib.h>



int main(){

struct data d1={0,0,1,0}; /*Y: X: SIGN: LINE: */
struct data d2={0,1,1,1};
struct data d3={0,1,0,0 };
struct data d4={0,0,1 ,1};
printf("Bp 1\n");
struct dynvector v11 = {NULL, NULL, d1};
struct dynvector v12 = {NULL, &v11, d2};
printf("Bp2 \n");
v11.next=&v12;
struct dynvector v21 = {NULL, NULL, d3};
struct dynvector v22= {NULL, &v21, d4};
v21.next = &v22;
struct dynmatrix m1= {NULL, NULL, &v11};
struct dynmatrix m2= {NULL, &m1, &v21};
m1.next=&m2;
struct dynvector *Vector1 = &v11;
struct dynvector *Vector2=&v21;
struct dynmatrix *Matrix = &m1;
printdata(&d1);


printmatrix(Matrix);
return 0;
}
