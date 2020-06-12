/*
Você acabou de começar a aprender um novo idioma e decide comprar alguns livros para praticar.
Felizmente, você encontra rapidamente um vendedor de livros que oferece todos os livros pelo
mesmo preço baixo e fixo. Você tem uma certa quantia em dinheiro e gostaria de saber quantos
livros do mesmo preço você pode comprar.

Escreva um programa C que comece lendo a quantidade de dinheiro que você tem (que pode ser um dobro)
e depois leia o preço por livro (que novamente pode ser um dobro). O programa deve exibir um número
inteiro, ou seja, o maior número de livros que você pode comprar com a quantia especificada. */

#include <stdio.h>

int main(void) {
    double cash, price;
    int num;

    printf("Por favor, informe o valor que você deseja gastar na compra de livros. \n");
    scanf("%lf", &cash);
    printf("Por favor, informe quantos livros deseja comprar. \n");
    scanf("%lf", &price);
    num = (int)(cash/price);
    printf("\n O valor de cada livros compros é: %d", num);
    return(0);
}
