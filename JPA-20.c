#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	
	printf("\n**************************************************************");
    printf("\n* Aluno: NELSON JUNIOR NEVES DOS SANTOS - RA 00227781        *");
    printf("\n* Programa NJNS-JPA-20 Ano bissexto                          *");
    printf("\n**************************************************************");
    printf(
	"\n Uma agenda digital precisa descobrir se determinado ano terá 366 dias."
	"\n O usuário informa um ano, e o programa deve verificar se ele é bissexto ou não."
	);
	
	int ano;

    printf("\n Digite um ano: ");
    scanf("%d", &ano);

    if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)) {
        printf("%d e um ano bissexto.\n", ano);
    } else {
        printf("%d nao e um ano bissexto.\n", ano);
    }

    return 0;
}
