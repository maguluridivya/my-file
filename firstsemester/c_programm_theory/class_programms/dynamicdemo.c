#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    int *p;
    p=(int*)malloc(5*sizeof(int));
    if(p==NULL)return 1;
    for(int i=0;i<5;i++){
        scanf("%d",&p[i]);
        printf("%d\n",p);
    }
}