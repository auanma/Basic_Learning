#include<stdio.h>

int main(){

int i=0;

do{ 
    
    i++;
    
    if(i%10==0){
        printf("%d",i);
    }
  
}while(i<30); // if false out of loop

    return 0;
}