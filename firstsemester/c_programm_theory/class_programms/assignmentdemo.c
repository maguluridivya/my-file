#include<stdio.h>
int main(){
    int i;
    int n;
    int regularprice=150;
    int premierprice=250;
    int reclinerprice=400;
    int total;
    int finalamount;
    int regular_count=0;
    int premier_count=0;
    int recliner_count=0;
    int category;
    float discount;
    printf("enter the number of tickets:");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
       printf("enter the category:");
       scanf("%d", &category);
       if (category==1){
        total+=regularprice;
        regular_count++;
         
        }else if(category==2){
            total+=premierprice;
            premier_count++;
        }else if(category==3){
            total+=reclinerprice;
            recliner_count++;
        }else{ 
             printf("-----final-----");
        }
    }       
            printf("the regular count is:%d\n",regular_count);
            printf("the premier count is:%d\n",premier_count);
            printf("the recliner count is:%d\n",recliner_count);
            total=regularprice+premierprice+reclinerprice;
            printf("the total is:%d\n",total);
            printf("the discount is:");
            scanf("%f",&discount);
            if(n>=5){
                discount=(total*10/100);
                printf("the discount is:%f",discount);
            }
            else{
            finalamount=total;
            printf("the final amount is:%d",finalamount); 
            }         
    return 0;
}


