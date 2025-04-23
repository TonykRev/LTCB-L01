#include <stdio.h>
#include <stdlib.h>

void bai3() {
    int a[3][2], b[2][3], c[3][3] = {0};
    printf("Nhap cac phan tu cua ma tran A (3x2):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Nhap cac phan tu cua ma tran B (2x3):\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 2; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("Ma tran A:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("Ma tran B:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    printf("Tich ma tran C (AxB):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}

int main() {
    bai3();
    return 0;
}