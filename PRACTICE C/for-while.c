#include<stdio.h>
int main(){
int a=1,b;
printf("enter the number til which you want to print numbers:");
scanf("%d",&b);
while(a<=b){printf("%d  ",a);a++;}
printf("\n");
printf("\n");
//both are used at once(for and while)
for(a=0;a<=b;a++){printf("%d  ",a);}
return 0;
}