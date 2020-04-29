#include <stdio.h>

int main() {

    int i, num;
    
    printf("\nPor favor, informe um número inteiro para ver sua tabuada: ");
    
    scanf("%d", &num);

    for (i = 0; i <= 10; i++){
        printf("%dx%d = %d\n", i, num, i*num);
    }

    return(0);
}
