#include <stdio.h>

void print(int n)
{
    if (n == 0)
        return;
    printf("Hello\n");
    print(n - 1);
}

int fact(int n)
{
    if (n == 0)
        return 1;
printf("pop\n");
    return n * fact(n - 1);
}

int fib(int n)
{
    if (n == 0) return 0;
    if (n == 1) return 1;

    return fib(n - 1) + fib(n - 2);
}

int sum(int n)
{
    if (n == 0)
        return 0;

    return n + sum(n - 1);
}

int main()
{

    fact(5);
    printf("%d\n",fib(6));
    printf("%d\n",sum(3));
    // int num = 10;
    print(10);
    return 0;
}