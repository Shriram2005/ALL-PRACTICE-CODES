#include<stdio.h>

int countchar(char arr[]);

int countchar(char arr[]){int count=0;
                        for(int a=0;arr[a]!='\0';a++){count++;}
                return count-1;

}

int main(){
char name[100];
printf("enter your sentence or word:");
fgets(name,100,stdin);
printf("its length is:%d",countchar(name));
return 0;



}