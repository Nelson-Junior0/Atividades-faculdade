#include <stdio.h>

int main()
{
    int vet[5];
    int i;

    for(i = 0; i < 5; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
    }

    printf("Valores multiplicados por 3:\n");

    for(i = 0; i < 5; i++)
    {
        vet[i] = vet[i] * 3;

        printf("%d\n", vet[i]);
    }

    return 0;
}
