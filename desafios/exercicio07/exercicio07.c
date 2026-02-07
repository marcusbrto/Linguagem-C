#include <stdio.h>
int main() {
    int idade;
    printf("Digite a idade: ");
    scanf("%d", &idade);
    if (idade <= 20) {
        printf("CATEGORIA SUB-20");
    }else {
        printf("CATEGORIA PROFISSIONAL ");
    }
}