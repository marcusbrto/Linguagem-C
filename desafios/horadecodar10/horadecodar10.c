#include <stdio.h>

int main()
{
    int index;

    char * nomesAlunos[3][3] = {
        {"Aluno 0", "Pt: 30", "Mat: 90"},
        {"Aluno 1", "Pt: 60", "Mat: 60"},
        {"Aluno 2", "Pt: 90", "Mat: 30"}
    };

    printf("Digite o numero do aluno:\n");
    printf("0 - Aluno\n");
    printf("1 - Aluno\n");
    printf("2 - Aluno\n");
    printf("Opcao:");

    scanf("%d", &index);

    printf("A nota do %s sao: Pt: %s, Mat: %s...\n",nomesAlunos[index][0],nomesAlunos[index][1],nomesAlunos[index][2]);

    return 0;
}