/**
 * Você trabalha para o IBP (International Bureau of Procrastination). Você foi perguntado quanto tempo resta até o dia oficial da procrastinação (25 de março).

Dado que você foi solicitado em 23 de março, escreva um programa C que execute aritmética para produzir a seguinte saída:

Caro procrastinador,
Você ainda precisa esperar X dias (Y minutos ou Z segundos) antes de poder procrastinar!
Aqui, X é o número restante de dias (25-23), Y é o número de minutos (60 * 24 * X) e Z é o número de segundos (60 * Y). A sentença deve ser exatamente a exibida acima, substituindo X, Y e Z pelos valores computados. O formato deve ser seguido com precisão.

Aviso: Você não pode simplesmente executar esses cálculos sozinho e imprimir os valores - seu programa deve calculá-los e imprimi-los usando o especificador de formato% d. */

// Our Libraries
#include <stdio.h>

//main function
int main(void){

    /*You need to create 3 variables to solve this exercise
    X, Y, Z will be pre-calculated and store the value for you. Later you can simply call the necessary variable (X, Y, Z). I guess some people are struggling with the part
    where you need to multiply a number with something that hasn't been calculated yet
    You can as well skip the variable part and write everything again... 

    printf("You still have to wait for %d days (%d minutes or %d seconds) before you can procrastinate!",25-23,60*24*(25-23),60*24*60*(25-23));*/

    // MINHA SOLUÇÃO VOI IMPLEMENTAR ESSAS 3 VARIÁVEIS ATRIBUÍNDO SEUS RESPECTIVOS VALORES CORRETO	
    int x = (25-23);
    int y = (60*24*2);
    int z = (60*60*2*24);

    //the first sentence, I could have written everything in the same line but it's confusing
    printf("Dear procrastinator\n");
    //Here is the same as the previous lesson, but this time you call the variables with the calculated value
    printf("you still have to wait for %d days (%d minutes or %d seconds) before you can procrastinate! \n",x,y,z);

    // A SOLUÇÃO DA PLATAFORMA PARA O MESMO PROBLEMA É O SEGUINTE:
    printf("\nDear Procrastinator,\n");
    printf("You still have to wait for %d days (%d minutes or %d seconds) ", (25-23), (25-23)*24*60, (25-23)*24*3600);
    printf("before you can procrastinate!\n");

    return (0);

}
