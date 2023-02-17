#include<stdio.h>

int main(){

int i=0;

while(i<10){
    i=i+1;
   // if(i==5){break;};  // 1 2 3 4
   // if(i%3==0){break;};  // 1 2
   // if(i==5){continue;};  // 1 2 3 4 6 7 8 9 10
   // if(i%3==0){continue;}; // 1 2 4 5 7 8 10

   // printf("%d",i);
}

    for(int i=1;i<=7;i++){
        printf("test");
        if(i%3==0){
            continue;
        }else{  // skip this loops
            printf("Bye %d",i);
        }
        printf("Good\n");

    }
    

    return 0;
}