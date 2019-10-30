struct data{
  unsigned Y: 1; /* the second digit Y in X.Y */
  unsigned X : 1; /*the first digit X in X.Y */
  unsigned sign: 1; /*1 if positive, 0 if negative */
  unsigned line: 1; /*1 if linebreak */
};

struct dynvector{
  struct dynvector *next; /* pointing to next */
  struct dynvector *previous; /* pointing to previous*/
  struct data data;
};

struct dynmatrix{ /*This is in fact not a matrix but simply a vector pointing to other vectors, but I will use "Matrix" to distinguish from the vectors that point to scalars */
  struct dynmatrix *next; /* pointing to next matrix */
  struct dynmatrix *previous; /*Pointing to previous matrix */
  struct dynvector *dvector;
};

void repointdynvector(struct dynvector *); /*Sets the pointer to first non NULL element */
void repointdynmatrix(struct dynmatrix *); /*sets the pointer for all vectors to non NULL element, and sets matrix pointer to first vector */
struct dynvector * createdynvector(void);
struct dynmatrix* createdynmatrix(void);
struct dynmatrix * newdynmatrix(struct dynmatrix *);
struct dynvector * newdynvector(struct dynvector *);
