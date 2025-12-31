#include <stdio.h>

int main()
{
    // Make a Calculator is a Simple Addition + and Substraction - Work

    // 1. try to a Addition
    int num1;
    int num2;

    printf("This is a Addition Method.\n");
    printf("Enter a Your First Numer :");
    scanf("%d", &num1);

    printf("Enter a Your Second Numer : ");
    scanf("%d", &num2);

    int add = num1 + num2;

    printf("Your Final Addition Answer is : %d \n", add);

    printf("This is a Substraction Method.\n");

    int num3;
    int num4;
    
    printf("Enter a Your First Numer :");
    scanf("%d", &num3);

    printf("Enter a Your Second Numer : ");
    scanf("%d", &num4);

    int sub = num3 - num4;

    printf("Your Final Substraction Answer is : %d", sub);
    return 0;
}