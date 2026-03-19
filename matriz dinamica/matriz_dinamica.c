#include <stdio.h>

int main()
{
    int notas[3][2];

    for(int i=0;i<3;i++)//linhas
    {
        for(int j=0;j<2;j++)//colunas
        {
            printf("Digite a nota do aluno %d prova %d: ",i+1,j+1);
			scanf("%d",&notas[i][j]);
        }
        printf("\n");
    }
	printf("======= NOTAS =======\n");
	for(int i=0;i<3;i++)
    {
		printf("Nota %d: ",i+1);
        for(int j=0;j<2;j++)
        {
            printf("%d ",notas[i][j]);
        }
        printf("\n");
    }
}