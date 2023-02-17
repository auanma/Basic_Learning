#include<stdio.h>

int main(){

    int age[3]; // size of array =3, (0 1 2)
    /*
    age[0]=5;
    age[1]=4;
    age[2]=3;
    */

   for(int i=1;i<=3;i++){ //start loop with i=1 to 3
    printf("Enter number %d >>>",i);
    scanf("%d",&age[i-1]); // but collect array i=0 to 2
   }
    /*
   printf("%d",&age[0]);
   printf("%d",&age[1]);
   printf("%d",&age[2]);
   */

  for(int i=2;i>=0;i--){
    printf("\n%d",age[i]*2);
  }

    return 0;
}