// PROGRAM TO CALCULATE SIMPLE INTEREST
#include <stdio.h>

int main() {
    int simple_interest,principal,rate,time;
    
    printf("Enter the principal:");
    scanf("%d",&principal);
    printf("the principal is %d \n",principal);
    
     printf("Enter the rate:");
    scanf("%d",&rate);
    printf("the rate is %d p.a \n",rate);
    
     printf("Enter the time:");
    scanf("%d",&time);
    printf("the time is %d years\n",time);
    
    simple_interest=(principal*rate*time)/100;
    
    printf("the simple_interest is %d \n",simple_interest);

    return 0;
}