#include<stdio.h>
int main(){
    int rollno;
    int firstsubject;
    int secondsubject;
    int thirdsubject;
    int fourthsubject;
    int fifthsubject;
    int total=0;
    float avearge=0;
    float percenatge=0;
    printf("enter the rollno");
    scanf("%d",&rollno);
    printf("enter the marks for the firstsubject");
    scanf("%d",&firstsubject);
    printf("enter the marks for the secondsubject");
    scanf("%d",&secondsubject);
     printf("enter the marks for the thirdsubject");
    scanf("%d",&thirdsubject);
    printf("enter the marks for the fourthsubject");
    scanf("%d",&fourthsubject);
    printf("enter the marks for the fifthsubject");
    scanf("%d",&fifthsubject);
    total=firstsubject+secondsubject+thirdsubject+fourthsubject+fifthsubject;
    printf("the total is:%d",total);
    avearge=total/5;
    printf("the avearge is:%fS",avearge);
    percenatge=total*100/300;
    printf("the percentage is :%f",percenatge);


}
