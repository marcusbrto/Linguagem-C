#include <stdio.h>

void imprimirVetor(int vetor[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", vetor[i]);
    }
}
//FUncao para particionar o vetor usando o pivo do meio
int particionar(int vetor[], int inicio, int fim){
    int meio = inicio + (fim - inicio) / 2;
    //Troca vetor[meio] <-> vetor[fim]
    int temp = vetor[meio];
    vetor[meio] = vetor[fim];
    vetor[fim] = temp;

    int pivo = vetor[fim];
    int i = inicio - 1;

    for (int j = inicio; j < fim; j++){
        if(vetor[j] < pivo){
            i++;
            //Troca vetor[i] <-> vetor[j]
            int temp = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = temp;
        }
    }
    //TRoca vetor[i + 1] <-> vetor[fim]
    temp = vetor[i + 1];
    vetor[i + 1] = vetor[fim];
    vetor[fim] = temp;

    return i + 1;
}

void quickSort(int vetor[],int inicio, int fim){
    if(inicio < fim){
        int indicePivo = particionar(vetor, inicio, fim);
        quickSort(vetor, inicio, indicePivo - 1);//Parte esquerda
        quickSort(vetor, indicePivo + 1, fim);//parte direita
    }
}
int main()
{
    int vetor[] = {9, 3, 11, 5, 7, 2, 4, 8, 1, 6,13,10,12,0,-1};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    printf("Vetor original: \n");
    imprimirVetor(vetor, tamanho);

    quickSort(vetor, 0, tamanho - 1);

    printf("\nVetor ordenado: \n");
    imprimirVetor(vetor, tamanho);

    return 0;
}