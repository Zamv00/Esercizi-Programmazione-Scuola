#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Verificare se tutte le celle dei “bordi” di una matrice 6×6 contengono lo stesso valore della
variabile k data in input dall’utente (per bordi di una matrice si intendono la prima e l’ultima
riga e la prima e l’ultima colonna).*/
int main(){
    int matrix[6][6];
    int k;
    printf("Inserisci k: ");
    scanf("%d", &k);
    srand(time(0));
    
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            matrix[i][j] = rand() % 10;
        }
        
    }
    
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    int rispettata = 1;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if((i == 0 || i == 5 || j == 0 || j == 5) && matrix[i][j] != k){
                rispettata = 0;
            }
        }

    }

    if (rispettata) {
        printf("\nLa matrice rispetta la proprieta!\n");
    } else {
        printf("\nLa matrice non rispetta la proprieta!\n");
    }
    return 0;
}