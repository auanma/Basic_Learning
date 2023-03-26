#include<stdio.h>

int main (){


    int begin;
    int end;
    int count=0;
    int sum=0;

    printf("Enter Begin : ");
    scanf("%d",&begin);

    printf("Enter End : ");
    scanf("%d",&end);

    if(begin<end){

        for (begin ; begin<=end ; begin++){ // บวกไปที่ละ 1 เพื่อไล่หาตัวที่หาร 3&7 ลงตัว ตามเงื่อนไขด้านล่าง

            if(begin%3==0 || begin%7==0){ //  && คือ และ , || คือ หรือ
                printf("%d \n",begin);
                count=count+1;
                sum=sum+begin;
            }
            else{
                printf("number %d can't devide by 3 & 7 \n",begin);
            }
        }
    }else if (begin>end){
        for(begin ; begin>=end ; begin--){

            if(begin%3==0 || begin%7==0){
                printf("%d \n",begin);
                count=count+1;
                sum=sum+begin;
            }else{
                printf("number %d can't devide by 3 & 7 \n",begin);
            }
        }
    }else{        
            if(begin%3==0 || begin%7==0){
                printf("%d",begin);
                count=count+1;
                sum=sum+begin;
            }else{
                printf("number %d can't devide by 3 & 7 \n",begin);
            }
        }
    
        printf("\nCount is %d",count);
        printf("\nSum is %d",sum);

    return 0;
}