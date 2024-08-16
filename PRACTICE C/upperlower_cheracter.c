#include<stdio.h>
int main()
{
    char a;
    printf("enter character:");
    scanf("%c",&a);
    if(a>='a'&&a<='z'){printf("it is a lowercase character");}
    if(a>='A'&&a<='Z'){printf("it is a uppercase character");}
    else{printf("not a valid character");}
    return 0;
}
