#include<stdio.h>

/* วิธีนี้รันได้ แต่ complier จะเตือน เนื่องจาก func1() เรียกใช้ func2() แต่ยังไม่เคยเจอ func2() มาก่อน ส่วนตัวใช้วิธีล่าง

void func1(){ 
    func2();
}
void func2(){
    func3();
}
void func3(){
    printf("Hello\n");
}

int main(){

    func1();
    
}

*/

void func1();
void func2();
void func3();

int main(){

    func1();
    
}

void func1(){ 
    func2();
}
void func2(){
    func3();
}
void func3(){
    printf("Hello\n");
}

