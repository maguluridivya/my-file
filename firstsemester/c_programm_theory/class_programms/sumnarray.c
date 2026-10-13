#include<stdio.h>
void num(int arr[]){
    for(int i=0;i<5;i++){
        printf("enter the number");
        scanf("%d",&arr[i]);
    }
}

int calculatesum(int arr[5]){
    int sum=0;
    int i;
    for(i=0;i<5;i++){
    sum=sum+arr[i];
    }

return sum;
}
int main()
{   
    int sum;
    int arr[5];
    num(arr);
    sum=calculatesum(arr);
    printf("the sum is:%d",sum);
    return 0;
}