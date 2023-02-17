#include <stdio.h>
int main (){
    
    int number;
    printf("Enter number >>>");
    scanf("%d",&number);

    switch(number){

        case 4 : printf("grade A");
        break;
        case 3 : printf("grade B");
        break;
        case 2 : printf("grade C");
        break;
        default : printf("Error");
    }


    return 0;
}