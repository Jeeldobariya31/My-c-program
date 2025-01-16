#include <stdio.h>
void main(){
    int num1,num2,hcf=1,lcm,i=1;
    printf("enter first num:");
    scanf("%d",&num1);
    printf("enter second num:");
    scanf("%d",&num2);
    while(i<=num1){
        if(num1%i==0&&num2%i==0){
            hcf=i;
        }
        i++;
    }
    lcm=(num1*num2)/hcf;
    printf("hcf=%d",hcf);
    printf("\n");
    printf("lcm=%d",lcm);
}