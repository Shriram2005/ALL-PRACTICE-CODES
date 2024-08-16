#include<stdio.h>
#include<string.h>
int main(){

char oldstring[50]="hello guys";
char newstring[50]="hey guys";

 puts(oldstring);
 puts(newstring);printf("\n");

strcpy(oldstring,newstring);                //2nd string is copyied to 1st string

 puts(oldstring);
 puts(newstring);


}