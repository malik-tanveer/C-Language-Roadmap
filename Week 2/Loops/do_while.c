#include <stdio.h>

int main()
{
    // Do While loop is Every Condition run a One time like output is true no problem run compelte a code and output is fasle and run a 1 time at least this is a special of Do while loop

    // Example 1

    // Yoy Initalize a Variable
    // do {
    // What you work nad what you want
    // i++ is compulsory you don't skip this
    // } while (condition);

    // Example 2
    int i = 0;
    do
    {
        printf("\n%d", i);
        i++;
    } while (i <= 10);

    // Example 3
    int x = 0;

    do
    {
        printf("\nHello");
    } while (x);

    // Example 4
    int choice;
    do
    {
        printf("\n1. Add");
        printf("\n2. Delete");
        printf("\n3. Exit");
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Add selected\n");
            break;
        case 2:
            printf("Delete selected\n");
            break;
        case 3:
            printf("Exit\n");
            break;
        default:
            printf("Invalid choice\n");
        }
    } while (choice != 3);

    int age;

    do
    {
        printf("Enter age (>=18): ");
        scanf("%d", &age);
    } while (age < 18);

    printf("Access granted\n");
    return 0;
}