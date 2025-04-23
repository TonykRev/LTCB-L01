#include <stdio.h>

void doi_co_so(int n, int base) {
    if (n == 0) return;
    doi_co_so(n / base, base);
    int rem = n % base;
    if (rem < 10) printf("%d", rem);
    else printf("%c", rem - 10 + 'A');
}

int main() {
    int n;
    printf("Nhap mot so nguyen duong: ");
    scanf("%d", &n);
    printf("Co so 2: "); doi_co_so(n, 2); printf("\n");
    printf("Co so 8: "); doi_co_so(n, 8); printf("\n");
    printf("Co so 16: "); doi_co_so(n, 16); printf("\n");
    return 0;
}