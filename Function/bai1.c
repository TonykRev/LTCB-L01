#include <stdio.h>
#include <math.h>

double power(double base, int exp) {
    return pow(base, exp);
}

int main() {
    double base;
    int exp;
    printf("Nhap co so: ");
    scanf("%lf", &base);
    printf("Nhap so mu: ");
    scanf("%d", &exp);
    printf("%.2f^%d = %.2f\n", base, exp, power(base, exp));
    return 0;
}