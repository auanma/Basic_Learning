#include<stdio.h>

void check(int i,int value){

if(value%2==0){
printf("\n data[%d] is Even",i);
}else{
printf("\n data[%d] is Odd",i);
}
}

int main(){

int a[] = {9,5,8,4,30};
int
i=0;
for(i=0;i<5;i++){
check(i, a[i]);
}
}