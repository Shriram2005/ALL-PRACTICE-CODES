#include<stdio.h>

int swap();

int swap(int *a,int *b){int c=*a;*a=*b;*b=c;
                        return 0;
                        }

int main(){
int a=4,b=8;                                        
swap(&a,&b);
printf("a is: %d & b is: %d",a,b);

return 0;



}