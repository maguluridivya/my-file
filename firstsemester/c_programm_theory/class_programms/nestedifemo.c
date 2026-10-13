#include<stdio.h>
int main(){
    int age;
    int is_indian;
    int istestcleared;
    int isfeespaid;
    int nationality;
    printf("----welcome to dl program----/n");
    printf("enter the age");
    scanf("%d",&age);
    printf("enter nationality");
    scanf("%d",&is_indian);
    printf("wheather istestcleared");
    scanf("%d",&istestcleared);
    printf("wheather isfeespaid");
    scanf("%d",&isfeespaid);
    printf("age:%d",age);
    printf("nationality is:%d",nationality);
    printf("istestcleared:%d",istestcleared);
    printf("isfeespaid:%d",isfeespaid);
    
    if(age<18){
      printf("dl cannot be issued because you are minnor");
    }
      else if(istestcleared ==0 ){
        printf("dl cannot be issued because test is not cleared");
      }
       else if(nationality == 0){
        printf("dl cannot be issued because you are not indian");
      
      }
       else if(isfeespaid ==0){
        printf("dl cannot be issued because fees is not paid");
      }
      else {
        printf("dl can be issued");
        
      }
    }
    







    
                   
      
              
             
           
            

      




    
    

