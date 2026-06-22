#include <stdio.h>

int main()
{
    int vet[10];
    int i;
    int achou = 0;

    for(i = 0; i < 10; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
    }

    for(i = 0; i < 10; i++)
    {
        if(vet[i] == 5)
        {
            achou = 1;
        }
    }

    if(achou == 1)
    {
        printf("Numero 5 encontrado!");
    }
    else
    {
        printf("Numero 5 nao encontrado!");
    }

    return 0;
}
