#include <stdio.h>

int main() {
    int degree1, degree2;

    // Input first polynomial
    printf("Enter degree of first polynomial: ");
    scanf("%d", &degree1);
    int poly1[degree1 + 1];
    printf("Enter coefficients of first polynomial (constant to highest degree):\n");
    for (int i = 0; i <= degree1; i++) {
        scanf("%d", &poly1[i]);
    }

    // Input second polynomial
    printf("Enter degree of second polynomial: ");
    scanf("%d", &degree2);
    int poly2[degree2 + 1];
    printf("Enter coefficients of second polynomial:\n");
    for (int i = 0; i <= degree2; i++) {
        scanf("%d", &poly2[i]);
    }

    // Resultant degree = sum of degrees
    int resultDegree = degree1 + degree2;
    int result[resultDegree + 1];

    // Initialize result with 0
    for (int i = 0; i <= resultDegree; i++) {
        result[i] = 0;
    }

    // Multiply
    for (int i = 0; i <= degree1; i++) {
        for (int j = 0; j <= degree2; j++) {
            result[i + j] += poly1[i] * poly2[j];
        }
    }

    // Print result
    printf("Product of polynomials: ");
    for (int i = resultDegree; i >= 0; i--) {
        if (result[i] != 0) {
            if (i != resultDegree && result[i] > 0) printf("+");
            if (i == 0)
                printf("%d", result[i]);
            else if (i == 1)
                printf("%dx", result[i]);
            else
                printf("%dx^%d", result[i], i);
        }
    }
    printf("\n");

    return 0;
}
