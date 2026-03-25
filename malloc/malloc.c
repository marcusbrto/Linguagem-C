#include <stdio.h>
#include <stdlib.h>

int main(){
    int tamanho;
    int *vetor;

    printf("Digite o tamanho do vetor:  ");
    scanf("%d", &tamanho);

    vetor = (int *)malloc(tamanho * sizeof(int));  //aqui deixamos nosso ponteiro com tamanho dinamico

    if(vetor == NULL){
        printf("ERRO! Memória insuficiente.");
        return 1; //Se ele nao conseguir receber o valor nos exibimos que deu errado
    }
    for (int i = 0; i < tamanho; i++){
        vetor[i] = i * 10; //atribuindo valor ao vetor
    }

    printf("Vetor dinamico populado: \n");

    for (int i = 0; i < tamanho; i++)
    {
        printf("%d\n", vetor[i]);
    }

    free(vetor); // isso aqui é muito importante de colocar depois do codigo para nao ficar esse vetor na memoria ram ocupando espaço atoa

    return 0;
}