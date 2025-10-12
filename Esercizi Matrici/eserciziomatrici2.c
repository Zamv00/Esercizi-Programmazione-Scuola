#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Data una matrice 4×4 di interi trovare la riga o la colonna con somma più alta.
int main(){
    int matrix[4][4];
    int sommacolonna0 = 0, sommacolonna1 = 0, sommacolonna2 = 0, sommacolonna3 = 0;
    int sommariga0 = 0, sommariga1 = 0, sommariga2 = 0, sommariga3 = 0;
    int max;
    srand(time(0));
    
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            matrix[i][j] = rand() % 10;
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

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if(i == 0){
                sommariga0 += matrix[i][j];
            }
            if(i == 1){
                sommariga1 += matrix[i][j];
            }
            if(i == 2){
                sommariga2 += matrix[i][j];
            }
            if(i == 3){
                sommariga3 += matrix[i][j];
            }
            if(j == 0){
                sommacolonna0 += matrix[i][j];
            }
            if(j == 1){
                sommacolonna1 += matrix[i][j];
            }
            if(j == 2){
                sommacolonna2 += matrix[i][j];
            }
            if(j == 3){
                sommacolonna3 += matrix[i][j];
            }
        }

    }
    
    printf("\nRiga 0: %d, Riga 1: %d, Riga 2: %d, Riga 3: %d\n", sommariga0, sommariga1, sommariga2, sommariga3);
    printf("Colonna 0: %d, Colonna 1: %d, Colonna 2: %d, Colonna 3: %d\n", sommacolonna0, sommacolonna1, sommacolonna2, sommacolonna3);

    int somme[] = {sommariga0, sommariga1, sommariga2, sommariga3, sommacolonna0, sommacolonna1, sommacolonna2,sommacolonna3};
    max = somme[0];
    int maxIndex = 0;
    for(int i = 0; i < 8; i++){
        if(somme[i] > max){
            max = somme[i];
            maxIndex = i;
        }
    }


    if(maxIndex < 4){
        printf("La riga con la somma maggiore e' la %d con somma %d", maxIndex, max);
    }else{
        printf("La colonna con la somma maggiore e' la %d con somma %d", maxIndex-4, max);
    }
    return 0;
}