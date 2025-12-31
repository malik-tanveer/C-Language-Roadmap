#include <stdio.h>

int main()
{
    int a = 10;
    int b = 20;
    int c;

    c = a + b;
    // Addition
    printf("a + b = %d\n", c);
    // Substraction
    c = b - a;
    printf("b - a = %d\n", c);

    // Multiplication
    c = a * b;
    printf("a * b = %d\n", c);

    // Division
    c = b / a;
    printf("a / b = %d\n", c);

    // modulus
    c = a % b;
    printf("a '%' b = %d\n", c);

    return 0;
}