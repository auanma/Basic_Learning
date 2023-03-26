#include<stdio.h>

int main(){
/* max
int a[4] = {-1,10,9,2};
int i,max = a[0];
for(i=1;i<4;i++) {
if(a[i] > max)
max = a[i];
}
printf("Maximum value is %d\n" ,max);
*/

int a[4] = {-1,10,-9,-2};
int i,min = a[0]; // เก็บตัวแรกทั้งคู่ = a[0]
for(i=1;i<4;i++) { // เริ่มเปรียบเทียบกับ a[1] ถึง a[3]
if(a[i] < min) // ถ้า a[1] < min
min = a[i]; // เก็บตัวใหม่เป็น min ละไปเช็คตัวถัดไปต่อ
}
printf("Minimum value is %d\n" ,min);
    return 0;
}