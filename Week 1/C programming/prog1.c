#include <stdio.h>

int main() {
    int arr[100];   // array with max size 100
    int n, element;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert at end: ");
    scanf("%d", &element);

    arr[n] = element;  // place at the end
    n++;               // increase the size

    printf("Array after insertion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
