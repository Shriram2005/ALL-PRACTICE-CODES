#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    printf("enter your age: ");
    scanf("%d", &a);
    if (a >= 18 && a < 50)
    {
        printf("you are teenager\n");
    }
    else if (a >= 50)
    {
        printf("you are buddha \n");
    }
    else if (a <= 17 && a > 0)
    {
        printf("you are chota baccha\n");
    }
    else
    {
        printf("you are dead\n");
    }
    printf("thank you");
    return 0;
}