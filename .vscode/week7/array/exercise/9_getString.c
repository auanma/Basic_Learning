#include<stdio.h>

int main (){

    char word[10][50];
    int i;

    for(i=0;i<=2;i++){
    printf("Enter string %d: ",i+1);
    scanf("%s",word[i]); /* can use gets(word[i]); */
    }

    printf("\n======Output======\n");
    for(i=0;i<=2;i++){
    printf("number %d is %s\n",i+1,word[i]);
    }
    

    return 0;
}