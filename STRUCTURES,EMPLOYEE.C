// STRUCTUES
#include <stdio.h>
#include <string.h>

struct employee {
    char name[25];
    char department[20];
    float salary;
    int ID;
    char email[50];
}employee1;


int main() {
    strcpy(employee1.name,"John Smith");
    strcpy(employee1.department,"Human resources");
    strcpy(employee1.email,"john.doe@company.com");
    employee1.ID = 12345;
    employee1.salary = 55000.50;
    
    printf("name:%s\n",employee1.name);
     printf("department:%s\n",employee1.department);
      printf("email:%s\n",employee1.email);
       printf("ID:%d\n",employee1.ID);
        printf("salary:%f\n",employee1.salary);
    
    

    return 0;
}