 #include<stdio.h>
 int main(){
    int i;
    int n;
    int salary;
    for(i=1;i<=5;i++){
        printf("enter the employee salary\n",i);
        scanf("%d",&salary);
        if(salary>=50000){
            printf("high salary");
        } else if(salary<=3000){
            printf("low salary");
        }else if(salary>=75000){
            printf("manazger leve;l sslary:");
        }else{
            printf("secior level salary");
        }
    }
}

 