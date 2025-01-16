#include<stdio.h>
#include<math.h>
void main(){
float a,b,c;
double D;
printf("enter the value in form of a b c");
scanf("%f %f %f",&a,&b,&c);
D=(b*b)-(4*a*c);
if(D==0){
    D=sqrt(D);
    double root=(-b+D)/2*a;
    printf("root is %lf",root);
}
else if(D>0){
    D=sqrt(D);
   double root1=(-b+D)/2*a;
   double root2=(-b-D)/2*a;
   printf("root1 is %lf and root2 is %lf",root1,root2);
}
else{
    D=sqrt(D*(-1));
    double root1=(-b+D)/2*a;
    double root2=(-b-D)/2*a;
    printf("root1 is %lfi and root2 is %lfi",root1,root2);
}

}