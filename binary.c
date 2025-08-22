#include <stdio.h>
int binarysearch(int ar[], int l, int u, int n) {
    int mid;
    while (l <= u) {
        mid = (l + u) / 2;
        if (ar[mid] == n) {
            return mid;
        } else if (ar[mid] > n) {
           return binarysearch(ar,l,mid-1,n);
        } else {
            return binarysearch(ar,mid+1,u,n);
        }
    }
    return -1;
    }
int main() {
    int num, arr[100], i, n, l, u;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements in sorted order:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("The array elements are:\n");
    for (i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\nEnter the element to search in the array: ");
    scanf("%d", &num);
    l = 0;
    u = n - 1;
    int result = binarysearch(arr, l, u, num);
    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found in the array.\n");
    }
    return 0;
}
