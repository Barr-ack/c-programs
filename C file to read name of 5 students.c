// c-FILES
#include <stdio.h>
#include <stdlib.h>

struct student{
    char name[50];
    int marks;
}student1;

int main() {
    int i;
    
    
    FILE *file =
    fopen("students.txt","w");
    
    if(file == NULL){
        printf("error\n");
        return 1;
    }
        

    for(i=0;i<5;i++){
        printf("enter the name of the student:",i+1);
        scanf("%s",&student1.name);
        printf("the name is %s",student1.name);
        
        printf("enter the marks of the student:",i+1);
        scanf("%d",&student1.marks);
        printf("the marks is %d",student1.marks);
        
        fprintf(file,"name:%s,marks:%d",student1.name,student1.marks);
    }
    fclose(file);
    printf("data written successfully\n");

   return 0;
}
