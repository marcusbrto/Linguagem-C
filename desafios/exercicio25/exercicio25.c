#include <stdio.h>

float media (float num1, float num2)
{
    return (num1+num2)/2;
}

int main()
{
    float numero1,numero2;

    printf("Digite a primeira nota: ");
    scanf("%f",&numero1);
    printf("Digite a segunda nota: ");
    scanf("%f",&numero2);

    printf("A media foi: %.2f",media(numero1,numero2));

    return 0;
}