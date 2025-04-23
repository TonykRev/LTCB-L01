#include <stdio.h>

int fibonacci_recursive(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
    }
}

int main() {
    int n;
    printf("Nhap vi tri n trong day Fibonacci: ");
    scanf("%d", &n);
    printf("Phan tu thu %d trong day Fibonacci la: %d\n", n, fibonacci_recursive(n));
    return 0;
}