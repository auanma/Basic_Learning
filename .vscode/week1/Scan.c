#include <stdio.h>

int main(){

    
    int x;
    printf("Enter number :");
    scanf("%d" ,&x);
    printf("number is %d" ,x);

    float y;
    printf("\nEnter float number :");
    scanf("%f" ,&y);
    printf("number is %.2f" ,y);
    
    char name[20];
    printf("\nEnter your name :");
    scanf("%s" ,name); // don't have to use & for word
    printf("My name is %s" ,name);

    fflush(stdin); // เอาออก char letter ไม่ทำงาน

    char letter;
    printf("\nInput letter :");
    scanf("%c",&letter); // have to use & for letter
    printf("Letter is %c" ,letter);

   

/*
    char surname[30]; //เหมือนจะใช้ร่วมกับ scanf ไม่ได้ เลือกใช้อย่างใดอย่างหนึ่ง ลอง (ปิด scanf) แล้วรันได้
    printf("\nEnter your surname :");
    gets(surname);
    printf("My surname is %s" ,surname);

*/
    
    return 0;

    
}