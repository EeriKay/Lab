struct node{
  float data;
  struct node *next;
  struct node *previous;
};
/*Skapa minne för en ny nod */
struct node *createnode(void);

struct node *move(struct node *,  int);

void del(struct node *);

void insertrightnode(struct node *);

void insertleftnode(struct node *);

void setdata(struct node *, double);

float getdata(struct node *);

void printall(struct node *);
