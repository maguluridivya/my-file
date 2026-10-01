//*program to dispaly 5 subjectmarksk*//-[multiline comment]
#include<stdio.h>
int main(){
int my_marks[5];
int marks[5];//declares an array eith size5 with an integer type
//storing data or array initalization
//storing firstsubject marks in firstlocation
marks[0]=50;//stores value 50 in an array position whose index is 0
marks[1]=45;//stores value 45 in an array position whose index is 1 where secondsubject
marks[2]=88;
marks[3]=98;
marks[4]=78;
int i;
printf("firstsubjectmarks:%d\n",marks[0]);
printf("secondsubjectmarks:%d\n",marks[1]);
printf("thirdsubjectmarks:%d\n",marks[2]);
printf("fourthsubjectmarks:%d\n",marks[3]);
printf("fifthsubjectmarks:%d\n",marks[4]);
//dynamic inotallization of my marks
for (i=0;i<=4;i++){
printf("enter subjectmark:%d",i+1);//well get incremented numbers


scanf("%d",&my_marks[i]);//store marks in firstlocation //increment and stores the values

}
}
