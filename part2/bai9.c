#include <stdio.h>

long double tinhGiaiThuaDouble(int n) {
    if (n == 0) {
        return 1.0;
    }
    long double giaiThua = 1.0;
    for (int i = 1; i <= n; i++) {
        giaiThua *= i;
    }
    return giaiThua;
}

int main() {
    int n;
    long double sum = 0.0;

    printf("Nhap mot so nguyen khong am n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("N phai la mot so nguyen khong am.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        sum += 1.0 / tinhGiaiThuaDouble(i);
    }

    printf("Tong S = 1 + 1/2! + 1/3! + ... + 1/%d! la: %Lf\n", n, sum);

    return 0;
}