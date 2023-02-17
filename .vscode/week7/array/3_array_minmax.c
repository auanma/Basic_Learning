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
int i,min = a[0];
for(i=1;i<4;i++) {
if(a[i] < min)
min = a[i];
}
printf("Minimum value is %d\n" ,min);
    return 0;
}