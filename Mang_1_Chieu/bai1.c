
#include <stdio.h>

void bai1() {
    int arr[10];
    printf("Nhap 10 so nguyen:\n");
    for (int i = 0; i < 10; scanf("%d", &arr[i++]));
    printf("Mang da nhap: ");
    for (int i = 0; i < 10; printf("%d ", arr[i++]));
    printf("\n");
}

int main() {
    bai1();
    return 0;
}