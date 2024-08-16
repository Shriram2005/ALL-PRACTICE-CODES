#include<stdio.h>

void printnum();
void printhello();
void goodbye();

void printnum(){for(int a=1;a<=10;a++){printf("%d  ",a);}}
void printhello(){printf("hello world\n");}
void goodbye(){printf("good bye...!!!");}

int main(){
    printhello(); 
    printhello();
    printnum();printf("\n");
    printnum();printf("\n");
    goodbye();
    return 0;
}










