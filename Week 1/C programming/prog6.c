#include <stdio.h>

int main() {
    int arr[100], n, sorted = 1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            sorted = 0;
            break;
        }
    }

    if (sorted)
        printf("Array is sorted in ascending order.\n");
    else
        printf("Array is NOT sorted in ascending order.\n");

    return 0;
}
