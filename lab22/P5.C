#include <stdio.h>

void main() {
    //READ FILE
     FILE *sourceFile;
    sourceFile = fopen("PROGRAM5R.txt", "r");
    if (sourceFile == NULL) {
        printf("Error opening source file.\n");
    }
// PRINT FILE
    FILE *destinationFile;
   destinationFile = fopen("PROGRAM5D.txt", "w");
    if (destinationFile == NULL) {
        printf("Error opening destination file.\n");
        fclose(sourceFile);
    }

    char ch;
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destinationFile);  
    }

    fclose(sourceFile);
    fclose(destinationFile);

    printf("File has been copied successfully.\n");
}
