#include <stdio.h>

int dowork(int a, int b, int *sum, int *prod, int *avg);

int dowork(int a, int b, int *sum, int *prod, int *avg)
{
    *sum = a + b;
    *prod = a * b;
    *avg = (a + b) / 2;
}

int main()
{
    int a = 3, b = 5;
    int sum, prod, avg;
    dowork(a, b, &sum, &prod, &avg);
    {
        printf("sum is:%d\nproduct is:%d\naverage is:%d", sum, prod, avg);
    }
}