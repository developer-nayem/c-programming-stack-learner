#include <stdio.h>

int main() {

    int i, size, sum, avg, max;

    // Enter array size
    scanf("%d", &size);

    int nums[size];

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

// gcc var-length-array.c -o var-length-array && ./var-length-array
