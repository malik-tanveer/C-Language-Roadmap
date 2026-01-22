#include <stdio.h>

// Local Scop
void fun()
{
    int x = 10; // local
    printf("Local Scope (Local Variable) %d", x);
}

// Global Scope
int g = 100;

int main()
{
    // Local Scop
    fun();

    // Global Scope
    printf("\nGlobal Scope (Global Variable) = %d\n", g);

    // Block Scope
    if (10 > 5)
    {
        int b = 20; // Block scope
        printf("Inside block: b = %d\n", b);
    }

    // Function Scope
start:
    // printf("Hello\n");
    goto start;

    return 0;
}