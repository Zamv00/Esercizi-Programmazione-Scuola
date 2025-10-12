#include <stdio.h>
#include <math.h>
int potenza(int a, int b){
    
    return pow(a, b);

}



int main(){
    int a, b, ris;
    printf("Inserisci a: ");
    scanf("%d", &a);
    do
    {
        printf("Inserisci b: ");
        scanf("%d", &b);
    } while (b < 0);
    
    ris = potenza(a, b);


    printf("Il risultato di %d elevato alla %d e': %d ", a, b, ris);
   









    return 0;
}