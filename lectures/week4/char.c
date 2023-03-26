#include<stdio.h>

int main(){

    char grade;

    printf("Enter char >>>");
    scanf("%c",&grade);

    switch(grade){

        case 'A' :
        case 'a' : printf("Excellent");
        break;
        case 'B' :
        case 'b' : printf("Very Good");
        break;
        case 'C':
        case 'c' : printf("Good");
        break;
        case 'D' :
        case 'd' : printf("Bad");
        break;
        default : printf("Error");

    }

    return 0;
}