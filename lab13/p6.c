#include <stdio.h>

void main()
{
    int i,j,m=1;
    for(i=1;i<=5;i++)
  {
     for(j=1;j<=i;j++)
     {
        printf("%d ",m);
         if(m==1){
           m=0;
         }
         else{
           m=1;
         }
      } 
        printf("\n");
  }
}   