#include <stdio.h>
#define N 3
#define M 6
int main(){

    int matrice[N][M] = {3,5,7,9,0,7,2,2,8,9,3,2,8,2,2,2,4,5};
    int RIGA, COLONNA, somma = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            printf("\t%d", matrice[i][j]);
        }
        printf("\n");
    }
    do
    {
        printf("Inserisci riga: ");
        scanf("%d", &RIGA);
        printf("Inserisci colonna: ");
        scanf("%d", &COLONNA);
    } while (RIGA < 0 || COLONNA < 0);
    
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if(i != RIGA && j != COLONNA){
                somma += matrice[i][j];
            }
        }
    }
    
    printf("La somma escluse la riga %d e la colonna %d vale: %d", RIGA, COLONNA, somma);

    return 0;
}