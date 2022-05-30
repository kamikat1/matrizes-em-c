/*Faça um programa que receba uma matriz 4x4 e mostre os elementos dessa matriz na
tela. A exibição dos valores deve obedecer o formato da matriz, linhas e colunas.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j;
    float matriz[4][4]={{1,2,170,4},{7,8,9,70},{148,14,15,16},{19,90,21,22}};

    for (i=0;i<4;i++){
        for (j=0;j<4;j++){
            printf("%.0f ", matriz[i][j]);
        }

    printf("\n");
    }
}
