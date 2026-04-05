#include <stdio.h>
// #include <stdlib.h>

int main()
{

    FILE *arquivo;
    arquivo = fopen("dados.txt", "r");
    char nome[100];
    
    // system("notepad dados.txt");
    
    if(arquivo == NULL)
    {
        printf("Erro! Nao foi possivel abrir arquivo.\n");

        return 1;
    }

    while(fscanf(arquivo, "%s", nome) != EOF){
        printf("Nome: %s\n", nome);
    }

    fclose(arquivo);

    return 0;
}