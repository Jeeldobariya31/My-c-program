//read and print 5 student info
#include<stdio.h>
#include<string.h>

  struct student 
  {
    char name[100];
    int age;
    float percentage;
  } ;

   void printinfo(struct student stu);

  void main(){
   struct student stu[5]; 
 int i;
   // input info
    for(i=0;i<5;i++){
   printf("enter info for student %d :\n",i+1) ;
   printf("Enter student name :");
   scanf("%s",stu[i].name);
   printf("enter age :");
   scanf("%d",&stu[i].age);
   printf("Enter percentage :");
   scanf("%f",&stu[i].percentage);
     }

     for(i=0;i<5;i++){
    printf("info for student %d:\n",i+1) ;
    printinfo(stu[i]);
    printf("\n");
     }

  }
  void  printinfo(struct student stu){

    printf("student name is :%s\n",stu.name);
     printf("student age is :%d\n",stu.age);
      printf("student percentage is : %0.2f\n",stu.percentage);
  }