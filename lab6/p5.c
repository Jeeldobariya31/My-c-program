#include<stdio.h>
void main(){
    int a,b,c,d,e;
    float per;
    printf("enter your mark into seris of a b c d e");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    per=(a+b+c+d+e)/5;
    printf("percentage is %f",per);
    if(per>70){
        printf("distiction class");
    }
    else if(per>60 && per<=70){
        printf("first class");
    }
    else if(per>=46&&per<=60){
        printf("second class");
    }
    else if(per>=36&&per<=45){
        printf("pass class");
    }
    else{
        printf("FAIL");
    }

}