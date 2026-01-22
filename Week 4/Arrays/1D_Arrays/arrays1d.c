#include <stdio.h>

int main()
{
    // 1D Array
    // Method 1:
    // int arr[5] = {10, 20, 30, 40, 50};

    // Method 2:
    // int arr[] = {1, 2, 3, 4};

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int arr1[5] = {1, 2, 3, 4, 5};

    // Array Print using Index Number

    printf("Array print Using Index number.\n");
    printf("%d\n", arr1[0]);
    printf("%d\n", arr1[1]);
    printf("%d\n", arr1[2]);
    printf("%d\n", arr1[3]);
    printf("%d\n", arr1[4]);
    printf("%d\n", arr1[5]);  // Invalid Index 5 is not Exicted and then again Repeated
    
    printf("Complete Array print.\n");
    // Complete Array Print
    int len = sizeof(arr) / sizeof(arr[0]);
    printf("Length of Array : %d\n", len);
    for (int i = 0; i < len; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}