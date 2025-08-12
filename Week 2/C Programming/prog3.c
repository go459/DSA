#include <stdio.h>

int main() {
    int n;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int mat[n][n];
    printf("Enter matrix elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    int primarySum = 0, secondarySum = 0;
    for (int i = 0; i < n; i++) {
        primarySum += mat[i][i];               // Primary diagonal
        secondarySum += mat[i][n - i - 1];     // Secondary diagonal
    }

    printf("Primary diagonal sum = %d\n", primarySum);
    printf("Secondary diagonal sum = %d\n", secondarySum);

    // If you want total diagonal sum (without double counting middle element in odd n)
    int totalSum = primarySum + secondarySum;
    if (n % 2 != 0) {
        totalSum -= mat[n / 2][n / 2]; // Remove middle element counted twice
    }
    printf("Total diagonal sum = %d\n", totalSum);

    return 0;
}
