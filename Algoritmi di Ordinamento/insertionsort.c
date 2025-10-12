#include <stdio.h>
void InsertionSort(int arr[] , int n){ //Passiamo alla funzione l'array e la sua dimensione
    for (int i = 1; i < n; i++){  //Scorre l'array dal secondo elemento all'ultimo
        int key = arr[i]; //Memorizziamo l'elemento corrente da inserire nella parte ordinata
        int j = i - 1; //L'indice dell'elemento precedente di quello corrente
        
        while (j >= 0 && arr[j] > key){  //Continuiamo fino a quando non troviamo un elemento minore di key
            arr[j + 1] = arr[j]; //Spostiamo l'elemento maggiore di key di una posizione avanti
            j--; //Scendiamo di una posizione
        }

        arr[j + 1] = key; //Inseriamo key nella posizione corretta
    }
}

int main(){
    int arr[] = {4, 3, 5, 1, 2}; // Il nostro array da ordinare
    int n = 5; //Dimensione dell'array
    InsertionSort(arr, n); //Chiamata alla funzione
    
    for (int i = 0; i < n; i++){ //Stampa dell'array ordinato
        printf("%d ", arr[i]);
    }
    
    return 0;
}