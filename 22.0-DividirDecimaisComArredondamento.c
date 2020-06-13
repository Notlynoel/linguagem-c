/*
Você está construindo uma nova casa e calculou exatamente a quantidade de cimento necessária para a fundação.
Idealmente, você gostaria de comprar essa quantidade exata de cimento, mas a loja só vende cimento em sacos
de 120 libras. Cada uma dessas sacolas custa 45 dólares. Escreva um programa C que calcula o custo do cimento
que você terá que comprar para construir sua fundação.

Seu programa deve primeiro ler um número decimal representando a quantidade de cimento necessária (em libras)
para as fundações de sua nova casa. Seu programa deve exibir o custo total dos sacos de cimento que você precisa
comprar para ter cimento suficiente para construir sua fundação. Para tornar seu programa mais simples, você tem
a garantia de que a quantidade de cimento necessária NUNCA será um múltiplo de 120.

Neste exemplo, você precisa de 295,8 libras de cimento. Como a loja vende cimento apenas em incrementos de 120 libras,
 você precisará de três sacolas (360 libras), uma vez que 2 sacas (240 libras) não são suficientes e não é possível
 comprar frações de uma sacola. Como as sacolas custam US $ 45 cada, o custo total é de 45 * 8 ou 135 dólares. */

#include <stdio.h>

int main (void) {
double cement, dSum;
int cost, bag, iSum, rSum ;
bag=120;
cost =45;

printf("Por favor, informe a quantidade de cimento. \n");
scanf("%lf", &cement);

dSum = (cement/bag);
iSum = (int)dSum+1;
rSum = cost*iSum;
printf("%d\n",rSum);
return 0; }
