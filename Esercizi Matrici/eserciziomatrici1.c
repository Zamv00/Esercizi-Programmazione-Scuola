#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    int matrix[4][4];
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

    int rispettata = 1;
    for (int i = 0; i < 4 && rispettata; i++)
    {
        for (int j = 0; j < 4 && rispettata; j++)
        {
            int current = matrix[i][j];
        
            for(int x = i + 1; x < 4; x++){
                if(current > matrix[x][j]){
                    rispettata = 0;
                    break;
                }
            }
    
            for (int y = j + 1; y < 4; y++) {
                if (current > matrix[i][y]) {
                    rispettata = 0;
                    break;
                }
            }

        }
    }

    if (rispettata) {
        printf("\n La matrice rispetta la proprieta!\n");
    } else {
        printf("\n La matrice non rispetta la proprieta!\n");
    }

    
    return 0;
}