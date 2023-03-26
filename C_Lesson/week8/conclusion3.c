/*

แค่ตัวอย่างการนำเข้าข้อมูล char และ int พร้อมกัน เข้า function

*/


#include <stdio.h>

int check(char name,int value){ // int ด้านหลัง คือ การรับค่าเข้ามา

if(value%2==0){
    int answer=value/2;
    printf("%c is even\n",name);
    return answer;
//printf("\n data[%d] is Even",i);
}else{
    printf("%c is odd\n",name);
    return 0;
//printf("\n data[%d] is Odd",i);
}
}

int main(){

int a = 10;
int b = 25;

printf(" data is %d\n",check('a',a));
printf(" data is %d\n",check('b',b));
}