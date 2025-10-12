#include <stdio.h>

int input(){
    int n;
    printf("Inserisci un numero: ");
    scanf("%d", &n);
    return n;
}

int t_divisori(int n){
    for (int i = 1; i < n; i++)
    {
       if(n%i==0){
        printf("%d\n", i);
       }
    }
    
}
int main(){
    int n = input();
    t_divisori(n);

    return 0;
}