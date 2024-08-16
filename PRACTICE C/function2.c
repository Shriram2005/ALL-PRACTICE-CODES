#include<stdio.h>

int sum(int a,int b);
int sum(int x,int y){return x+y;}


int main(){
int a,b;
printf("Enter the first number:");
scanf("%d",&a);
printf("Enter the second number:");
scanf("%d",&b);

int add=sum(a,b);           //int written   single value print
printf("sum is %d",add);






}