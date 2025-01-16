#include<stdio.h>
void main(){
    int i,j,n,count=0;
    printf("enter the size of array:");
    scanf("%d",&j);
    int a[j];
    for(i=0;i<j;i++){
        printf("enter the value:");
        scanf("%d",&a[i]);
    }
     for(i=0;i<j;i++){
        printf("%d ",a[i]);
    }
    printf("\nenter element num :");
    scanf("%d",&n);
    for(i=0;i<j;i++){
        if(n==i+1){
            printf("%d",a[i]);
        }
        
    }

}