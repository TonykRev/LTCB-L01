#include <stdio.h>

long long tinhGiaiThua(int n) {
    if (n < 0) {
        printf("Khong the tinh giai thua cho so am.\n");
        return -1; // Giá trị báo lỗi
    }
    if (n == 0) {
        return 1;
    }
    long long giaiThua = 1;
    for (int i = 1; i <= n; i++) {
        giaiThua *= i;
    }
    return giaiThua;
}

int main() {
    int n;
    printf("Nhap mot so nguyen khong am n: ");
    scanf("%d", &n);

    long long ketQua = tinhGiaiThua(n);
    if (ketQua != -1) {
        printf("%d! = %lld\n", n, ketQua);
    }

    return 0;
}