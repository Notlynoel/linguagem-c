#include <stdio.h>

int main(void) {

    int i;

    // PRIMEIRO FOR
    printf("+");
    for (i = 0; i < 23; i++){
        printf("-");
    }
    printf("+\n");

    	// SEGUNDO FOR
        for (i = 0; i < 3; i++) {
            printf("| o | X | o | X | o | X |");
            printf("\n");
            printf("| X | o | X | o | X | o |");
            printf("\n");
        }
        printf("+");

	    // TERCEIRO FOR
            for (i = 0; i < 23; i++) {
                printf("-");
            }
            printf("+ \n");
    
    return(0);
}

