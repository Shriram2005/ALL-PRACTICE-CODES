#include<stdio.h>
int main(){
char *hello="how are you";
puts(hello);
hello="hello guys";                 //pointer can change
puts(hello);
printf("\n\n");

char hello2[]="hii guys how are you";
puts(hello2);
//hello2="hello guys";                   //array cannot change(modify) value
//puts(hello2);






}