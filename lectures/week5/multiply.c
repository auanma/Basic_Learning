#include<stdio.h>

int main (){

    int number;
    int result;
    int i;
    int sum=0;

    printf("Enter Number : ");
    scanf("%d",&number);


    for (i=1 ; i<=12 ; i++){
        
        result=number*i;
        printf("%d * %d = %d\n",number,i,result);
        //printf("%d * %d = %d\n",number,i,number*i); //if dont want to set result
        sum=sum+result;
    }
        printf("Sum of result is %d",sum);
        
    return 0;
}