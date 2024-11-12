#include <stdio.h>
#include <stdlib.h>

struct student {
    char name[50];
    int marks;
}student1;

int main() {
    int i,n;
    
printf("enter the number if students:");
scanf("%d",&n);
printf("the number of students is %d \n",n);



    FILE *file =
    fopen("students.txt", "a");

    if (file == NULL) {
        printf("Error opening file.\n");
        return 1; 
    }

    for (i = 0; i < n; i++) {
        printf("Enter the name of the student:");
        scanf("%s",student1.name,i);
        printf("The name is %s\n", student1.name);

        printf("Enter the marks of the student:");
        scanf("%d",student1.marks);  
        printf("The marks are %d\n", student1.marks);

        fprintf(file, "Name: %s, Marks: %d\n", student1.name, student1.marks);
    }

    fclose(file);
    printf("Data written successfully\n");

    return 0;
}
