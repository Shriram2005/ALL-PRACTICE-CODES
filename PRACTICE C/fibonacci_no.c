#include<stdio.h>

int main(){
    int n;
printf("enter n:");
scanf("%d",&n);

int fib[n];
fib[0]=0;
fib[1]=1;
printf("%d\t",fib[1]);
for(int a=2;a<=n;a++){fib[a]=fib[a-1]+fib[a-2];
                    printf("%d\t",fib[a]);

}


}