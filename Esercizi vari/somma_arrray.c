#include <stdio.h>

void input(int *arr, int *size){
    do
    {
        printf("Quanti elementi ha l'array?: ");
        scanf("%d", size);
    } while (size <= 0);
    
    for (int i = 0; i < *size; i++)
    {
        printf("Inserisci il %d elemento dell'array: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    

}

int somma_array(int *arr, int size){
    int somma = 0;
    for (int i = 0; i < size; i++)
    {
        somma += arr[i];
    }
    
    return somma;

}

int main(){
    int arr[100], size;
    input(arr, &size);
    int ris = somma_array(arr, size);
    printf("La somma degli elementi dell'array vale: %d", ris);


    return 0;
}