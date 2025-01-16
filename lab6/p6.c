
#include<stdio.h>
void main(){
    float unit,price,bill;
    scanf("%f",&unit);
    if(unit<=50){
        price=unit*0.50;
    }
    else if(unit<=150){
        price=25+(unit-50)*0.75;
    }
    else if(unit<=250){
        price=100+(unit-150)*1.20;
    }
    else{
        price=220+(unit-250)*1.50;
    }
    bill=price+price*0.2;
    printf("bill is %f",bill);
}
