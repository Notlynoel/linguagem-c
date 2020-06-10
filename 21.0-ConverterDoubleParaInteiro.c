/*
 * A população de uma cidade aumentou bastante nos últimos anos, graças a uma alta taxa
 * de natalidade. No entanto, isso apresenta uma série de problemas, incluindo uma
 * escassez de moradias. O prefeito decidiu lidar com o problema e gostaria de estimar
 * o crescimento futuro da população, e chamou você para ajudar!
 *
 * Escreva um programa C que leia primeiro um número inteiro que representa a população
 * atual da cidade e que depois leia um número decimal para o crescimento populacional
 * projetado como uma porcentagem (positiva ou negativa). O programa deve exibir a
 * população esperada da cidade em um ano como um número inteiro. Por convenção,
 * consideraremos apenas pessoas "inteiras". Portanto, uma população de 31,8 habitantes
 * será considerada como possuindo 31 habitantes.  */


#include <stdio.h>

int main(void){

    int population, iRate;
    double rateOfGrowth;
    scanf("%d", &population);
    scanf("%lf", &rateOfGrowth);
    iRate = (int) rateOfGrowth;
    iRate = (population * iRate / 100) + population;
    printf("%d", iRate);

    /* SOLUÇÃO DA PLATAFORMA
    int current, futureInt;
    double growth, futureDoub;

    scanf("%d", &current);
    scanf("%lf", &growth);
    futureDoub = current * (1 + growth / 100);
    futureInt = (int) futureDoub;
    printf("%d", futureInt); */

    return 0;
}
