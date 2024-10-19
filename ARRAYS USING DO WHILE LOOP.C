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
    i=0;
    do{
        j=0;
        do{
            k=0;
            
            do{
            
            printf("marks[%d][%d][%d]=%d\n",i,j,k,marks[i][j][k]);
            
            //increment k
            k++;
            }while (k<3);
            //increment j
            j++;
        }while(j<2);
        //increment i
        i++;
    }while(i<2);
            
    return 0;
}