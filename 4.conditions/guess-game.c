#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){

    // const int PIKED_NUMBER = 9;
    // int given_number;

    // scanf("%d", &given_number);

    // if(given_number == PIKED_NUMBER){
    //     printf("You are Win\n");
    // }else{
    //     printf("You are Lose!");
    // }

    int picked_number, given_number;
    time_t t;

    srand((unsigned)time(&t));
    picked_number = rand() % 10 + 1;
    scanf("%d", &given_number);

    if(picked_number == given_number){
        printf("You are Win\n");
    }else{
        printf("You are Lose! piked_number was %d", picked_number);
    }

    return 0;
}

// gcc guess-game.c -o guess-game && ./guess-game