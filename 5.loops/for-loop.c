#include <stdio.h>

int main(){

    int i = 1;

    // for(i = 1; i <= 100; i++) {
    //     printf("%d - HM Nayem\n", i);
    // }

    // for (i = 1; i <= 100; i ++){
    //     if (i%2 == 1){
    //     printf("%d is Odd\n", i);
    // }else{
    //     printf("%d is Even\n", i);
    // }
    // }

    for(i = 2; i <= 100; i+=2){
        printf("%d is even\n", i);
    }

    int a;
    for(a = 1; a <= 100; a+=2){
        printf("%d is Odd\n", a);
    }

    return 0;
}

// gcc for-loop.c -o for-loop && ./for-loop