#include <stdio.h>
#include <math.h>

float dist(int x1, int y1, int x2, int y2){
    int diffx, diffy, quadx, quady;
    float rad;
    diffx = x1 - x2;
    diffy = y1 - y2;
    
    quadx = diffx * diffx;
    quady = diffy * diffy;

    rad = sqrt(quadx + quady);
    return rad;
}


int main(){
    int x1, y1, x2, y2;
    float distanza;
    printf("Inserisci l'ascissa del primo punto: ");
    scanf("%d", &x1);
    printf("Inserisci l'ordinata del primo punto: ");
    scanf("%d", &y1);
    printf("Inserisci l'ascissa del secondo punto: ");
    scanf("%d", &x2);
    printf("Inserisci l'ordinata del secondo punto: ");
    scanf("%d", &y2);

    distanza = dist(x1, y1, x2, y2);
    printf("La distanza tra i due punti e': %.2f\n",distanza);



    return 0;
}