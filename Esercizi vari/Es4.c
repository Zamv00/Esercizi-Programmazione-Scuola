#include <stdio.h>


int main(){
    int somma = 0;
    
    for (int i = 10; i <= 100; i++)
    {
        if (i % 5 == 0)
        {
            somma += i;
        }
        
    }
    printf("La sommma e': %d", somma);

    return 0;
}