//program to delete value at specific position in a array
#include <stdio.h>
#include <conio.h>
void main()
{
    int arr[100], size, pos;
    printf("Enter size of array = ");       //input size and elements of array
    scanf("%d", &size);
    printf("Enter elements of array :\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Elements are :\n");     //show elements of array
    for (int i = 0; i < size; i++)
    {
        printf("%d  ", arr[i]);
    }

    printf("\nEnter position of element thet you want to delete = ");       //input position
    scanf("%d", &pos);
    if (pos <= 0 || pos > size)         //check position is correct or not
    {
        printf("Invalid position input...");
    }
    else
    {

        for (int i = pos - 1; i <= size - 1; i++)
        {
            arr[i] = arr[i + 1];        //shift all elements by 1 at left in array by swapping
        }
        size--;         //reduce size of array by 1 because 1 element is deleted
        printf("Elements after update = \n");
        for (int i = 0; i < size; i++)
        {
            printf("%d  ", arr[i]);
        }
    }
}