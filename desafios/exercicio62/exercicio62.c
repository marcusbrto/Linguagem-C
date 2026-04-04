#include <stdio.h>
#include <string.h>

char pilha[100];
int topo = -1;

void push(char c)
{
    topo++;
    pilha[topo] = c;
}

void pop()
{
    if (topo >= 0)
    {
        topo--;
    }
}

int main()
{
    char expressao[100];
    int balanceado = 1;

    printf("Digite a expressao: ");
    scanf("%s", expressao);

    int tamanho = strlen(expressao);

    for (int i = 0; i < tamanho; i++)
    {
        if (expressao[i] == '(')
        {
            push('(');
        }
        else if (expressao[i] == ')')
        {
            if (topo == -1)
            {
                balanceado = 0;
                break;
            }
            else
            {
                pop();
            }
        }
    }

    if (balanceado && topo == -1)
    {
        printf("Balanceado\n");
    }
    else
    {
        printf("Desbalanceado\n");
    }

    return 0;
}