#include<stdio.h>


void func2(){ // function definition มีปีกกา 
// ถ้า function definition อยู่ก่อน main ไม่ต้องประกาศ function prototype
    printf("Hello");
}

int main(){
    int x=5;
    printf("%d\n",x);
    func2();

    return 0;
}
