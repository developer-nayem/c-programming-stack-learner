#include <stdio.h>
#include <stdbool.h>

int main(){

    bool is_logged_in = false;

    if(is_logged_in){
        printf("User Logged In\n");
    } else {
        printf("User Logged Out\n");
    }

    return 0;
}

// gcc bool-data.c -o bool-data && ./bool-data