#include <stdio.h>
int main()
{
    int i = 11;
    int *ptr = &i;
    int **pptr = &ptr;               //   *  value at address       &  address

    printf("%u\n", &i);                 //   %d,%u,&p for pointer address print
    printf("%u\n", ptr);                //    &_     *_     *(*_)
    printf("%u\n", &ptr);
    printf("%u\n", *(&ptr));

    printf("%u\n", pptr);

    printf("%u\n", **pptr);
    printf("%u\n", **(&pptr));
}