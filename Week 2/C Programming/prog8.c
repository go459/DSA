#include <stdio.h>
#include <stdlib.h>

void display(int *arr, int size) {
    if (size == 0) {
        printf("Array is empty.\n");
        return;
    }
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int *arr = NULL;
    int size = 0, choice, element, pos;

    while (1) {
        printf("\n--- Dynamic Array Menu ---\n");
        printf("1. Insert element\n");
        printf("2. Delete element at position\n");
        printf("3. Search element\n");
        printf("4. Display array\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: // Insert
                printf("Enter element to insert: ");
                scanf("%d", &element);
                arr = realloc(arr, (size + 1) * sizeof(int));
                arr[size] = element;
                size++;
                printf("Element inserted successfully.\n");
                break;

            case 2: // Delete
                if (size == 0) {
                    printf("Array is empty.\n");
                    break;
                }
                printf("Enter position to delete (0 to %d): ", size - 1);
                scanf("%d", &pos);
                if (pos < 0 || pos >= size) {
                    printf("Invalid position.\n");
                    break;
                }
                for (int i = pos; i < size - 1; i++) {
                    arr[i] = arr[i + 1];
                }
                size--;
                arr = realloc(arr, size * sizeof(int));
                printf("Element deleted successfully.\n");
                break;

            case 3: // Search
                if (size == 0) {
                    printf("Array is empty.\n");
                    break;
                }
                printf("Enter element to search: ");
                scanf("%d", &element);
                int found = 0;
                for (int i = 0; i < size; i++) {
                    if (arr[i] == element) {
                        printf("Element found at index %d.\n", i);
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    printf("Element not found.\n");
                }
                break;

            case 4: // Display
                display(arr, size);
                break;

            case 5: // Exit
                free(arr);
                printf("Exiting program...\n");
                return 0;

            default:
                printf("Invalid choice. Try again.\n");
        }
    }
}
