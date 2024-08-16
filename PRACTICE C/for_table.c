#include <stdio.h>
int main()
{
    int n, mul;
    printf("enter no: ");
    scanf("%d", &mul);
    for (int a = 1; a <= 10; a++)
    {
        printf("%d*%d=%d\n", mul, a, mul * a);
    }
    return 0;
}
