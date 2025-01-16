#include <stdio.h>
#include <string.h>

//  structure
struct Student {
    int roll_number;
    char name[50];
    int backlogs;
 };
 void  main() {
    // Write student data to file
    FILE *file ;
    file = fopen("student.txt", "w"); 
    if (file == NULL) {
        printf("Error opening file for writing.\n");
    }

    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    struct Student s;
    for (int i = 0; i < n; i++) {
        printf("Enter roll number, name, and number of backlogs for student %d:\n", i + 1);
        printf("Roll number: ");
        scanf("%d", &s.roll_number);
        printf("Name: ");
        scanf("%s",s.name);
        printf("Backlogs: ");
        scanf("%d", &s.backlogs);
        // Write to file

        fprintf(file, "%d %s %d\n", s.roll_number, s.name, s.backlogs); 
    }

    fclose(file);

    // Read and find students with more than 5 backlogs
    file = fopen("student.txt", "r"); 
    if (file == NULL) {
        printf("Error opening file for reading.\n");
    }

int found=0;
    while (fscanf(file, "%d %s %d", &s.roll_number, s.name, &s.backlogs) != EOF) {
        if (s.backlogs > 5) {
            printf("Roll number %d student with more than 5 backlogs\n", s.roll_number);
           found=1;
        }
    }

    if (found==0) {
        printf("No student found with more than 5 backlogs.\n");
    }

    fclose(file); 

}


