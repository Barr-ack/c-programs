//  FOR LOOP
 //C PROGRAM TO FIND CUBE OF NUMBERS 1-5
#include <stdio.h>

int main() {
    int n,i,cube;
    
    printf("enter the number:");
    scanf("%d",&n);
    printf("the number is %d\n",n);
    
    //(start,stop,step)
    for(i=1;i<=n;i++){
        
        cube=i*i*i; //calculating cube
        printf("the number is %d\n",i);
        printf("the cube of %d is %d\n",i,cube);
        
    }
    
    return 0;
}