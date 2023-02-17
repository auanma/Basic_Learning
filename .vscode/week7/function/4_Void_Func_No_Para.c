#include<stdio.h>
void welcome(){ // welcome() and void welcome(void) are same
    printf("Good Morning ALL \n");
}

int main(){
    
    char text;

printf("Do you want to come (y/n)");
scanf("%c",&text);

if(text=='y'){
welcome();
}else{
printf("Thank you");
}
}