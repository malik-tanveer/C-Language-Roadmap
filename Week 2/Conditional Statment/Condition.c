#include <stdio.h>

int main()
{
    // if statment in c
    // if retunr a everytime true condition not a fasle is print.
    int a = 20;
    int b = 10;
    int num = 8;
    int x = 5;
    int marks = 72;

    int age = 19;
    if (age >= 18) // Not  try  a this is a Wrong if (a = 5)
    {
        printf("Function returned true\n");
    }

    if (a > b)
        printf("a is greater\n");

    // else statment in c
    // else statemnt is print a false condition if and else is a both combination is Good.
    // 1.
    if (a < b)
    {
        printf("TRUE\n");
    }
    else
    {
        printf("False\n");
    }
    // 2.
    if (age >= 18)
    {
        printf("Allowed\n");
    }
    else
    {
        printf("Not allowed\n");
    }

    // 3.
    if (num % 2 == 0)
    {
        printf("Even\n");
    }
    else
    {
        printf("odd\n");
    }

    // 4.
    if (x)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    // else if is a Multiple condition handle like this wrong move next again this chck and is true and program is stop it.
    // else if condition is use a multiple condition optional is else is you write a else if multiple
    if (num < 1)
    {
        printf("num is less than 1\n");
    }
    else if (num < 2)
    {
        printf("num is less than 2\n");
    }
    else if (num < 3)
    {
        printf("num is less than 3\n");
    }
    else if (num < 4)
    {
        printf("num is less than 4\n");
    }
    else if (num < 9)
    {
        printf("num is less than 9\n");
    }
    else
    {
        printf("num is more than than 1 \n");
    }

    // 2.

    if (marks >= 90)
    {
        printf("Grade A\n");
    }
    else if (marks >= 80)
    {
        printf("Grade B\n");
    }
    else if (marks >= 60)
    {
        printf("Grade C\n");
    }
    else
    {
        printf("Fail\n");
    }
    // 3.
    if (age >= 60)
    {
        printf("Senior citizen\n");
    }
    else if (age >= 18)
    {
        printf("Adult\n");
    }
    else
    {
        printf("Minor\n");
    }
    return 0;
}