#include <stdio.h>

int octalToDecimal(int octal);

int main() 
{
    int octalNumbers[] = {45, 234, 77, 123, 34, 22, 51, 3, 1, 531};
    int numOctals = sizeof(octalNumbers) / sizeof(octalNumbers[0]);

    for (int i = 0; i < numOctals; i++) {
        int decimal = octalToDecimal(octalNumbers[i]);
        printf("八进制数 %o 转换为十进制数是 %d\n", octalNumbers[i], decimal);
    }

    return 0;
}

int octalToDecimal(int octal) {
    int decimal = 0;
    int base = 1;

    while (octal != 0) {
        int digit = octal % 10;
        decimal += digit * base;
        base *= 8;
        octal /= 10;
    }

    return decimal;
}