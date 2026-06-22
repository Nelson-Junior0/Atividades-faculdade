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

    printf("Vetor invertido:\n");

    for(i = 4; i >= 0; i--)
    {
        printf("%d\n", vet[i]);
    }

    return 0;
}
