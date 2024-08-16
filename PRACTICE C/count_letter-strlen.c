#include <stdio.h>
#include <string.h>
int main()
{

    char hello[100];
    // int length=);
    printf("enter your sentence:");
    fgets(hello, 100, stdin);
    printf("it has %d letters", strlen(hello) - 1);
}