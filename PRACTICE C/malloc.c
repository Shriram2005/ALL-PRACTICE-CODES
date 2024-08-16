#include <stdio.h>
#include <stdlib.h>               
int main()               //// used for malloc  <stdlib.h>
{
    int *ptr;                                                   // * is written in malloc
    ptr = (int *)malloc(10 * sizeof(int));              //malloc    //default value of pointer is not conformed 0//
                                                                                //it may be any random no

    ptr[0] = 1;
    ptr[1] = 2;
    ptr[2] = 3;
    ptr[3] = 4;
    ptr[4] = 5;

    ptr[5];
    ptr[6];                         //default value of pointer is not conformed 0//
    ptr[7];                         //it may be any random no
    ptr[8];
    ptr[9];

    for (int i = 0; i <= 9; i++)
    {
        printf("%d\n", ptr[i]);
    }
    return 0;
}