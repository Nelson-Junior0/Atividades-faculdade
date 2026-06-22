#include <stdio.h>

int main()
{
    float nota[4];
    float soma = 0;
    float media;
    int i;

    for(i = 0; i < 4; i++)
    {
        printf("Digite a nota: ");
        scanf("%f", &nota[i]);

        soma += nota[i];
    }

    media = soma / 4;

    printf("Media: %.2f", media);

    return 0;
}
