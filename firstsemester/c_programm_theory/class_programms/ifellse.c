#include<stdio.h>
int main(){
    int choice,firstnumber,secondnumber,i;
    printf("----welcome to my calculator-----");
    printf("1, addition\n");
    printf("2,subtraction");
    printf("3, multiplication");
    printf("4, division");
    printf("enter your choice:");
    scanf("%d",&choice);
    printf("enter the firstnumber:");
    for(i=1;i<=4;i++);
    if(choice==1){
      //addition
      printf("enter the first number:");
      scanf("%d",&firstnumber);
      printf("enter the second number:");
      scanf("%d",&secondnumber);
      int sum=firstnumber+secondnumber;
      printf("the sum is:%d",sum);
    }
    
    else if(choice==2){
      // subtraction
      printf("enter the firstnumber:");
      scanf("%d",&firstnumber);
      printf("enter the secondnumber:");
      
      scanf("%d",&secondnumber);
      int difference=firstnumber-secondnumber;
      printf("the difference is:%d",difference);
    }

    else if(choice==3){
      //multiplication     
       printf("enter the firstnumber:");
      scanf("%d",&firstnumber);
      printf("enter the secondnumber:");
      scanf("%d",&secondnumber);
      int multiplication=firstnumber*secondnumber;
      printf("the multiplication is:%d",multiplication);

    }
    else if(choice==4){
      //division      
       printf("enter the firstnumber:");
       scanf("%d",&firstnumber);
       printf("enter the secondnumber:");
       scanf("%d",&secondnumber);
       int division=firstnumber/secondnumber;
       printf("the  division is:%d",division);
    }

    else{
      printf("---end---");
    }

    return 0;
}