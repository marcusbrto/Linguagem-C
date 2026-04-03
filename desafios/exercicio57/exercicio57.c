#include <stdio.h>

int tamanho_maximo = 10;
int pilha[10];
int topo = -1;

void push(int valor){
    if(topo == tamanho_maximo - 1){
        printf("Erro: pilha cheia\n");
        return;
    }
    topo++;
    pilha[topo];
}

int main(){

    return 0;
}