#include <stdio.h>

int scambio_var(int *a, int *b){
    int temp; // Dichiariamo la variabile temporanea
    temp = *a; // La variabile puntatore a contiene l'indirizzo di memoria di n1, usando * la dereferenziamo
    *a = *b; // Mettiamo il valore di b dentro a
    *b = temp; // Mettiamo il valore di temp (a) dentro b
}

int main(){
    int n1, n2;
    printf("Inserisci n1: ");
    scanf("%d", &n1);
    printf("Inserisci n2: ");
    scanf("%d", &n2);
    scambio_var(&n1, &n2); //Passiamo gli indirizzi di memoria di a e b a n1 e n2
    printf("n1 = %d, n2 = %d", n1, n2 );
    return 0;
}