#include <stdio.h>

int main() {
    int rolls[] = {1, 2, 3, 4, 6, 7, 9, 12, 13, 14, 15};
    int length = sizeof(rolls) / sizeof(rolls[0]);
    int search_key, i;
    int is_found = -1;

    // User input
    scanf("%d", &search_key);

    // Search
    for (i = 0; i < length; i++ ) {
        if(rolls[i] == search_key){
            is_found = i;
            break;
        } 
    }

    if(is_found == -1){
        printf("Item Not Found\n");
    } else {
        printf("Item Found At Index %d\n", is_found);
    }
    printf("Complete");
    return 0;
}

// gcc search-array.c -o search-array && ./search-array