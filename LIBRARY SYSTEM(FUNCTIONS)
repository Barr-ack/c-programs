// LIBRARY SYSTEM USING FUNCTIONS
//C PROGRAM TO BORROW AND RETURN BOOKS

int days_overdue(int Returndate,int Duedate);
int fine_amount(int days_ovrdue,int fine_rate );

    

#include <stdio.h>
int main() {
    int Duedate,Returndate,days_overdue,fine_rate,fine_amount,book_id;
    
    printf("enter the book_id:");
    scanf("%d",&book_id);
    printf("the book_id is %d \n",book_id);
    
    printf("enter the Duedate:");
    scanf("%d",&Duedate);
    printf("the Duedate is %d \n",Duedate);
    
    printf("enter the Returndate:");
    scanf("%d",&Returndate);
    printf("the Returndate is %d \n",Returndate);
    
    //overdue days calculation
    days_overdue=Returndate-Duedate;
    
    if(days_overdue<=7){
        fine_rate=20;
    }
    else if(days_overdue<=14){
        fine_rate=50;
    }
    else{
        fine_rate=100;
    }
    fine_amount=days_overdue*fine_rate;
    
    printf("the days_overdue is %d \n",days_overdue);
    printf("the fine_rate is %d \n",fine_rate);
    printf("the fine_amount is %d \n",fine_amount);
    return 0;
}
 int days_overdue(int Returndate,int Duedate){
       int days_overdue;
       days_overdue=Returndate-Duedate;
    return days_overdue ;  //  (Returndate-Duedate);
}
int fine_amount(int days_overdue,int fine_rate){
    int fine_amount;
    fine_amount=days_overdue*fine_rate;
    return fine_amount;    //(days_overdue*fine_rate);
}