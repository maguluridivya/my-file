#include<stdio.h>
int main(){
    int accountnumber=1000;
    float balance=500;
    int choice;
    float deposite; 
    int useraccountnumber;
    printf("1,validaccount");
    printf("2,deposit");
    printf("3,withdraw");
    printf("accountview");
    printf("5,exit");
    printf("----welcome to my bank----");
    printf("enter the choice");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("enter the accountnumber");
        scanf("%d",&useraccountnumber);
        if(accountnumber==useraccountnumber){
        printf("validaccount");
        }
        else{
            printf("invalid account");
        }
        
        case 2:
        printf("enter the deposite");
        scanf("%f",&deposite);
        if(deposite >0){
        balance= balance + deposite;
        printf("the balance is:%f",balance);
        }
        else{
            printf("insufficient balance");
        }
        
        case 3:
        printf("current balance is :%d",balance);
        
        case 4:
        printf("exit");
        break;
        
    }
}

    


 

