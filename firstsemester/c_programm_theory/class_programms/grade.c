        
#include<stdio.h>
int main(){
    int i;
    int n;
    int subject1mark;
    int subject2mark;
    int subject3mark;
    subject1mark=95;
    subject2mark=80;
    subject3mark=40;
    int total;
    printf("enter the number of students:");
    scanf("%d",&n);
    
    for(i=1; i<=n ;i++){
      printf("enter the subject marks");
      scanf("%d",&subject1mark);
      printf("enter the subject2 marks");
      printf("enter the subject2 marks");
      printf("enter the subject3 marks:");
      scanf("%d",&subject3mark);

    
    if(subject1mark>=90){
        total=subject1mark*10/100;
        
    printf("grade:distinction");

    }
      else if (subject1mark>=75){
        total=subject2mark;
        printf ("grade:firstclass");
       
         }
             else if(subject1mark<45){
        printf("grade:fail");
          }
       if (subject2mark>=90){
        printf("grade:distinction");
       }
          }
          total=subject1mark+subject2mark;
          printf("the totalmarks is:%d",total);


    return 0;
}




    



    
     
    
