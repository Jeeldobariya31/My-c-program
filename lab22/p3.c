#include <stdio.h>

void main() {
    

    FILE *file;

    file= fopen("PROGRAM3.txt", "w");

    if (file == NULL) {
        printf("Error opening file for writing.\n");
    }

    // Demonstrate fprintf()
    fprintf(file, "This is a test file.\n");
    fprintf(file, "The number is: %d\n", 42);

    // Write a single character using fputc()
    fputc('A', file);
    fputc('\n', file);  

   
    fclose(file);

    // Open the file again for reading
    file = fopen("PROGRAM3.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
    }

    // Demonstrate fscanf() 
    char str[100];
    int num;
    fscanf(file, "%s", str);  
    fscanf(file, "%d", &num); 
    printf("Read from file: %s and %d\n", str, num);

    // Demonstrate fgetc() 
    char ch;
    ch = fgetc(file);  
     printf("Read a single character: %c\n", ch);

    // Demonstrate fseek() 
    fseek(file, 2, SEEK_SET);  // Move  to  beginning 
    printf("Moved file pointer to the 2.\n");

    // Read again from the 2 after fseek()
    fscanf(file, "%s", str);
    printf("Read from file after fseek: %s\n", str);

    // Demonstrate rewind() 
    rewind(file);
    printf("Rewound file pointer to the beginning.\n");

    // Read the first word again after rewind()
    fscanf(file, "%s", str);
    printf("Read from file after rewind: %s\n", str);

   
    fclose(file);

  printf("File closed successfully.\n");
}
