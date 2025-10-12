#include <stdio.h>

int minimo(int n1, int n2, int n3){
   int min = n1;
   if (n2 < min){
    min = n2;
    }
   if (n3 < min){
    min = n3;
   }
   return min;
}


int main(){
    int n1, n2, n3, minore;
    printf("Inserisci il primo numero: ");
    scanf("%d", &n1);
    printf("Inserisci il secondo numero: ");
    scanf("%d", &n2);
    printf("Inserisci il terzo numero: ");
    scanf("%d", &n3);

    
    
    if(n1 == n2 == n3){
        printf("I tre numeri sono uguali.");
    }
    else{
        minore = minimo(n1, n2, n3);
        printf("Il minimo tra %d e %d e %d e': %d", n1, n2, n3, minore);
    }
    
    return 0;
}