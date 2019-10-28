#include<stdio.h>
int main(){
  char text[] = "Gothenburg";
  char *my_pointer = text;
  int number=0;
  printf("Strängen är: \"Gothenburg\". \n Pekaren pekar på \"%c\", välj en operation: \n", *my_pointer);
  printf("1) Plus 1\n");
  printf("2) Minus 1 \n");
  printf("4) Avsluta programmet \n");
  while (scanf("%d",&number)!=EOF)
  {
    switch (number) {
      case 1:
        if (my_pointer<text+sizeof(text)-2) {
          my_pointer++;
        }
        else
        {
          printf("Du har nått slutet på strängen! \n");
        }
        break;
      case 2:
        if(my_pointer>text)
        {
          my_pointer--;
        }
        else
        {
          printf("Du har nått början av strängen! \n");
        }
        break;
      case 4:
      return 0;
      default:
      printf("Fel! \n");
      break;
    }
    printf("Strängen är: \"Gothenburg\". \n Pekaren pekar på \"%c\", välj en operation: \n", *my_pointer);
    printf("1) Plus 1\n");
    printf("2) Minus 1 \n");
    printf("4) Avsluta programmet \n");
  }

  return 0;
}
