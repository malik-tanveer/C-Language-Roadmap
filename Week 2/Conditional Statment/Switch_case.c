#include <stdio.h>

int main()
{
    // Switch usecase is CLI tools, ATMs, apps, calculators, Systems, APIs, backend logic

    // Use a Break you not use a break and result in Example No : 03
    int chois = 2;
    int day = 5;
    int x = 2;
    int a = 1;
    int b = 20;
    int c = 30;
    int d = 1;
    int crud = 1;
    int status = 2;
    // Example  : 1

    switch (chois)
    {
    case 1:
        printf("Burger\n");
        break;
    case 2:
        printf("Pizza\n");
        break;
    case 3:
        printf("Birayni\n");
        break;
    default:
        printf("Invalid choice\n");
    }

    // Example 2

    switch (day)
    {
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;
    case 4:
        printf("Thursday\n");
        break;
    case 5:
        printf("Friday\n");
        break;
    case 6:
        printf("Saturday\n");
        break;
    case 7:
        printf("Sunday\n");
        break;
    default:
        printf("Invalid day\n");
    }

    // Example 3

    switch (x)
    {
    case 1:
        printf("One\n");
    case 2:
        printf("Two\n");
    case 3:
        printf("Three\n");
    default:
        printf("Invalid\n");
    }

    // Example 4

    switch (d)
    {
    case 1:
        printf("d = a%d\n", a);
        break;
    case 2:
        printf("d = b%d\n", b);
        break;
    case 3:
        printf("d = c%d\n", c);
        break;
    default:
        printf("All is Wrong\n");
        break;
    }

    // Example 5

    switch (crud)
    {
    case 1:
        printf("Add\n");
        break;
    case 2:
        printf("Delete\n");
        break;
    case 3:
        printf("Update\n");
        break;
    default:
        printf("Invalid option\n");
    }

    // Example 7
    switch (status)
    {
    case 0:
        printf("Pending\n");
        break;
    case 1:
        printf("Approved\n");
        break;
    case 2:
        printf("Rejected\n");
        break;
    }

    int user;
    printf("Enter a any Number like 1 to 10 :");

    scanf("%d", &user);
    switch (user)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
        printf("Valid input\n");
        break;
    default:
        printf("Invalid input\n");
    }

    return 0;
}