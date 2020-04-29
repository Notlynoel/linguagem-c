#include <stdio.h>

int main(void) {

  char letter;

  printf("Por favor, informe um dos caracteres '# ou O' \n");

  scanf("\n%c",&letter);
  int a =0;
  for(a=0;a<4;a++) {
     printf("+");
  }
   printf("%c", letter);
   for(a=0;a<4;a++) {
     printf("+");
    }
   printf("\n");

    for(a=0;a<3;a++) {
      printf("+");
    }

    printf("%c%c%c", letter,letter,letter);


  for(a=0;a<3;a++) {
    printf("+");
  }
  printf("\n");

    for (a=0;a<2;a++) {
      printf("+");

    }

    printf("%c%c%c%c%c", letter,letter,letter,letter,letter);

    for(a=0;a<2;a++) {
      printf("+");
    }
    printf("\n");

      for(a=0;a<1;a++) {
        printf("+");
      }
      printf("%c%c%c%c%c%c%c", letter,letter,letter,letter,letter,letter,letter);
        for (a=0;a<1;a++) {
          printf("+");
        }
        printf("\n");
          for(a=0;a<9;a++) {
            printf("%c",letter);
          }

        printf("\n"); // Apenas para dá um espaço

          return 0;
}
