#include<stdio.h>
int main(){
    //char name[6]="divya";
    //char names[30];
    //printf("enter the name");
    //scanf("%s",&names);
    //printf("the name is:%s",names);
    char n1[100];
    printf("enter the name");
    fgets(n1,sizeof(n1),stdin);
    printf("%s:",n1);
    for(int i=0;n1[i]!='\0';i++){
        printf("n1[%d]=%c-",i,n1[i]);
    }
    return 0;
}