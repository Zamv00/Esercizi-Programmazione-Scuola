#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* Verificare se, in una matrice NxM con N ed M a scelta dell’utente, in ogni cella è
memorizzato il prodotto dei suoi indici di riga e di colonna.*/

int main(){
    
    int N, M;
    do
    {
        printf("Quante colonne ha la matrice?: ");
        scanf("%d", &N);
        printf("Quante righe ha la matrice?: ");
        scanf("%d", &M);
    } while (N <= 0 || M <=0);

    int matrix[N][M];
    srand(time(0));
    
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            matrix[i][j] =  rand() % 10;
        }
        
    }
    
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    
    
    int rispettata = 1;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if(matrix[i][j] == i*j){

            }
            else{
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