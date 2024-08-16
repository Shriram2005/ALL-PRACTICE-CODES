#include <stdio.h>
int main()
{
    int n, num = 0;
    printf("enter no:");
    scanf("%d", &n);

    // if(n==0||n==1){num=1;}

    for (int a = 2; a <= n / 2; a++)
    {
        if (n % a == 0)
        {
            num = 1;
        }
    }

    if (num == 1)
    {
        printf("it is not a prime no");
    }
    else
    {
        printf("it is a prime no");
    }
    return 0;
}