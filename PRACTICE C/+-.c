#include <stdio.h>

int main()
{
    int a, b, c, c1;
    printf("please enter the first number:");
    scanf("%d", &a);
    printf("the first number you entered is:%d\n\n", a);

    printf("please enter the second number:");
    scanf("%d", &b);
    printf("the second number you entered is:%d\n\n", b);

    c1 = a + b;
    printf("the addition of these two numbers is = %d\n", c1);

    c = a * b;
    printf("the multiplication of these two numbers is=%d\n", c);
    if (c1 < 50)
    {
        printf("Addition of both numbers is less than 50\n");
    }
    else
    {
        printf("Addition of both numbers is more than 150\n");
    }
}
