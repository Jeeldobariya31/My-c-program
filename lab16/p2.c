#include<stdio.h>
void main(){
    int i,j,r,c,pc=0,nc=0,z=0;
    printf("enter tha array size in form of m*n:\n");
    printf("enter tha array's row size:");
    scanf("%d",&r);
     printf("enter tha array's colum size:");
    scanf("%d",&c);
    int a[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("enter value:");
            scanf("%d",&a[i][j]);
            if(a[i][j]>0){
            pc++;
            }
            else if(a[i][j]==0){
                z++;
            }
            else{
                nc++;
            }
        }
    }
    printf("positive num=%d",pc);
    printf("\n");
    printf("negative num=%d",nc);
    printf("\n");
    printf("zero=%d",z);
}