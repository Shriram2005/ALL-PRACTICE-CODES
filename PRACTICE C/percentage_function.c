#include <stdio.h>

percentage(int physics, int chemistry, int maths);

percentage(int physics, int chemistry, int maths)
{
    return ((physics + maths + chemistry) / 3);
}

int main()
{
    int physics, chemistry, maths;
    printf("enter marks in physics:");
    scanf("%d", &physics);
    printf("enter marks in chemistry:");
    scanf("%d", &chemistry);
    printf("enter marks in maths:");
    scanf("%d", &maths);

    printf("%d percent", percentage(physics, maths, chemistry));
}