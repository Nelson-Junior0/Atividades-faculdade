#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	
	printf("\n**************************************************************");
    printf("\n* Aluno: NELSON JUNIOR NEVES DOS SANTOS - RA 00227781        *");
    printf("\n* Programa JPA-43 Soma dos pares entre 1 e 100               *");
    printf("\n**************************************************************\n\n");
    
    printf(	
    "professor propôs um desafio para calcular apenas os números pares de uma sequência.\nO programa deve somar todos os números pares entre 1 e 100 utilizando while."
    );

  int i = 1;
    int soma = 0;

    while (i <= 100) {
        if (i % 2 == 0) {
            soma = soma + i;
        }

        i++;
    }

    printf("\nA soma dos numeros pares de 1 a 100 e: %d\n", soma);

    return 0;


}


