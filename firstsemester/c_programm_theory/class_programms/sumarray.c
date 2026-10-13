#include<stdio.h>
int calculatesum(int number[]){
    int sum=0;
    for(int i=0;i<5;i++){
        sum=sum+number[i];

    }

    return sum;
}
int main(){
    int number[5];
    
    for(int i=0;i<5;i++){
        printf("enter the %d number:",i+1);

        scanf("%d",&number[i]);
    }
    int total=calculatesum(number);
    printf("the sum is:%d",total);
}
    
