#include <stdio.h>

int main() {

    int scores[] = {89, 82, 90, 86, 83, 97, 81, 92, 85};
    int length = sizeof(scores) / sizeof(scores[0]);
    printf("Size of Scores Array = %d \n", length); 


    return 0;
}

// gcc array-length.c -o array-length && ./array-length
