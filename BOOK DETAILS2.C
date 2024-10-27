// C STRUCTURES.BOOK1
#include <stdio.h>
#include <string.h>

struct Book1{
    char title[30];
    char author[30];
    char ISBN[16];
    int publication_year;
    float price;
}Book1;
int main() {
    //book details
    strcpy(Book1.title,"introduction to c programming");
    strcpy(Book1.author,"John Smith");
    strcpy(Book1.ISBN,"9780131103627");
    Book1.publication_year=2022;
    Book1.price =49.99;
    
    printf("\nBOOK DETAILS\n");
    
    printf("Enter book title:");
    scanf("%[^\n]s",Book1.title);
    printf("title:%s\n",Book1.title);
    
    getchar();
    
    printf("Enter author:");
    scanf("%[^\n]s",Book1.author);
    printf("author:%s\n",Book1.author);
     
    printf("Enter book ISBN:");
    scanf("%s",Book1.ISBN);
    printf("ISBN:%s\n",Book1.ISBN);

     
    printf("Enter book publication year:");
    scanf("%d",&Book1.publication_year);
    printf("publication_year:%d\n",Book1.publication_year);
    
     
    printf("Enter book price:");
    scanf("%f",&Book1.price);
    printf("price:$%.2f\n",Book1.price);

    
    return 0;
}