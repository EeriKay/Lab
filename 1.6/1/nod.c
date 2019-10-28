#include"nod.h"
#include<stdio.h>
struct node *createnode(void)
{
  struct node *next;
  next = (struct node *) calloc(1, sizeof(struct node));
  if (next==NULL) {
    printf("NÅGOT GICK FEL!");
  }
  else
  {
    return next;
  }
}

struct node *go
