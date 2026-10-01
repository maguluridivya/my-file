#include<stdio.h>
int main(){
    int i,j;
    for( int j=0;j<=5;j++){
        if(j==2){
       printf("the loop stared");
       break;
        }
    }

    for(i=0;i<=5;i++){
            printf("inner loop started");
        break;
        printf("from inside the loop");
        }
    }
    

