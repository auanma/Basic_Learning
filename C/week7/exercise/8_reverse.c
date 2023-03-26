#include<stdio.h>

int main(){

    int i;
    int num[4];
    int sum=0;

    printf("======Input======\n");

    for (i=0;i<=3;i++){
        printf("Enter number %d: ",i+1);
        scanf("%d",&num[i]);
    }

    printf("\n======Output======\n");

    for (i=3;i>=0;i--){
        printf("number %d is %d\n",i+1,num[i]);
        sum=sum+num[i];
    }
    
    printf("\nSum is %d",sum);
    
    return 0;
}