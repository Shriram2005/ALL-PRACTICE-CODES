#include<stdio.h>

typedef struct abcbank
{
    int accno;
    char name[100];
}bank;

int main(){
bank a1={1001,"Rahul"};
bank a2={1002,"akash"};
bank a3={1003,"sohan"};

printf("account no=%d\naccount owner name=%s\n",a1.accno,a1.name);
printf("account no=%d\naccount owner name=%s\n",a2.accno,a2.name);
printf("account no=%d\naccount owner name=%s\n",a3.accno,a3.name);
return 0;
}