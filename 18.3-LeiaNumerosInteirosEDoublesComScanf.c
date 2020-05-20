#include <stdio.h>
int main(void) {
    /**
    int age;
    double height;
    printf("What is your age?");
    scanf("%d",&age);
    printf("What is your height?");
    scanf("%lf",&height);
    printf("You are %d years old and %.2lf meters tall.",age,height); */

    /**
    int idade;
    double altura;
    printf("Qual sua idade? \n");
    scanf("%d",&idade);
    printf("Qual sua altura? \n");
    scanf("%lf",&altura);
    printf("Você tem %d anos de idade e %.2lf metros de altura \n", idade, altura); */

    // VOCÊ PODE FAZER O MESMO PROGRAMA COM MENOS LINHAS DE CÓDIGO. POR EXEMPLO:
    int idade;
    double altura;

    printf("Qual sua idade e sua altura (separados por espaço)?");
    scanf("%d %lf",&idade,&altura);
    printf("Você tem %d anos de idade e %.2lf metros de altura \n", idade, altura);

    return 0;
}
