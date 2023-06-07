#include <stdio.h>
#include <conio.h>
int main() {
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int length = sizeof(array) / sizeof(array[0]);

    printf("Original array: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    printf("Alternate elements in reverse: ");
    for (int i = length - 2; i >= 0; i -= 2) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
