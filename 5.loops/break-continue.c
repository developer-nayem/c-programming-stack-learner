#include <stdio.h>

int main(){

    int i;

    for(i = 0; i < 100; i++) {
        // if(i = 5){
        //     break;
        // }

        if(i%3 == 0 || i%5 == 0 || i%6 == 0){
            continue;
        }

        printf("I = %d\n", i);
    }

    return 0;
}

// gcc break-continue.c -o break-continue && ./break-continue