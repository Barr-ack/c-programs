//FUNCTIONS
// program to calculate area of a circle

#include <stdio.h>
#define PI 3.14

int perimeter(int d);
float area (float r);

int main(){
    int d,perimeter;
    float r,area;
    
    printf("enter the diameter:");
    scanf("%d",&d);
    printf("the diameter is %d\n",d);
    
    printf("enter the radius:");
    scanf("%f",&r);
    printf("the radius is %f\n",r);
    
    //calculating the perimeter
    perimeter=PI*d;
    printf("the perimeter is %d\n",perimeter);
    
    //calculating the area
    area=PI*r*r;
    printf("the area is %.1f\n",area);
    
    return 0;
}

int perimeter (int d){
    int perimeter;
    perimeter=PI*d;
    return perimeter;
}
float area (float r){
    float area;
    area=PI*r*r;
    return area;
}