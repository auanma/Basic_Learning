#include<stdio.h>

/* 
if(){}
else if(){}
else{}
*/

int main(){
    int number;
    

    printf("Enter number : ");
    scanf("%d",&number);

    if(number > 80){
        printf("Grade C");
    }
    else if(number > 60){
        printf("Grade B");
    }
    else if(number > 40){
        printf("Grade A");
    }
    else{
        printf("No Grade");
    }

    return 0;
}