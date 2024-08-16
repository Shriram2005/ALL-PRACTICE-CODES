#include <stdio.h>
#include <conio.h>
void main()
{
    int arr[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int *ptr=arr;

    printf("Elements of array are = \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d  ", arr[i]);
    }

    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d  ", i[arr]);
    }

    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d  ", *(ptr+i));
    }
}


// these all are same :

// arr[i]
// i[arr]
// i[ptr]
// *(ptr+i)
// *(arr+i)

