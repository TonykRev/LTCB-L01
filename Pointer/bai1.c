#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;
    printf("Nhap gia tri cho a: ");
    scanf("%d", &num1);
    printf("Nhap gia tri cho b: ");
    scanf("%d", &num2);
    printf("Truoc khi hoan doi: a = %d, b = %d\n", num1, num2);
    swap(&num1, &num2);
    printf("Sau khi hoan doi: a = %d, b = %d\n", num1, num2);
    return 0;
}