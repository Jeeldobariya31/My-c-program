// nested structure
#include<stdio.h>
#include<string.h>

struct address {
  int block ;
  char socity[100];
  char village[100];
};
struct emplooy {
    char name[100];
    int age;
    char job[1000];
    char compony[100];
    float salary;
    struct address add;

  };

  void main(){
    struct emplooy s1;
    s1.age=17;
    s1.salary=250000;
    s1.add.block=2;
    strcpy(s1.job,"software engeener");
    strcpy(s1.name,"jeel");
    strcpy(s1.compony,"Google");
    strcpy(s1.add.socity,"gokulnagar");
    strcpy(s1.add.village,"jamnagar");
    printf("Information\n");
    printf("\npersonal info\n");
    printf("name = %s\n",s1.name);
    printf("age = %d\n",s1.age);
    printf("job type = %s\n",s1.job);
    printf("compony name= %s\n",s1.compony);
    printf("salary = %0.2f\n",s1.salary);
    printf("\naddress is :\n ");
    printf("block = %d\n",s1.add.block);
    printf("socity = %s\n",s1.add.socity);
    printf("village = %s\n",s1.add.village);
  }