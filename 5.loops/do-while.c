#include <stdio.h>

int main(){
    
    int n = 5;

    while(n < 5) {
        printf("It won't run");
    }

    do{
        printf("I will run at least once\n");
    } while (n < 5);

    return 0;
}

// gcc do-while.c -o do-while && ./do-while