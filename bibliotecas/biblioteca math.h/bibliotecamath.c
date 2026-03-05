/* <math.h> - Funcoes matematicas
 *
 * - sqrt() - raiz quadrada
 * - pow() - potencia
 * - abs() / fabs() - valor absoluto
 * - sin(), cos(), tan() - trigonometria
 */

#include <stdio.h>
#include <math.h>

int main()
{
    int base = 2, expoente = 3;

    printf("2 elevado a 3: %.2f\n",pow(base,expoente));

    printf("Raiz quadrada de 25: %.2f\n", sqrt(25));
}