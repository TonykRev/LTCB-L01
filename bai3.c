#include <stdio.h>

int main() {
    int a, b; 
    float div; 
    printf("Nhập số nguyên a: ");
    scanf("%d", &a);
    printf("Nhập số nguyên b: ");
    scanf("%d", &b);
    printf("a + b = %d\n", a + b);         
    printf("a - b = %d\n", a - b);         
    printf("a * b = %d\n", a * b);         
    if (b != 0) {
        div = (float)a / b;           
        printf("a / b = %.2f\n", div); 
        printf("nhận xét: kết quả là số thập phân\n");
    } else {
        printf("a / b = error\n");
        printf("nhận xét: phép chia không hợp lệ\n");
    }

    return 0;
}