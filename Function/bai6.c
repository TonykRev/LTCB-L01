#include <stdio.h>
#include <stdlib.h>

void nhap_da_thuc(int *coeffs, int degree) {
    printf("Nhap cac he so (tu bac cao nhat den bac 0):\n");
    for (int i = 0; i <= degree; i++) {
        scanf("%d", &coeffs[i]);
    }
}

void in_da_thuc(int *coeffs, int degree) {
    for (int i = 0; i <= degree; i++) {
        printf("%dx^%d ", coeffs[i], degree - i);
        if (i < degree) printf("+ ");
    }
    printf("\n");
}

int tinh_gia_tri_da_thuc(int *coeffs, int degree, int x) {
    int result = 0;
    for (int i = 0; i <= degree; i++) {
        result += coeffs[i] * pow(x, degree - i);
    }
    return result;
}

int main() {
    int degree_p, degree_q, x_val;
    printf("Nhap bac cua da thuc P: ");
    scanf("%d", &degree_p);
    int *coeffs_p = (int*)malloc((degree_p + 1) * sizeof(int));
    nhap_da_thuc(coeffs_p, degree_p);

    printf("Nhap bac cua da thuc Q: ");
    scanf("%d", &degree_q);
    int *coeffs_q = (int*)malloc((degree_q + 1) * sizeof(int));
    nhap_da_thuc(coeffs_q, degree_q);

    int max_degree = (degree_p > degree_q) ? degree_p : degree_q;
    int *coeffs_sum = (int*)malloc((max_degree + 1) * sizeof(int));
    for (int i = 0; i <= max_degree; i++) coeffs_sum[i] = 0;

    for (int i = 0; i <= degree_p; i++) coeffs_sum[max_degree - (degree_p - i)] += coeffs_p[i];
    for (int i = 0; i <= degree_q; i++) coeffs_sum[max_degree - (degree_q - i)] += coeffs_q[i];

    printf("Da thuc P(x) = "); in_da_thuc(coeffs_p, degree_p);
    printf("Da thuc Q(x) = "); in_da_thuc(coeffs_q, degree_q);
    printf("Da thuc T(x) = P(x) + Q(x) = "); in_da_thuc(coeffs_sum, max_degree);

    printf("Nhap gia tri x: ");
    scanf("%d", &x_val);
    printf("P(%d) = %d\n", x_val, tinh_gia_tri_da_thuc(coeffs_p, degree_p, x_val));
    printf("Q(%d) = %d\n", x_val, tinh_gia_tri_da_thuc(coeffs_q, degree_q, x_val));
    printf("T(%d) = %d\n", x_val, tinh_gia_tri_da_thuc(coeffs_sum, max_degree, x_val));

    free(coeffs_p);
    free(coeffs_q);
    free(coeffs_sum);
    return 0;
}