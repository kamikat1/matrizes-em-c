

#include <stdio.h>
#include <stdlib.h>

int main(){
    int matriz[5][3]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int matriz2[5][3]={2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int resultado[5][3];


    for(int i=0;i<5;i++){
        for(int j=0;j<3;j++){
            (matriz[i][j]>matriz2[i][j])?(resultado[i][j]=matriz[i][j]):(resultado[i][j]=matriz2[i][j]);
        }
    }
    printf("\n");

    for(int i=0;i<5;i++){
        for(int j=0;j<3;j++){
            printf("%d ",resultado[i][j]);
        }
        printf("\n");
    }
}
