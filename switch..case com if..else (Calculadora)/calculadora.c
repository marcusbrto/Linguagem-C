#include <stdio.h>

int main(){
	char operador;
	float a,b;

	printf("Digite a operacao: (+,-,*,/) ");
	scanf(" %c",&operador);

	printf("Digite o primeiro valor: ");
	scanf("%f",&a);
	printf("Digite o segundo valor: ");
	scanf("%f",&b);

	switch(operador)
	{
		case '+':
			printf("%.2f %c %.2f = %.2f",a,operador,b,(a + b));
			break;
		case '-':
		printf("%.2f %c %.2f = %.2f",a,operador,b,(a - b));
		break;
		case '*':
		printf("%.2f %c %.2f = %.2f",a,operador,b,(a * b));
		break;
	case '/':
		if(b == 0 && a == 0)
		{
			printf("Nao pode dividir por zero!");
		}
		else
			printf("%.2f %c %.2f = %.2f",a,operador,b,(a / b));
		break;
	}
	defaut:
		printf("Operador invalido!");
}