#include <stdio.h>

int main() {
    int size = 5;
    int nums[size];
    int i, sum, avg, max;

    for(i = 0; i < size; i++ ){
        scanf("%d", &nums[i]);
    }

    sum = 0;
    max = nums[0];
    for (i = 0; i < size; i++ ) {
        sum += nums[i];
        if(max < nums[i]){
            max = nums[i];
        }
    }
    avg = sum / size;
    printf("sum = %d\n", sum);
    printf("Avg = %d\n", avg);
    printf("Max = %d\n", max);

    return 0;
}

// gcc input-array.c -o input-array && ./input-array
