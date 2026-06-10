#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	
	printf("\n***************************************************************");
    printf("\n* Aluno: NELSON JUNIOR NEVES DOS SANTOS - RA 00227781         *");
    printf("\n* Programa NJNS-JPA-28 Soma dos 100 primeiros números naturais*");
    printf("\n***************************************************************\n\n");
    
    printf(	
"\n Uma loja deseja calcular rapidamente a soma de uma sequência de números para um relatório simples."
"\n O programa deve calcular a soma dos números de 1 até 100 utilizando um laço for."
    );
    
    int i, soma = 0;

    for (i = 1; i <= 100; i++) {
        soma = soma + i;
    }

    printf("\n A soma dos numeros de 1 a 100 e: %d\n", soma);

    return 0;
    
    
}
