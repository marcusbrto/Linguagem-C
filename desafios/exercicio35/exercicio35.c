#include <stdio.h>

int main()
{
    float fps[6], media;
    int total;

    printf("Digite os FPS registrados em 6 momentos:\n");
    for (int i = 0; i < 6; i++)
    {
        printf("Momento %d: ", i+1);
        scanf("%f", &fps[i]);
        total += fps[i];
    }
    media = total / 6;
    printf("Media de FPS: %.2f", media);
}