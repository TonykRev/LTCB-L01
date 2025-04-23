#include <stdio.h>
#include <stdlib.h>

void bai7() {
    int n;
    printf("Nhap so luong phan tu mang: ");
    scanf("%d", &n);
    int *arr = (int*)malloc(n * sizeof(int));
    printf("Nhap %d so nguyen:\n", n);
    for (int i = 0; i < n; scanf("%d", &arr[i++]));
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1]) {
                arr[j] ^= arr[j + 1];
                arr[j + 1] ^= arr[j];
                arr[j] ^= arr[j + 1];
            }
    printf("Mang sau khi sap xep tang dan: ");
    for (int i = 0; i < n; printf("%d ", arr[i++]));
    printf("\n");
    free(arr);
}

int main() {
    bai7();
    return 0;
}