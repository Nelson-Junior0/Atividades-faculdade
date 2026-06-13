#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	
	printf("\n**************************************************************");
    printf("\n* Aluno: NELSON JUNIOR NEVES DOS SANTOS - RA 00227781        *");
    printf("\n* Programa NJNS-JPA-50  Número positivo obrigatório          *");
    printf("\n**************************************************************\n\n");
    
    printf("Um aplicativo bancário aceita apenas valores positivos para depósitos.\nO programa deve pedir ao usuário um número positivo e continuar solicitando enquanto ele digitar valores\nmenores ou iguais a zero.");

int numero;

    do {
        printf("\nDigite um numero positivo: ");
        scanf("%d", &numero);

    } while (numero <= 0);

    printf("\nValor aceito: %d\n", numero);

    return 0;


}

