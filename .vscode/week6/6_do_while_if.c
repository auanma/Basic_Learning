#include<stdio.h>

int main(){

int i=30;

do{ // 3029Test2827Test2625Test2423Test22
    printf("%d",i);
    i--;
    if(i%2==1){
        continue;
    }
    printf("Test");
    
}while(i>21); // if false out of loop

    return 0;
}