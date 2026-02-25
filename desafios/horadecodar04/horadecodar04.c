#include <stdio.h>

int main(){
    float temperatura,umidade;
    unsigned int estoque,estoque_minimo = 1000;

    printf("Entre com a temperatura:");
    scanf("%f",&temperatura);
    printf("Entre com a umidade:");
    scanf("%f",&umidade);
    printf("Entre com a estoque:");
    scanf("%u",&estoque);

    if (temperatura > 30){
        printf("Temperatura esta alta\n");
    }else{
        printf("Temperatura esta dentro dos parametros\n");
    }

    if (umidade > 50){
        printf("Umidade esta elevada\n");
    }else{
        printf("Umidade esta dentro dos parametros\n");
    }

    if (estoque < estoque_minimo){
        printf("Estoque abaixo do minimo\n");
    }else{
        printf("Estoque normal!\n");
    }

}