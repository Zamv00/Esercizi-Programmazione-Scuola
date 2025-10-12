#include <stdio.h>

int input(){
    int n;
    printf("Inserisci un numero: ");
    scanf("%d", &n);

    return n;
}

int primo(int n){

    for (int i = 2; i < (n/2); i++)
    {
        if(n % i == 0){
            return 0; //Il numero non è primo
        }
    }
    return 1; //Il numero è primo)
}

void ris(){
    int n = input();
    if(primo(n)){
        printf("%d e' un numero primo", n);
    }
    else{
        printf("%d non e' un numero primo", n);
    }
}

int main(){
    ris();

    return 0;
}