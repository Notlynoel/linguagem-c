/**
Petra, Rémi e suas famílias foram caminhar juntos nas montanhas e perceberam que as distâncias
são medidas em diferentes unidades na França e nos Estados Unidos. Para ajudá-los a converter
entre unidades, escreva um programa que leia um número decimal representando uma distância em
quilômetros e que imprima a distância correspondente em milhas com 6 casas decimais.
Você pode usar o fato de que um quilômetro equivale a 0,621371 milhas.

Exemplo de entrada: 4.8
Resultado: 2,982581 */

#include <stdio.h>

int main(void) {

    double km;
    scanf("%lf",&km);
    km=km*0.621371;
    printf("%.6lf",km);

    // SOLUÇÃO FEITA PELO SISTEMA edX
    /**
    double distance, milesToKm;

    milesToKm = .621371;

    scanf("%lf", &distance);

    printf("%.6lf", distance * milesToKm); */

    return 0;
}
