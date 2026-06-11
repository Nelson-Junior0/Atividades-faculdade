#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	
	printf("\n**************************************************************");
    printf("\n* Aluno: NELSON JUNIOR NEVES DOS SANTOS - RA 00227781        *");
    printf("\n* Programa NJNS-JPA-36 Contar até 10 com while               *");
    printf("\n**************************************************************\n\n");
    
    printf(	
    "Uma criança está aprendendo contagem numérica no computador.\nO programa deve imprimir os números de 1 até 10 usando while."
    );
    
    int i = 1;

    while (i <= 10) {
        printf(" \n %d\n", i);
        i++;
    }

    return 0;
}


