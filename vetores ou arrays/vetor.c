#include <stdio.h>

int main()
{                //  0  1  2  3  4
    int notas[5] = {10,20,30,40,50}; // Vetor para armazenar 5 notas
    // -> int: Tipo dos valores (numeros inteiros)
    // -> notas: Nome do vetor.
    // -> Numero total de elementos que cabem no vetor.

    for (int i = 0; i < 5; i++)// loop só pra exibir as notas
    {
        printf("Nota %d: %d\n",i+1,notas[i]);
    }

    return 0;
}