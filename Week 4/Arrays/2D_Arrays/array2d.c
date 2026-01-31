#include <stdio.h>

int main()
{
    // 2D Array

    // Method 1: Direct
    // int arr[2][3] = {
    // {1, 2, 3},
    // {4, 5, 6}
    // };

    // Method 2: Without row size Evry time you write a Column Vlaues
    // int arr[][3] = {
    // {1, 2, 3},
    // {4, 5, 6}
    // };

    // Simple 2d array print using pritnf
    int Arr[][5] = {
        {20},
        {10, 20},
        {10, 20,30},
        {10, 20,30,40},
        {10, 20,30,40,50},
        {20, 1, 2, 3, 4},
    };
    
    
    printf("%d\n", Arr[0][0]);
    printf("%d %d \n", Arr[1][0], Arr[1][1]);
    printf("%d %d %d\n", Arr[2][0], Arr[2][1], Arr[2][2]);
    printf("%d %d %d %d\n", Arr[3][0], Arr[3][1], Arr[3][2], Arr[3][3]);
    printf("%d %d %d %d %d\n", Arr[4][0], Arr[4][1], Arr[4][2], Arr[4][3], Arr[4][4]);
    printf("%d %d %d %d %d\n", Arr[5][0], Arr[5][1], Arr[5][2], Arr[5][3], Arr[5][4]);
    

    // Simple 2d array print using Loop
int rows = sizeof(Arr) / sizeof(Arr[0]);
int cols = sizeof(Arr[0]) / sizeof(Arr[0][0]);
printf("Rows = %d\n", rows);
printf("cols = %d\n", cols); 
   for(int i =0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            printf("%d ", Arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}