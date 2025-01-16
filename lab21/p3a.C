// demonstrate program by structure

#include<stdio.h>
#include<string.h>

  struct emplooy {
    char name[100];
    int age;
    char job[1000];
    char compony[100];
    float salary;

  };

  void main(){
    struct emplooy s1;
    s1.age=17;
    s1.salary=250000;
    strcpy(s1.job,"software engeener");
    strcpy(s1.name,"jeel");
    strcpy(s1.compony,"Google");
    printf("name = %s\n",s1.name);
    printf("age = %d\n",s1.age);
    printf("job type = %s\n",s1.job);
    printf("compony name= %s\n",s1.compony);
    printf("salary = %0.2f\n",s1.salary);
    
    
  }