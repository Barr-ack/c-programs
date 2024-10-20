// PROGRAM TO CALCULATE VOLUME AND SURFACE AREA OF A CYLINDER
#include <stdio.h>
#define PI 3.14
int main() {
    float radius,diameter,volume,height,surfacearea;
    
    printf("enter the radius:");
    scanf("%f",&radius);
    printf("the radius is %.1f\n",radius);
    
    printf("enter the diameter:");
    scanf("%f",&diameter);
    printf("the diameter is %.1f\n",diameter);
    
    printf("enter the height:");
    scanf("%f",&height);
    printf("the height is %.1f\n",height);
    
    //calculating the volume
    volume=PI*radius*radius*height;
    
    //calculating the surface area
    surfacearea=2*PI*radius*radius+PI*diameter*height;
    
    printf("the volume is %.2f\n",volume);
    printf("the surfacearea is %.2f\n",surfacearea);


    return 0;
}