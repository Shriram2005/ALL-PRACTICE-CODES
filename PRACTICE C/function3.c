#include<stdio.h>

int printtable(int n);
int printtable(int n){
    for(int a=1;a<=10;a++){printf("%d  ",n*a);
                                            }
                    }


int main(){
int n;
printf("Enter the number:");
scanf("%d",&n);
printtable(n);       //int not written   multiple value print
return 0;


}
