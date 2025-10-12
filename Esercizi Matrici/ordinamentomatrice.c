#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5     //Numero di righe
#define M 5     //Numero di colonne
#define massimo 101     //massimo numero randomico generato
#define minimo 0        //minimo numero randomico generato

void SelectionSort(int V[], int size){
    int min;
    int temp;

    for(int i=0; i<size; i++){
        min = i;                        //Assegnamo l'indice attuale
        for(int j=i+1; j<size; j++){
            if(V[min] > V[j]){
                min = j;
            }
        }

        temp = V[min];
        V[min] = V[i];
        V[i] = temp;
    }
}

void AllSort(int m[N][M]){
    int arr[(N*M)];
    int k=0;

    //copia valori matrice in un array
    for(int i=0; i < N; i++){
        for(int j=0; j<M; j++){
            arr[k] = m[i][j];
            k++;
        }
    }

    SelectionSort(arr, N*M);

    //Assegnazione dell'array alla matrice
    k = 0;          //Annulliamo il valore di k precedentemente utilizzato
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            m[i][j] = arr[k];
            k++;
        }
    }
}

void RawSort(int m[N][M]){
    for(int i=0; i<N; i++){
        SelectionSort(m[i], N);
    }
}

void ColSort(int m[N][M]){
    int Col[N];
    for(int j=0; j<M; j++){         //collezzioniamo tutte le colonne scorrendo riga per riga
        for(int i=0; i<N; i++){
            Col[i] = m[i][j];
        }

        SelectionSort(Col, N);

        //Sostituzione alla seguente colonna

        for(int z=0; z<N; z++){
            m[z][j] = Col[z];
        }
    }
}

void PrintM(int m[N][M]){
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            printf("%d\t", m[i][j]);
        }

        printf("\n\n");
    }
}

void FillRandom(int m[N][M]){
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            m[i][j] = minimo + rand() % (massimo-minimo);
        }
    }
}

int main(){
    srand(time(0));     //impostiamo seme del rand()
    int matrix[N][M];
    FillRandom(matrix);     //Riempe la matrice con numeri randomici

    //Decommenta le seguenti funzioni per eserguirle
    //AllSort(matrix);      printf("All Sort:\n");          //esegue un ordinamento di tutta la matrice
    //RawSort(matrix);      printf("Raw Sort:\n");          //esegue un ordinamento di tutte le righe
    //ColSort(matrix);      printf("Col Sort:\n");          //esegue un ordinamento di tutte le colonne
    PrintM(matrix);         //Stampa la matrice a schermo
}