void main(){
    int choise,a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    printf("enter 1 for sum\n enter 2 for substraction\n enter 3 for multiplication\n enter 4 for division");
    scanf("%d",&choise);
    if(choise==1){
        printf("sum is %d",a+b);
    }
    else if(choise==2){
        printf("substraction is %d",a-b);
    }
    else if(choise==3){
        printf("multiplication is %d",a*b);
    }
    else if(choise==4){
        printf("divison is %d",a/b);
    }
    else{
        printf("invalied input");
    }
}