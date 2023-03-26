#include<stdio.h>

int main (){

    int count=0;
    int sum=0;
    int begin;
    int end;

    printf("Enter Begin : ");
    scanf("%d",&begin);

    printf("Enter End : ");
    scanf("%d",&end);


    for (begin ; begin<=end ; begin+=10){ //begin=begin+10
        //count=count+1; // can use both
        count==count++;
        sum=sum+begin;
        printf("%d ",begin);
    }
        
        printf("\nCount is %d",count);
        printf("\nSum is %d",sum);

    return 0;
}