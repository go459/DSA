#include <stdio.h>

int main() {
    int degree1, degree2;

    printf("Enter degree of first polynomial: ");
    scanf("%d", &degree1);
    int poly1[degree1 + 1];

    printf("Enter coefficients of first polynomial (constant to highest degree):\n");
    for (int i = 0; i <= degree1; i++) {
        scanf("%d", &poly1[i]);
    }

    printf("Enter degree of second polynomial: ");
    scanf("%d", &degree2);
    int poly2[degree2 + 1];

    printf("Enter coefficients of second polynomial:\n");
    for (int i = 0; i <= degree2; i++) {
        scanf("%d", &poly2[i]);
    }

    int maxDegree = (degree1 > degree2) ? degree1 : degree2;
    int sum[maxDegree + 1];

    // Initialize sum with zeros
    for (int i = 0; i <= maxDegree; i++) {
        sum[i] = 0;
    }

    // Add coefficients
    for (int i = 0; i <= degree1; i++) {
        sum[i] += poly1[i];
    }
    for (int i = 0; i <= degree2; i++) {
        sum[i] += poly2[i];
    }

    // Print result
    printf("Sum of polynomials: ");
    for (int i = maxDegree; i >= 0; i--) {
        if (sum[i] != 0) {
            if (i != maxDegree && sum[i] > 0) printf("+");
            if (i == 0)
                printf("%d", sum[i]);
            else if (i == 1)
                printf("%dx", sum[i]);
            else
                printf("%dx^%d", sum[i], i);
        }
    }
    printf("\n");

    return 0;
}
