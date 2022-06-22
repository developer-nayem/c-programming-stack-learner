#include <stdio.h>

int main(void){
    
    unsigned char a = 12;
    unsigned char b = 25;

    unsigned char c = a & b;
    printf("AND Operators - %d\n", c);

    unsigned char d = a | b;
    printf("OR Operators - %d\n", d);

    unsigned char e = a ^ b;
    printf("XOR Operators - %d\n", e);

    unsigned char f = ~25;
    printf("Compliment Operators - %d\n", f);


    unsigned char rs1 = 212 >> 1;
    unsigned char rs2 = 212 >> 2;
    unsigned char rs3 = 212 >> 3;

    printf("Right shift 1 - %d\n", rs1);
    printf("Right shift 1 - %d\n", rs2);
    printf("Right shift 1 - %d\n", rs3);


    unsigned char ls1 = 212 << 1;
    unsigned char ls2 = 212 << 2;
    unsigned char ls3 = 212 << 3;

    printf("Left shift 1 - %d\n", ls1);
    printf("Left shift 1 - %d\n", ls2);
    printf("Left shift 1 - %d\n", ls3);


    return 0;
}