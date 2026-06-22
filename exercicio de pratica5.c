#include <stdio.h>

int main()
{
    int vet[8];
    int cont = 0;
    int i;

    for(i = 0; i < 8; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
    }

    for(i = 0; i < 8; i++)
    {
        if(vet[i] > 0)
        {
            cont++;
        }
    }

    printf("Quantidade de numeros positivos: %d", cont);

    return 0;
}
