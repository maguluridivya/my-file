#include<stdio.h>
int main(){
  int arraysize;
    while(arraysize>5){
      printf("enter the array size");
      scanf("%d",&arraysize);
    }

      int readarray();{
        int arraysize;//local variable
        printf("enter the arraysize(>4)");
        scanf("%d",&arraysize);
        return arraysize;
      }

}int validatearray(int size){//though arguement we can pass data
  if (size>4){
    return 1;
  }
}
int main(){
  int validatearray(int readarray);
}
