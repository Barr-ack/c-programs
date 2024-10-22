// C STRUCTURES.student
#include <stdio.h>
#include <string.h>

struct student{
    char name[30];
    char email[30];
    int phone_no,id_no;
    char reg_no[20];
    float marks;
}student1;
int main() {
    
    strcpy(student1.name,"Kibali Barrack");
    strcpy(student1.reg_no,"BCS-05-0130/2024");
    strcpy(student1.email,"kibalibarrack@gmail.com");
    student1.id_no = 214552704;
    student1.phone_no =792458702;
    student1.marks =80.5;

    printf("enter the name:");
    scanf("%s",&student1.name);
    printf("name:%s \n",student1.name);
    
     printf("enter the email:");
    scanf("%s",&student1.email);
    printf("email:%s \n",student1.email);
    
     printf("enter the reg_no:");
    scanf("%s",&student1.reg_no);
    printf("reg_no:%s \n",student1.reg_no);
    
     printf("enter the phone_no:");
    scanf("%d",&student1.phone_no);
    printf("phone_no:%d \n",student1.phone_no);
    
     printf("enter the id_no:");
    scanf("%d",&student1.id_no);
    printf("id_no:%d \n",student1.id_no);

    printf("enter the marks:");
    scanf("%f",&student1.marks);
    printf("marks:%.f\n",student1.marks);
    
    return 0;
}