#include <stdio.h>

int main()
{
    // Increment and Decrement

    // Increment and Decrement Operators: Increase or decrease the value of a variable by one.
    //                          ++ (Increment) ---- -- (Decrement)

    // Increment and Decrement is a two types
    // 1. Pre-increment / Pre-decrement like ++a , --a  first is change and used
    // 2. Post-increment / Post-decrement like a++ , a-- first used and after change

    // Increment
    int a = 10;
    int b = 10;


    printf("%d\n", ++a); // Print and after Used
    printf("%d\n", b++); // Used
    printf("%d\n", b); // Result Print
    
    // Decrement

    int c = 5;
    int d = 5;
    printf("%d\n", --c); // Print and after Used
    printf("%d\n", d--); // Used
    printf("%d\n", d); // Result Print
    return 0;
}