#include<stdio.h>

int main (){
    int i;

    for(i=0 ; i<=3 ; i++){ // i++ = (i=i+1)
    printf("%d \n",i); // 0
    }

    for(i=0 ; i<=3 ; i++){ 
    printf("%d \n",i+1); // 1 ( start with other value )
    }
    
    /*

    for(i=0 ; i<=3 ; i+1){ // cannot use it dont collect new value, it will infinity loop
    printf("%d \n",i+1); 
    }
    
    */

    return 0;
}