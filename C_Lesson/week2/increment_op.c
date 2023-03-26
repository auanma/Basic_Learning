#include<stdio.h>

int main(){

//increment operators

int a=5;
printf("\n%d",a); // a=5
printf("\n%d",a++);// a=5 
printf("\n%d",++a);// a=6 จากบรรทัดที่แล้ว , a=7
printf("\n%d",a); // a=7
printf("\n%d",a++); // a=7
printf("\n%d",a++); // a=8 จากบรรทัดที่แล้ว
printf("\n%d",++a); // a=9 จากบรรทัดที่แล้ว , a=10
printf("\n%d",a); // a=10

int b=10;
printf("\n%d",b); // b=10
printf("\n%d",b--);// b=10
printf("\n%d",--b);// b=9 จากบรรทัดที่แล้ว , b=8
printf("\n%d",b); // b=8
printf("\n%d",b--); // b=8
printf("\n%d",b--); // b=7 จากบรรทัดที่แล้ว
printf("\n%d",--b); // b=6 จากบรรทัดที่แล้ว , b=5
printf("\n%d",b); // b=5
printf("\n%d %d",b--,b); // b=5 , เรียกครั้งต่อไป b=4
printf("\n%d",b--); // b=4


return 0;
}