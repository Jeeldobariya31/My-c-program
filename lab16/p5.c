#include<stdio.h>
void main(){
    int i,j,m,n,temp;
    printf("enter tha array size in form of m*n:\n");
    printf("enter tha array's row size:");
    scanf("%d",&m);
     printf("enter tha array's colum size:");
    scanf("%d",&n);
    int a[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("enter value:");
            scanf("%d",&a[i][j]);
        }
    }
    // metrix print optional
    printf("metrix is \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        
        }
        printf("\n");
    }
    printf("transpose of metrix \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[j][i]);
        
        }
        printf("\n");
    }
}