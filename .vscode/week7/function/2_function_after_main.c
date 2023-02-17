#include<stdio.h>


void func2(); //function prototype

int main(){
    int x=5;
    printf("%d\n",x);
    func2();

    return 0;
}

void func2(){ // function definition มีปีกกา 
// ถ้า function definition อยู่หลัง main ต้องประกาศ function prototype ไว้ก่อน main
    printf("Hello");
}