#include <stdio.h>

int factorial_recursive(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial_recursive(n - 1);
    }
}

int main() {
    int n;
    printf("Nhap mot so nguyen khong am: ");
    scanf("%d", &n);
    printf("%d! = %d\n", n, factorial_recursive(n));
    return 0;
}