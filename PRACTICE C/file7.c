#include <stdio.h>
int main()              //take 2 no from file and paste sum of both in same file
{
    FILE *fptr;
    fptr = fopen("TEST7.txt", "r");         //first read r and store in int
    int a, b;
    fscanf(fptr, "%d", &a);
    fscanf(fptr, "%d", &b);
    printf("%d", a + b);

    fclose(fptr);                   //close file then open again

    fptr = fopen("TEST7.txt", "w");
    fprintf(fptr, "%d", a + b);                 //then write w new value

    fclose(fptr);                  //close always
    return 0;
}