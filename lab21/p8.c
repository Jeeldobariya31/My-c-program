// add two tome hh mm ss by structure
#include<stdio.h>
#include<string.h>

struct time {
    int hour;
     int minute;
     int second;
};
struct time sumt(struct time t1,struct time t2);

void main(){
    struct time t1;
    struct time t2;
    struct time sum;
    printf("enter time 1 :\n");
    printf("enter hour:");
    scanf("%d",&t1.hour);
    printf("enter minute:");
    scanf("%d",&t1.minute);
    printf("enter second:");
    scanf("%d",&t1.second);
    
    printf("enter time 2 :\n");
    printf("enter hour:");
    scanf("%d",&t2.hour);
    printf("enter minute:");
    scanf("%d",&t2.minute);
     printf("enter second:");
    scanf("%d",&t2.second);
    sum=sumt( t1,t2);
    printf("total time is :");
    printf("hour is:%d\n",sum.hour);
    printf("minute is:%d\n",sum.minute);
    printf("second is:%d\n",sum.second);

}
struct time  sumt(struct time t1,struct time t2){
 int temp1,temp2,h=0,m=0;
 struct time add;
    temp1=t1.second+t2.second;
    while(temp1>=60)
    {
     temp1=temp1-60;
     m++;
    }
    add.second=temp1;
    temp2=t1.minute + t2.minute + m;
    while(temp2>=60)
    {
     temp2=temp2-60;
     h++;
    }
    add.minute=temp2;
    add.hour= t1.hour + t2.hour+h;
    return  add;
}
