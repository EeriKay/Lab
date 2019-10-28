struct node{
  double data;
  struct node *next;
  struct node *previous;
};
/*Skapa minne för en ny nod */
struct node *createnode(void);
