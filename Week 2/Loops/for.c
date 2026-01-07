#include <stdio.h>

int main()
{
    for (int i = 1; i <= 18; i++)
    {
        printf("\n%d", i);
    }

    printf("\nThis is a Revrse Loop");
    for (int i = 10; i >= 1; i--)
    {
        printf("\n%d", i);
    }

    printf("\nOnly Even numbers Print");

    for (int i = 0; i <= 20; i += 2)
    {
        printf("\n%d ", i);
    }

    printf("\nLoop with condition inside");

    for (int i = 1; i <= 10; i++)
    {               // i define a value is 10
        if (i == 2) // and change only 2 print
            break;
        printf("\n%d ", i);
    }

    return 0;
}