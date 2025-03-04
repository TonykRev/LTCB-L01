#include<stdio.h>
int main(){
    float R; 
    const float pi=3.1415;
    float S, V;
    S=4 * pi * R * R;
    V=(4.0 / 3) * pi * R * R * R;
    scanf("nhập bán kính %.2f", &R);
    printf("Dien tich cua hinh cau la: %.2f\n", S);
    printf("The tich cua hinh cau la: %.2f\n", V);
}
