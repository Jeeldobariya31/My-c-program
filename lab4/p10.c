#include<stdio.h>
void main(){
int d,years,weeks,days;
scanf("%d",&d);
years=d/365;
weeks=(d-(years*365))/7;
days=d-(weeks*7+years*365);
printf("year=%d weeks=%d days=%d",years,weeks,days);
}

