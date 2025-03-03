#include <stdio.h>

int main() {
    int day, month, year;
    printf("nhập ngày: ");
    scanf("%d", &day);
    printf("nhập tháng: ");
    scanf("%d", &month);
    printf("nhập năm: ");
    scanf("%d", &year);
    printf("%d/%d/%d\n", day, month, year);

    return 0;
}