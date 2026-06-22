#include <stdio.h>

int main()
{
    int vet[10];
    int soma = 0;
    int i;

    for(i = 0; i < 10; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
    }

    for(i = 0; i < 10; i++)
    {
        if(vet[i] > 10)
        {
            soma += vet[i];
        }
    }

    printf("Soma dos numeros maiores que 10: %d", soma);

    return 0;
}
