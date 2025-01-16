#include<stdio.h>
void main(){
float a,b,c;
scanf("%f %f %f",&a,&b,&c);
if(a==b && a==c && b==c){
printf("equilateral triangle");
}
else if(a==b || a==c || b==c){
printf("isosceles triangle");
}
else{
printf("scalene triangle");
}
}