#include <stdio.h>
int main()
{
    int a;
    printf("enter your marks:");
    scanf("%d", &a);
    if (a <= 25 && a >= 1)
    {
        printf("Fail");
    }
    else if (a <= 50 && a >= 26)
    {
        printf("c grade");
    }
    else if (a <= 75 && a >= 51)
    {
        printf("b grade");
    }
    else if (a <= 100 && a >= 76)
    {
        printf("a++ grade");
    }
    else
    {
        printf("not a valid number");
    }
    return 0;
}
