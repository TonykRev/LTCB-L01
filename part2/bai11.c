#include <stdio.h>

void doiCoSo(int n, int base) {
    if (n == 0) {
        return;
    }
    doiCoSo(n / base, base);
    int remainder = n % base;
    if (remainder < 10) {
        printf("%d", remainder);
    } else {
        printf("%c", remainder - 10 + 'A');
    }
}

int main() {
    int n;

    printf("Nhap mot so nguyen duong n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Vui long nhap so nguyen duong.\n");
        return 1;
    }

    printf("Bieu dien cua %d trong cac co so:\n", n);

    printf("Co so 2 (nhi phan): ");
    if (n == 0) printf("0"); else doiCoSo(n, 2);
    printf("\n");

    printf("Co so 8 (bat phan): ");
    if (n == 0) printf("0"); else doiCoSo(n, 8);
    printf("\n");

    printf("Co so 16 (thap luc phan): ");
    if (n == 0) printf("0"); else doiCoSo(n, 16);
    printf("\n");

    return 0;
}