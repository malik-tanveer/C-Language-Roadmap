#include <stdio.h>

int main()
{
    printf("THis is a Variable's \n");

    int stock = 10;
    float price = 19.99;
    char grade = 'A';

    // You Print a Simple 3 Another Data types print in 1 line
    printf("stock is %d, \nprice this %f, \ngrade this %c \n", stock, price, grade);

    int length = 10;
    int width = 5;
    int area;

    // Use variables in a calculation
    area = length * width;

    printf("Length: %d\n", length);
    printf("Width: %d\n", width);
    printf("Area: %d\n", area);
    return 0;
}