#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, p, S, P;
    printf("nhập a b c: "); scanf("%f %f %f", &a, &b, &c);
    if (a <= 0 || b <= 0 || c <= 0 || a + b <= c || a + c <= b || b + c <= a) printf("không thỏa mãn\n");
    else {
        P = a + b + c; p = P / 2; S = sqrt(p * (p - a) * (p - b) * (p - c));
        if (a == b && b == c) printf("tam giác đều\n");
        else if ((a == b || b == c || a == c) && (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)) printf("Tam giac vuong can\n");
        else if (a == b || b == c || a == c) printf("tam giác cân\n");
        else if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) printf("tam giác vuông\n");
        else printf("tam giác thường\n");
        printf("C = %.2f, S = %.2f\n", P, S);
    }
    return 0;
}
