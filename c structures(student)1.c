// C STRUCTURES.student
#include <stdio.h>
#include <string.h>

struct student{
    char name[30];
    char email[30];
    int phone_no,ID;
    char reg_no[20];
    float marks;
}student1;
int main() {
    
    strcpy(student1.name,"Kibali Barrack");
    strcpy(student1.reg_no,"BCS-05-0130/2024");
    strcpy(student1.email,"kibalibarrack@gmail.com");
    student1.ID = 214552704;
    student1.phone_no =792458702;
    student1.marks =80.5;

    printf("name:%s\n",student1.name);
    printf("email:%s\n",student1.email);
    printf("reg_no:%s\n",student1.reg_no);
    printf("phone_no:%d\n",student1.phone_no);
    printf("ID:%d\n",student1.ID);
    printf("marks:%.1f",student1.marks);
    return 0;
}