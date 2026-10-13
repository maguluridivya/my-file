#include<stdio.h>
int main(){
    int num1,num2;
    float no1,no2;
    double n1,n2;
    printf("enter the num1");
    scanf("%d",&num1);
    printf("enter the num2");
    scanf("%d",&num2);
    printf("addition:%d\n",num1+num2);
    printf("subtraction:%d\n",num2-num1);
    printf("multiplication:%d\n",num1*num2);
    printf("division:%d\n",num2/num1);
    printf("-----------------------------------------------------------------\n");
    printf("enter the num1");
    scanf("%f",&no1);
    printf("enter the num2");
    scanf("%f",&no2);
    printf("addition:%.2f\n",no1+no2);
    printf("subtraction:%.2f\n",no2-no1);
    printf("multiplication:%.2f\n",no1*no2);
    printf("division:%.2f\n",no2/no1);
    printf("---------------------------------------------\n");
    printf("enter the num1");
    scanf("%lf",&n1);
    printf("enter the num2");
    scanf("%lf",n2);
    printf("addition:%.2lf\n",n1+n2);
    printf("subtraction:%.2lf\n",n2-n1);
    printf("multiplication:%.2lf\n",n1*n2);
    printf("division:%.2lf\n",n2/n1);
}

