#include <stdio.h>

int main(void){
    // if else condition

    int nayem = 23;
    int sayem = 20;
    int maruf = 18;

    if(nayem > sayem && nayem > maruf){
        printf("Nayem is Elder\n");
    }
    else if (nayem < sayem && sayem > maruf){
        printf("Sayem is Elder\n");
    } else{
        printf("Maruf is Elder\n");
    }

    return 0;
}

// gcc if-else-condition.c  -o if-else-condition && ./if-else-condition