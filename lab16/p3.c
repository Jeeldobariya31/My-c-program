#include<stdio.h>
void main()
{
    int i;
    int a[20][2];
    for(i=0;i<20;i++){
        printf("enter roll no and mark :");
        scanf("%d %d",&a[i][0],&a[i][1]);
    }
     for(i=0;i<20;i++){
        printf("%d %d\n",&a[i][0],&a[i][1]);
    }

}