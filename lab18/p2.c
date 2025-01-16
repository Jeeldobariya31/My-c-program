#include <stdio.h>
int maximum(int,int);
int minimum(int,int);

void main()
{
    int num1,num2;
    printf("enter num1 = ");
    scanf("%d",&num1);
    printf("enter num2 = ");
    scanf("%d",&num2);
    int max=maximum(num1,num2);
    int min=minimum(num1,num2);
    printf("maximum = %d\n",max);
    printf("minimum = %d",min);
}
int maximum(int num1,int num2)
{ 
    int maximum;
    if(num1<num2)
    {
        maximum=num2;
        return maximum;
    }
    else
    {
        maximum=num1;
        return maximum;
    }

}
int minimum(int num1,int num2)
{ 
    int minimum;
    if(num1<num2)
    {
        minimum=num1;
        return minimum;
    }
    else
    {
        minimum=num2;
        return minimum;
    }

}