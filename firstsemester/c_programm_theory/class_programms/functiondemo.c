#include<stdio.h>
    int rollno,firstsubject,secondsubject,thirdsubject,fourthsubject,fifthsubject, total, avearage,cgpa;
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
      void gettotal(){
        total=firstsubject+secondsubject+thirdsubject+fourthsubject+fifthsubject;
      }
      void getavearage(){
        avearage=total/5;

      }
      void getcgpa(){
        cgpa=avearage/9.5;
       }
      void displaystudentdetails(){
        printf("roll no:%d\n",rollno);
        printf("the subject1 marks is:%d\n",firstsubject);
        printf("the subject2 marks is:%d\n",secondsubject);
        printf("the subject3 marks is:%d\n",thirdsubject);
        printf("the subject4 marks is:%d\n",fourthsubject);
        printf("the subject5 marks is:%d\n",fifthsubject);
        printf("the total is:%d\n",total);
        printf("the avearage is:%d\n",avearage);
        printf("the cgpa is:%d\n",cgpa);
        
      }
      int main(){ //calling function
        getdatadetails(); //called function
        gettotal();
        getavearage();
        getcgpa();
        displaystudentdetails();
       }
