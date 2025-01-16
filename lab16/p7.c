#include<stdio.h>
void main(){
    int i,j,m,n,sum=0;
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
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        
        }
        printf("\n");
    }
    printf("\n");
    printf("element of principal diagonal \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(i==j){
            printf("%d ",a[i][j]);
            sum=sum+a[i][j];
            }
        }
    }
    printf("\nsum of diagonal element is:%d",sum);
}