// Data una matrice NxN, riempire il triangolo superiore formato dalla diagonale secondaria con numeri da 0 a 50, e il triangolo inferiore con numeri da 51 a 100
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int N;
    do
    {
        printf("Inserisci il valore di N: ");
        scanf("%d", &N);
    } while (N <= 0);
    int matrice[N][N];
    srand(time(0));
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if((i+j) <= N-1){
                matrice[i][j] = rand() % 51;
            }
            else{
                matrice[i][j] = 51 + rand() % 50;
            }
        }
        
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d\t", matrice[i][j]);
        }
        printf("\n");
    }


    return 0;
}