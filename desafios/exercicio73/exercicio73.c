#include <stdio.h>
//Continuidade do ex72, o primeiro escreve e esse le o arquivo
int main(){

    FILE *arquivo = fopen("../exercicio72/alunos.txt", "r");
    char nome[100];
    int idade;

    if(arquivo == NULL){
        printf("Erro ao abrir arquivo!\n");
        return 1;
    }

    while(fscanf(arquivo, "%s %d", nome, &idade) != EOF){
        printf("Nome: %s | Idade: %d\n", nome,idade);
    }

    fclose(arquivo);

    return 0;
}