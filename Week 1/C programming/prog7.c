#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int len, i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read string with spaces

    len = strlen(str);

    // Remove newline if present
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    printf("Reversed string: ");
    for (i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
