#include <stdio.h>
int main(void) {
    //Create a variable to store an integer value
    int age;
    //Assigne a value to that variable
    age = 47;
    printf("Eu tenho %d anos de idade.\n", age);
    printf("Em %d anos, terei %d anos de idade.\n", 8, age+8);
    printf("%d anos atrás, eu tinha %d de idade.\n", 11, age-11);
    return 0;
}
