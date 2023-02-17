#include<stdio.h>

int main (){

    int a;
    int count=0;
    int sum=0;

    for (a=30 ; a<=60 ; a=a+10){
        //count=count+1; // can use both
        count==count++;
        sum=sum+a;
        printf("%d ",a);
    }
        
        printf("\nCount is %d",count);
        printf("\nSum is %d",sum);

    return 0;
}