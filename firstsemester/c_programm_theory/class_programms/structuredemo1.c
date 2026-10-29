#include<stdio.h>
struct student{
    char name[50];
    int marks[3];
    int rollno;
    int total;
    float avearage;

};
struct student student_list[5];

void getstudentdetails(){
    for(int i=0;i<5;i++){
        printf("----enter the student details---\n");
        printf("enter the student name %d:",i+1);
        scanf("%s",&student_list[i].name);
        printf("enter the student roll no of student %d:",i+1);
        scanf("%d",&student_list[i].rollno);
        //to collect 3 subject marks
        for(int j=0;j<3;j++){
            printf("enter the marks for subject %d\n",j+1);
            scanf("%d",&student_list[i].marks[j]);
        }
        
        }

    }
    //to calculate total marks of each student
int get_total(){
    int j;
    for(int i=0;i<5;i++){
        student_list[i].total=student_list[i].marks[0]+student_list[i].marks[1]+student_list[i].marks[2];
    printf("the total marks :%d",student_list[i].total);
    }
}
int get_avg(){
    for(int i=0;i<5;i++){
    

}
int main(){
    
    getstudentdetails();
    get_total();
    return 0;
}