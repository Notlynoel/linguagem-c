#include <stdio.h>

int main(void) {
  char letter;

  printf("Por favor, informe um dos seguintes caracter '# ou 0'\n");

  scanf("\n%c",&letter);

  int a = 0;
  // Este for criará os 21 primeiros sinais de + do lado esquerdo
  for(a = 0; a < 21; a = a + 1) {
    printf("+");
  }
  // Imprime o símbolo central da primeira linha superior
  printf("%c%c",letter,letter);
  // Este for criará os 21 primeiros sinais de + do lado direito
  for(a = 0; a < 21; a = a + 1) {
    printf("+");
  }
  // Este printf é apenas para quebrar/pular para próxima linha
  printf("\n");

  // Este for criará os 20 primeiros sinais de + da segunda linha do lado esquerdo
  for(a = 0; a < 20; a = a + 1) {
    printf("+");
  }
  // Este printe imprime os 4 zeros da segunda linha
  printf("%c%c%c%c",letter,letter,letter,letter);
  // Este for criará os 20 primeiros sinais de + da segunda linha do lado direito
  for(a = 0; a < 20; a++) {
    printf("+");
  }
  // Este printf é apenas para quebrar/pular para próxima linha 
  printf("\n");

  // Este for criará 19 primeiros sinais de + da terceira linha do lado esquerdo
  for(a = 0; a < 19; a++) {
    printf("+");
  }
  // Este printi imprime os 6 zeros da terceira linha
  printf("%c%c%c%c%c%c",letter,letter,letter,letter,letter,letter);
  // Este for criará os 19 primeiros sinais de + da terceira linha do lado direito
  for(a = 0; a < 19; a++) {
    printf("+");
  }
  // Este printe é apenas para quebrar/pular para próxima linha
  printf("\n");

  // Este for criará 18 primeiros sinais de + da quarta linha do lado esquerdo
  for(a = 0; a < 18; a++) {
    printf("+");
  }
  // Este printi imprime os 8 zeros da quarta linha
  printf("%c%c%c%c%c%c%c%c",letter,letter,letter,letter,letter,letter,letter,letter);
  // Este for criará os 18 primeiros sinais de + da quarta linha do lado direito
  for(a = 0; a < 18; a++) {
    printf("+");
  }
  // Este printe é apenas para quebrar/pular para próxima linha
  printf("\n");

  // Este for criará 17 primeiros sinais de + da quinta linha do lado esquerdo
  for(a = 0; a < 17; a++) {
    printf("+");
  }
  // Este printi imprime 10 zeros da quinta linha
  printf("%c%c%c%c%c%c%c%c%c%c",letter,letter,letter,letter,letter,letter,letter,letter,letter,letter);
  // Este for criará os 17 primeiros sinais de + da quinta linha do lado direito
  for(a = 0; a < 17; a++) {
    printf("+");
  }
  // Este printe é apenas para quebrar/pular para próxima linha
  printf("\n");

  // Este for criará 16 primeiros sinais de + da sexta linha do lado esquerdo
  for(a = 0; a < 16; a++) {
    printf("+");
  }
  // Este printi imprime 12 zeros da sexta linha
  printf("%c%c%c%c%c%c%c%c%c%c%c%c",letter,letter,letter,letter,letter,letter,letter,letter,letter,letter,letter,letter);
  // Este for criará os 16 primeiros sinais de + da sexta linha do lado direito
  for(a = 0; a < 16; a++) {
    printf("+");
  }
  // Este printe é apenas para quebrar/pular para próxima linha
  printf("\n");

  return 0;
}
