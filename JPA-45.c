#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	
	printf("\n**************************************************************");
    printf("\n* Aluno: NELSON JUNIOR NEVES DOS SANTOS - RA 00227781        *");
    printf("\n* Programa NJNS-JPA-45 Menu até escolher sair                *");
    printf("\n**************************************************************\n\n");
    
    printf(	
    "Um caixa eletrônico simples apresenta opções ao usuário.\nO programa deve exibir um menu repetidamente até que a opção “sair” seja escolhida."
    );

int opcao = 0;

    while (opcao != 4) {

        printf("\n=== MENU ===\n");
        printf("1 - Consultar saldo\n");
        printf("2 - Depositar\n");
        printf("3 - Sacar\n");
        printf("4 - Sair\n");

        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Saldo consultado.\n");
        } else if (opcao == 2) {
            printf("Deposito realizado.\n");
        } else if (opcao == 3) {
            printf("Saque realizado.\n");
        } else if (opcao == 4) {
            printf("Encerrando sistema...\n");
        } else {
            printf("Opcao invalida.\n");
        }
    }

    return 0;


}


