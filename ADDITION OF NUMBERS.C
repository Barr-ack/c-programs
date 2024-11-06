// PROGRAM TO ADD 3 NUMBERS
#include <stdio.h>

int main() {
    int sum,number1,number2,number3;
    
    printf("Enter the first number:");
    scanf("%d",&number1);
    printf("the number is %d \n",number1);
    
     printf("Enter the second number:");
    scanf("%d",&number2);
    printf("the number is %d \n",number2);

 printf("Enter the third number:");
    scanf("%d",&number3);
    printf("the number is %d \n",number3);

sum=number1+number2+number3;
printf("the sum is %d \n",sum);
    return 0;
}