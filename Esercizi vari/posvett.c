/******************************************************************************
dato un vettore numerico di N posizioni determinare la somma delle
componenti positive e negative
*******************************************************************************/
#include <stdio.h>
void input(int *arr,int *size){
    do{
     printf("Da quanti elementi è composto l'array?: ");
     scanf("%d",size);
    } while(*size<=0);
    
    for(int i=0; i<*size; i++){
        printf("Inserisci il %d elemento dell array: ",i+1);
        scanf("%d",&arr[i]);
    }
}

void somma(int *arr,int size, int *somma_p, int *somma_n){
    for(int i=0; i<size; i++){
        if (arr[i] >= 0) {
        *somma_p += arr[i];
        printf("%d\n", *somma_p);
        }
        
        else {
       *somma_n += arr[i];
       printf("%d\n", *somma_n);
        }
    }
}
    

void stampa(int *somma_p,int *somma_n){
    printf("La somma degli elementi positivi è %d quella degli elementi negativi è %d",*somma_p,*somma_n);
}

int main()
{
    int arr[100],size, sp = 0,sn = 0;
    input(arr,&size);  
    somma(arr,size,&sp,&sn);
    stampa(&sp,&sn);
    
    return 0;
}