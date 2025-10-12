#include <stdio.h>

int somma(int num1, int num2){
    return num1 + num2;
}

int differenza(int num1, int num2){
    return num1 - num2;
}

int moltiplicazione(int num1, int num2){
    return num1*num2;
}

int divisione(int num1, int num2){
    if(num2 != 0){
        return num1 / num2;
    }

    else{
        printf("Errore: non si puo' effettuare una divisione per zero.\n");
        return 0;
    }
}

int main(){
    int n1, n2, risultato;
    char op;
    
    printf("Inserisci il primo numero: ");
    scanf("%d", &n1);
    printf("Inserisci l'operatore (+, -, /, *): ");
    scanf(" %c", &op);
    printf("Inserisci il secondo numero: ");
    scanf("%d", &n2);

    if (op == '+'){
        risultato = somma(n1, n2);
        printf("La somma tra i due numeri vale %d\n", risultato);    
    }
    else if (op == '-'){
        risultato = differenza(n1, n2);
        printf("La differenza tra i due numeri vale %d\n", risultato);   
    }
    else if (op == '/'){
        risultato = divisione(n1, n2);
        printf("Il risultato della divisione tra i due numeri vale %d\n", risultato);    
    }
    else if (op == '*'){
        risultato = moltiplicazione(n1, n2);
        printf("Il risultato della moltiplicazione tra i due numeri vale %d\n", risultato);   
    }
    else
    {
        printf("Operatore non valido");
    }
    

    return 0;

}