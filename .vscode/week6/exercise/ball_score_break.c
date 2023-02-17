#include<stdio.h>

int main(){
int score, total=0;
printf("Enter score: ");
scanf("%d", &score);


while(score >= 0) {

total = total + score;
    if(total>=10){
    break;
}
printf("Enter score: ");
scanf("%d", &score);


}
printf("Total: %d\n\n", total);


return 0;
}