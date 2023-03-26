#include<stdio.h>

int main(){

    int number;
    int realgrade;
    int grade5;
    printf("Enter number >>>");
    scanf("%d",&number);

    realgrade=number/100;
    grade5=realgrade*5;

    switch(realgrade){

        case 4 : printf("%d",grade5);
        break;
        case 3 : printf("%d",grade5);
        break;
        case 2 : printf("%d",grade5);
        break;
        case 1 : printf("%d",grade5);
        break;
        default : printf("Error");

    }

    return 0;
}