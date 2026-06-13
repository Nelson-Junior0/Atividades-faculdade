#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	
	printf("\n**************************************************************");
    printf("\n* Aluno: NELSON JUNIOR NEVES DOS SANTOS - RA 00227781        *");
    printf("\n* Programa NJNS-JPA - 48  Menu com opção de sair             *");
    printf("\n**************************************************************\n\n");
    
    printf(	"Faça um programa mostrando um menu de opções. Ele fica pedindo para o usuário escolher entre duas opções\n(digitar 1 para mostrar uma mensagem ou 2 para sair) até que o usuário escolha a opção 2. O fluxo de execução é o\nseguinte:\nO programa exibe o menu com as opções: *1 - Mensagem* ou *2 - Sair*.\nSe o usuário escolher 1, ele imprime a mensagem *Você escolheu a mensagem!*.\nO programa continuará executando o menu até que o usuário escolha 2 para sair."
    );


int opcao;

    do {
        printf("\n1 - Mensagem\n");
        printf("2 - Sair\n");
        printf("\nEscolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("\nVoce escolheu a mensagem!\n");
        }

    } while (opcao != 2);

    printf("\nPrograma encerrado.\n");

    return 0;

}

