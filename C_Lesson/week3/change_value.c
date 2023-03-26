#include<stdio.h>

int main(){

    int a;
    const int max=20;

    printf("input number a:");
    scanf("%d",&a);
    
    if(max<a){
        printf("a=%d , max=%d",a,max);
        printf("\nChange Value");
        a = max;
        printf("\na=%d , max=%d",a,max);
    }
    else{
        printf("Not change Value");
        printf("\na=%d , max=%d",a,max);
    }

    
    return 0;
}