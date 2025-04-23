#include <stdio.h>
#include <stdlib.h>

void bai1_th1() {
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    printf("Ma tran (TH1):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void bai1_th2() {
    int matrix[3][3];
    printf("Nhap cac phan tu cua ma tran 3x3 (TH2):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Ma tran da nhap:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    printf("Bai 1 - Truong hop 1:\n");
    bai1_th1();
    printf("\nBai 1 - Truong hop 2:\n");
    bai1_th2();
    return 0;
}