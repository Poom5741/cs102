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

    if (n == 3) {
        printf("Enter 3x3 square:\n");
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                scanf("%d", &square[i][j]);
            }
        }
    } else if (n == 4) {
        printf("Enter 4x4 square:\n");
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                scanf("%d", &square[i][j]);
            }
        }
    } else if (n == 5) {
        printf("Enter 5x5 square:\n");
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                scanf("%d", &square[i][j]);
            }
        }
    } else if (n == 6) {
        printf("Enter 6x6 square:\n");
        for (int i = 0; i < 6; i++) {
            for (int j = 0; j < 6; j++) {
                scanf("%d", &square[i][j]);
            }
        }
    } else if (n == 7) {
        printf("Enter 7x7 square:\n");
        for (int i = 0; i < 7; i++) {
            for (int j = 0; j < 7; j++) {
                scanf("%d", &square[i][j]);
            }
        }
    } else if (n == 8) {
        printf("Enter 8x8 square:\n");
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                scanf("%d", &square[i][j]);
            }
        }
    } else if (n == 9) {
        printf("Enter 9x9 square:\n");
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                scanf("%d", &square[i][j]);
            }
        }
    } else if (n == 10) {
        printf("Enter 10x10 square:\n");
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                scanf("%d", &square[i][j]);
            }
        }
    } else if (n == 11) {
        printf("Enter 11x11 square:\n");
        for (int i = 0; i < 11; i++) {
            for (int j = 0; j < 11; j++) {
                scanf("%d", &square[i][j]);
            }
        }
    } else if (n == 12) {
        printf("Enter 12x12 square:\n");
        for (int i = 0; i < 12; i++) {
            for (int j = 0; j < 12; j++) {
                scanf("%d", &square[i][j]);
            }
        }
    } else if (n == 13) {
        printf("Enter 13x13 square:\n");
        for (int i = 0; i < 13; i++) {
            for (int j = 0; j < 13; j++) {
                scanf("%d", &square[i][j]);
            }
        }
    } else if (n == 14) {
        printf("Enter 14x14 square:\n");
        for (int i = 0; i < 14; i++) {
            for (int j = 0; j < 14; j++) {
                scanf("%d", &square[i][j]);
            }
        }
    } else if (n == 15) {
        printf("Enter 15x15 square:\n");
        for (int i = 0; i < 15; i++) {
            for (int j = 0; j < 15; j++) {
                scanf("%d", &square[i][j]);
            }
        }
    } else if (n == 16) {
        printf("Enter 16x16 square:\n");
        for (int i = 0; i < 16; i++) {
            for (int j = 0; j < 16; j++) {
                scanf("%d", &square[i][j]);
            }
        }
    } else if (n == 17) {
        printf("Enter 17x17 square:\n");
        for (int i = 0; i < 17; i++) {
            for (int j = 0; j < 17; j++) {
                scanf("%d", &square[i][j]);
            }
        }
    } else if (n == 18) {
        printf("Enter 18x18 square:\n");
        for (int i = 0; i < 18; i++) {
            for (int j = 0; j < 18; j++) {
                scanf("%d", &square[i][j]);
            }
        }
    } else if (n == 19) {
        printf("Enter 19x19 square:\n");
        for (int i = 0; i < 19; i++) {
            for (int j = 0; j < 19; j++) {
                scanf("%d", &square[i][j]);
            }
        }
    } else if (n == 20) {
        printf("Enter 20x20 square:\n");
        for (int i = 0; i < 20; i++) {
            for (int j = 0; j < 20; j++) {
                scanf("%d", &square[i][j]);
            }
        }
    }

    // Rest of the code remains the same
    int sum = 0;
    for (int j = 0; j < n; j++) {
        sum += square[0][j];
    }
    int isMagic = 1;
    int maxSum = 0;
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