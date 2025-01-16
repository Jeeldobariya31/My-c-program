// demonstrate structure using pointers

#include<stdio.h>
#include<string.h>

struct student {
  char name[100];
  int roll;
  int age;
};

void main(){
      struct student *ptr;
      struct student s1;
      ptr=&s1;
      printf("Enter student name:");
      scanf("%s",ptr->name);
      printf("Enter student roll no:");
      scanf("%d",&ptr->roll);
       printf("Enter student age:");
      scanf("%d",&ptr->age);
      printf("\ninformation is \n");
       printf(" name is :%s\n",ptr->name);
       printf("roll no is:%d\n",ptr->roll);
       printf("age is :%d\n",ptr->age);

}