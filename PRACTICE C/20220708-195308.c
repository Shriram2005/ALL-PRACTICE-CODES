#include<stdio.h>

int main()
{
int a,b,c,z;
printf("Enter first number:");
scanf("%d",&a);
printf("Enter second number: ");
scanf("%d",&b);
printf("Enter third number: ");
scanf("%d",&c);

    printf("a=%d\n",a);
    printf("b=%d\n",b);
    printf("c=%d\n",c);
    z= a+b+c;
    printf("a+b+c=%d\n",z);
    z=a-b+c;
    printf("a-b+c=%d\n",z);
    z=a*b*c;
    printf("a*b*c=%d\n",z);
    z=a/b+c;
    printf("a/b+c=%d\n",z);
    
    if(z%2==0){printf("Number is divisible by 2");
    }
    else{printf("no is not divisible by 2");}
    
    
}