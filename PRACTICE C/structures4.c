#include<stdio.h>

struct complex{
    int real;
    int img;
};

int main(){
struct complex number1={5,8};
struct complex *ptr=&number1;
printf("real no is=%d\n",ptr->real);            //arrow operator is used for pointers only
printf("imaginary no is=%d\n",ptr->img);
return 0;



}