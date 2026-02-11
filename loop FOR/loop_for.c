#include<stdio.h>

int main(){
	int i;
	float numero, soma = 0;

for(i = 0; i <5; i++){
	printf("Digite o numero %d: ", i + 1);
	scanf("%f", &numero);
	soma = soma + numero;
}
printf("Soma total: %.2f\n", soma);
return 0;
}