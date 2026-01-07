#include <stdio.h>

int main()
{
    int count = 5;
    int num;

    // Example 1
    int i = 1; // Initalize the Value
    while (i <= 5)
    {                      // Write a logic / Condition
        printf("\n%d", i); // why you want to wark define this
        i++;               // and Increase one by one
    }

    // Example 2
    // Not used a this Loop is a Ininite Loop Avoid this used a incerment i++ Update is Your responsibility
    //     while (i <= 5) {
    //     printf("%d ", i);
    // }

    // Example 3
    printf("\nEnter positive number: ");
    scanf("%d", &num);

    while (num <= 0)
    {
        printf("Invalid! Enter again: ");
        scanf("%d", &num);
    }

    printf("Correct input And You pressed : %d\n", num);

    // Example 4
    while (count > 0)
    {
        printf("\n%d ", count);
        count--;
    }

    return 0;
}