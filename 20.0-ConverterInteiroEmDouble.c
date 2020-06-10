
#include <stdio.h>
int main(void) {
    int iOne;
    int iTwo;
    double dOne;
    printf("Please enter two integers: ");
    scanf("%d %d",&iOne, &iTwo);

    // Convertendo o valor inteiro para double
    dOne = (double) iOne;
    printf("dOne/iTwo equals %lf\n",dOne/iTwo);
    return 0;
} 
