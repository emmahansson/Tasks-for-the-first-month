#include <stdio.h>

int main() {
    const int NUM_TASTERS = 5;
    int scores[NUM_TASTERS];
    int sum = 0;
    int maxDiff = 0;
    int maxDiffTaster = 0;

    // Input scores from the user
    printf("Enter scores for each taster (out of 10):\n");
    for (int i = 0; i < NUM_TASTERS; i++) {
        printf("Taster %d: ", i + 1);
        scanf("%d", &scores[i]);
        sum += scores[i];
    }

    // Calculate the average score
    double average = (double) sum / NUM_TASTERS;

    // Find the taster with the score that differed the most from the average
    for (int i = 0; i < NUM_TASTERS; i++) {
        int diff = abs(scores[i] - (int) average);
        if (diff > maxDiff) {
            maxDiff = diff;
            maxDiffTaster = i + 1; // Add 1 to make it 1-indexed
        }
    }

    // Output the result
    printf("Average score: %.2f\n", average);
    printf("Taster with the score that differed the most from the average: %d\n", maxDiffTaster);

    return 0;}