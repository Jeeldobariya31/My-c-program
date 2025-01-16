#include<stdio.h>
void main()
{
     int year,month,i;
     printf("enter the year number");
     scanf("%d",&year);
     printf("enter month");
        scanf("%d",&month);
     if(year%4==0)
     {
      if(year%100==0){
        if(year%400==0){
       printf("leap year\n");
          i=1;
        }
        else{
        printf("common year\n");
          i=2;
        }
      }
      else{
        printf("leap year\n");
         i=1;
      }
     }
     else
     {
        printf("not leap year\n");
        i=2;
     }
     printf("%d month have ",month);
    switch(month)
    {case 1:
     case 3:
      case 5:
       case 7:
      case 8:
      case 10:
      case 12:printf("31 days");
      break;
       case 4:
       case 6:
       case 9: 
       case 11:printf("30 days");
       break;
        case 2:{switch(i){
       case 1: printf("29 days");
       break;
       case 2:printf("28 days");
       break;
       }
       }
       break;
       default:printf("invalied month number");
      break;
    }
}
    