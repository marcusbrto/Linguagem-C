/*<stdlib.h> - utilidades gerais
 * rand() - numero aleatorio
 * srand() - inicializa o gerador com uma semente
 * atoi(), atof - converte string para int e float
 * exit() - encerra o programa
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int numero = rand() % 101; // entre 0 e 100 fixo

    srand(time(NULL));
    int numero2 = rand() % 101;

    printf("Numero aleatorio fixo: %d", numero);
    printf("\n");
    printf("Numero aleatorio sempre: %d", numero2);
    printf("\n\n");
    //conversao
    char texto[] = "123";

    printf("String: 123\n");

    int valor = atoi(texto);

    printf("Convertido: %d\n", valor);

    return 0;
}