#include <stdio.h>

int main(){

    char name[30];
    int i = 0;

    // Enter A String: 
    fgets(name, 30, stdin);

    while(name[i]) {
        if (name[i] >= 'a' && name[i] <= 'z') {
            name[i] = name[i] - 32;
        }
        i++;
    }

    printf("Output: %s\n", name);
    

    return 0;
}

// gcc upper-lower.c -o upper-lower && ./upper-lower