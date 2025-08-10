#include <stdio.h>

int main() {
    int arr[100], freq[100], n;
    int i, j, count;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1; // initialize frequency array
    }

    for (i = 0; i < n; i++) {
        count = 1;
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                freq[j] = 0; // mark as counted
            }
        }
        if (freq[i] != 0) {
            freq[i] = count;
        }
    }

    printf("Element | Frequency\n");
    for (i = 0; i < n; i++) {
        if (freq[i] != 0) {
            printf("%d\t   %d\n", arr[i], freq[i]);
        }
    }

    return 0;
}
