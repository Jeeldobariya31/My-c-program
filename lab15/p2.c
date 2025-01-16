#include<stdio.h>
void main(){
    int i,j,count=0;
    printf("enter the size of array:");
    scanf("%d",&j);
    int a[j];
    for(i=0;i<j;i++){
        printf("enter the value:");
        scanf("%d",&a[i]);
    if(a[i]<=0)
        {
            count++;
        }
        else{
            count=count+0;
        }
    }
    printf("%d",count);
}