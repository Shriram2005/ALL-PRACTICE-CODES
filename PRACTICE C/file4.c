#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("TEST4.txt", "r");          // read five integers from a file
    int n;

    fscanf(ptr, "%d", &n);
    printf("number is=%d\n", n);
    fscanf(ptr, "%d", &n);
    printf("number is=%d\n", n);
    fscanf(ptr, "%d", &n);
    printf("number is=%d\n", n);
    fscanf(ptr, "%d", &n);
    printf("number is=%d\n", n);
    fscanf(ptr, "%d", &n);
    printf("number is=%d\n", n);

    fclose(ptr);
}