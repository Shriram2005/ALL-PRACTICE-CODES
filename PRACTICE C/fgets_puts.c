#include <stdio.h>
int main()
{
    char hello[50];
    printf("enter your sentence=\n");
    fgets(hello, 50, stdin); // gets(arr);    expired dangerous so new fgets(arr,arrsize,stdin);
    puts(hello);             // arr size-1   fgets size
}