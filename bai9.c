#include <stdio.h>

int main() {
    int year, month, days;
    printf("nhập năm: "); scanf("%d", &year);
    printf("nhập tháng: "); scanf("%d", &month);
    if (month < 1 || month > 12) printf("không thỏa mãn\n");
    else {
        if (month == 2) days = ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) ? 29 : 28;
        else if (month == 4 || month == 6 || month == 9 || month == 11) days = 30;
        else days = 31;
        printf("tháng %d năm %d có %d ngày\n", month, year, days);
    }
    return 0;
}