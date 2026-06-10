#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	
	printf("\n**************************************************************");
    printf("\n* Aluno: NELSON JUNIOR NEVES DOS SANTOS - RA 00227781        *");
    printf("\n* Programa NJNS-JPA-26 Contar de 1 a 10                      *");
    printf("\n**************************************************************\n\n");
    
    printf(	
	"\n Um professor quer que o computador mostre automaticamente os números usados em uma chamada de"
    "\n alunos."
    "\n O programa deve imprimir os números de 1 até 10 utilizando um laço for."
    );
    
    int i;

    for (i = 1; i <= 10; i++) {
        printf("\n %d", i);
    }

    return 0;
}
