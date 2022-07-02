#include <stdio.h>

int main(){
    
    int width, height, i, j;
    scanf("%d %d", &width, &height);
    

    for(i = 0; i < height; i++){
        for(j = 0; j < width; j++){
        printf("* ");
    }
    printf("\n");
    }
    for(j = 0; j < width; j++){
        printf("* ");

    return 0;
}

// gcc box.c -o box && ./box
