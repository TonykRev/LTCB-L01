#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    printf("Nhap mot so nguyen N: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("N phai la mot so nguyen duong.\n");
        return 1; // Báo lỗi
    }

    for (int i = 1; i <= n; i++) {
        sum += (double)1 / i; // Ép kiểu 1 thành double để thực hiện phép chia số thực
    }

    printf("Tong S = 1 + 1/2 + 1/3 + ... + 1/%d la: %lf\n", n, sum);

    return 0;
}