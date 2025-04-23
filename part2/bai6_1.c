#include <stdio.h>

int UCLN(int a, int b) {
    a = abs(a); b = abs(b);
    while (b) { int t = b; b = a % b; a = t; }
    return a;
}

int main() {
    int a, b;
    printf("Nhap hai so nguyen a va b: ");
    scanf("%d %d", &a, &b);
    int u = UCLN(a, b);
    printf("UCLN cua %d va %d la: %d\n", a, b, u);
    printf("BCNN cua %d va %d la: %d\n", a, b, abs(a * b) / u);
    return 0;
}