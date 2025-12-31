#include <stdio.h>

int main()
{
    // Logical Operators: Combine multiple conditional expressions or invert a condition.

    // && (Logical AND - true if both operands are true)
    int a = 0;
    int b = 10;

    int result;
    result = a && b;
    printf("a && b = %d\n", result);
    printf("5 && 10 = %d\n", 5 && 10);
    printf("0 && 0 = %d\n", 0 && 0);

    // || (Logical OR - true if at least one operand is true)
    result = a || b;
    printf("a || b = %d\n", result);
    printf("5 || 10 = %d\n", 5 || 10);
    printf("0 || 0 = %d\n", 0 || 0);

    // ! (Logical NOT - inverts the truth value)
    printf("5 != 5 = %d\n", 5 != 5);
    printf("20 != 12 = %d", 20 != 12);

    return 0;
}