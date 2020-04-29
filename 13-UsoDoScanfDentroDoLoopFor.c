#include <stdio.h>
int main() {
    int quantidade = 0;
    int soma = 0;
    int numeroLido = 0;

    printf("Quandos números você deseja ler ?\n");
    scanf("%d",&quantidade);

    printf("Por favor, informe um número \n");
    for(int i = 0; i < quantidade; i++){
        scanf("%d",&numeroLido);
        printf("Eu li o número %d que foi digitado no teclado \n",numeroLido);
        printf("Você ainda pode digitar mais um número \n");
        soma = soma + numeroLido;
        printf("A soma dos números lidos é: %d\n",soma);
    }
  return 0;
}
