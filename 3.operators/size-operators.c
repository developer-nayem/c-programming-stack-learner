#include <stdio.h>

int main(void){
    char c = 'C';
    short s = 120;
    int i = 323;
    long l = 323L;
    long long ll = 333223LL;

    printf("Size of Char = %d\n", (int)sizeof(c));
    printf("Size of Short = %d\n", (int)sizeof(s));
    printf("Size of int = %d\n", (int)sizeof(i));
    printf("Size of Long = %d\n", (int)sizeof(l));
    printf("Size of Long Lond = %d\n", (int)sizeof(ll));

    return 0;
}

// gcc size-operators.c -o size-operators && ./size-operators
