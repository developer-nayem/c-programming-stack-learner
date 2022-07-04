#include <stdio.h>

int main() {

    int scores[5];
    scores[0] = 89;
    scores[1] = 82;
    scores[2] = 90;
    scores[3] = 86;
    scores[4] = 83;

    // Find Sum of Scores
    int sum = 0, i;
    for (i = 0; i < 5; i++ ){
        sum += scores[i];
    }
    printf("Sum = %d\n", sum);

    // Find Average Score
    printf("Average Score = %d\n", sum / 5);

    // Find Highest Score
    int max = scores[0];
    for(i = 0; i < 5; i++ ) {
        if(scores[i] > max){
            max = scores[i];
        }
    }
    printf("Max = %d\n", max);

    return 0;
}

// gcc array-sum.c -o array-sum && ./array-sum
