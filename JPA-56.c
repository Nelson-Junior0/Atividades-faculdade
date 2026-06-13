#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	
	printf("\n**************************************************************");
    printf("\n* Aluno: NELSON JUNIOR NEVES DOS SANTOS - RA 00227781        *");
    printf("\n* Programa NJNS-JPA-56 O Menu do Fast-Food Digital           *");
    printf("\n**************************************************************\n\n");
    
    printf("JPA-56 . O Menu do Fast-Food Digital\nVocê está programando o totem de autoatendimento de uma lanchonete. O cliente vê uma tela\ncom as opções de combos e digita o número do seu pedido.\nO Exercício: Crie um algoritmo que leia um número inteiro de 1 a 4 correspondente ao combo\nescolhido e mostre o nome do prato e o valor:\n1: *Combo Hambúrguer + Batata + Refri - R$ 30,00*\n2: *Combo Pizza Brotinho + Refri - R$ 25,00*\n3: *Combo Salada + Suco Natural - R$ 22,00""\n4:" "Combo Balde de Frango + Molho - R$ 35,00""\nCaso digite qualquer outro número (Default): *Opção inválida! Escolha de 1 a 4.");
 int opcao;

    printf("\nDigite o numero do combo (1 a 4): ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            printf("Combo Hamburguer + Batata + Refri - R$ 30,00\n");
            break;

        case 2:
            printf("Combo Pizza Brotinho + Refri - R$ 25,00\n");
            break;

        case 3:
            printf("Combo Salada + Suco Natural - R$ 22,00\n");
            break;

        case 4:
            printf("Combo Balde de Frango + Molho - R$ 35,00\n");
            break;

        default:
            printf("Opcao invalida! Escolha de 1 a 4.\n");
    }

    return 0;
}

