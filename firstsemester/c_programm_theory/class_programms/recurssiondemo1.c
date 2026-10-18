#include<stdio.h>
 
int factorial(int number){
    if (number==0) //base conditon
        return 1;
    return number*factorial(number-1);
   }
int main(){
    int number;
    printf("enter the numnber");
    scanf("%d",&number);
    printf("enter the factorial %d is %d",number,factorial(number));
    return 0;
}

     
    


 