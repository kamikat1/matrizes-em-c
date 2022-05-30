/*Faça um programa que receba uma matriz 6x6 e um valor, em seguida mostre a matriz
com todas as suas posições multiplicadas pelo valor informado.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j;
    float matriz[6][6]={{1,2,170,4,8,9},{7,8,9,70,7,6},{148,14,15,16,5,4},{19,90,21,22,3,2},{19,90,21,22,3,2},{19,90,21,22,3,2}};
    int valor=2;

    for (i=0;i<6;i++){
        for (j=0;j<6;j++){
            printf("%.0f ", matriz[i][j]*valor);
        }
        printf("\n");

    }
}
