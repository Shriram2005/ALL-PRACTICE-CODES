#include <stdio.h>

int main()
{
    int days = 1;
    printf("enter today's date:");
    scanf("%d", &days);
    if (days >= 30 | days < 1)
    {
        printf("not a valid day");
    }
    else
    {
        printf("your reamining days of month are:\n");
        do
        {
            printf("%d\n", days);
            days++;
        } while (days <= 30);
    }
    return 0;
}
