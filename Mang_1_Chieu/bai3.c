#include <stdio.h>
#include <stdlib.h>

void bai3() {
    int n;
    printf("Nhap so luong phan tu mang: ");
    scanf("%d", &n);
    int *arr = (int*)malloc(n * sizeof(int));
    printf("Nhap %d so nguyen:\n", n);
    int tong = 0, tongDuong = 0, tongAm = 0, demDuong = 0, demAm = 0;
    for (int i = 0; i < n; scanf("%d", &arr[i++]), tong += arr[i-1], arr[i-1] > 0 ? (tongDuong += arr[i-1], demDuong++) : (tongAm += arr[i-1], demAm++));
    printf("Tong mang: %d\n", tong);
    printf("Tong so duong: %d\n", tongDuong);
    printf("Tong so am: %d\n", tongAm);
    printf("Trung binh cong mang: %.2f\n", (float)tong / n);
    printf("Trung binh cong so duong: %.2f\n", demDuong > 0 ? (float)tongDuong / demDuong : 0);
    printf("Trung binh cong so am: %.2f\n", demAm > 0 ? (float)tongAm / demAm : 0);
    free(arr);
}

int main() {
    bai3();
    return 0;
}