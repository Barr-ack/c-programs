//program to read and write data to a c-file

#include <stdio.h>
#include <stdlib.h>

struct student {
    char name[50];
    int marks;
};

int main() {
    int i, n;
    
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct student students[n];


    for (i = 0; i < n; i++) {
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter the marks of student %d: ", i + 1);
        scanf("%d", &students[i].marks);
    }

    
    FILE *file = fopen("students.dat", "wb");
    if (file == NULL) {
        printf("Error.\n");
        return 1;
    }
    
    fwrite(students, sizeof(struct student), n, file);
    fclose(file);
    printf("Data written successfully to students.dat\n");
    
    struct student read_students[n];
    file = fopen("students.dat", "rb");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    fread(read_students, sizeof(struct student), n, file);
    fclose(file);

    printf("\nStudent Data:\n");
    for (i = 0; i < n; i++) {
        printf("Name: %s, Marks: %d\n", read_students[i].name, read_students[i].marks);
    }

    return 0;
}
