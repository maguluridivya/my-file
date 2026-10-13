#include<stdio.h>//indentation matters in c
int main (){
    int insertion[5];
    int newdata,arrayindex;
    for(int i=0;i<4;i++){
        printf("enter the %d elemnet",i+1);
        scanf("%d",&insertion[i]);
    }
    printf("enter the new element");
    scanf("%d",&newdata);
    printf("enter the indexposition");
    scanf("%d",&arrayindex);
    //insertion process
    insertion[4]=insertion[3];
    insertion[3]=insertion[2];
    insertion[2]=newdata;
    for(int i=0;i<4;i++){
        printf("the new array elemnt is:%d\n",insertion[i]);
    }


}