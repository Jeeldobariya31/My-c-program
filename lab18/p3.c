#include <stdio.h>
float interest(float,float,float);

void main()
{
    float p,r,t,intrest;
    printf("Enter principal = ");
    scanf("%f",&p);
    printf("Enter rate = ");
    scanf("%f",&r);
    printf("Enter time = ");
    scanf("%f",&t);
    intrest=interest(p,t,r);
    printf("simple interest = %f",intrest);
}
float interest(float p,float t,float r)
{
    float intrest=(p*r*t)/100;
    return intrest;
}