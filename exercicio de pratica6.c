#include <stdio.h>

int main()
{
    int vet[5];
    int resultado = 100;
    int i;

    for(i = 0; i < 5; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);

        resultado -= vet[i];
    }

    printf("Resultado da subtracao: %d", resultado);

    return 0;
}
