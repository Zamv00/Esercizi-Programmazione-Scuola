/******************************************************************************
dato un vettore numerico di N posizioni determinare la somma delle
componenti positive e negative
*******************************************************************************/
#include <stdio.h>

void input(int *arr,int *size){
    do{
     printf("Da quanti elementi e' composto l'array?: ");
     scanf("%d",size);
    } while(*size<=0);
    
    for(int i=0; i<*size; i++){
        printf("Inserisci il %d elemento dell array: ",i+1);
        scanf("%d",&arr[i]);
    }
}

void somma(int *arr,int size, int *somma_p, int *somma_d,int *media_p, int *media_d){
    int cp = 0, cd = 0;
    for(int i=0; i<size; i++){
        if (arr[i] % 2 == 0) {
        *somma_p += arr[i];
        cp++;
        }
        
        else {
        *somma_d += arr[i];
        cd++;
        }
    }
    if (cp > 0){
        *media_p = (*somma_p/cp);
    }
    if (cd > 0){
        *media_d = (*somma_d/cd);  
    }
}
    

void stampa(int *media_p,int *media_d){
    printf("La media degli elementi pari e' %d quella degli elementi dispari e' %d", *media_p,*media_d);
}

int main()
{
    int arr[100],size, sp = 0,sd = 0,mp = 0, md = 0;
    input(arr,&size);  
    somma(arr,size,&sp,&sd,&mp,&md);
    stampa(&mp,&md);
    
    return 0;
}