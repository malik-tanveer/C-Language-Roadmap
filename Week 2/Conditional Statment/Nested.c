#include <stdio.h>

int main()
{
    // Nested if
    // THis Nested if Most Use case is Login you login to reirect a this and etc.

    int age = 19;
    int hasCNIC = 1;
    int isLogin = 1;
    int isAdmin = 0;

    if (age >= 18)
    {
        if (hasCNIC)
        {
            printf("Allowed\n");
        }
        else
        {
            printf("Not Allowed\n");
        }
    }
    else
    {
        printf("Under age\n");
    }

    if (isLogin)
    {
        if (isAdmin)
        {
            printf("Admin panel\n");
        }
        else
        {
            printf("User dashboard\n");
        }
    }
    else
    {
        printf("Please login\n");
    }

    // Without Nested if Simple
    if (age >= 18 && hasCNIC)
    {
        printf("Allowed\n");
    }

    return 0;
}