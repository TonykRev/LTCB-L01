#include <stdio.h>
#include <stdlib.h>

void bai8() {
    int n1, n2;
    printf("Nhap so luong phan tu mang 1: ");
    scanf("%d", &n1);
    int *arr1 = (int*)malloc(n1 * sizeof(int));
    printf("Nhap %d so nguyen da sap xep cho mang 1:\n", n1);
    for (int i = 0; i < n1; scanf("%d", &arr1[i++]));
    printf("Nhap so luong phan tu mang 2: ");
    scanf("%d", &n2);
    int *arr2 = (int*)malloc(n2 * sizeof(int));
    printf("Nhap %d so nguyen da sap xep cho mang 2:\n", n2);
    for (int i = 0; i < n2; scanf("%d", &arr2[i++]));
    int *merged = (int*)malloc((n1 + n2) * sizeof(int));
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2)
        merged[k++] = (arr1[i] < arr2[j]) ? arr1[i++] : arr2[j++];
    while (i < n1)
        merged[k++] = arr1[i++];
    while (j < n2)
        merged[k++] = arr2[j++];
    printf("Mang sau khi ghep va sap xep: ");
    for (int l = 0; l < n1 + n2; printf("%d ", merged[l++]));
    printf("\n");
    free(arr1);
    free(arr2);
    free(merged);
}

int main() {
    bai8();
    return 0;
}