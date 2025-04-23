#include <stdio.h>
#include <stdlib.h>

void bai5() {
    int n, x, count = 0;
    printf("Nhap so luong phan tu mang: ");
    scanf("%d", &n);
    int *arr = (int*)malloc(n * sizeof(int));
    printf("Nhap %d so nguyen:\n", n);
    for (int i = 0; i < n; scanf("%d", &arr[i++]));
    printf("Nhap gia tri x can tim: ");
    scanf("%d", &x);
    for (int i = 0; i < n; count += (arr[i++] == x));
    printf("So lan %d xuat hien trong mang: %d\n", x, count);
    free(arr);
}

int main() {
    bai5();
    return 0;
}