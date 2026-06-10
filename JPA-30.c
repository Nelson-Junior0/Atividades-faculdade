#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	
	printf("\n**************************************************************");
    printf("\n* Aluno: NELSON JUNIOR NEVES DOS SANTOS - RA 00227781        *");
    printf("\n* Programa NJNS-JPA-30 Fatorial de um número                 *");
    printf("\n**************************************************************\n\n");
    
    printf(	
    "\n Um aluno de matemática precisa calcular o fatorial de alguns números para resolver exercícios escolares./n O programa deve receber um número e calcular seu fatorial utilizando for."
    );
    
    int numero, i;
    long long fatorial = 1;

    printf("\n Digite um numero: ");
    scanf("%d", &numero);

    for (i = 1; i <= numero; i++) {
        fatorial = fatorial * i;
    }

    printf("\n O fatorial de %d e %lld", numero, fatorial);

    return 0;
}
