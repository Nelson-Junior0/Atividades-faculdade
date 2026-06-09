#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	
	printf("\n**************************************************************");
    printf("\n* Aluno: NELSON JUNIOR NEVES DOS SANTOS - RA 00227781        *");
    printf("\n* Programa NJNS-JPA-21 Número positivo ou negativo           *");
    printf("\n**************************************************************");
    printf(
"\n Um aplicativo financeiro registra lucros e prejuízos."
"\n Valores positivos representam lucro e valores negativos representam prejuízo."
"\n O programa deve receber um número e informar se ele é positivo, negativo ou zero."
	);

	float valor;

    printf("\n Digite o valor: ");
    scanf("%f", &valor);

    if (valor > 0) {
        printf("\n Lucro (valor positivo).\n");
    } else if (valor < 0) {
        printf("\n Prejuizo (valor negativo).\n");
    } else {
        printf("\n Valor igual a zero.\n");
    }

    return 0;

}
