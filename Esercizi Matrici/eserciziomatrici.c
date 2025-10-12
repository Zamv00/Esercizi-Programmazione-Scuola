#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void riempimento_casuale(int matrice[3][3]){
    srand(time(0));
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            matrice[i][j] = rand() % 10;
        }
    }
}

int trova_massimo(int matrice[3][3]){
    int max = matrice[0][0];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matrice[i][j] > max){
                max = matrice[i][j];
            }
        }
        
    }

    return max;
    
}


int main(){
    int matrice[3][3];
    riempimento_casuale(matrice);
    
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("%d ", matrice[i][j]);
        }
        printf("\n");
    }

    printf("Il massimo e': %d", trova_massimo(matrice));
    return 0;

}