#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	
	printf("\n**************************************************************");
    printf("\n* Aluno: NELSON JUNIOR NEVES DOS SANTOS - RA 00227781        *");
    printf("\n* Programa NJNS-JPA-54  Validar número entre 1 e 5           *");
    printf("\n**************************************************************\n\n");
    
    printf("Um jogo educativo aceita apenas níveis de dificuldade entre 1 e 5.\nO programa deve pedir ao usuário um número dentro desse intervalo e continuar solicitando enquanto o\nvalor digitado for inválido.");
 int nivel;

    do {
        printf("\nDigite um nivel (1 a 5): ");
        scanf("%d", &nivel);

    } while (nivel < 1 || nivel > 5);

    printf("\nNivel escolhido: %d\n", nivel);


    return 0;



}

