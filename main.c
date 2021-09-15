#include <stdio.h>

/*Faça um programa que preencha dois vetores de 5 números.
 Mostre em um vetor resultante a soma de cada elemento do vetor 1 com o elemento
 da mesma posição no vetor 2.*/

void main() {
    int vetor1[5];
    int vetor2[5];
    int vetor3[5];
    int cont;

    for (cont = 0; cont <= 4; cont++) {
        printf("Informe o número para a posição [%d] do vetor1: \n", cont);
        scanf("%d", &vetor1[cont]);

        printf("Informe um número para a posição [%d] do vetor2: \n", cont);
        scanf("%d", &vetor2[cont]);

        vetor3[cont] = vetor1[cont] + vetor2[cont];
    }
    for (cont = 0; cont <= 4; cont++) {
        printf("%d \t", vetor3[cont]);
    }
}

