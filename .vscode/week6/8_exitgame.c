#include<stdio.h>

int main(){

char text;
int a;

do{ 
    
    for(int i=1;i<=5;i++){
        printf("%d ",i);
    }

    // fflush(stdin); // clear memory buffer

    printf("\nDo you want to exit >>>>");
    scanf("%c",&text);
    
  
}while(text != 'y' && text != 'Y' && a != 999); // if false out of loop  
// use and(&&) not or(||) because and must be true&true = true(easy to false)
// letter use 'Y' not "Y" *** beware ***

    return 0;
}