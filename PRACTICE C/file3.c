#include<stdio.h>
int main(){
FILE *ptr;
ptr=fopen("TEST3.txt","r");


char ch=fgetc(ptr);

while(ch !=EOF){                        //EOF is present at last of every file
    printf("%c",ch);                   //loop to print letters from a file
    ch=fgetc(ptr);

}
printf("\n");



fclose(ptr);
}