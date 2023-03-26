#include<stdio.h>

int main(){

int input;

printf("input : ");
scanf("%d",&input);

    while(input>=12){

        // input=input-1   if condition come before operation, calculate input first

        if(input%3==0){
        printf("%d \n",input);        
        }
    input--; // if input inside if loop can't run    

    }

    return 0;
}