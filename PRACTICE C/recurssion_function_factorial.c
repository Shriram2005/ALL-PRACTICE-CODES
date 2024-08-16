#include<stdio.h>
int fact(int n);

int fact(int n){ 
                if(n==0){return 1;}
                int a=fact(n-1);
                int b=a*n;
                return b;
                }

    int main(){
    int n;
    printf("enter n:");scanf("%d",&n);

    printf("factorial is:%d",fact(n));
    return 0;
    }

