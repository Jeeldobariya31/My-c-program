#include <stdio.h>
void main()
{
    int i;
    printf(" 1=adition/n2=substraction/n3=multiplication/n4=division");
    printf("enter sign number num");
    scanf("%d",&i);
    float a,b,sum,mul,div,sub;
            printf("enter number a and number b ");
            scanf("%f %f",&a,&b);
    switch(i)
    {
        case 1:
        {
            printf("%f",a+b);
            break;
        }
        case 2:
        {
            printf("%f",a-b);
            break;
        }
        case 3:{
             printf("%f",a*b);
            break;
        }
        case 4:
        {
            printf("%f",a/b);
            break;
        }
        default:printf("invalied operater");
    }
}
