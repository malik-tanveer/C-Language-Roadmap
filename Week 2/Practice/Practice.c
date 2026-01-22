#include <stdio.h>

int main (){
printf("Hello\n");

int a = 10, b = 25, c = 15;

if (a >= b && a >= c)
    printf("Largest = %d\n", a);
else if (b >= a && b >= c)
    printf("Largest = %d\n", b);
else
    printf("Largest = %d\n", c);
int n = 7;

if (n % 2 == 0)
    printf("Even");
else
    printf("Odd");

int num = 5;

for (int i = 1; i <= 10; i++) {
    printf("%d x %d = %d\n", num, i, num * i);
}


int number = 5;
int fact = 1;

for (int i = 1; i <= number ; i++) {
    fact = fact * i;
}

printf("Factorial = %d", fact);


return 0;
}