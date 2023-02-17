#include<stdio.h>

int main(){
    int number;
    int digit;

    printf("Enter correct digit : ");
    scanf("%d",&digit);

    printf("Enter guess number : ");
    scanf("%d",&number);

    if(number == digit){
        printf("Correct");
    }
    else{
        printf("Incorrect");
    }

    return 0;
}