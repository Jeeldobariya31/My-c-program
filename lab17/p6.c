#include<stdio.h>
void main(){
    int j,i;
    printf("enter the size:");
    scanf("%d",&j);
    int a[j],b[j];
    int *ptr=a,*ptr1=b;
    for(i=0;i<j;i++){
        printf("enter an element:");
        scanf("%d",&(*(a+i)));
    }
     for(i=0;i<j;i++){
      *(a+i)=*(b+i);
     }
     for(i=0;i<j;i++){
        printf("%d ",b[i]);
     }
}