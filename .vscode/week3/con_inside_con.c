#include<stdio.h>

int main(){
/*
    int a;
   
    printf("Enter number:");
    scanf("%d",&a);

    if(a>0){
        if(a%2==0){
            printf("a is positive even number");
        }
        else{
            printf("a is positive odd number");
        }
    }
    else{
        printf("a is negative number");
    }
*/

/*    
    int number;
    const int correct_num = 25;

    printf("Enter number:");
    scanf("%d",&number);

    if(number>20){
        if(number != correct_num){
            printf("You are worong");
        }
        else{
            printf("You are right");
        }
    }
    else{
        printf("Number is too low");
    }
*/

    int number;
    int correct_num;

    printf("Enter correct number:");
    scanf("%d",&correct_num);

    printf("Enter number:");
    scanf("%d",&number);

    if(correct_num>20){
        if(number > correct_num){
           if(number%2==1){
            printf("Correct number is odd");
           }else{
            printf("Correct number is even");
           }
        }else{
            printf("number is less than correct number");
        }
    }else{
        printf("Correct number is too low");
    }

    return 0;
}