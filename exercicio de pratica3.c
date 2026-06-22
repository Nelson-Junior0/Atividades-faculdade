#include <stdio.h>

int main()
{
    int vet[5];
    int maior;
    int i;

    for(i = 0; i < 5; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
    }

    maior = vet[0];

    for(i = 1; i < 5; i++)
    {
        if(vet[i] > maior)
        {
            maior = vet[i];
        }
    }

    printf("Maior valor: %d", maior);

    return 0;
}
