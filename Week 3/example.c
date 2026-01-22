#include <stdio.h>

void pattern(int n, int max)
{
    if (n > max)
        return;

    // print nn
    printf("%d%d", n, n);

    // print n(n+1) and (n+1)n if possible
    // if (n < max)
    // {
    //     printf("%d%d", n, n + 1);
    //     printf("%d%d", n + 1, n);
    // }

    pattern(n + 1, max);
}

int main()
{
    pattern(0, 5);
    return 0;
}
