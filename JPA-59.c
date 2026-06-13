#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	
	printf("\n**************************************************************");
    printf("\n* Aluno: NELSON JUNIOR NEVES DOS SANTOS - RA 00227781        *");
    printf("\n* Programa NJNS-JPA-59  Assistente de Direção (GPS)          *");
    printf("\n**************************************************************\n\n");
    
    printf("Um robô de entregas autônomo está andando por uma fábrica. Ele lê placas com letras que\nindicam para qual direção ele deve virar nas esquinas dos corredores.\nO Exercício: Faça um programa que leia uma letra maiúscula digitada e exiba o comando de voz\ndo robô:\n'N': *Seguir para o Norte.*\n'S': *Seguir para o Sul.*\n'L': *Virar à Leste (Direita).*\n'O': *Virar à Oeste (Esquerda).*\nQualquer outra letra: *Comando inválido! Pare o robô.*");

char direcao;

    printf("\nDigite a direcao (N, S, L, O): ");
    scanf(" %c", &direcao);

    switch(direcao) {

        case 'N':
            printf("Seguir para o Norte.\n");
            break;

        case 'S':
            printf("Seguir para o Sul.\n");
            break;

        case 'L':
            printf("Virar a Leste (Direita).\n");
            break;

        case 'O':
            printf("Virar a Oeste (Esquerda).\n");
            break;

        default:
            printf("Comando invalido! Pare o robo.\n");
    }

    return 0;


}

