/*
Você está ajudando um professor a obter notas médias. Você fica entediado com as médias de computação
manualmente, então decide escrever um programa de computador para fazer o trabalho por você.

Seu programa deve primeiro ler um número inteiro indicando o número de notas a serem calculadas para
a média. Em seguida, seu programa lerá as notas uma a uma, todas também inteiras. Finalmente, seu
programa calculará e imprimirá a média das notas com duas casas decimais.
*/

#include <stdio.h>

int main (void) {

int count,num1,sum=0;
double dsum;
printf("Por favor, informe a quantidade de provas você tem. \n");
scanf("%d",&count);

for(int i=0; i<count; i++){
    printf("Por favor, informe o valor da nota. \n");
    scanf("%d",&num1);
    sum = sum + num1;
}
dsum = ((double) sum /count);
printf("\n A média é: %.2lf ",dsum);

/* SOLUÇÃO DA PLATAFORMA
int num, grade, i;
    int sum = 0;
    double doubSum;

    scanf("%d", &num);
    for(i=0 ; i < num ; i++){
        scanf("%d", &grade);
        sum = sum + grade;
    }
    doubSum = (double) sum;
    printf("%.2lf", doubSum/num); */


 return 0;
}
