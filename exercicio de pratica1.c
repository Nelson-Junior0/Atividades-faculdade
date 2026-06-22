#include <stdio.h>

int main()
{
    int vet[5];
    int soma = 0;
    int i;

    for(i = 0; i < 5; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);

        soma += vet[i];
    }

    printf("Soma: %d", soma);

    return 0;
}
