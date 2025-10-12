#include <stdio.h>

int main(){

    int g = 0;
    int x;
    printf("Inserisci un numero: ");
    scanf("%d", &x);
    printf("1\n2\n");

    for (int i = 3; i < x; i++)
    {
        for (int e = 2; e < i/2; e++)
        {
            if (i % e == 0){
                g = 1;
            }
        }
        
        if (g == 0)
        {
             printf("%d\n", i);
        }
        
        g = 0;
    }
    
    return 0;
}