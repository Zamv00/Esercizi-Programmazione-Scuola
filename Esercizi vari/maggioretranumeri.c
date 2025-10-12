#include <stdio.h>

int maggiore (int num1, int num2){
    if (num1 > num2){
        return num1;
    }

    else{
        return num2;
    }
}

int main(){

    int n1, n2;
    int max;
    
    printf("Inserisci il primo numero: \n");
    scanf("%d", &n1);

    printf("Inserisci il secondo numero: \n");
    scanf("%d", &n2);

    max = maggiore(n1, n2);
    printf("Il maggiore tra i due numeri è: %d", max);


    return 0;
}