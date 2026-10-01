#include<stdio.h>
int main(){
    int quantity;
    int item;
    int i;
    int urgent=0;
    int low=0;
    int ok=0;
    for(i=1;i<=5;i++){
        printf("enter the item1");
        scanf("%d",&item);
        printf("enter the quantity");
        scanf("%d",&quantity);
        if(quantity<10){
            printf("urgent order imemdiately\n");
            urgent++;
        }   else if(quantity>25){
            printf("ok :sufficient\n");
             ok++;
        }    else if(quantity >10 && quantity<=25){
             printf("low stalk :plan for the order\n");
             low++;
        } else{
        
        }
         printf("the urgent items are:%d\n",urgent);
         printf("the low are:%d\n",low);
         printf("the ok are:%d\n",ok);
    }
}


