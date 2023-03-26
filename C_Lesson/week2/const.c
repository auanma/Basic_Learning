#include<stdio.h>

int main (){
// change data operators

const int data = 10; 
printf("Data = %d",data);
data = data+5; // const เป็นค่าคงที่ เพิ่มค่าแล้ว errors
printf("\nData_new = %d",data);

/*
int data = 10; // variables ปกติเพิ่มค่าได้
printf("Data = %d",data);
data = data+5;
printf("\nData_new = %d",data);

*/
    return 0;

}