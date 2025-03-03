#include <stdio.h>

int main() {
    float DTB;
    printf("nhập điểm trung bình: ");
    scanf("%f", &DTB);
    if (DTB <= 5) printf("loại: Yếu\n");
    else if (DTB < 7) printf("loại: Trung Bình\n");
    else if (DTB < 8) printf("loại: Khá\n");
    else if (DTB < 9) printf("loại: Giỏi\n");
    else printf("Loại: Xuất sắc\n");
    return 0;
}