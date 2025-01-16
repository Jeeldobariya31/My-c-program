#include <stdio.h>
void main(){
    int n,sum=0,i=1,j;
    float avg;
    printf("HOw MANY NUMBER ENTER HEAR:");
    scanf("%d",&j);
    while(i<=j){
      printf("enter the number");
      scanf("%d",&n);
      sum=sum+n;
      i++;
    }
    avg=sum/(j*(1.0));
    printf("sum is:%d",sum);
    printf("\n");
    printf("avg is:%0.2f",avg);
}