#include <stdio.h>

int main()
{
    // Example of 3D Array Initallization
    // int ar [4][2][1] ={
    //     {{1},{2}},
    //     {{3},{4}},
    //     {{5},{6}},
    //     {{7},{8}}
    // };

    // int ar_1 [4][1][1] ={
    //     {{1}},
    //     {{3}},
    //     {{5}},
    //     {{7}}
    // };

    //     int arr[][2][3] = {
    //     1,2,3, 4,5,6,
    //     7,8,9, 10,11,12
    // };

    int arr[][2][3] = {
        {{10, 20, 30},
         {40, 50, 60}},
        {{70, 80, 90},
         {100, 110, 120}},
        {{130, 140, 150},
         {160, 170, 180}},
        {{190, 200, 210},
         {220, 230, 240}}};

    int arr1[][5][2] = {
        {{1, 2},
         {3, 4},
         {33, 44},
         {30, 40},
         {23, 24}},
        // {
        //     {5,6},
        //     {7,8}
        // },
        // {
        //     {9,10},
        //     {11,12}
        // },
        // {
        //     {13,14},
        //     {15,16}
        // },
        // {
        //     {17,18},
        //     {19,20}
        // }
    };
    printf("%d\t", arr1[0][0][0]);
    printf("%d\t", arr1[0][0][1]);
    printf("%d\t", arr1[0][1][0]);
    printf("%d\t", arr1[0][1][1]);
    printf("\n");
    printf("%d\t", arr1[0][2][0]);
    printf("%d\t", arr1[0][2][1]);
    printf("%d\t", arr1[0][3][0]);
    printf("%d\t", arr1[0][3][1]);
    printf("%d\t", arr1[0][4][0]);
    printf("\n");
    printf("%d\t", arr1[0][4][1]);
    printf("\n");
    // printf("%d\t", arr1[1][0][0]); // 5
    // printf("%d\t", arr1[1][0][1]); // 6
    // printf("%d\t", arr1[1][1][0]); // 7
    // printf("%d\t", arr1[1][1][1]); // 8
    // printf("\n");
    // printf("%d\t", arr1[2][0][0]); // 9
    // printf("%d\t", arr1[2][0][1]); // 10
    // printf("%d\t", arr1[2][1][0]); // 11
    // printf("%d\t", arr1[2][1][1]); // 12
    // printf("\n");
    // printf("%d\t", arr1[3][0][0]); // 13
    // printf("%d\t", arr1[3][0][1]); // 14
    // printf("%d\t", arr1[3][1][0]); // 15
    // printf("%d\t", arr1[3][1][1]); // 16
    // printf("\n");
    printf("\n");

    int blocks = sizeof(arr) / sizeof(arr[0]);
    int rows = sizeof(arr[0]) / sizeof(arr[0][0]);
    int cols = sizeof(arr[0][0]) / sizeof(arr[0][0][0]);

    // printf("blocks = %d\n", blocks);
    // printf("Rows = %d\n", rows);
    // printf("Cols = %d\n", cols);

    // 3D array print using Loop

    for (int i = 0; i < blocks; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            for (int k = 0; k < cols; k++)
            {
                printf(
                    // arr[%d][%d][%d] =
                    "%d\t",
                    //  i, j, k,
                    arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}