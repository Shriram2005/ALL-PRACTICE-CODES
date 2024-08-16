#include<stdio.h>
#include<string.h>
int main(){
char a[20]="apple";            // ascii value more for a 
char b[20]="elephant";         //ascii value less for b
printf("%d\n",strcmp(a,b));           //string compare    prints +1,0,-1      based on ascii values of 1st no or characters
printf("%d",strcmp(b,a)); 


}