#include <stdio.h>
int main() {

int i, j, a[2][3]; //[row][column]

for(i=0; i<2; i++){
    for(j=0; j<3; j++){
printf("Enter a[%d][%d] : ",i,j);
scanf("%d", &a[i][j]);
    }
}
printf("\n\n================================================\n");
for(i=0; i<2; i++){ // row
    for(j=0; j<3; j++){ // column
printf("%d\t",a[i][j]); // \t for horizontal tab (tab in same line)
    }
printf("\n");
}
}