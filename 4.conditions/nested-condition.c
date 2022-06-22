#include <stdio.h>
#include <stdbool.h>
int main(void){
    int age = 19;
    bool has_nid = false;
    bool has_passport = false;

    if(age >= 18){
        if(has_nid | has_passport){
            printf("Ok, lets proceed\n");
        } else{
            printf("You are not accepted\n");
        }
    } else {
        printf("You are not allowed\n");
    }

    return 0;
}