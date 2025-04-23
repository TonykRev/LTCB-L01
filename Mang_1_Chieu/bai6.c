#include <stdio.h>
#include <stdlib.h>

void bai6() {
    int n;
    printf("Nhap so luong phan tu mang: ");
    scanf("%d", &n);
    int *arr = (int*)malloc(n * sizeof(int));
    printf("Nhap %d so nguyen:\n", n);
    for (int i = 0; i < n; scanf("%d", &arr[i++]));
    for (int i = 0; i < n; arr[i] < 0 ? arr[i] = 0 : 0);
    printf("Mang sau khi thay the: ");
    for (int i = 0; i < n; printf("%d ", arr[i++]));
    printf("\n");
    free(arr);
}

int main() {
    bai6();
    return 0;
}