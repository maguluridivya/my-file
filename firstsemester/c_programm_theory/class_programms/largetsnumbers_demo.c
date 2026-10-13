#include<stdio.h>
int main(){
    int firstnumber;
    int secondnumber;
    int thirdnumber;
    int number;
    int choice;
    int smallest;
    int largest;
    int temp;

    printf("1,smallestnumber");
    printf("2,largestnumber");
    printf("3,check wheather number is odd or even");
    printf("4,divisible by 5");
    printf("enter your choice:");
    scanf("%d",& choice);

    switch(choice)
    {
    case 1:
    printf("enter the firstnumber");
    scanf("%d",&firstnumber);
    printf("enter the secondnumber");
    scanf("%d",&secondnumber);
    printf("enter the thirdnumber");
    scanf("%d",&thirdnumber);
    if (firstnumber<secondnumber && firstnumber<thirdnumber)
    {
    smallest=firstnumber;
    }
    else if( secondnumber< thirdnumber){
    smallest=secondnumber;
    }else {
        smallest = thirdnumber;
    }
    printf("smallest is:%d",smallest);
    break;
    case 2:
    printf("enter the firstnumber:");
    scanf("%d",&firstnumber);

    printf("enter the secondnumber:");
    scanf("%d",&secondnumber);

    printf("enter the thirdnumber:");
    scanf("%d",&thirdnumber);


    if(firstnumber>secondnumber && firstnumber>thirdnumber)
    {
        largest=firstnumber;
    }
    else if(secondnumber>thirdnumber){
        largest=secondnumber;
    }
        else{
            largest=thirdnumber;
        }
       printf("the largest  is:%d",largest);
       break;

        case 3:
       printf("enter the number");
       scanf("%d",&number);
       if(number % 2 == 0 ){
        printf("number is even");
       }
        else {
            printf("number is odd");
        }
        break;
        case 4:
        printf("enter the number");
        scanf("%d",&number);
        if(number %5==0){
            printf("number is divisible by 5");
        }
        else{
            printf("number is not divisible by 5");
        }
        break;
        case 5:
        printf("enter the firstnumber");
        scanf("%d",&firstnumber);
        printf("enter the secondnumber");
        scanf("%d",&secondnumber);
        firstnumber=  firstnumber+secondnumber;
        secondnumber= firstnumber-secondnumber;
        firstnumber= firstnumber-secondnumber;

            printf("after swapping");
                printf("firstnumber is:%d",firstnumber);
                printf("secondnumber is:%d",secondnumber);
        
            
            break;
        }
    }

    
       
       
    