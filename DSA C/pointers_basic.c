#include <stdio.h>
#include <conio.h>
void main()
{

    // int a=10;
    // int *p=&a;

    // printf("%d\n",a);
    // printf("%d\n",&a);
    // printf("%d\n",p);
    // printf("%d\n",*p);
    // printf("%d\n",&p);

    int arr[10] = {2, 4, 6, 8, 10};

    int *p = arr;
    printf("%d\n", *(arr + 4));     //array start location +4 times size of int
    // printf("%d\n", (*arr + 4));
    // printf("%d\n", *arr);
    // printf("%d\n", &*p);
    // printf("%d\n", &arr);

    printf("%d\n", arr[2]);        // this
    printf("%d\n", 2 [arr]);      // both are same
}