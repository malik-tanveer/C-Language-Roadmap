#include <stdio.h>

void hello()
{
    printf("Hello C\n");
}

int add(int a, int b)
{
    return a + b;
}
int give()
{
    printf("%d\n",10);
}
int square(int x)
{
    return x * x;
}
int cube(int x)
{
    return x * square(x);
}
int isPrime(int n)
{
    for (int i = 1; i <= n / 2; i++)
        if (n % i == 0)
            return 0;

    return 1;
}

int main()
{
    hello();
    give();
    // printf("%d\n", give());
    printf("%d \n", add(5, 2));
    printf("Square = %d\n", square(8));
    printf("Cube = %d\n", cube(2));
    printf("isPrime = %d\n", isPrime(5));
    return 0;
}