#include"nod.h"
#include<stdio.h>
#include<stdlib.h>
struct node *createnode(void)
{
  struct node *next;
  next = (struct node *) calloc(1, sizeof(struct node));
  if (next==NULL) {
    printf("Something went horribly wrong!");
  }
  else
  {
    next->data=0;
    return next;
  }
}

struct node *move(struct node *p,  int i){
  if (i==0)
  {
    return p;
  }
  else if (i<0)
  {
    if (p->previous!=NULL){
      p=p->previous;
      p=move(p, (i+1));
    }
    else{
      printf("You have reached the beginning of the thread! \n");
    }
  }
  else
  {
    if (p->next!=NULL){
      p=p->next;
      p=move(p,(i-1));
    }
    else{
      printf("You have reached the end of the thread! \n");
    }

  }
return p;
}
void del(struct node * p)
{
  if (p->previous==NULL&&p->next==NULL) {
    free(p);
  }
  else if(p->previous==NULL)
  {
    (p->next)->previous=NULL;
  }
  else if(p->next==NULL)
  {
    (p->previous)->next=NULL;
  }
  else
  {
    struct node *q = p->previous;
    (p->previous)->next=(p->next);
    (p->next)->previous=q;
  }

}
void insertleftnode(struct node * p)
{
  struct node * newp = createnode();
  if (p->previous==NULL)
  {
    newp->previous=NULL;
    newp->next=p;
    p->previous=newp;
  }
  else
  {
    newp->previous=p->previous;
    newp->next=p;
    (p->previous)->next=newp;
    p->previous=newp;
  }
}

void insertrightnode(struct node * p)
{
  struct node * newp = createnode();
  if (p->next==NULL)
  {
    newp->next=NULL;
    newp->previous=p;
    p->next=newp;
  }
  else
  {
    newp->next=p->next;
    newp->previous=p;
    (p->next)->previous=newp;
    p->next=newp;
  }
}
void setdata(struct node * p, double input)
{
  p->data=input;
}

float getdata(struct node *p)
{
  float f =p->data;
  return f;
}

void printall(struct node *p)
{
  struct node * q= p;
  while(q->previous!=NULL)
  {
    q=q->previous;
  }
  while(q!=NULL)
  {
    if(p!=q)
    {
      printf("%.3f ",q->data);

    }
    else
    {
      printf("[%.3f] ",q->data);
    }
    q=q->next;
  }
  printf("\n");

}
