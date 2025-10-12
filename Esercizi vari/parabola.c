#include <stdio.h>


float acquisizione_a(){
    float a;
    printf("Inserisci a: ");
    scanf("%f", &a);
    return a;
}

float acquisizione_b(){
    float b;
    printf("Inserisci b: ");
    scanf("%f", &b);
    return b;
}

float acquisizione_c(){
    float c;
    printf("Inserisci c: ");
    scanf("%f", &c);
    return c;
}


float calcolo_verticex(float a, float b, float c){
    float vx;
    
    vx = -(b / (2*a)); 

    return vx; 

}

float calcolo_verticey(float a, float b, float c, float xv){
    float vy;

    vy = (a*(xv*xv)) +(b*xv) + c;

    return vy; 

}


float calcolo_fuocoy(float yv, float a){
    float yf;
    yf = yv + (1/(4*a));

    return yf;
    
}

void stampa(float xv, float yv, float yf){
    printf("Le coordinate del vertice sono: %.2f, %.2f\n", xv, yv);
    printf("Le coordinate del fuoco sono: %.2f, %.2f", xv, yf);
}


int main(){
    float a,b,c,xv,yv,yf;
    a = acquisizione_a();
    b = acquisizione_b();
    c = acquisizione_c();
    xv = calcolo_verticex(a,b,c);
    yv = calcolo_verticey(a,b,c, xv);
    yf = calcolo_fuocoy(yv, a);
    stampa(xv,yv,yf);


    return 0;
}
