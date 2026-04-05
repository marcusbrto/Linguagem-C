#include <stdio.h>

int fibonacci(int numero){
    //caso base
    if (numero == 0){
        return 0;
    }else if(numero == 1){
        return 1;
    }
    return fibonacci(numero - 1) + fibonacci(numero - 2);
}

int main(){
    int n;

    printf("Digite a qntd de fibonacci: ");
    scanf("%d", &n);

    printf("Sequencia de Fibonacci: \n");

    for (int i = 0; i < n; i++){
        printf("%d ", fibonacci(i));
    }

        return 0;
}