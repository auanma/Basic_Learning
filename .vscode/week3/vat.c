#include<stdio.h>

int main(){

    int product1;
    int product2;
    int Total;
    int Vat;
    double PriceVat;
    /*
    double PriceVat10;
    double PriceVat5;
    double PriceNoVat;
    */

    printf("Enter product1>>>");
    scanf("%d",&product1);

    printf("Enter product2>>>");
    scanf("%d",&product2);

    Total=product1+product2;
    
    /*
    PriceVat10=Total+((Total*10)/100);
    PriceVat5=Total+((Total*5)/100);
    PriceNoVat=Total;
    */

    printf("Total product is %d",Total);

    if(Total>=3000){
        Vat = 10;
        printf("\nVAT 10 %%"); // ใส่เปอเซนตัวเดียว complier อ่านเป็น %(หารแล้วเหลือเศษ)
        //printf("\nPrice is %.2f",PriceVat10); //จริงๆไม่ต้องใส่ % แต่โจทย์บอก

    }else if(Total<3000 && Total>=2000){
        Vat = 5;
        printf("\nVAT 5 %%");
        //printf("\nPrice is %.2f%%",PriceVat5);
    }else{
        Vat = 0;
        printf("\nNo Vat");
        //printf("\nPrice is %.2f%%",PriceNoVat);
    }

    PriceVat=Total+((Total*Vat)/100); // ไว้หลังเพราะพึ่งรับค่า Vat
    printf("\nPrice is %.2f%%",PriceVat);

    return 0;
}