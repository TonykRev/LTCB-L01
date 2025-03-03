#include <stdio.h>

int main() {
    float a, b, c, d, e, f; 
    float D, Dx, Dy, x, y; 
    printf("nhập a: ");
    scanf("%f", &a);
    printf("nhập b: ");
    scanf("%f", &b);
    printf("nhập c: ");
    scanf("%f", &c);
    printf("nhập d: ");
    scanf("%f", &d);
    printf("nhập e: ");
    scanf("%f", &e);
    printf("nhập f: ");
    scanf("%f", &f);
    D = a * e - b * d;

    if (D == 0) {
        Dx = c * e - b * f;
        Dy = a * f - c * d;
        if (Dx == 0 && Dy == 0) {
            printf("hệ có vô số nghiệm \n");
        } else {
            printf("hệ vô nghiệm \n");
        }
    } else {
        Dx = c * e - b * f;
        Dy = a * f - c * d;
        x = Dx / D;
        y = Dy / D;
        printf("hệ có 1 nghiệm duy nhất:\n");
        printf("x = %.2f\n", x);
        printf("y = %.2f\n", y);
    }

    return 0;
}