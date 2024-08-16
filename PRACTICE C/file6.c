#include <stdio.h>
int main()                     // print odd numbers till n and save to file
{
    FILE *fptr;
    fptr = fopen("TEST6.txt", "w");
    int n;
    printf("Enter n=");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            fprintf(fptr, "%d\n", i); // fprintf
        }
    }

    fclose(fptr);
    return 0;
}