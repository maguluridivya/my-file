#include<stdio.h>
int main(){
    int age;
    int drivingtest;
    int feespaid;

    printf("enter the age");
    scanf("%d",&age);
    printf("wheather driving test is passed");
    scanf("%d",&drivingtest);
    printf("enter wheather fees paid");
    scanf("%d",&feespaid);
    if (age<18){
        printf("dl cannot be issued");
    }
     else if(drivingtest==0){
        printf("license cannot be issued because driving is not completed");
     } else if(feespaid==0){
        printf("dl cannot be issued because fees is pending");
    }else{
        printf("dl can be issued");
    }

     

}