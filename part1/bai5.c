#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;      
    float delta, x1, x2; 
    printf("nhập a: ");
    scanf("%f", &a);
    printf("nhập b: ");
    scanf("%f", &b);
    printf("nhập c: ");
    scanf("%f", &c);
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("vô số nghiệm \n");
            } else {
                printf("vô nghiệm\n");
            }
        } else {
            printf("Phương trình thành bậc 1: x = %.2f\n", -c / b);
        }
        return 0;
    }

    delta = b * b - 4 * a * c;

    if (delta < 0) {
        printf("vô nghiệm \n");
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("nghiệm kép: x = %.2f\n", x1);
    } else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("2 nghiệm phân biệt:\n");
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    }

    return 0;
}
