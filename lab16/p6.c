#include<stdio.h>
void main(){
    int i,j,m,n,k;
    printf("enter tha array size in form of m*n:\n");
    printf("enter tha array's row size:");
    scanf("%d",&m);
     printf("enter tha array's colum size:");
    scanf("%d",&n);
    int a[m][n],b[m][n],mul[m][n];
     printf("matrix 1\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("enter value:");
            scanf("%d",&a[i][j]);
        }
    }
    printf("matrix 2\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("enter value:");
            scanf("%d",&b[i][j]);
        }
    }
    printf("multiple of the matrix=\n");    
for(i=0;i<m;i++)    
{    
for(j=0;j<n;j++)    
{    
mul[i][j]=0;    
for(k=0;k<n;k++)    
{    
mul[i][j]+=a[i][k]*b[k][j];    
}    
}    
}    
// print mul metrix
for(i=0;i<m;i++)    
{    
for(j=0;j<n;j++)    
{    
printf("%d\t",mul[i][j]);    
}    
printf("\n");    
}    
} 