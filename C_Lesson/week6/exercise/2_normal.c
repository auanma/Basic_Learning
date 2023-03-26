#include<stdio.h>

int main(){

int input;

printf("input : ");
scanf("%d",&input);

    while(input>=12){
        
        if(input%3==0){
        printf("%d \n",input);        
        }
    input--;    

    }

    return 0;
}