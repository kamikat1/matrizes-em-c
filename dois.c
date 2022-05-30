/*Faça um programa que receba uma matriz 4x6 e mostre os maiores elementos de cada linha*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j;
    float vetor[4][6]={{1,2,170,4,5,6},{7,8,9,70,11,12},{148,14,15,16,17,18},{19,90,21,22,23,29}};

    for (i=0;i<4;i++){
        float maior=0;

        for (j=0;j<6;j++){
            if(maior<vetor[i][j]) maior=vetor[i][j];

        }
        printf("o maior da linha %d eh o %f  \n", i, maior);

    }
}

