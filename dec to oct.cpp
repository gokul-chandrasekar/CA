#include <stdio.h>

int main() {
    int decimal, rem, octal = 0, place = 1;

    printf("Enter the decimal value: ");
    scanf("%d", &decimal);

    while (decimal > 0) {
        rem = decimal % 8;
        octal += rem * place;
        decimal /= 8;
        place *= 10;
    }

    printf("The octal of the given number is: %d\n", octal);

    return 0;
}

