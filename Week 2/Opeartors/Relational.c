#include <stdio.h>

int main()
{
    // Everytime relational oper answer is true or false but c is output 0 & 1 mean that is 0 (representing false) or 1 (representing true)

    int a = 70;
    int b = 10;
    int c;

    // == (Equal to)
    c = a == b;
    printf("a == b = %d\n", c);

    // != (Not equal to)
    c = a != b;
    printf("a != b = %d\n", c);

    // > (Greater than)
    c = a > b;
    printf("a > b = %d\n", c);

    // < (Less than)
    c = a < b;
    printf("a < b = %d\n", c);

    // >= (Greater than or equal to)

    c = a >= b;
    printf("a >= b = %d\n", c);

    // <= (Less than or equal to)

    c = a <= b;
    printf("a <= b = %d", c);

    return 0;
}