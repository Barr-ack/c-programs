// C ARRAYS
#include <stdio.h>

int main() {
    int i=0,j,k;
    int marks[2][2][3]={
                    {{40,50,60},
                    {70,80,90}},
                   {{40,50,60},
                    {70,80,90}}
};

   while(i<2){
       j=0;
       while(j<2){
           k=0;
           while(k<3){
               
            printf("marks[%d][%d][%d]=%d\n",i,j,k,marks[i][j][k]);   
               k++;
           }j++;
       }i++;
   }
    return 0;
}