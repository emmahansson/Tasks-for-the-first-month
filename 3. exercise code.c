#include <stdio.h>

int main() {
    const int NUM_JUDGES = 5;
    double scores[NUM_JUDGES];

    // Input scores from the user
    printf("Enter scores from each judge (out of 20, to the nearest half point):\n");
    for (int i = 0; i < NUM_JUDGES; i++) {
        printf("Judge %d: ", i + 1);
        scanf("%lf", &scores[i]);
    }

    // Sort the scores in ascending order
    for (int i = 0; i < NUM_JUDGES; i++) {
        for (int j = i + 1; j < NUM_JUDGES; j++) {
            if (scores[i] > scores[j]) {
                double temp = scores[i];
                scores[i] = scores[j];
                scores[j] = temp;
            }
        }
    }

    // Calculate the average score of the three middle grades
    double sum = 0;
    for (int i = 1; i < NUM_JUDGES - 1; i++) {
        sum += scores[i];
    }
    double average = sum / 3.0;

    // Output the result
    printf("Average score: %.2f\n", average);

    return 0;
}