#include <stdio.h>
#include <stdlib.h>

void nhap_ma_tran(int rows, int cols, int matrix[rows][cols]) {
    printf("Nhap cac phan tu cua ma tran %dx%d:\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void in_ma_tran(int rows, int cols, int matrix[rows][cols]) {
    printf("Ma tran %dx%d:\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void tinh_tong_ma_tran(int rows, int cols, int mat1[rows][cols], int mat2[rows][cols], int sum[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

void tinh_tich_ma_tran(int r1, int c1, int mat1[r1][c1], int r2, int c2, int prod[r1][c2]) {
    if (c1 != r2) {
        printf("Khong the nhan hai ma tran nay.\n");
        return;
    }
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            prod[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                prod[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main() {
    int mat1[2][2], mat2[2][2], sum[2][2], prod[2][2];
    nhap_ma_tran(2, 2, mat1);
    nhap_ma_tran(2, 2, mat2);
    tinh_tong_ma_tran(2, 2, mat1, mat2, sum);
    tinh_tich_ma_tran(2, 2, mat1, 2, 2, prod);
    in_ma_tran(2, 2, mat1);
    in_ma_tran(2, 2, mat2);
    printf("Tong hai ma tran:\n");
    in_ma_tran(2, 2, sum);
    printf("Tich hai ma tran:\n");
    in_ma_tran(2, 2, prod);
    return 0;
}