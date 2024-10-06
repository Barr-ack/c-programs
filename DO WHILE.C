// DO WHILE
 //C PROGRAM TO FIND CUBE OF NUMBERS
#include <stdio.h>

int main() {
    int n,i,cube;
    
    printf("enter the number:");
    scanf("%d",&n);
    printf("the number is %d\n",n);
    
    do{
        cube=i*i*i; //calculating cube
        printf("the number is %d\n",i);
        printf("the cube of %d is %d\n",i,cube);
        
        i++; // increment
    }while(i<=n);
    
    return 0;
}