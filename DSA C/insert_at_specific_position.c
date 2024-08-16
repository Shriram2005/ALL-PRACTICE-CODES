#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
    int a[100], size, pos, add;
    printf("Enter array size = ");          //input array size and elements
    scanf("%d", &size);
    printf("Enter elements = \n\n");

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nElements = \n");
    for (int i = 0; i < size; i++)          //output(show) elements
    {
        printf("%d  ", a[i]);
    }

    printf("\nEnter position to change = ");        //input position to change
    scanf("%d", &pos);
    if (pos <= 0 || pos > size)                 //check position is correct or not, exists or not
    {
        printf("Invalid position input...");
        exit(0);
    }

    printf("enter value to add = ");        //input value to check at that position
    scanf("%d", &add);
    for (int i = size; i >= pos - 1; i--)
    {
        a[i + 1] = a[i];        //swapping from last element of array till position
    }
    a[pos - 1] = add;       //add new element to its position
    size++;                 //increase size by 1 becaues of added element

    printf("\nArray after adding element :\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d  ", a[i]);
    }
}