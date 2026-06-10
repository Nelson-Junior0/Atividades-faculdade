#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	
	printf("\n**************************************************************");
    printf("\n* Aluno: NELSON JUNIOR NEVES DOS SANTOS - RA 00227781        *");
    printf("\n* Programa NJNS-JPA-31 Contagem regressiva                   *");
    printf("\n**************************************************************\n\n");
    
    printf(	
    "Uma competição escolar utiliza uma contagem regressiva antes da largada.\n O programa deve mostrar os números de 10 até 1 na tela.");

int i;

    printf("\n Contagem regressiva:\n");

    for (i = 10; i >= 1; i--) {
        printf("%d\n", i);
    }

    return 0;

}
