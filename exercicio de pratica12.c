#include <stdio.h>

int main()
{
    int vet[7];
    int cont = 0;
    int i;

    for(i = 0; i < 7; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
    }

    for(i = 0; i < 7; i++)
    {
        if(vet[i] < 0)
        {
            cont++;
        }
    }

    printf("Quantidade de numeros negativos: %d", cont);

    return 0;
}
