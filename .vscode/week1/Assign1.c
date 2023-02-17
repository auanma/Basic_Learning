#include<stdio.h>

int main (){

    char name[30],lastname[30];
    printf("Enter your surname :");
    scanf("%s" ,name); //เก็บตัวแปร String ไม่ต้องใช้ &
    printf("Enter your lastname :");
    scanf("%s" ,lastname);

    int bd1,bd3; // bd 1 ถ้าอยากให้แสดงผลเลข 0 ( วันที่ 05 ) อาจจะต้องใช้ char แต่จะพิมตัวอักษรได้ด้วย
    char bd2[3]; // ใช้ int แล้วไม่แสดงผลเลข 0 ( เดือน 04 ) เลยใช้ char แต่จะพิมตัวอักษรได้ด้วย
    // *************** ลองกำหนดเป็น 2 พอดีแล้ว output มี + หรือ เลขอื่น ตามหลัง ถ้ากำหนดเกิน output จะปกติ ไม่แน่ใจต้องถามอาจารย์
    
    printf("Enter your birthday (Day) :");
    scanf("%d" ,&bd1);
    printf("Enter your birthday (Month) :");
    scanf("%s" ,bd2);
    printf("Enter your birthday (Year) :");
    scanf("%d" ,&bd3);
    
    int age;
    printf("Enter your age :");
    scanf("%d" ,&age);
    
    printf("My name is %s %s",name,lastname); // เวนวรรคตรง %s หรือ %d หรือ %ใดๆ เพื่อนเวนวรรคตรง Output
    printf("\nMy Birthday is %d/%s/%d",bd1,bd2,bd3);
    printf("\nMy age is %d",age);

    return 0;
}