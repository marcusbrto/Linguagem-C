#include <stdio.h>

int soma(int *a, int *b){
    return *a + *b;
}

int main(){
    int numero1 = 3, numero2 = 2;

    printf("Soma: %d\n", soma(&numero1, &numero2));

    return 0;
}