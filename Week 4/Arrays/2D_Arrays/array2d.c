#include <stdio.h>

int main()
{
    // 2D Array

    // Method 1: Direct
    // int arr[2][3] = {
    // {1, 2, 3},
    // {4, 5, 6}
    // };

    // Method 2: Without row size
    // int arr[][3] = {
    // {1, 2, 3},
    // {4, 5, 6}
    // };

    int Arr[5][5] = {
        {0, 1, 2, 3, 4},
        {10, 20, 30, 40, 50}};

    printf("2D Array : %d, %d\n", Arr[2][1]);
    return 0;
}