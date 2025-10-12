#include <stdio.h>

int input(){
    int n;
    printf("Inserisci un numero: ");
    scanf("%d", &n);
    return n;
}

int c_multipli(int n){
    int multipli = 0;
    for (int i = 1; i < n; i++)
    {
        if(i%5 == 0){
            multipli +=1;
        }
    }
    printf("I numeri multipli di 5 compresi tra 1 e %d sono: %d", n, multipli);
    
}

int main(){
    int num = input();
    c_multipli(num);
    return 0;
}