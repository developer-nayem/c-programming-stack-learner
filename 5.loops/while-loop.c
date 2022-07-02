#include <stdio.h>

int main(){
    int i = 1;

    while(i <= 10){
        printf("I = %d\n", i);
        i++;
    }

    return 0; 
}

// gcc while-loop.c -o while-loop && ./while-loop
