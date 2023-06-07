#include <stdio.h>
#include <stdlib.h>

int binarySearch(int arr[], int low, int high, int target) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;  // If the target is not found
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int *arr = (int *)malloc(size * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter the elements of the array in ascending order:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int target;
    printf("Enter the number to search for: ");
    scanf("%d", &target);

    int result = binarySearch(arr, 0, size - 1, target);

    if (result == -1)
        printf("Number not found\n");
    else
        printf("Number found at index %d\n", result);

    free(arr);

    return 0;
}
