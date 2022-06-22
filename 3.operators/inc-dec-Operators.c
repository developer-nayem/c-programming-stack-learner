#include <stdio.h>

int main(void){

    int a = 5;

    // // post increment
    // a++;
    // printf("Post Increment - %d\n", a);

    // // Pre Increment
    // ++a;
    // printf("Pre Increment - %d\n", a);

    int result = a + a-- + a--; //  5 + 6 + 6
    printf("A = %d\n", a);
    printf("Result - %d\n", result);


    return 0;
}