#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Data una matrice 4×4 di interi e due numeri interi n e m verificare se tutte le celle della
//matrice hanno valori compresi tra n e m.

int main(){
    int matrix[4][4];
    int n = 3, m = 7;
    srand(time(0));
    
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            matrix[i][j] =  rand() % 10;
        }
        
    }
    
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    int rispettata = 1;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if(matrix[i][j] >= n && matrix[i][j] <= m){
            }
            else{
                rispettata = 0;
                break;
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