#include <stdio.h>

void dati(int *n1, int *n2, int *n3){
    printf("Inserisci n1: ");
    scanf("%d", n1);
    printf("Inserisci n2: ");
    scanf("%d", n2);
    printf("Inserisci n3: ");
    scanf("%d", n3);
} 

void maggiore(int n1, int n2, int n3,int *max, int *min){
    *max = n1;
    *min = n1;
    if(n2 > *max){
        *max = n2;
    } 
    if (n3 > *max){
        *max = n3;
    }
    if (n2 < *min){
        *min = n2;
    }
    if (n3 < *min){
        *min = n3;
    }
} 

void stampa(int n1, int n2, int n3, int *max, int *min){
    maggiore(n1, n2, n3, max, min);
    printf("Il numero maggiore e': %d, il numero minore e': %d", *max, *min);
} 

int main()
{
    int n1, n2, n3, max, min;
    dati(&n1, &n2, &n3);
    stampa(n1, n2, n3, &max, &min);

    return 0;
}