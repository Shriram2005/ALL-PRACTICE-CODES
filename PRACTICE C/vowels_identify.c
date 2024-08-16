#include<stdio.h>

int countvowels(char str[]);

int countvowels(char str[]){int count=0;
                     for(int i=0;str[i]!='\0';i++){
                        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||
                           str[i]=='o'||str[i]=='u'){count++;}
                        
                    }
return count;


}

int main(){
   printf("enter your word:");
char str[50];
gets(str);
printf("It has %d vowels",countvowels(str));




}