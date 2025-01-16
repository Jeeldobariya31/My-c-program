#include <stdio.h>
void main(){
    int i,j,oddcount=0,evencount=0;
    printf("enter size:");
    scanf("%d",&j);
    int a[j];
       for(i=0; i<j; i++)
    {
        printf("enter value:");
        scanf("%d",&a[i]);
        }
        for(i=0; i<j; i++){
        if(a[i]%2==0){
            evencount++;
        }
        else{
            oddcount++;
        }
        }
        printf("odd num:%d\n",oddcount);
        printf("even num:%d\n",evencount);

}