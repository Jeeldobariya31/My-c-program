#include<stdio.h>
void main(){
    float salary,hra,da,grosssalary;
    printf("Enter your salary");
    scanf("%f",&salary);
    if(salary>=30000){
        hra=0.3*salary;
        da=0.95*salary;
    }
    else if(salary>=20000){
        hra=0.25*salary;
        da=0.90*salary;
    }
    else if(salary>=10000){
        hra=0.20*salary;
        da=0.80*salary;
    }
    
    
    grosssalary=da+hra+salary;
    printf("grosssalary is %.2f",grosssalary);
}
