#include <stdio.h>
int main()
{
    int n=10;
    int numArray[10];
    int sum;
    printf("nhập 10 số muốn tính đi em: ");
    for (int i = 0; i < n; i++)
    {
        printf("nhập số %d: ", i + 1);
        scanf("%d", &numArray[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum += numArray[i];
    }
    printf("tổng của %d số nguyên là: %d\n", n, sum);
}