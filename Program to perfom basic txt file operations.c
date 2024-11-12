#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 200
#define FILENAME "output.txt"

void writeparagraph() {
    FILE *file = fopen(FILENAME, "w");
    if (file == NULL) {
        printf("Error opening file.\n");
        return; 
    }
    char paragraph[MAX_LENGTH];
    printf("Enter a paragraph: ");
    getchar(); 
    fgets(paragraph, MAX_LENGTH, stdin);
    
    fputs(paragraph, file);
    fclose(file);
    printf("Paragraph written to output.txt\n");
}

void readcontent() {
    FILE *file = fopen(FILENAME, "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return; 
    }
    char ch;
    printf("Content of %s:\n", FILENAME);
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    fclose(file);
}

void appendparagraph() {
    FILE *file = fopen(FILENAME, "a");
    if (file == NULL) {
        printf("Error opening file for appending.\n");
        return; 
    } 
    char paragraph[MAX_LENGTH];
    printf("Enter another paragraph to append: ");
    getchar();  
    fgets(paragraph, MAX_LENGTH, stdin);
    
    fputs(paragraph, file);
    fclose(file);
    printf("Paragraph appended to output.txt\n");
}

int main() {
    int choice;
    do {
        printf("\nMenu:\n");
        printf("1. Write a new paragraph\n");
        printf("2. Read content\n");
        printf("3. Append a paragraph\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                writeparagraph();
                break;
            case 2:
                readcontent();
                break;
            case 3:
                appendparagraph();
                break;
            case 4:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while(choice != 4);
    
    return 0;
}