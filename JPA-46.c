#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	
	printf("\n**************************************************************");
    printf("\n* Aluno: NELSON JUNIOR NEVES DOS SANTOS - RA 00227781        *");
    printf("\n* Programa NJNS-JPA-46  Contar de 1 a 10                     *");
    printf("\n**************************************************************\n\n");
    
    printf(	
    "Uma escola está ensinando estruturas de repetição para iniciantes em programação.\n programa deve imprimir os números de 1 até 10, um por linha, utilizando do...while."
    );

int i = 1;

    do {
        printf("\n %d\n", i);
        i++;

    } while (i <= 10);

    return 0;


}

