#include<stdio.h>
#define digit 14
int main(){
    int number;
    

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