#include <stdio.h>

int main()
{
    int vet[6];
    int i;

    for(i = 0; i < 6; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
    }

    printf("Valores dobrados:\n");

    for(i = 0; i < 6; i++)
    {
        vet[i] = vet[i] * 2;

        printf("%d\n", vet[i]);
    }

    return 0;
}
