// add two distance  feet and inchese  by structure and function
#include<stdio.h>
#include<string.h>

struct distance {
    float inches;
    float feet;
};
struct distance sumd(struct distance d1,struct distance d2);

void main(){
    struct distance d1;
    struct distance d2;
    struct distance sum;
    // scan distance 1
    printf("enter distance 1 :\n");
    printf("enter feet:");
    scanf("%f",&d1.feet);
    printf("enter inches:");
    scanf("%f",&d1. inches);
   // scan distance 2
    printf("enter distance 2 :\n");
    printf("enter feet:");
    scanf("%f",&d2.feet);
    printf("enter inches:");
    scanf("%f",&d2.inches);
    // add distance
    sum=sumd( d1,d2);
    printf("total distance is :");
    printf("feet is:%0.2f\n",sum.feet);
    printf(" inches is:%0.2f\n",sum.inches);

}

struct distance  sumd(struct distance d1,struct distance d2){
 int temp,f=0;
 struct distance add;
    temp=d1.inches+d2.inches;
    while(temp>=12)
    {
     temp=temp-12;
     f++;
    }
    add.inches=temp;
    add.feet=d1.feet + d2.feet + f;
    return  add;
}
