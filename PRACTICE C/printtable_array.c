#include <stdio.h>

int printtable(int n);

int printtable(int n)
{
    int tablee[11];

    for (int a = 1; a <= 10; a++)
    {
        tablee[a] = n * a;
    }

    for (int a = 1; a <= 10; a++)
    {
        printf("%d\t", tablee[a]);
    }
}

int main()
{
    int b;
    printf("enter no:");
    scanf("%d", &b);
    printtable(b);

    // int tablee[10];int n;
    // for(int a=1;a<=10;a++){tablee[a]=n*a;}

    // for(int a=1;a<=10;a++){printf("%d\t",tablee[a]);}
    return 0;
}