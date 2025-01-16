#include <stdio.h>

void main() {

    FILE *file;

    file = fopen("PROGRAM2.txt", "r");
    
    if (file == NULL) {
        printf("Error: Unable to open  this file.\n");
    }
    char ch;
    int count=0,spacec=0,tabsc=0,newlnc=0; 
    while(ch != EOF){
        ch=fgetc(file);
        count++;
        if(ch==' '){
            spacec++;
        }
        else if(ch=='\t'){
            tabsc++;
        }
        else if(ch=='\n'){
            newlnc++;
        }
    }
    printf("total charecter is : %d\n",count);
 printf("tabs = %d\n",tabsc);
 printf("new line = %d\n",newlnc);
 printf("space = %d\n",spacec);

    fclose(file);
    
    printf("File closed successfully.\n");
}
