#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int N, somma_d_secondaria = 0, sommat_superiore = 0, sommat_inferiore = 0, sommat_destro = 0, sommat_sinistro = 0;
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
            matrix[i][j] = rand() % 10;
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

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i+j < N-1 && i < j)
            {
                sommat_superiore += matrix[i][j];
            }
            else if (i+j < N-1 && i > j)
            {
                sommat_sinistro+= matrix[i][j];
            }
            else if (i+j > N-1 && i < j)
            {
                sommat_destro += matrix[i][j];
            }
            else if (i+j > N-1 && i > j)
            {
                sommat_inferiore += matrix[i][j];
            }
            
            
            
        }
        
    }

    printf("Triangolo superiore: %d\nTriangolo destro: %d\nTriangolo inferiore: %d\nTriangolo sinistro: %d\n", sommat_superiore, sommat_destro, sommat_inferiore, sommat_sinistro);
    return 0;
}