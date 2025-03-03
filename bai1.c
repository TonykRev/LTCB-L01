#include <stdio.h>

int main(){
    float x; 
    scanf("%f", &x);
    printf("X^2 = %.2f\nx^3 = %.2f\nx⁴ = %.2f\n", x*x, x*x*x, x*x*x*x);
    return 0; 
}