#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	
	printf("\n**************************************************************");
    printf("\n* Aluno: NELSON JUNIOR NEVES DOS SANTOS - RA 00227781        *");
    printf("\n* Programa NJNS-JPA-60  O Validador de Dias Úteis            *");
    printf("\n**************************************************************\n\n");
    
    printf("O sistema de catracas de uma empresa precisa saber se um funcionário pode entrar no prédio.\nNo sábado e no domingo a empresa fecha, e a entrada só é permitida de segunda a sexta-feira.\nO Exercício: Crie um script que receba um número de 1 a 7 (onde 1 é Domingo, 2 é Segunda, e\nassim por diante). O programa deve agrupar os casos e exibir se é um dia de trabalho ou\ndescanso:\n2, 3, 4, 5, 6: Exibir *Dia Útil. Acesso liberado para o trabalho.*\n1, 7: Exibir *Fim de Semana. Prédio fechado.*\nOutros números: *Número de dia inválido.*");

int dia;

    printf("Digite o numero do dia (1 a 7): ");
    scanf("%d", &dia);

    switch(dia) {

        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
            printf("Dia Util. Acesso liberado para o trabalho.\n");
            break;

        case 1:
        case 7:
            printf("Fim de Semana. Predio fechado.\n");
            break;

        default:
            printf("Numero de dia invalido.\n");
    }

    return 0;


}

