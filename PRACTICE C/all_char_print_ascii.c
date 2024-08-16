#include <stdio.h>
#include <conio.h>
void main()
{
    char sym[95];

    for (int i = 0, j = 32; i <= 95; i++, j++)
    {

        sym[i] = j;
    }

    for (int i = 0; i <= 95; i++)
    {
        printf("%c", sym[i]);
    }
    getch();
}
