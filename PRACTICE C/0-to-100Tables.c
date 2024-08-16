#include <stdio.h>

int main()
{
    int tables[100][10];         //100*10
    int i,j;
    for(i = 1; i <= 100; i++)
    {
        for(j = 1; j <= 10; j++)              //  loop in loop //nested for loop
        {
            tables[i][j] = i * j; 
        } 
    }

    for(i = 1; i <= 100; i++){
        for(j = 1; j <= 10; j++){
            printf("%d x %d = %d\n",i,j,tables[i][j]);  //loop in loop for print
        }
        printf("\n");
    }


    return 0;
}