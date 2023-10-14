#include <stdio.h>

int main() {
    int n;
    printf("Enter size of your square (3-20): ");
    scanf("%d", &n);

    if (n < 3 || n > 20) {
        printf("Invalid input. The size must be between 3 and 20.\n");
        return 1;
    }

    int square[20][20];

    printf("Enter your square:\n");

    // Input the square values
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &square[i][j]);
        }
    }

    // Calculate the sum of the first row for comparison
    int sum = 0;
    for (int j = 0; j < n; j++) {
        sum += square[0][j];
    }

    // Check if it's a magic square and calculate the magic constant
    int isMagic = 1;  // Assume it's a magic square
    int maxSum = 0;   // Maximum sum for non-magic squares

    for (int i = 0; i < n; i++) {
        int rowSum = 0;
        int colSum = 0;

        for (int j = 0; j < n; j++) {
            rowSum += square[i][j];
            colSum += square[j][i];
        }

        if (rowSum != sum || colSum != sum) {
            isMagic = 0; // Not a magic square
        }

        maxSum += square[i][i];
    }

    // Check the main diagonal from top-left to bottom-right
    int diagSum1 = 0;
    for (int i = 0; i < n; i++) {
        diagSum1 += square[i][i];
    }
    if (diagSum1 != sum) {
        isMagic = 0; // Not a magic square
    }

    // Check the other diagonal from top-right to bottom-left
    int diagSum2 = 0;
    for (int i = 0; i < n; i++) {
        diagSum2 += square[i][n - i - 1];
    }
    if (diagSum2 != sum) {
        isMagic = 0; // Not a magic square
    }

    // Display the result
    if (isMagic) {
        printf("Your square is a magic square!!\n");
        printf("The magic constant is %d.\n", sum);
    } else {
        printf("Your square is NOT a magic square.\n");
        printf("The maximum sum is %d.\n", maxSum);
    }

    return 0;
}
