#include <stdio.h>

int main()
{
    /* Incremento (++)
     * Pré-Incremento ++a
     * Pós-Incremento a++
     * Decremento (--)
     * Pré-Decremento --a
     * Pós-Descremento a--
     */

    int num1 = 1, resultado;

    printf("Antes incremento: %d\n",num1);
    //num1 = num1 + 1;
    //num1 += 1;
    //pos incremento:
    //resultado = num1;
    //numero++;

    resultado = num1++;
    //Usa primeiro, depois incrementa
    printf("Apos pos-incremento - Numero 1: %d e resultado %d\n",num1,resultado);

    resultado = ++num1;
    //Incrementa primeiro, depois usa
    printf("Apos pre-incremento - Numero 1: %d e resultado %d\n",num1,resultado);

    resultado = num1--;
    //Usa primeiro, depois decrementa
    printf("Apos pos-decremento - Numero 1: %d e resultado %d\n",num1,resultado);

    resultado = --num1;
    //decrementa primeiro, depois usa
    printf("Apos pre-decremento - Numero 1: %d e resultado %d\n",num1,resultado);
}