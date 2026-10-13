#include<stdio.h>
int main(){
     int num1,num2,num3;
     printf("enter the num1");
     scanf("%d",&num1);
     printf("enter the num2");
     scanf("%d",&num2);
     printf("enter the num3");
     scanf("%d",&num3);
     if (num1>num2<num3){
        printf("num1 is the largest");
        printf(" num2 and num3 is the largest");

     }else if(num2>num1<num3){
        printf("num2 is the largest");
        printf(" num1 and num3 is the largest");

     }else{
        printf("num3 is the largest");
        printf(" num1 and num2 is the largest");
     }

     }