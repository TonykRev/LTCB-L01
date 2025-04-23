#include <stdio.h>
#include <stdlib.h>

void bai2() {
    int n;
    printf("Nhap so luong phan tu mang: ");
    scanf("%d", &n);
    int *arr = (int*)malloc(n * sizeof(int));
    printf("Nhap %d so nguyen:\n", n);
    for (int i = 0; i < n; scanf("%d", &arr[i++]));
    printf("Mang dao nguoc: ");
    for (int i = n - 1; i >= 0; printf("%d ", arr[i--]));
    printf("\n");
    free(arr);
}

int main() {
    bai2();
    return 0;
}