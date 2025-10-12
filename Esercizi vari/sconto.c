#include <stdio.h>

float calc_sconto(float prezzo, int s){
    return ((prezzo * (100 - s)) / 100);
}

int main(){
    int sconto;
    float costo, prezzo_scontato;
    
    printf("Inserisci il costo dell'articolo: ");
    scanf("%f", &costo);
    printf("Inserisci la percentuale di sconto sull'articolo: ");
    scanf("%d", &sconto);
    
    prezzo_scontato = calc_sconto(costo, sconto);
    
    printf("Il costo dell'articolo da %.2f euro applicando uno sconto del %d%% e': %.2f euro", costo, sconto, prezzo_scontato);




    return 0;
}