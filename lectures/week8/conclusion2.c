#include<stdio.h>

int check(int i,int value);

int main(){

int a[] = {9,5,8,4,30};
int i=0;

for(i=0;i<5;i++){
int result=check(i, a[i]);
printf("\n data[%d]/2 is %d",a[i],result);
    }
}

int check(int i,int value){ // int ด้านหลัง คือ การรับค่าเข้ามา ( กี่ค่าก็ได้ int ผสม char ก็ได้ )
// int ด้านหน้า คือการส่งค่ากลับไปใช้ใน function อื่น ค่าต้องตรงกับ return
if(value%2==0){
    int answer=value/2;
    return answer;
//printf("\n data[%d] is Even",i);
}else{
    return 0;
//printf("\n data[%d] is Odd",i);
}
}