#include<stdio.h>
int main(){
    printf("1.addition ");
    printf("2.subtraction");
    printf("3.multiplication");
    printf("4.division");
    printf("5.modulas");
    int addition,subtraction, multiplication,division;
    float modulas,floordivision;
    int num1,num2;
    int choice;
    printf("enter the choice");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
    printf("enter the num1");
    scanf("%d",&num1);
    printf("enter the num2");
    scanf("%d",&num2);
    addition=num1+num2;
    printf("the sum is:%d",addition);
    break;
    case 2:
    printf("enter the num1");
    scanf("%d",&num1);
    printf("enter the num2");
    scanf("%d",&num2);
    subtraction=num2-num1;
    printf("the difference is:%d",subtraction);
    break;
    case 3:
    printf("enter the num1");
    scanf("%d",&num1);
    printf("enter the num2");
    scanf("%d",&num2);
    multiplication=num1*num2;
    printf("the product is:%d",multiplication);
    break;
    case 4:
    printf("enter the num1");
    scanf("%d",&num1);
    printf("enter the num2");
    scanf("%d",&num2);
    division=num1/num2;
    printf("the division is:%d",division);
    break;
    case 5:
    printf("enter the num1");
    scanf("%d",&num1);
    printf("enter the num2");
    scanf("%d",&num2);
    modulas=num1%num2;
    printf("the modulas is:%f",modulas);
    break;
    
    default:
    printf("invalid choice");
        break;
    }
}