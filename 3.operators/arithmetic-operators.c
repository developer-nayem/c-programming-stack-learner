#include <stdio.h>

int main(void){

    int a = 30;
    int b = 7;

    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);
    printf("Division: %d\n", a / b);
    printf("Remainder: %d\n", a % b);

    return 0;
}

// gcc arithmetic-operators.c -o arithmetic-operators && ./arithmetic-operators