#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int n, len, size, i;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter the number of parts to divide the string into: ");
    scanf("%d", &n);

    len = strlen(str);
    if (len % n != 0) {
        printf("Cannot divide the string into equal parts.\n");
        return 0;
    }

    size = len / n;

    printf("%d equal parts of the string are:\n", n);
    for (i = 0; i < len; i++) {
        printf("%c", str[i]);
        if ((i+1) % size == 0) {
            printf("\n");
        }
    }

    return 0;
}
