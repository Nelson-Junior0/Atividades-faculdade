#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	
	printf("\n**************************************************************");
    printf("\n* Aluno: NELSON JUNIOR NEVES DOS SANTOS - RA 00227781        *");
    printf("\n* Programa NJNS-JPA-37 Soma de números até digitar zero      *");
    printf("\n**************************************************************\n\n");
    
    float valor, soma = 0;

    printf("\nDigite os valores das compras (0 para finalizar):\n");

    scanf("%f", &valor);

    while (valor != 0) {
        soma = soma + valor;

        scanf("%f", &valor);
    }

    printf("Total da compra: %.2f\n", soma);

    return 0;
}


