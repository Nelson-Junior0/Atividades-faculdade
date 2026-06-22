#include <stdio.h>

int main()
{
    int idade[5];
    int i;

    for(i = 0; i < 5; i++)
    {
        printf("Digite a idade: ");
        scanf("%d", &idade[i]);
    }

    for(i = 0; i < 5; i++)
    {
        if(idade[i] >= 18)
        {
            printf("%d - Maior de idade\n", idade[i]);
        }
        else
        {
            printf("%d - Menor de idade\n", idade[i]);
        }
    }

    return 0;
}
