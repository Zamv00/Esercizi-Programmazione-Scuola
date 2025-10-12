#include <stdio.h>
int rapporto_rette(float m1, float m2){
    float tolleranza = 0.01;
    if(m1 == m2){
        return 0;
    }
    if((m1 * m2 +1 < tolleranza) && (-(m1 * m2 + 1) < tolleranza)) {
        return 1;
    }
    else{
        return 2;
    }
}


int main(){
    float m1, m2;
    int ris;
    printf("Inserisci il coefficiente angolare: ");
    scanf("%f", &m1);
    printf("Inserisci il secondo coefficiente angolare: ");
    scanf("%f", &m2);

    ris = rapporto_rette(m1, m2);
    if (ris == 0){
        printf("Le due rette sono parallele");
    }
    else if(ris == 1){
        printf("Le due rette sono perpendicolari");
    }
    else{
        printf("Le due rette non sono ne parallele ne perpendicolari");
    }


}