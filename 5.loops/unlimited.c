#include <stdio.h>

int main(){

    int a, b;
    char ch = 'C';

    while(ch = 'q') {
        scanf("%d %d", &a, &b);
        printf("Result = %d\n", a + b );

        printf("Type c to reu again. Type q to quit");
        scanf("%c", &ch);
    }

    return 0; 
}

// gcc unlimited.c -o unlimited && ./unlimited
