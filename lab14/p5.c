#include <stdio.h>

void main()
{
    int i,count=0;
    float h[5],w[5];
    for(i=0; i<5; i++)
    {
        printf("person %d\n",i+1);
        printf("  hight = ");
        scanf("%f",&h[i]);
        printf("  weight = ");
        scanf("%f",&w[i]);
        if(h[i]>170 && w[i]<50)
        {
            count++;
        }
    }
    printf("\n%d person",count);
}