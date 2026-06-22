#include <stdio.h>

int main()
{
    float vet[5];
    int i;

    for(i = 0; i < 5; i++)
    {
        printf("Digite um numero: ");
        scanf("%f", &vet[i]);
    }

    printf("Valores divididos por 2:\n");

    for(i = 0; i < 5; i++)
    {
        vet[i] = vet[i] / 2;

        printf("%.2f\n", vet[i]);
    }

    return 0;
}
