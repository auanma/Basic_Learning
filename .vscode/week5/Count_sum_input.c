#include<stdio.h>

int main (){

    int count=0;
    int sum=0;
    int number;

    printf("Enter Number : ");
    scanf("%d",&number);

    for (number ; number<=60 ; number=number+10){
        //count=count+1; // can use both
        count==count++;
        sum=sum+number;
        printf("%d ",number);
    }
        
        printf("\nCount is %d",count);
        printf("\nSum is %d",sum);

    return 0;
}