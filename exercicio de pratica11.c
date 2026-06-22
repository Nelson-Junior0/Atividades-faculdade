#include <stdio.h>

int main()
{
    int a[5];
    int b[5];
    int i;

    for(i = 0; i < 5; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &a[i]);
    }

    for(i = 0; i < 5; i++)
    {
        b[i] = a[i];
    }

    printf("Vetor copiado:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d\n", b[i]);
    }

    return 0;
}
