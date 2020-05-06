#include <stdio.h>

int main(void) {
    int i = 8, num, times = 0;
    printf("Por favor, informe um número inteiro para gerar sua tabuada \n");
    scanf("%d", &num);

   if(num == 8 || num == 5){
        for(i = 0; i < 11; i++) {
        printf("%dx%d = %d \n", times, num, times*num);
        times = times + 1;
        }
   }else {
    printf("Tabuada não disponível. Por favor, informe o número 5 ou 8 \n");
   }
    return 0;
}


