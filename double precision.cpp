#include <stdio.h>

int main() {
    double num1 = 3.14159265358979323846; 
    double num2 = 2.71828182845904523536;
    double result;

    result = num1 * num2;  

    printf("Double-precision representation of num1: %.16f\n", num1);
    printf("Double-precision representation of num2: %.16f\n", num2);
    printf("Result of multiplication (double-precision): %.16f\n", result);

    return 0;
}
