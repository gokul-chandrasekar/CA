#include <stdio.h>

void RestoringDivision(int dividend, int divisor) {
    int quotient = 0;
    int remainder = 0;

    for (int i = 0; i < 32; i++) { \
        remainder = (remainder << 1) | ((dividend >> 31) & 1);
        dividend = dividend << 1;
        remainder -= divisor;

        if (remainder >= 0) {
            quotient = (quotient << 1) | 1;
        } else {
            quotient = quotient << 1;
            remainder += divisor;
        }
    }

    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", remainder);
}

int main() {
    int dividend, divisor;

    printf("Enter the dividend: ");
    scanf("%d", &dividend);

    printf("Enter the divisor: ");
    scanf("%d", &divisor);

RestoringDivision(dividend, divisor);

    return 0;
}
