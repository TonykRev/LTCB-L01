#include <stdio.h>
#include <stdlib.h>

void bai4() {
    int n;
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);
    int **matrix = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++) {
        matrix[i] = (int*)malloc(n * sizeof(int));
    }
    int num = 1, top = 0, bottom = n - 1, left = 0, right = n - 1, dir = 0;
    while (top <= bottom && left <= right) {
        if (dir == 0) for (int i = left; i <= right; matrix[top][i++] = num++);
        else if (dir == 1) for (int i = top; i <= bottom; matrix[i++][right] = num++);
        else if (dir == 2) for (int i = right; i >= left; matrix[bottom][i--] = num++);
        else if (dir == 3) for (int i = bottom; i >= top; matrix[i--][left] = num++);
        dir = (dir + 1) % 4;
        if (dir == 0) top++;
        else if (dir == 1) right--;
        else if (dir == 2) bottom--;
        else if (dir == 3) left++;
    }
    printf("Ma tran xoan %dx%d:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < n; free(matrix[i++]));
    free(matrix);
}

int main() {
    bai4();
    return 0;
}