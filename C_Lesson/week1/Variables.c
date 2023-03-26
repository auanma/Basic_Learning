#include<stdio.h>
int main () {

     int x=5, y=6 ,z=7; // %d สำหรับ int 
    printf("number is %d %d %d",x,y,z); // ตัวแปรหลัง " "
    
    float a=4.5; // %f สำหรับ float & double
    double b=6.9;
    printf(" %f %.2f %.3f",a,b,b); // %f แสดงทศนิยม 6 ตำแหน่ง ต้องกำหนดจำนวนทศนิยมเอง 

    char myLetter = 'D'; // %c สำหรับ char ที่ใช้ '...' (ตัวอักษรเดียว)
    printf("\n%c",myLetter);

    char text[] = "programming"; // %s สำหรับ char
    printf("\n%s",text);

    // วิธีแรก : สร้าง pointer เพื่อชี้ หรือ แทนค่า (ไม่ฟิกตัวอักษร ใช้ * ก่อนชื่อตัวแปร แทน [] หลังชื่อตัวแปร)
    char *text1 = "Goood";
    printf("\n%s",text1);
    text1 = "Very Good";
    printf("\n%s",text1);

    // วิธีแรก : สร้าง pointer เพื่อชี้ (ฟิกตัวอักษร ใช้ {'',''} แล้ว ฟิกทีละตัวอักษร )
    char text2[] = {'H','e','l','l','o','\0'}; //ฟิกอักษรต้องตามด้วย '\0' (Null character) ปิดท้ายเสมอ
    char text3[] = {'H','e','l','l','o'};
    printf("\n%c",text1[0]);
    printf("\n%c",text2[4]); // ตัวอักษรเริ่มนับจาก 0 text2[4] คือ ตัวที่3 *อย่าลืมประกาศเป็น %c เอาแค่ตัวอักษรเดียว
    printf("\n%s",text2);
    printf("\n%s",text3); // output ออกหลายครั้ง เพราะ ไม่ปิดด้วย \0

    return 0;
}