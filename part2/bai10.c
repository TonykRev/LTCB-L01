#include <stdio.h>

long long fibonacci_iterative(int n) {
    if (n <= 0) {
        printf("So khong hop le!\n");
        return -1;
    } else if (n == 1 || n == 2) {
        return 1;
    } else {
        long long a = 1, b = 1, c;
        for (int i = 3; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        return c;
    }
}

int main() {
    int n;
    printf("Nhap so n de tinh so Fibonacci thu n: ");
    scanf("%d", &n);

    long long result = fibonacci_iterative(n);
    if (result != -1) {
        printf("So Fibonacci thu %d la: %lld\n", n, result);
    }

    return 0;
}