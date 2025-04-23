#include <stdio.h>
#include <stdbool.h>

bool laSoHoanHao(int n) {
    if (n <= 0) {
        return false;
    }
    int sumOfDivisors = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sumOfDivisors += i;
        }
    }
    return (sumOfDivisors == n);
}

int main() {
    int num;
    printf("Nhap mot so nguyen duong: ");
    scanf("%d", &num);

    if (laSoHoanHao(num)) {
        printf("%d la so hoan hao.\n", num);
    } else {
        printf("%d khong phai la so hoan hao.\n", num);
    }

    return 0;
}