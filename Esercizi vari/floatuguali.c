#include <stdio.h>
#include <math.h>

int uguali(double n1, double n2){
    double tolleranza = 1e-9;
    if(fabs(n1 - n2) < tolleranza){
        return 1;
    }
    else{
        return 0;
    }
}

int main(void) {
    double a = sqrt(7);
    double quad = a * a;
    
    printf("Il quadrato di a e' ");
    if (quad == 7.0)
        printf("esattamente pari a");
    else if (uguali(quad, 7) == 1)
        printf("approssimativamente pari a ");
    else
        printf("diverso da ");
        printf("7\n");
    
    return 0;
}