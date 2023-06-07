#include <stdio.h>

int main() {
    int arr[30];
  
    int length = sizeof(arr) / sizeof(arr[0]);
         printf("enter element in the arry : ");
    for (int i = 0; i < length; i++) {
        printf("%d ", &arr[i]);
    }
    printf("Original array: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Alternate elements in reverse: ");
    for (int i = length - 2; i >= 0; i -= 2) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
