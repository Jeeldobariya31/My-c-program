#include <stdio.h>

int main() {
    //READ FILE
   FILE *sourceFile;
    sourceFile = fopen("PROGRAM4R.txt", "r");
    if (sourceFile == NULL) {
        printf("Error opening source file.\n");
        
    }
// PRINT FILE
   FILE *destinationFile;
    destinationFile = fopen("PROGRAM4D.txt", "a");
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

    printf(" source file is appended to destination file.\n");
}
