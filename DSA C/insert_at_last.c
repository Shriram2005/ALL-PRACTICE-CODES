#include <stdio.h>
#include <stdlib.h>
void main()
{
    int arr[100], size, ins;
    printf("Enter size of array = ");
    scanf("%d", &size);
    printf("Enter Elements = \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Elements are = \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d  ", arr[i]);
    }

    printf("\nEnter a element to add  at last = ");
    size++;
    scanf("%d", &arr[size - 1]);
    printf("Elements after value update = \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d  ", arr[i]);
    }
}