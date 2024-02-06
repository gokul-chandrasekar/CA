#include <stdio.h>

int main() {
    float num1 = 3.14159f;  
    float num2 = 2.71828f;
    float result;

    result = num1 * num2; 

    printf("Single-precision representation of num1: %.7f\n", num1);
    printf("Single-precision representation of num2: %.7f\n", num2);
    printf("Result of multiplication (single-precision): %.7f\n", result);

    return 0;
}
