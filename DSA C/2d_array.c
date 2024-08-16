#include <stdio.h>
void main()
{
    int arr[3][3];       // total 9 values 2d array
    printf("Enter 6 numbers= \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Elements are : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
    }
}

// Rules :
// int a[2][3] = {1, 2, 3, 4, 5, 6};
// int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
// int a[][3] = {......};      //allowed
// int a[2][] = {......};      //not allowed
// int a[2][3];         //total 24 bytes memory(4 bytes per 1 int)