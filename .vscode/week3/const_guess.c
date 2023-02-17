#include<stdio.h>

int main(){
    int number;
    const int digit = 14;

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