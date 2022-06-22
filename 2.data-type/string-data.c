#include <stdio.h>

int main(){
    char name[20];
    name[0] = 'H',
    name[1] = 'M',
    name[2] = ' ',
    name[3] = 'N',
    name[4] = 'a',
    name[5] = 'y',
    name[6] = 'e',
    name[7] = 'm',
    printf("%s\n", name);

    char name1[20] = {'H', 'M', ' ', 'N', 'A', 'Y', 'E', 'M'};
    printf("%s\n", name1);

    char name2[20] = "HM NAYEM";
    printf("%s\n", name2);

    printf("Index 0 = %c\n", name2[0]);
    printf("Index 3 = %c\n", name2[3]);

    printf("What is your Name\n");
    char my_name[30];
    scanf("%s", &my_name);

    printf("Thank you , %s\n", my_name);

    return 0;
}


// gcc string-data.c -o string-data && ./string-data