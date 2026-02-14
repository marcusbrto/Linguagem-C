#include <stdio.h>

int main()
{
    /*
     * Soma (+)
     * Subtração (-)
     * Multiplicação (*)
     * Divisão(/)
     */

//declaração de variaveis
    int numero1, numero2;
    int soma, subtracao, multiplicacao, divisor;

//recebe o primeiro numero
	printf("Digite o primeiro numero: ");
	scanf("%d", &numero1);
//recebe o segundo numero
	printf("Digite o segundo numero: ");
	scanf("%d", &numero2);

//operação soma
    soma = numero1 + numero2;
//operação subtração
	subtracao = numero1 - numero2;
//operação multiplicação
	multiplicacao = numero1 * numero2;
//operador divisão
	divisor = numero1 / numero2;

//exibe os resultados
	printf("O resultado da soma eh: %d \n", soma);
	printf("O resultado da subtracao eh: %d \n", subtracao);
	printf("O resultado da multiplicacao eh: %d \n", multiplicacao);
	printf("O resultado da divisor eh: %d \n", divisor);
}