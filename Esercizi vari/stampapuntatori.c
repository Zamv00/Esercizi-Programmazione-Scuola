#include <stdio.h>

int main(){
    int n = 10;
    int *p = &n;
    printf("%d\n", n);
    printf("%p\n", p);
    *p = 12;
    printf("%d", n);

    return 0;
}