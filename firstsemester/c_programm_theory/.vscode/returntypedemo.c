#include<stdio.h>
    int rollno,firstsubject,secondsubject,thirdsubject,fourthsubject,fifthsubject,total;
    float avearage,cgpa;
    void getdatadetails(){
        printf("enter the rollno");
        scanf("%d",&rollno);
        printf("enter the firstsubjerct");
        scanf("%d",&firstsubject);
        printf("enter the secondsubject");
        scanf("%d",&secondsubject);
        printf("enter the thirdsubject");
        scanf("%d",&thirdsubject);
        printf("enter the fourth subject marks");
        scanf("%d",&fourthsubject);
        printf("enter the fifth subject marks");
        scanf("%d",&fifthsubject);
    
    }
      float gettotal(){
        total=firstsubject+secondsubject+thirdsubject+fourthsubject+fifthsubject;
        return total;
      }
      float getavearage(){
        avearage=total/5;
        return avearage;

      }
      float getcgpa(){
        cgpa=avearage/9.5;
        return cgpa;

        
      }
      int main(){ //calling function
        getdatadetails(); //called function
        float total=gettotal();
        float avearage=getavearage();
        float cgpa=getcgpa();
       
        printf("the total is:%f",total);
        
        printf("the avearage is:%f\n",avearage);
        printf("the cgpa is:%f\n",cgpa);
        
      }

       
