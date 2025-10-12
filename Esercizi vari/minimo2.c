#include <stdio.h>

int minimo(int n1, int n2){
    if(n1 > n2){
        return n2;
    }
    else if (n2 > n1){
        return n1;
    }
    else{
        return 0;
    }
}


int main(){
    int n1, n2, minore;
    printf("Inserisci il primo numero: ");
    scanf("%d", &n1);
    printf("Inserisci il secondo numero: ");
    scanf("%d", &n2);

    minore = minimo(n1, n2);
    if(minore == 0){
        printf("I due numeri sono uguali.");
    }
    else{
        printf("Il minimo tra %d e %d e': %d", n1, n2, minore);
    }
    
    return 0;
}