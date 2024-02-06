#include <stdio.h>

void nonRestoringDivision(int dividend, int divisor) {
    int quotient = 0;
    int remainder = 0;
    int negDivisor = -divisor;

    for (int i = 0; i < 32; i++) {  
        remainder = (remainder << 1) | ((dividend >> 31) & 1);
        dividend = dividend << 1;

        remainder += negDivisor;

        if (remainder < 0) {
            dividend |= 1;
            remainder += divisor;
        } else {
            quotient |= 1;
        }

        quotient <<= 1;
    }

    printf("Quotient: %d\n", quotient >> 1); 
    printf("Remainder: %d\n", remainder);
}

int main() {
    int dividend, divisor;

    printf("Enter the dividend: ");
    scanf("%d", &dividend);

    printf("Enter the divisor: ");
    scanf("%d", &divisor);

    nonRestoringDivision(dividend, divisor);

    return 0;
}

