#include <stdio.h>

float equaz(float a, float b){
    if (a == 0){
        if(b == 0){
            printf("L'equazione è indeterminata\n");
        }

        else
        {
            printf("L'equazione è impossibile\n");
        }
        
    }
    
    else{
        return -(b/a);
    }
    
}


int main(){

    float a, b, x;
    printf("Inserisci a: ");
    scanf("%f", &a);
    printf("Inserisci b: ");
    scanf("%f", &b);
    x = equaz(a, b);
    printf("La x vale: %.2f", x);


    return 0;
}