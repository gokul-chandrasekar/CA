#include <stdio.h>

int main() {
    long num, binary_num, decimal_num = 0, base = 1, rem;
    printf("Enter a binary number with the combination of 0s and 1s:\n");
    scanf("%ld", &num);
    binary_num = num;

    while (num > 0) {
        rem = num % 10;
        decimal_num = decimal_num + rem * base;
        num = num / 10;
        base = base * 2;
    }

    printf("The binary number is %ld\n", binary_num);
    printf("The decimal number is %ld\n", decimal_num);
    
    int octal_num = 0, place = 1;
    while (decimal_num > 0) {
        rem = decimal_num % 8;
        octal_num += rem * place;
        decimal_num /= 8;
        place *= 10;
    }
    printf("The octal number is %d\n", octal_num);

    return 0;
}

