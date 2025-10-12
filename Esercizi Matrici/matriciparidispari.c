#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int N, M, temp;
    do
    {
        printf("Inserisci N: ");
        scanf("%d", &N);
        printf("Inserisci M: ");
        scanf("%d", &M);
    } while (N <= 0 || M <= 0 || N > 10 || M > 20);
    
    int matrice[N][M];
    srand(time(0));
    
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            matrice[i][j] = rand() % 10;
        }
        
    }
    
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            printf("\t%d", matrice[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if(i % 2 == 0){
                temp = matrice [i][j];
                matrice[i][j] = matrice[i+1][j];
                matrice[i+1][j] = temp;
            }
        }
        
    }printf("\n");
    
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            printf("\t%d", matrice[i][j]);
        }
        printf("\n");
    }
    
    

    return 0;
}