/*
Implementare un programma in linguaggio C che svolga le seguenti operazioni (max 7 punti):
• Riempire e stampare una matrice quadrata NxN (dove N>=3) con numeri interi casuali tra 2
e 5 (1 punto)
• Stampare la somma e la media degli elmenti(2 punti)
• Stampare il valore massimo degli elementi della matrice (1 punto)
• Stampare la somma degli elementi presenti sulla diagonale secondaria(1 punto)
• Stampare la matrice trasposta della matrice di partenza. In matematica, la matrice trasposta
di una matrice è la matrice ottenuta scambiandone le righe con le colonne. (2 punti)
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int N, somma_d_secondaria = 0;
    float media, somma = 0;
    do
    {
        printf("Inserisci il valore di N: ");
        scanf("%d", &N);
    } while (N < 3);
    
    int matrix[N][N];
    srand(time(0));
    //riempiamo la matrice
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            matrix[i][j] = 2 + rand() % 4;
        }
        
    }
    
    //stampiamola
    printf("Matrice originale: \n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    
    //somma, media, elemento massimo, somma diagonale secondaria
    int max = matrix[0][0];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            somma += matrix[i][j];
            if(matrix[i][j] > max){
                max = matrix[i][j];
            }
            if((i + j) == N - 1){
                somma_d_secondaria += matrix[i][j];
            }
        }
        
    }
    media = somma/(N*N);
    printf("La somma vale: %.0f, la media vale: %.2f\n", somma, media);
    printf("Il valore massimo della matrice vale %d\n", max);
    printf("La somma degli elementi della diagonale secondaria vale: %d\n", somma_d_secondaria);


    //facciamo la matrice trasportata! :3
    printf("Matrice trasportata: \n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d\t", matrix[j][i]);
        }
        printf("\n");
    }


    return 0;
}