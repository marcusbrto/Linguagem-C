#include <stdio.h>
#include <string.h>

int main()
{
    char nomes[5][50];
    char letra;
    int j,i;

    for(j=0;j<5;j++)
    {
        printf("Digite o nome %d: ",j+1);
        scanf("%s",nomes[j]);
    }
    //Entrada da letra a ser buscada
    printf("\nDigite a letra que deseja buscar: ");
    scanf(" %c", &letra);

    for(j=0;j<nomes[j];j++){
	if(strchr(nomes[j],letra)!=NULL){
		printf("%s\n",nomes[j]);
	}
}

}
