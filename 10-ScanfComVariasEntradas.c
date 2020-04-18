#include <stdio.h>

int main(void) {

    int first=0, second=0, third=0;

    printf("Please enter three integers, separated by commas: ");
    scanf("%d,%d,%d", &first, &second, &third);
    printf("You entered: %d for first, %d for second, %d for third.\n", first, second, third);
    
    return 0;
}

