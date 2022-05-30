//maior elemento da matriz 
#include <stdlib.h>

int main(){
   int i, j;
   float matriz[3][3]= {{1,2,3},
                        {4,5,6},
                        {7,8,9}};

    float maior = matriz[0][0];

    for (i=0; i<3; i++){
        for (j=1; j<3; j++){
            if(maior<matriz[i][j]){
                maior = matriz [i][j];
            }
        }
    }
    printf("%f", maior);
    return 0;
}
