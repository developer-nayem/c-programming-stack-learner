#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main(){
    time_t t;
    srand((unsigned)time(&t));

    int choosen_number, chance = 3;
    bool is_loss = true;
    int lucky_number = rand() % 15 + 1;

    do {
        printf("Your chance is (%d)\n", chance);
        // Guess the lucky number: 
        scanf("%d", &choosen_number);

        if (lucky_number == choosen_number) {
            printf("Congratulation! you have choose the correct number\n");
            is_loss = false;
            break;
        } else {
            printf("You have choose the incorrect number\n");
        }

        if(choosen_number < lucky_number) {
            printf("Your choosen number is small\n");
        } else{
            printf("Your choosen number is big\n");
        }

        chance --;
    } while(chance > 0);

    if(is_loss){
        printf("You have loss. Lucky number is %d\n", lucky_number);
    }

    return 0;
}

// gcc lucky-unlimited.c -o lucky-unlimited && ./lucky-unlimited
