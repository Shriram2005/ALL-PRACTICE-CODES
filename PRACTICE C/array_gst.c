#include<stdio.h>
int main(){
float a[3];
printf("enter price 1:");
scanf("%f",&a[0]);
printf("enter price 2:");
scanf("%f",&a[1]);
printf("enter price 3:");
scanf("%f",&a[2]);

printf("total price 1=%f\n",a[0]+(0.18*a[0]));
printf("total price 2=%f\n",a[1]+(0.18*a[1]));
printf("total price 3=%f\n",a[2]+(0.18*a[2]));


}