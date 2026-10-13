#include<stdio.h>
int main(){
    int mymark;
    printf("enter mymark");
    scanf("%d",&mymark);
    
    if (mymark>=90){
        printf("grade: distinction");
    }
        else if (mymark>=75){
           printf("grade:firstclass");
        }
            else if (mymark>=60){
            printf("grade:secondclass");
            }
                else{
                printf("fail");
        }
                
        
    return 0;
        }

