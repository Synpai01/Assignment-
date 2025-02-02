#include <stdio.h>

int search(int arr[], int n, int x) {
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
    return -1;
}

int main(void) {
    int arr[] = {2, 3, 4, 10, 40};
    int x = 4;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = search(arr, n, x);

    if (result == -1)
        printf("Element is not present in array\n");
    else
        printf("Element is present at index: %d\n", result);

    return 0;
}