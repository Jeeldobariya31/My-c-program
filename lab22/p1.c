#include <stdio.h>

void main() {

    FILE *file;

    file = fopen("PROGRAM1.txt", "w");
    
    if (file == NULL) {
        printf("Error: Unable to open or create the file.\n");
    }
    
    // Write 
    fprintf(file, "Hello\n");

    fclose(file);
    
    printf("File created and data written successfully.\n");
}
