#include <stdio.h>
void input(float *x1, float *x2,float *y1, float *y2){
    
    printf("Inserisci l'ascissa del primo punto: ");
    scanf("%f", x1);
    printf("Inserisci l'ordinata del primo punto: ");
    scanf("%f", y1);
    printf("Inserisci l'ascissa del secondo punto: ");
    scanf("%f", x2);
    printf("Inserisci l'ordinata del secondo punto: ");
    scanf("%f", y2);
}

float p_medio(float x1, float x2, float y1, float y2, float *mx, float *my){
    *mx = (x1 + x2)/2;
    *my = (y1 + y2)/2;
}

int main(){
    float x1,x2,y1,y2,mx,my;
    input(&x1, &x2, &y1, &y2);
    p_medio(x1, x2, y1, y2, &mx, &my);
    printf("mx: %.2f, my: %.2f", mx, my);

    return 0;
}