

#include <stdio.h>
#include <stdlib.h>

int main(){
    int matriz[3][3]={1,2,3,4,5,6,7,8,9};
    int matriz2[3][3]={1,2,3,4,5,6,7,8,9};
    int resultado[3][3];


    for(int i=0;i<3;i++){
        for(int j=0;j<3;i++){
            resultado[i][j]=matriz[i][j]+matriz[i][j];
        }

    }
    printf("\n");

    for(int i=0;i<3;i++){
        for(int j=0;j<3;i++){
            printf("%d ",resultado[i][j]);
        }
        printf("\n");
    }
}
