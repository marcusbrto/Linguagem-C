#include <stdio.h>

int main() {
    int minutos;
    float segundos,horas;
    printf("Digite o tempo de jogo em minutos: ");
    scanf("%d", &minutos);
    horas = (float)minutos / 60;
    segundos = (float)minutos * 60;
    printf("===========================\n");
    printf("O tempo de jogo em segundos: %.2f \n",segundos);
    printf("O tempo de jogo em horas: %.2f \n",horas);
    printf("O tempo de hogo em minutos: %d \n",minutos);
}