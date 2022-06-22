#include <stdio.h> 
#include <stdbool.h>

int main(void){

    // int a = 35;
    // int b = 30;

    // bool a_is_greater = a > b;
    // printf("A is greater then B - %d\n", a_is_greater);

    // bool a_is_smaller = a < b;
    // printf("A is smaller then B - %d\n", a_is_smaller);

    // bool a_is_b = a == b;
    // printf("A is B - %d\n", a_is_b);

    // bool a_is_not_b = a != b;
    // printf("A is Not_B - %d\n", a_is_not_b);

    int c = 10;
    int d = 10;

    bool c_is_greater = c > d;
    printf("C is greater than D - %d\n", c_is_greater);

    bool c_is_greater_equal = c >= d;
    printf("C is greater than D - %d\n", c_is_greater_equal);

    bool c_is_smaller = c < d;
    printf("C is smaller than D - %d\n", c_is_smaller);

    bool c_is_smaller_equal = c <= d;
    printf("C is smaller or equal than D - %d\n", c_is_smaller_equal);

    return 0;
}

// gcc relational-operators.c -o relational-operators && ./relational-operators
