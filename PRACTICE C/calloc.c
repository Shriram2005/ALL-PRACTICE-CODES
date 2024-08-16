#include <stdio.h>
#include <stdlib.h>
int main()                    //// used for calloc <stdlib.h>
{

    float *ptr;                                                             //calloc is little different * is not written
    ptr = (float *)calloc(10, sizeof(float));            // calloc    //default value of pointer is conformed to 0//
                                                                        // it is never random no
    ptr[0] = 55.66;
    ptr[1] = 88.544;
    ptr[2] = 55.5;
    ptr[3] = 88.0;
    ptr[4] = 44;
    ptr[5];
    ptr[6];                         //default value of pointer is always 0 in calloc//
    ptr[7];                         //it is never random no
    ptr[8];
    ptr[9]; 

    for (int i = 0; i <= 9; i++)
    {
        printf("%f\n", ptr[i]);
    }

    return 0;
}