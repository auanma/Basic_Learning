#include<stdio.h>

int main(){

    int x;
    printf("Put your number : ");
    scanf("%d",&x);

    if(x%2 == 0){
        printf("even"); //คู่
    }
    else{
        printf("odd"); // คี่
    }

    return 0;
}