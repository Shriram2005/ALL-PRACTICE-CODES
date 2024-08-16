#include<stdio.h>

int main()
{
int a,b,c;
printf("please enter the first number:");
scanf("%d",&a);
printf("the first number you entered is:%d\n",a);


printf("please enter the second number:");
scanf("%d",&b);
printf("the second number you entered is:%d\n ",b);


c=a+b;
printf("the addition of these two numbers is=");
printf("%d\n",c);
if(c<10){ printf("Addition of both numbers is less than 10\n");}
else{ printf("Addition of both numbers is more than 10\n");}






}
