//ARRAYS
#include <stdio.h>
#include <stdlib.h>
#define FILENAME "data.txt"
#define MAX_LENGTH 100

void writesentence() {
    FILE *file = fopen(FILENAME, "w");
    if (file == NULL) {
        printf("Error opening file.\n");
        exit(1); 
    }
    char sentence[MAX_LENGTH];
    printf("Enter a sentence: ");
    fgets(sentence, MAX_LENGTH, stdin);
    
    fprintf(file, "%s", sentence);
    fclose(file);
}

void readcontent() {
    FILE *file = fopen(FILENAME, "r");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        exit(1); 
    }
    char ch;
    printf("Content of %s:\n", FILENAME);
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    fclose(file);
}

void appendsentence() {
    FILE *file = fopen(FILENAME, "a");
    if (file == NULL) {
        printf("Error opening file for appending.\n");
        exit(1); 
    } 
    char sentence[MAX_LENGTH];
    printf("Enter another sentence to append: ");
    fgets(sentence, MAX_LENGTH, stdin);
    
    fprintf(file, "%s", sentence);
    fclose(file);
}

int main() {
    writesentence();
    readcontent();
    appendsentence();
    readcontent();
    return 0;
}