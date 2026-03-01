#include <stdio.h>

int maior(int a, int b,int c)
{
    if(a>=b && a>=c)
        return a;
    else if(b>=a && b>=c)
        return b;
    else
        return c;
}

int main()
{
    int num1,num2,num3;

    printf("Digite o primeiro numero: ");
    scanf("%d",&num1);
    printf("Digite o segundo numero: ");
    scanf("%d",&num2);
    printf("Digite o terceiro numero: ");
    scanf("%d",&num3);

    printf("Maior numero: %d\n",maior(num1,num2,num3));

    return 0;
}