#include<stdio.h>

typedef struct address              //typedef for short name of structure
{
    int houseno;
    int blockno;
    char city[100];
    char state[100];
}add;                               //short name /for struct address

void scanadd();
// void printadd();

void printadd(add house){
                printf("Address is=%d, %d ,%s ,%s \n",house.houseno,house.blockno,house.city,house.state);
               
 
}

void scanadd(){}

int main(){
add house[5];                                   //structure array
printf("enter details of first house:\n");
scanf("%d",&house[0].houseno);
scanf("%d",&house[0].blockno);
scanf("%s",&house[0].city);                         //save 5 house details
scanf("%s",&house[0].state);

printf("enter details of second house:\n");
scanf("%d",&house[1].houseno);
scanf("%d",&house[1].blockno);
scanf("%s",&house[1].city);
scanf("%s",&house[1].state);

printf("enter details of third house:\n");
scanf("%d",&house[2].houseno);
scanf("%d",&house[2].blockno);
scanf("%s",&house[2].city);
scanf("%s",&house[2].state);

printf("enter details of fourth house:\n");
scanf("%d",&house[3].houseno);
scanf("%d",&house[3].blockno);
scanf("%s",&house[3].city);
scanf("%s",&house[3].state);

printf("enter details of fifth house:\n");
scanf("%d",&house[4].houseno);
scanf("%d",&house[4].blockno);
scanf("%s",&house[4].city);
scanf("%s",&house[4].state);


printadd(house[0]);
printadd(house[1]);
printadd(house[2]);
printadd(house[3]);                             //print five house details
printadd(house[4]);

return 0;
}