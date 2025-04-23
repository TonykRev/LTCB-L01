#include <stdio.h>
#include <stdlib.h>

void findMinMax(int *arr, int n, int **minPtr, int **maxPtr) {
    *minPtr = arr;
    *maxPtr = arr;
    for (int i = 1; i < n; i++) {
        if (*(arr + i) < **minPtr) {
            *minPtr = arr + i;
        }
        if (*(arr + i) > **maxPtr) {
            *maxPtr = arr + i;
        }
    }
}

int main() {
    int n;
    printf("Nhap so luong phan tu mang: ");
    scanf("%d", &n);
    int *arr = (int*)malloc(n * sizeof(int));
    printf("Nhap %d so nguyen:\n", n);
    for (int i = 0; i < n; scanf("%d", arr + i));
    int *minPtr, *maxPtr;
    findMinMax(arr, n, &minPtr, &maxPtr);
    printf("Phan tu nho nhat: %d\n", *minPtr);
    printf("Phan tu lon nhat: %d\n", *maxPtr);
    free(arr);
    return 0;
}