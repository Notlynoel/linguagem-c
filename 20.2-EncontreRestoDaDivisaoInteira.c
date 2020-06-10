/**
Você tem várias peças soltas que gostaria de colocar em caixas.
Escreva um programa que calcule e exiba quantas caixas cheias você terá e
quantas sobras de correspondência você terá depois de preencher todas as
caixas que puder. Seu programa deve ter como entrada o número de correspondências
a serem encaixotadas, seguido pelo tamanho de cada caixa. Em seguida, ele deve
imprimir o número de caixas cheias, seguido pelo número de correspondências restantes. */


#include<stdio.h>
int main(){
    
    int pecas = 0;
    int caixas = 0;
    int rest = 0;

    printf("Por favor, informe quantas peças você tem. \n");
    scanf("%d",&pecas);
    printf("Por favor, informe quantas caixas você tem. \n");
    scanf("%d", &caixas);

    caixas = pecas;
    rest = pecas%caixas;

    printf("Você tem %d caixas cheias e\n restam %d peças\n",caixas,rest);

    return 0;
}
