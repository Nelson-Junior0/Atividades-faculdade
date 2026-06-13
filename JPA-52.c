#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	
	printf("\n**************************************************************");
    printf("\n* Aluno: NELSON JUNIOR NEVES DOS SANTOS - RA 00227781        *");
    printf("\n* Programa NJNS-JPA-52  Soma até o número ser múltiplo de 10 *");
    printf("\n**************************************************************\n\n");
    
    printf("Um sistema de pontuação recebe vários valores digitados pelo usuário.\nOs números devem ser somados continuamente até que seja digitado um número múltiplo de 10. Ao final, o\nprograma deve mostrar a soma total dos valores informados.");

 int numero;
    int soma = 0;

    do {
        printf("\nDigite um numero: ");
        scanf("%d", &numero);

        soma = soma + numero;

    } while (numero % 10 != 0);

    printf("\nSoma total: %d\n", soma);

    return 0;


}

