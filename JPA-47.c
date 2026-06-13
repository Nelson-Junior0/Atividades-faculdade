#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	
	printf("\n**************************************************************");
    printf("\n* Aluno: NELSON JUNIOR NEVES DOS SANTOS - RA 00227781        *");
    printf("\n* Programa NJNS-JPA-47  Tabuada de um número                 *");
    printf("\n**************************************************************\n\n");
    
    printf(	
    "Um estudante quer praticar multiplicação usando a estrutura do...while.\nO programa deve receber um número e exibir sua tabuada de 1 até 10."
    );


int numero, i = 1;

    printf("\nDigite um numero: ");
    scanf("%d", &numero);

    do {
        printf("%d x %d = %d\n", numero, i, numero * i);
        i++;

    } while (i <= 10);

    return 0;

}
