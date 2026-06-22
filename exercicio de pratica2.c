#include <stdio.h>

int main()
{
    int vet[10];
    int i;

    for(i = 0; i < 10; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
    }

    printf("Numeros pares:\n");

    for(i = 0; i < 10; i++)
    {
        if(vet[i] % 2 == 0)
        {
            printf("%d\n", vet[i]);
        }
    }

    return 0;
}
