#include <stdio.h>

int main(){

    /// Signed Integer Data
    printf("Signed Integer Number\n");
    
    // short - %d %hi
    short int a = 45;
    printf("I am short - %hi\n", a);

    // int - %d %i
    int b = 1000;
    printf("I am int - %d\n", b);

    // Long - %ld, li
    long c = 1200L;
    printf("I am Long - %ld\n", c);

    // Long Long - %lld %lli
    long long d = 34343LL;
    printf("I am Long Long - %lld\n", d);

    // Octal Int - %o
    int o = 0777;
    printf("I am Octal - %o\n", o);
    printf("I am Decimal of Octal - %d\n", o);

    // Hexadecimal int - %x, %X
    int h = 0xfff;
    printf("I am Hexadecimal - %x\n", h);
     printf("I am Decimal of Hexadecimal - %d\n", h);

     //

     // Unsigned Integers
     printf("Unsigned Integers\n");

     // ussinged short - %hu
     unsigned short us = 41;
     printf("Unsigned Short - %hu\n", us);

     // Unsigned Int - %u
     unsigned ui = 4454;
     printf("unsigned int - %u\n", ui);

     // Unsigned Long - %lu
     unsigned ul = 445454;
     printf("unsigned Long - %lu\n", ul);

     // Unsigned Long Long - %llu
     unsigned ull = 44545444;
     printf("unsigned Long Long - %llu\n", ull);

     // unsigned short negative - %hu
     unsigned short negative = -2;
     printf("Negative Unsigned - %hu\n", negative);


    return 0;
}