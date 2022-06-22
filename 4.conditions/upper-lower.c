#include <stdio.h>

int main(){

    // char ch = 'M';
    // char ch_small = ch + 32;
    // printf("Char = %c\n", ch_small);

    // char ch;
    // scanf("%c", &ch);

    // if(ch >= 48 && ch <= 57){
    //     printf("%c is a number\n", ch);
    // }else if(ch >= 65 && ch <= 90){
    //     printf("%c is a Uppercase letter\n", ch);
    // } else if(ch >= 97 && ch <= 122){
    //     printf("%c is a Lowercase letter\n", ch);
    // } else{
    //     printf("%c Special Character", ch);
    // };

    char ch = 'M';
    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z'){
        printf("Lowercase of %c is %c\n", ch, ch+32);
    }else if(ch >= 'a' && ch <= 'z'){
        printf("Uppercase of %c is %c\n", ch, ch-32);
    }else{
        printf("%c Special Character", ch);
    };

    return 0;
}

// gcc upper-lower.c -o upper-lower && ./upper-lower
