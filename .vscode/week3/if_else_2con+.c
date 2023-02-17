#include<stdio.h>

/* 
if(){}
else if(){}
else{}
*/

int main(){
    int number;
    int digit;

    printf("Enter number : ");
    scanf("%d",&number);

    printf("Enter digit : ");
    scanf("%d",&digit);

    if(number == digit){
        printf("equal");
    }
    else if(number > digit){
        printf("%d more than %d",number,digit);
    }
    else{
        printf("%d less than %d",number,digit);
    }

    return 0;
}