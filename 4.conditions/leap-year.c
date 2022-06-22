#include <stdio.h>
#include <stdbool.h>

int main(void){

    int year;
    scanf("%d", &year);
    int is_leap_year = 0;

    // if(year % 4 == 0){
    //     if(year % 100 == 0){
    //         if(year % 400 == 0){
    //             is_leap_year = 1;
    //         }else{
    //             is_leap_year = 0;
    //         }
    //     }else{
    //         is_leap_year = 1;
    //     }
    // }else{
    //     is_leap_year = 0;
    // }

    if (((year % 4 && year %100 ==! 0)) || (year % 400 == 0)){
        is_leap_year = 1;
    }

    if(is_leap_year){
        printf("%d is a leap year\n", year);
    }else{
        printf("%d is not a leap year\n", year);
    }

    return 0;
}

// gcc leap-year.c -o leap-year && ./leap-year
