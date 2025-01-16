// demonstrate program by union

#include<stdio.h>
#include<string.h>

  union emplooy {
    char name[100];
    int age;
    char job[1000];
    char compony[100];
    float salary;

  };

  void main(){
    union emplooy u1;
    u1.age=17;
    u1.salary=250000;
    strcpy(u1.job,"software engeener");
    strcpy(u1.name,"jeel");
    strcpy(u1.compony,"Google");
    printf("name = %s\n",u1.name);
    printf("age = %d\n",u1.age);
    printf("job type = %s\n",u1.job);
    printf("compony name= %s\n",u1.compony);
    printf("salary = %0.2f\n",u1.salary);
    
    
  }