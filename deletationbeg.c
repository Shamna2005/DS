#include <stdio.h>

void deletionbeg(int arr[], int *num) {
    int i;
    if (*num == 0) {
        printf("\nArray is underflow.\n");
        return;
    }
    for (i = 0; i < *num - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*num)--;
}

int main() {
    int a[10], n, i;

    printf("Enter the array size: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("\nOriginal array:\n");
    for (i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }
    printf("\n");

    deletionbeg(a, &n);

    printf("\nArray after deletion from beginning:\n");
    for (i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }
    printf("\n");

    return 0;
}

