#include <stdio.h>
#include <math.h>
#include <float.h> // Để sử dụng DBL_EPSILON (hoặc bạn có thể nhập Eps)

long double tinhGiaiThuaLongDouble(int n) {
    long double giaiThua = 1.0;
    for (int i = 1; i <= n; i++) {
        giaiThua *= i;
    }
    return giaiThua;
}

int main() {
    double x, eps;
    long double sinX = 0.0;
    long double term = 0.0;
    int n = 0;
    int sign = 1;

    printf("Nhap gia tri x (radian): ");
    scanf("%lf", &x);

    printf("Nhap do chinh xac Eps: ");
    scanf("%lf", &eps);

    if (eps <= 0) {
        printf("Do chinh xac Eps phai lon hon 0.\n");
        return 1;
    }

    do {
        long double numerator = pow(x, 2 * n + 1);
        long double denominator = tinhGiaiThuaLongDouble(2 * n + 1);
        term = numerator / denominator;
        sinX += sign * term;
        sign *= -1;
        n++;
    } while (fabs(term) >= eps);

    printf("Sin(%lf) = %Lf (voi do chinh xac %lf)\n", x, sinX, eps);

    return 0;
}