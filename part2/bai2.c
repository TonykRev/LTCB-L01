#include <stdio.h>

int main() {
    int n, i, p = 1;
    scanf("%d", &n);
    if (n <= 1) p = 0;
    else for (i = 2; i * i <= n; i++) if (n % i == 0) { p = 0; break; }
    printf("%d %s là số nguyên tố\n", n, p ? "" : "sai òi");
    return 0;
}