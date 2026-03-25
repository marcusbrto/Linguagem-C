#include <stdio.h>

void troca (int *a, int *b){
    int temp = *a; //é necessario essa variavel pois se a receber valor de b quando b for receber a os dois vao ficar com o mesmo valor
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 10, y = 20;

    printf("Antes da troca: x = %d, y = %d\n", x, y);
    troca(&x, &y); // passa os endereços de x e y

    printf("Depois da troca: x = %d, y = %d\n", x, y);

    return 0;
}