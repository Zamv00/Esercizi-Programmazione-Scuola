#include <stdio.h>
void input(int M[3][3]){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++){
            printf("Inserisci il valore di M[%d][%d]: ", i,j);
            scanf("%d", &M[i][j]);
        }
    }
}

void stampa(int M[3][3]){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }
}


void modifica(int M[3][3]){
    for(int i = 0; i < 3;i++){
        M[i][i] = 1;
    }
}

int main(){
    int M[3][3];
    input(M);
    stampa(M);
    modifica(M);
    printf("Inseriamo 1 nella diagonale principale\n");
    stampa(M);

    return 0;
}