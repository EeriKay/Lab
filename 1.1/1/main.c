  #include<stdio.h>

  int main(void){ /*Good programming practice to make it clear that we are not inputting any value */
    printf("Låt oss göra lite matematik:\n"); fflush(stdout);/*Fungerar utan att använda esc-sekv på min kompilator */
    printf("Skriv ditt första tal: \n"); fflush(stdout);
    float i, j;
    scanf("%f",&i);
    printf("Skriv ditt andra tal: \n"); fflush(stdout);
    scanf("%f",&j);
    printf("%.3f * %.3f = %.3f",i,j,(i*j));
    return 0;
  }
