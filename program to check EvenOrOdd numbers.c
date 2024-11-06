// PROGRAM TO CHECK IF A NUMBER IS EVEN OR ODD
#include <stdio.h>

float EvenOrOdd(int number){
    
    if(number % 2==0){
        printf("The number is even \n");
    }
    else{
        printf("the number is odd \n");
    }
}

int main() {
    int number;
    
    printf("enter a number:");
    scanf("%d",&number);
    printf("the number is %d \n",number);

EvenOrOdd(number);
    return 0;
}