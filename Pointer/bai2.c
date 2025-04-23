#include <stdio.h>

int main() {
    int arr[10];
    printf("Nhap 10 so nguyen:\n");
    for (int i = 0; i < 10; scanf("%d", &arr[i++]));
    printf("Mang da nhap: ");
    for (int i = 0; i < 10; printf("%d ", arr[i++]));
    printf("\n");
    return 0;
}