#include<stdlib.h>
#include<stdio.h>
#include"dmatrix.h"
void repointdynvector(struct dynvector *p)
{
  if (p!=NULL)
  {
    while (p->previous!=NULL)
    {
      p = p->previous;
    }
  }
}

void repointdynmatrix(struct dynmatrix *p)
{
  struct dynmatrix * beginning; /*Will temporary save the "first" pointer in the tree when the loop has reahed there */
  struct dynmatrix * start = p; /*Will point to the initial position where the pointer pointed */
  while (p->previous!=NULL)
  {
    repointdynvector(p->dvector);
    p=p->previous;
  }
  repointdynvector(p->dvector);
  beginning=p;
  p=start->next;
  while(p!=NULL)
  {
    repointdynvector(p->dvector);
  }
  p=beginning;

}

struct dynmatrix * createdynmatrix(void)
{
  struct dynmatrix * p = (struct dynmatrix *) calloc(1, sizeof(struct dynmatrix));
  if (p==NULL)
  {
    printf("SOMETHING WENT WRONG!");
  }
  else
  {
    return p;
  }
}

struct dynvector * createdynvector(void)
{
  struct dynvector * p = (struct dynvector *) calloc(1, sizeof(struct dynvector));
  if (p==NULL)
  {
    printf("Something went wrong!");
  }
  else
  {
    return p;
  }
}

struct dynmatrix * newdynmatrix(struct dynmatrix *p)
{
  struct dynmatrix * newp=createdynmatrix();
    newp->next=p->next;
    newp->previous=p;
    p->next=newp;
}
struct dynvector * newdynvector(struct dynvector *p)
{
  struct dynvector * newp=createdynvector();
  newp->next=p->next;
  newp->previous=p;
  p->next=newp;
}

void printdata(const struct data * p)
{
  if (p!=NULL)
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
  }
  else
  {
    printf("NULL pointer! \n");
  }
}

void printvector(struct dynvector * p)
{
  struct dynvector * q=p;
  repointdynvector(q);
  while(q!=NULL)
  {
    printdata(&(q->data));
    q=q->next;
  }
}
void printmatrix(struct dynmatrix * p)
{
  repointdynmatrix(p);
  struct dynmatrix * beginning = p;
  while(p!=NULL)
  {
    printvector(p->dvector);
    p=p->next;
  }
  p = beginning;
}
