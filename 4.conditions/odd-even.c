# include <stdio.h>

int main(){

    // int a = 100;
    // int b = 200;
    // int c = 30;

    // if(a > b && a > c){
    //     printf("A is greater than B,C\n");
    // } else if(b > a && b > c){
    //     printf("B is greater than A,C\n");
    // } else {
    //     printf("c is greater than A,B\n");
    // }

    int a;
    scanf("%d", &a);

    if(a%2 == 0){
        printf("%d is Even\n", a);
    } else{
        printf("%d is Odd\n", a);
    }

    return 0;
}
// gcc odd-even.c -o odd-even && ./odd-even
