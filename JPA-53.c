#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	
	printf("\n**************************************************************");
    printf("\n* Aluno: NELSON JUNIOR NEVES DOS SANTOS - RA 00227781        *");
    printf("\n* Programa NJNS-JPA-53  Confirmar saída com 's'              *");
    printf("\n**************************************************************\n\n");
    
    printf("Um programa de cadastro possui um menu simples de opções.\nApós cada operação, o sistema deve perguntar se o usuário deseja sair.\nO menu continuará aparecendo até\nque o usuário digite a letra “s”.");

char opcao;

    do {
        printf("\nMenu de cadastro\n");
        printf("Operacao realizada.\n");

        printf("Deseja sair? (s/n): ");
        scanf(" %c", &opcao);

    } while (opcao != 's');

    printf("Programa encerrado.\n");

    return 0;


}

