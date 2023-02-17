#include<stdio.h>

int main(){

/*
char n[10],s[10];
printf("Enter name: ");
gets(n);

printf("Enter surname: ");
gets(s);

printf("\nHello %s %s\n" ,n ,s);
*/

int i;
char str[2][50]; // [quantity of data][quantity of char]
printf("-----------Input------------\n");

for(i=0;i<=1;i++){
printf("Enter String %d: ",i+1);
gets(str[i]);
}

printf("-----------Output------------\n");
for(i=1;i<=2;i++){
printf("number %d is %s\n",i,str[i-1]);
}

    return 0;
}