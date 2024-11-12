// C 2D ARRAYS
#include <stdio.h>

int main() {
    int k,b;
    int scores[2][4] = {
        {65,92,35,70},
        {84,72,59,67}
    };
    
    for(k=0;k<2;k++){
        for(b=0;b<4;b++){
            
            printf("scores [%d][%d] =%d \n",b,b,scores[k][b]);
        }
    }

    return 0;
}