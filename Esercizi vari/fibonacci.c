#include <stdio.h>

int input(){
    int n;
    do
    {
        printf("Inserisci un numero: ");
        scanf("%d", &n);
    
    } while (n <= 1);
    

    return n;
}

int fibonacci(int num){
    int x = 0, y = 1, z;
    printf("%d ", x);
    printf("%d ", y);
    
    for (int i = 0; i < num - 2;){
        
        z = x + y;
        printf("%d ", z);
        x = y;
        y = z;
        i += 1;

    }
    
}

int main(){
    int num = input();
    fibonacci(num);
    return 0;
}