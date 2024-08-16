#include<stdio.h>

int main(){


float deposit=0,withdraw=0,updatedbalance=5000;
int pin=1234,pin1;
start:
printf("Enter the password : ");
scanf("%d",&pin1);

while(1){
if(pin==pin1){
    printf("Select the operation\n\n");
    printf("1]    View balance\n2]    Deposit\n3]    Withdraw\n4]    Cancel\n\n");
    int option;
    scanf("%d",&option);
    switch(option){
        case 1:printf("Yout Current Balance is %f\n",updatedbalance);
                break;
        case 2:printf("Enter the amount to Deposit : \n");
                scanf("%f",&deposit);
                updatedbalance=updatedbalance+deposit;
                printf("Updated balance is = %f\n",updatedbalance);
                break;
        case 3:printf("Enter the amount to Withdraw : \n");
                scanf("%f",&withdraw);
                updatedbalance=updatedbalance-withdraw;
                printf("Updated balance is = %f\n",updatedbalance);
                break;
        case 4: printf("Thanks You\n");
                goto start;
        default:printf("Invalid option\nTry again\n");
                break;

            
        
    }


}
else{
    printf("Invalid password\nTry again\n");
    goto start;
}

}
return 0;
}