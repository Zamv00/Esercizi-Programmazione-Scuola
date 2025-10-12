#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int N, M, temp;
    do
    {
        printf("Inserisci N: ");
        scanf("%d", &N);
    } while (N <= 0);
    
    int matriceA[N][N];
    int matriceB[N][N];
    int matriceC[N][N];
    int matriceD[N][N];
    srand(time(0));
    
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            matriceA[i][j] = rand() % 10;
        }
        
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            matriceB[i][j] = rand() % 10;
        }
        
    }
    
    printf("Matrice A: \n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("\t%d", matriceA[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("Matrice B: \n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("\t%d", matriceB[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            matriceC[i][j] = matriceA[i][j] + matriceB[i][j];
            matriceD[i][j] = matriceA[i][j] * matriceB[i][j];
        }
        
    }

    printf("Matrice C: \n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("\t%d", matriceC[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("Matrice D: \n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("\t%d", matriceD[i][j]);
        }
        printf("\n");
    }

    return 0;
}