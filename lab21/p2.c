// read and print 3 book info 
#include<stdio.h>
#include<string.h>

struct book {
    char tital[100];
    char aouther[100];
    char publication[100];
    float price;
};

void main(){
     struct book b[3];
     int i;
     for(i=0;i<5;i++){
      printf("Enter book %d info",i+1);
        printf("Enter book name:");
        scanf("%s",b[i].tital);
        printf("enter aouther :");
        scanf("%s",b[i].aouther);
        printf("enter publication :");
        scanf("%s",b[i].publication);
        printf("enter price :");
        scanf("%f",b[i].price);
     }
     for(i=0;i<5;i++){
        printf("book %d detailes :\n",i+1);
        printf("name:%s\n",b[i].tital);
        printf("aouther : %s\n",b[i].aouther);
        printf("publication : %s\n",b[i].publication);
        printf("price :%0.2f\n",b[i].price);
     }
}  
    