#include <stdio.h>
#include <conio.h>
void main()
{
    int n;
    printf("Enter no. of how many numbers you want to bubble sort = ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the numbers to make ascending order = \n");
    for (int i = 0; i <= n-1; i++)
    {
        scanf("%d", &arr[i]);
    }

    int a = 1;
    while (a < n)
    {
        for (int i = 0; i <= n-1; i++)
        {
            
            if (arr[i] >= arr[i + 1])
            {
                int temp = arr[i + 1];
                arr[i + 1] = arr[i];
                arr[i] = temp;
            }
        }
        a++;
    }

    printf("\n");
    for (int i = 0; i <= n-1; i++)
    {
        printf("%d ",arr[i]);
    }
}