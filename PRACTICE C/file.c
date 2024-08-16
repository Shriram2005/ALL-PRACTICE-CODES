#include <stdio.h>
int main()
{
    FILE *fptr;                                     ////fscanf      scan from file and save to letter /print
    fptr = fopen("TEST.txt", "r");                  ///read then print
    int ch;
    fscanf(fptr, "%d", &ch);
    printf("%d\n", ch);

    fscanf(fptr, "%d", &ch);
    printf("%d\n", ch);

    fscanf(fptr, "%d", &ch);
    printf("%d\n", ch);



    printf("%c",fgetc(fptr)); 
    printf("%c",fgetc(fptr));
    printf("%c",fgetc(fptr));                   ///using fgetc
    printf("%c",fgetc(fptr));
    printf("%c",fgetc(fptr));
    printf("%c",fgetc(fptr));


    fclose(fptr);
    return 0;
}
