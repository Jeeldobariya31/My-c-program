#include<stdio.h>
void main(){
    int i,j;
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
    printf("\n");
    printf("reverse");
    printf("\n");
    for(i=j-1;i>=0;i--){
        printf("%d ",a[i]);

    }
}