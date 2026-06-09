#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	
	printf("\n**************************************************************");
    printf("\n* Aluno: NELSON JUNIOR NEVES DOS SANTOS - RA 00227781        *");
    printf("\n* Programa NJNS-JPA-22 Par ou ímpar                          *");
    printf("\n**************************************************************");
    
    printf(
	"\n Em um jogo educativo, o participante digita um número para descobrir sua classificação."
	"\n O programa deve verificar se o número informado é par ou ímpar."
	);
    
    
    
    int numero;
	
	printf("\n digite um numero para descobrir sua classificação: ");
    scanf("%d", &numero);
    
    if (numero % 2 == 0) {
        printf("\n O numero %d e PAR.", numero);
    } else {
        printf("\n O numero %d e IMPAR.", numero);
    }

    return 0;
    
}
