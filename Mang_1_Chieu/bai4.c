#include <stdio.h>
#include <stdlib.h>

void bai4() {
    int n;
    printf("Nhap so luong phan tu mang: ");
    scanf("%d", &n);
    int *arr = (int*)malloc(n * sizeof(int));
    printf("Nhap %d so nguyen:\n", n);
    for (int i = 0; i < n; scanf("%d", &arr[i++]));
    int min = arr[0], max = arr[0], minIndex = 0, maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) min = arr[i], minIndex = i;
        if (arr[i] > max) max = arr[i], maxIndex = i;
    }
    printf("Phan tu lon nhat: %d tai vi tri %d\n", max, maxIndex);
    printf("Phan tu be nhat: %d tai vi tri %d\n", min, minIndex);
    free(arr);
}

int main() {
    bai4();
    return 0;
}