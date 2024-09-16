#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *filePointer;
    char fileName[100];
    char ch;

    // Prompt user for the file name
    printf("Enter the file name to open: ");
    scanf("%s", fileName);

    // Open the file in read mode
    filePointer = fopen(fileName, "r");

    // Check if the file exists or can be opened
    if (filePointer == NULL) {
        printf("Could not open file %s\n", fileName);
        return 1;
    }

    printf("File content:\n");

    // Read the file character by character and display it
    while ((ch = fgetc(filePointer)) != EOF) {
        printf("%c", ch);
    }

    // Close the file
    fclose(filePointer);
    
    return 0;
}